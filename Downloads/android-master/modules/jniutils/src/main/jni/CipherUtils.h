/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ttdevs_jniutils_CipherUtils */

#ifndef _Included_com_ttdevs_jniutils_CipherUtils
#define _Included_com_ttdevs_jniutils_CipherUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ttdevs_jniutils_CipherUtils
 * Method:    base64Encode
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ttdevs_jniutils_CipherUtils_base64Encode
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_ttdevs_jniutils_CipherUtils
 * Method:    authenticate
 * Signature: (Landroid/content/Context;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ttdevs_jniutils_CipherUtils_authenticate
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ttdevs_jniutils_CipherUtils
 * Method:    createCipherKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ttdevs_jniutils_CipherUtils_createCipherKey
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
