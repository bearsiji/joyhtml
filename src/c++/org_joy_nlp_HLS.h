/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_joy_nlp_HLS */

#ifndef _Included_org_joy_nlp_HLS
#define _Included_org_joy_nlp_HLS
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_joy_nlp_HLS
 * Method:    HLSplitInit
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_joy_nlp_HLS_HLSplitInit
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_joy_nlp_HLS
 * Method:    HLFreeSplit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_joy_nlp_HLS_HLFreeSplit
  (JNIEnv *, jobject);

/*
 * Class:     org_joy_nlp_HLS
 * Method:    HLS_ParagraphProcess
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_joy_nlp_HLS_HLS_1ParagraphProcess
  (JNIEnv *, jobject, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
