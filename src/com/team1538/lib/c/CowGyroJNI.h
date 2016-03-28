/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_team1538_lib_CowGyro */

#ifndef _Included_com_team1538_lib_CowGyro
#define _Included_com_team1538_lib_CowGyro
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_team1538_lib_CowGyro
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_team1538_lib_CowGyro_init
  (JNIEnv *, jclass);

/*
 * Class:     com_team1538_lib_CowGyro
 * Method:    GetAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_team1538_lib_CowGyro_GetAngle
  (JNIEnv *, jclass);

/*
 * Class:     com_team1538_lib_CowGyro
 * Method:    GetRate
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_team1538_lib_CowGyro_GetRate
  (JNIEnv *, jclass);

/*
 * Class:     com_team1538_lib_CowGyro
 * Method:    BeginCalibration
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_team1538_lib_CowGyro_BeginCalibration
  (JNIEnv *, jclass);

/*
 * Class:     com_team1538_lib_CowGyro
 * Method:    FinalizeCalibration
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_team1538_lib_CowGyro_FinalizeCalibration
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif