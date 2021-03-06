/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_ElkM1API_WRAP_H_
#define SWIG_ElkM1API_WRAP_H_

class SwigDirector_BoolCallback : public BoolCallback, public Swig::Director {

public:
    SwigDirector_BoolCallback();
    virtual void run(bool arg1);
    virtual ~SwigDirector_BoolCallback();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(unsigned int);
    void swig_connect_director(SWIG_Callback0_t callbackrun);

private:
    SWIG_Callback0_t swig_callbackrun;
    void swig_init_callbacks();
};

class SwigDirector_IntCallback : public IntCallback, public Swig::Director {

public:
    SwigDirector_IntCallback();
    virtual void run(int arg1);
    virtual ~SwigDirector_IntCallback();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int);
    void swig_connect_director(SWIG_Callback0_t callbackrun);

private:
    SWIG_Callback0_t swig_callbackrun;
    void swig_init_callbacks();
};

class SwigDirector_ArmStatusVectorCallback : public ArmStatusVectorCallback, public Swig::Director {

public:
    SwigDirector_ArmStatusVectorCallback();
    virtual void run(std::vector< Elk::ArmStatus > status);
    virtual ~SwigDirector_ArmStatusVectorCallback();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackrun);

private:
    SWIG_Callback0_t swig_callbackrun;
    void swig_init_callbacks();
};

class SwigDirector_M1Connection : public Elk::M1Connection, public Swig::Director {

public:
    SwigDirector_M1Connection();
    virtual ~SwigDirector_M1Connection();
    virtual bool Connect(std::string location, int port);
    virtual void Disconnect();
    virtual void Send(std::vector< char > data);
    virtual std::vector< char > Recieve();

    typedef unsigned int (SWIGSTDCALL* SWIG_Callback0_t)(char *, int);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef void * (SWIGSTDCALL* SWIG_Callback3_t)();
    void swig_connect_director(SWIG_Callback0_t callbackConnect, SWIG_Callback1_t callbackDisconnect, SWIG_Callback2_t callbackSend, SWIG_Callback3_t callbackRecieve);

private:
    SWIG_Callback0_t swig_callbackConnect;
    SWIG_Callback1_t swig_callbackDisconnect;
    SWIG_Callback2_t swig_callbackSend;
    SWIG_Callback3_t swig_callbackRecieve;
    void swig_init_callbacks();
};

class SwigDirector_C1M1Tunnel : public Elk::C1M1Tunnel, public Swig::Director {

public:
    SwigDirector_C1M1Tunnel(Elk::M1Connection *underlying);
    virtual ~SwigDirector_C1M1Tunnel();
    virtual bool Connect(std::string location, int port);
    virtual void Disconnect();
    virtual void Send(std::vector< char > data);
    virtual std::vector< char > Recieve();

    typedef unsigned int (SWIGSTDCALL* SWIG_Callback0_t)(char *, int);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef void * (SWIGSTDCALL* SWIG_Callback3_t)();
    void swig_connect_director(SWIG_Callback0_t callbackConnect, SWIG_Callback1_t callbackDisconnect, SWIG_Callback2_t callbackSend, SWIG_Callback3_t callbackRecieve);

private:
    SWIG_Callback0_t swig_callbackConnect;
    SWIG_Callback1_t swig_callbackDisconnect;
    SWIG_Callback2_t swig_callbackSend;
    SWIG_Callback3_t swig_callbackRecieve;
    void swig_init_callbacks();
};


#endif
