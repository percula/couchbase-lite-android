/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_couchbase_lite_internal_C4Prediction */

#ifndef _Included_com_couchbase_lite_internal_C4Prediction
#define _Included_com_couchbase_lite_internal_C4Prediction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_couchbase_lite_internal_C4Prediction
 * Method:    registerModel
 * Signature: (Ljava/lang/String;Lcom/couchbase/lite/internal/C4PredictiveModel;)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Prediction_registerModel
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_couchbase_lite_internal_C4Prediction
 * Method:    unregisterModel
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Prediction_unregisterModel
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif