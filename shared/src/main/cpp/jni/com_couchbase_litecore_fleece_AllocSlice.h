/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_couchbase_litecore_fleece_AllocSlice */

#ifndef _Included_com_couchbase_litecore_fleece_AllocSlice
#define _Included_com_couchbase_litecore_fleece_AllocSlice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_couchbase_litecore_fleece_AllocSlice
 * Method:    init
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_fleece_AllocSlice_init
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_couchbase_litecore_fleece_AllocSlice
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_fleece_AllocSlice_free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_litecore_fleece_AllocSlice
 * Method:    getBuf
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_couchbase_litecore_fleece_AllocSlice_getBuf
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_litecore_fleece_AllocSlice
 * Method:    getSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_fleece_AllocSlice_getSize
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
