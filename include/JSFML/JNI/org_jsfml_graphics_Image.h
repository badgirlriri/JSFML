/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_Image */

#ifndef _Included_org_jsfml_graphics_Image
#define _Included_org_jsfml_graphics_Image
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Image_nativeCreate__
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Image_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeCreate
 * Signature: (IILorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Image_nativeCreate__IILorg_jsfml_graphics_Color_2
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeLoadFromMemory
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Image_nativeLoadFromMemory
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeSaveToFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Image_nativeSaveToFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_Image_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_Image_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeCreateMaskFromColor
 * Signature: (Lorg/jsfml/graphics/Color;I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Image_nativeCreateMaskFromColor
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeCopy
 * Signature: (Lorg/jsfml/graphics/Image;IILorg/jsfml/graphics/IntRect;Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Image_nativeCopy
  (JNIEnv *, jobject, jobject, jint, jint, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    nativeSetPixel
 * Signature: (IILorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Image_nativeSetPixel
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    getPixel
 * Signature: (II)Lorg/jsfml/graphics/Color;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Image_getPixel
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    flipHorizontally
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Image_flipHorizontally
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Image
 * Method:    flipVertically
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Image_flipVertically
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
