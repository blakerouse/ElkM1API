/*
	@author Zach Jaggi
*/

#include "ElkC1M1Tunnel.h"
#include <algorithm>

namespace Elk {
	std::map<std::string, std::string> C1M1Tunnel::jsonUglyParse(std::vector<char> json) {
		// Do ugly parsing
		std::map<std::string, std::string> uglyparse;
		auto startindex = std::find(json.begin(), json.end(), '{') != json.end() ?
						  std::find(json.begin(), json.end(), '{') + 1:
						  json.begin();
		auto endindex = json.begin();

		while (endindex != json.end()) {
			if (*endindex == '}' || *endindex == ','){
				std::string key, value, property;
				property = std::string(startindex, endindex);
				const auto& keyEnd = std::find(property.begin(), property.end(), ':');
				key = std::string(property.begin(), keyEnd);
				value = std::string(keyEnd + 1, property.end());

				static const auto& trimquotes = [] (std::string& s) {
					if (s.front() == '"') {
						s.erase(0, 1);
						s.erase(s.end() - 1);
					}
				};

				trimquotes(key);
				trimquotes(value);

				uglyparse.emplace(key, value);
				if (endindex != json.end())
					startindex = endindex + 1;
			}
			endindex++;
		}
		return uglyparse;
	}
	// Method for authenticating an existing connection using a C1M1 authentication packet.
	void C1M1Tunnel::C1M1Authenticate(std::string username, std::string password, std::string sernum) {
		// Send authentication
		std::string authPacket = "{username:\""
			+ username
			+ "\", password: \""
			+ password
			+ "\", sernum:\""
			+ sernum
			+ "\"}";
		tunnel->Send(std::vector<char>(authPacket.begin(), authPacket.end()));
	}

	std::vector<char> C1M1Tunnel::RecieveCompleteJSON() {
		std::vector<char> recv;
		do {
			const auto& app = tunnel->Recieve();
			recv.insert(recv.end(), app.begin(), app.end());
		} while (*recv.rbegin() != '}');
		return recv;
	}

	NetworkType C1M1Tunnel::Authenticate(std::string username, std::string password, std::string sernum) {
		// Authenticate with manager
		C1M1Authenticate(username, password, sernum);
		// Loop till we have a full JSON Packet
		auto authPacket = jsonUglyParse(RecieveCompleteJSON());
		if ((authPacket.find("AuthConnMask") != authPacket.end()) && (authPacket["AuthConnMask"] != "0")) {
			// We're authorized, continue connecting
			tunnel->Disconnect();
			int colonPos = authPacket.at("ProxyUrl").find(':');
			std::string url(authPacket.at("ProxyUrl").begin(), authPacket.at("ProxyUrl").begin() + colonPos);
			int port = std::stoi(std::string(authPacket.at("ProxyUrl").begin() + colonPos + 1, authPacket.at("ProxyUrl").end()));
			tunnel->Connect(url, port);
			C1M1Authenticate(username, password, sernum);
			// Get isValid
			authPacket = jsonUglyParse(RecieveCompleteJSON());
			if ((authPacket.find("IsValid") != authPacket.end()) && (authPacket["IsValid"] != "0")) {
				// Get ActualConnMask
				authPacket = jsonUglyParse(RecieveCompleteJSON());
				if (authPacket.find("ActualConnMask") != authPacket.end()) {
					return((NetworkType)(std::stoi(authPacket["ActualConnMask"])));
				}
			}
		}
		return NETWORKTYPE_NONE;
	}

	C1M1Tunnel::C1M1Tunnel(M1Connection* underlying) : tunnel(underlying) {
	}

	C1M1Tunnel::~C1M1Tunnel() {}

	bool C1M1Tunnel::Connect(std::string location, int port) {
		return tunnel->Connect(location, port);
	}
	void C1M1Tunnel::Disconnect() {
		return tunnel->Disconnect();
	}
	void C1M1Tunnel::Send(std::vector<char> data) {
		return tunnel->Send(data);
	}
	std::vector<char> C1M1Tunnel::Recieve() {
		return tunnel->Recieve();
	}
}
