/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_audio_Music */

#ifndef _Included_org_jsfml_audio_Music
#define _Included_org_jsfml_audio_Music
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_audio_Music
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Music_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    nativeOpenFromFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_Music_nativeOpenFromFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getDuration
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Music_getDuration
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    play
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_play
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    pause
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_pause
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_stop
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getChannelCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_Music_getChannelCount
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getSampleRate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_Music_getSampleRate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    nativeGetStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_Music_nativeGetStatus
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setPlayingOffset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setPlayingOffset
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getPlayingOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Music_getPlayingOffset
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setLoop
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setLoop
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    isLoop
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_Music_isLoop
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setPitch
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setPitch
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setVolume
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setVolume
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setPosition
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setPosition
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setRelativeToListener
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setRelativeToListener
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setMinDistance
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setMinDistance
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    setAttenuation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Music_setAttenuation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getPitch
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Music_getPitch
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getVolume
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Music_getVolume
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getPosition
 * Signature: ()Lorg/jsfml/system/Vector3f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_audio_Music_getPosition
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    isRelativeToListener
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_Music_isRelativeToListener
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getMinDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Music_getMinDistance
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Music
 * Method:    getAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Music_getAttenuation
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
