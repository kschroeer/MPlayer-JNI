/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mplayer_MediaPlayerJNI */

#ifndef _Included_com_mplayer_MediaPlayerJNI
#define _Included_com_mplayer_MediaPlayerJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mplayer_MediaPlayerJNI
 * Method:    mciGetErrorString
 * Signature: (JLcom/mplayer/utils/StringPointer;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_mplayer_MediaPlayerJNI_mciGetErrorString
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     com_mplayer_MediaPlayerJNI
 * Method:    mciSendCommand
 * Signature: (IIJLcom/mplayer/structures/MCI_Generic_Parms;)J
 */
JNIEXPORT jlong JNICALL Java_com_mplayer_MediaPlayerJNI_mciSendCommand
  (JNIEnv *, jclass, jint, jint, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
