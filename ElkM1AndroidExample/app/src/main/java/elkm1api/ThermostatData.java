/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package elkm1api;

public class ThermostatData {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected ThermostatData(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ThermostatData obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        ElkM1APIJNI.delete_ThermostatData(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setMode(ThermostatData.ThermostatMode value) {
    ElkM1APIJNI.ThermostatData_mode_set(swigCPtr, this, value.swigValue());
  }

  public ThermostatData.ThermostatMode getMode() {
    return ThermostatData.ThermostatMode.swigToEnum(ElkM1APIJNI.ThermostatData_mode_get(swigCPtr, this));
  }

  public void setHoldCurrentTemperature(boolean value) {
    ElkM1APIJNI.ThermostatData_holdCurrentTemperature_set(swigCPtr, this, value);
  }

  public boolean getHoldCurrentTemperature() {
    return ElkM1APIJNI.ThermostatData_holdCurrentTemperature_get(swigCPtr, this);
  }

  public void setFanOn(boolean value) {
    ElkM1APIJNI.ThermostatData_fanOn_set(swigCPtr, this, value);
  }

  public boolean getFanOn() {
    return ElkM1APIJNI.ThermostatData_fanOn_get(swigCPtr, this);
  }

  public void setTemperature(int value) {
    ElkM1APIJNI.ThermostatData_temperature_set(swigCPtr, this, value);
  }

  public int getTemperature() {
    return ElkM1APIJNI.ThermostatData_temperature_get(swigCPtr, this);
  }

  public void setHeatSetPoint(int value) {
    ElkM1APIJNI.ThermostatData_heatSetPoint_set(swigCPtr, this, value);
  }

  public int getHeatSetPoint() {
    return ElkM1APIJNI.ThermostatData_heatSetPoint_get(swigCPtr, this);
  }

  public void setCoolSetPoint(int value) {
    ElkM1APIJNI.ThermostatData_coolSetPoint_set(swigCPtr, this, value);
  }

  public int getCoolSetPoint() {
    return ElkM1APIJNI.ThermostatData_coolSetPoint_get(swigCPtr, this);
  }

  public void setHumidity(int value) {
    ElkM1APIJNI.ThermostatData_humidity_set(swigCPtr, this, value);
  }

  public int getHumidity() {
    return ElkM1APIJNI.ThermostatData_humidity_get(swigCPtr, this);
  }

  public ThermostatData() {
    this(ElkM1APIJNI.new_ThermostatData(), true);
  }

  public final static class ThermostatMode {
    public final static ThermostatData.ThermostatMode OFF = new ThermostatData.ThermostatMode("OFF");
    public final static ThermostatData.ThermostatMode HEAT = new ThermostatData.ThermostatMode("HEAT");
    public final static ThermostatData.ThermostatMode COOL = new ThermostatData.ThermostatMode("COOL");
    public final static ThermostatData.ThermostatMode AUTO = new ThermostatData.ThermostatMode("AUTO");
    public final static ThermostatData.ThermostatMode EMERGENCY_HEAT = new ThermostatData.ThermostatMode("EMERGENCY_HEAT");

    public final int swigValue() {
      return swigValue;
    }

    public String toString() {
      return swigName;
    }

    public static ThermostatMode swigToEnum(int swigValue) {
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (int i = 0; i < swigValues.length; i++)
        if (swigValues[i].swigValue == swigValue)
          return swigValues[i];
      throw new IllegalArgumentException("No enum " + ThermostatMode.class + " with value " + swigValue);
    }

    private ThermostatMode(String swigName) {
      this.swigName = swigName;
      this.swigValue = swigNext++;
    }

    private ThermostatMode(String swigName, int swigValue) {
      this.swigName = swigName;
      this.swigValue = swigValue;
      swigNext = swigValue+1;
    }

    private ThermostatMode(String swigName, ThermostatMode swigEnum) {
      this.swigName = swigName;
      this.swigValue = swigEnum.swigValue;
      swigNext = this.swigValue+1;
    }

    private static ThermostatMode[] swigValues = { OFF, HEAT, COOL, AUTO, EMERGENCY_HEAT };
    private static int swigNext = 0;
    private final int swigValue;
    private final String swigName;
  }

}
