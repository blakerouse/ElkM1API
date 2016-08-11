/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package elkm1api;

public class BoolVector {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected BoolVector(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BoolVector obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        ElkM1APIJNI.delete_BoolVector(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public BoolVector() {
    this(ElkM1APIJNI.new_BoolVector__SWIG_0(), true);
  }

  public BoolVector(long n) {
    this(ElkM1APIJNI.new_BoolVector__SWIG_1(n), true);
  }

  public long size() {
    return ElkM1APIJNI.BoolVector_size(swigCPtr, this);
  }

  public long capacity() {
    return ElkM1APIJNI.BoolVector_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    ElkM1APIJNI.BoolVector_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return ElkM1APIJNI.BoolVector_isEmpty(swigCPtr, this);
  }

  public void clear() {
    ElkM1APIJNI.BoolVector_clear(swigCPtr, this);
  }

  public void add(boolean x) {
    ElkM1APIJNI.BoolVector_add(swigCPtr, this, x);
  }

  public boolean get(int i) {
    return ElkM1APIJNI.BoolVector_get(swigCPtr, this, i);
  }

  public void set(int i, boolean val) {
    ElkM1APIJNI.BoolVector_set(swigCPtr, this, i, val);
  }

}
