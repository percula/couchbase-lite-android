/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_couchbase_lite_internal_C4Database */

#ifndef _Included_com_couchbase_lite_internal_C4Database
#define _Included_com_couchbase_lite_internal_C4Database
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    open
 * Signature: (Ljava/lang/String;ILjava/lang/String;II[B)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_open
  (JNIEnv *, jclass, jstring, jint, jstring, jint, jint, jbyteArray);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    copy
 * Signature: (Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;II[B)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_copy
  (JNIEnv *, jclass, jstring, jstring, jint, jstring, jint, jint, jbyteArray);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_delete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    deleteAtPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_deleteAtPath
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    rekey
 * Signature: (JI[B)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_rekey
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getPath
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_couchbase_lite_internal_C4Database_getPath
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getDocumentCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_getDocumentCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getLastSequence
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_getLastSequence
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    nextDocExpiration
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_nextDocExpiration
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    purgeExpiredDocs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_couchbase_lite_internal_C4Database_purgeExpiredDocs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    purgeDoc
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_purgeDoc
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getMaxRevTreeDepth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_couchbase_lite_internal_C4Database_getMaxRevTreeDepth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    setMaxRevTreeDepth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_setMaxRevTreeDepth
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getPublicUUID
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_couchbase_lite_internal_C4Database_getPublicUUID
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getPrivateUUID
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_couchbase_lite_internal_C4Database_getPrivateUUID
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    compact
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_compact
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    beginTransaction
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_beginTransaction
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    endTransaction
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_endTransaction
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    isInTransaction
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_couchbase_lite_internal_C4Database_isInTransaction
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    rawFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_rawFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    rawGet
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_rawGet
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    rawPut
 * Signature: (JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_lite_internal_C4Database_rawPut
  (JNIEnv *, jclass, jlong, jstring, jstring, jstring, jbyteArray);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getSharedFleeceEncoder
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_getSharedFleeceEncoder
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    encodeJSON
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_encodeJSON
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_couchbase_lite_internal_C4Database
 * Method:    getFLSharedKeys
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_lite_internal_C4Database_getFLSharedKeys
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
