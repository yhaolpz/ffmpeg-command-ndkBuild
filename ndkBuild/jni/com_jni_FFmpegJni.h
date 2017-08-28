#include <jni.h>

#ifndef _Included_com_jni_FFmpegJni
#define _Included_com_jni_FFmpegJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jni_FFmpegJni
 * Method:    run
 * Signature: (I[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_jni_FFmpegJni_run
  (JNIEnv *, jclass, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
