#include <jni.h>
#include <stdio.h>
#include "com_alex_Divide.h"
#include "src/algorithm.h"

#ifndef _Included_com_alex_Divide
#define _Included_com_alex_Divide
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_alex_Divide
 * Method:    divide
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_alex_Divide_divide
  (JNIEnv *env, jclass clazz, jlong in, jlong out){
    ParamIn* a = (ParamIn*)in;
    ParamOut* b = (ParamIn*)out;
    //此处为src/algorithm.h中的函数
    divide(a,b);
  }

#ifdef __cplusplus
}
#endif
#endif