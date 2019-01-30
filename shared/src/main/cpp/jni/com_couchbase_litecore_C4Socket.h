/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_couchbase_litecore_C4Socket */

#ifndef _Included_com_couchbase_litecore_C4Socket
#define _Included_com_couchbase_litecore_C4Socket
#ifdef __cplusplus
extern "C" {
#endif
#undef com_couchbase_litecore_C4Socket_kC4WebSocketClientFraming
#define com_couchbase_litecore_C4Socket_kC4WebSocketClientFraming 0L
#undef com_couchbase_litecore_C4Socket_kC4NoFraming
#define com_couchbase_litecore_C4Socket_kC4NoFraming 1L
#undef com_couchbase_litecore_C4Socket_kC4WebSocketServerFraming
#define com_couchbase_litecore_C4Socket_kC4WebSocketServerFraming 2L
/*
 * Class:     com_couchbase_litecore_C4Socket
 * Method:    gotHTTPResponse
 * Signature: (JI[B)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4Socket_gotHTTPResponse
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     com_couchbase_litecore_C4Socket
 * Method:    opened
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4Socket_opened
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_litecore_C4Socket
 * Method:    closed
 * Signature: (JIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4Socket_closed
  (JNIEnv *, jclass, jlong, jint, jint, jstring);

/*
 * Class:     com_couchbase_litecore_C4Socket
 * Method:    closeRequested
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4Socket_closeRequested
  (JNIEnv *, jclass, jlong, jint, jstring);

/*
 * Class:     com_couchbase_litecore_C4Socket
 * Method:    completedWrite
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4Socket_completedWrite
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_couchbase_litecore_C4Socket
 * Method:    received
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4Socket_received
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_couchbase_litecore_C4Socket
 * Method:    fromNative
 * Signature: (Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4Socket_fromNative
  (JNIEnv *, jclass, jobject, jstring, jstring, jint, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
