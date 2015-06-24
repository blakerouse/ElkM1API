/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
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

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int);
    void swig_connect_director(SWIG_Callback0_t callbackrun);

private:
    SWIG_Callback0_t swig_callbackrun;
    void swig_init_callbacks();
};

class SwigDirector_TempDeviceCallback : public TempDeviceCallback, public Swig::Director {

public:
    SwigDirector_TempDeviceCallback();
    virtual void run(Elk::TemperatureDevice arg1, int arg2);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, int);
    void swig_connect_director(SWIG_Callback0_t callbackrun);

private:
    SWIG_Callback0_t swig_callbackrun;
    void swig_init_callbacks();
};

class SwigDirector_M1Connection : public Elk::M1Connection, public Swig::Director {

public:
    SwigDirector_M1Connection();
    virtual bool Connect(std::string location);
    virtual void Disconnect();
    virtual void Send(std::vector< char > data);
    virtual std::vector< char > Recieve();

    typedef unsigned int (SWIGSTDCALL* SWIG_Callback0_t)(char *);
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
