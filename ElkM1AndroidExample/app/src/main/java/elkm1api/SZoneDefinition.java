/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package elkm1api;

public class SZoneDefinition {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected SZoneDefinition(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SZoneDefinition obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        ElkM1APIJNI.delete_SZoneDefinition(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setZd(ZoneDefinition value) {
    ElkM1APIJNI.SZoneDefinition_zd_set(swigCPtr, this, value.swigValue());
  }

  public ZoneDefinition getZd() {
    return ZoneDefinition.swigToEnum(ElkM1APIJNI.SZoneDefinition_zd_get(swigCPtr, this));
  }

  public SZoneDefinition() {
    this(ElkM1APIJNI.new_SZoneDefinition(), true);
  }

}
