/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_couchbase_litecore_C4BlobStore */

#ifndef _Included_com_couchbase_litecore_C4BlobStore
#define _Included_com_couchbase_litecore_C4BlobStore
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    getBlobStore
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4BlobStore_getBlobStore
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    openStore
 * Signature: (Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4BlobStore_openStore
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    deleteStore
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4BlobStore_deleteStore
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    freeStore
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4BlobStore_freeStore
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    getSize
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4BlobStore_getSize
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    getContents
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4BlobStore_getContents
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    getFilePath
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_couchbase_litecore_C4BlobStore_getFilePath
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    create
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4BlobStore_create
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    delete
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_couchbase_litecore_C4BlobStore_delete
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    openReadStream
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4BlobStore_openReadStream
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_couchbase_litecore_C4BlobStore
 * Method:    openWriteStream
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_couchbase_litecore_C4BlobStore_openWriteStream
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
