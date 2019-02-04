/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_couchbase_lite_internal_C4DatabaseObserver */

#ifndef _Included_com_couchbase_lite_internal_C4DatabaseObserver
#define _Included_com_couchbase_lite_internal_C4DatabaseObserver
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_couchbase_lite_internal_C4DatabaseObserver
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4DatabaseObserver_create
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4DatabaseObserver
 * Method:    getChanges
 * Signature: (JI)[Lcom/couchbase/lite/internal/C4DatabaseChange;
 */
JNIEXPORT jobjectArray JNICALL Java_com_couchbase_lite_internal_C4DatabaseObserver_getChanges
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_couchbase_lite_internal_C4DatabaseObserver
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4DatabaseObserver_free
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif