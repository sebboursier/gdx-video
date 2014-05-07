/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_badlogic_gdx_video_VideoDecoder */

#ifndef _Included_com_badlogic_gdx_video_VideoDecoder
#define _Included_com_badlogic_gdx_video_VideoDecoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_badlogic_gdx_video_VideoDecoder
 * Method:    init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_video_VideoDecoder_init
  (JNIEnv *, jobject);

/*
 * Class:     com_badlogic_gdx_video_VideoDecoder
 * Method:    loadStream
 * Signature: (Ljava/lang/Object;Ljava/lang/String;)Lcom/badlogic/gdx/video/VideoDecoder/VideoDecoderBuffers;
 */
JNIEXPORT jobject JNICALL Java_com_badlogic_gdx_video_VideoDecoder_loadStream
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_badlogic_gdx_video_VideoDecoder
 * Method:    nextVideoFrame
 * Signature: ()Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_badlogic_gdx_video_VideoDecoder_nextVideoFrame
  (JNIEnv *, jobject);

/*
 * Class:     com_badlogic_gdx_video_VideoDecoder
 * Method:    updateAudioBuffer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_video_VideoDecoder_updateAudioBuffer
  (JNIEnv *, jobject);

/*
 * Class:     com_badlogic_gdx_video_VideoDecoder
 * Method:    getCurrentFrameTimestamp
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_badlogic_gdx_video_VideoDecoder_getCurrentFrameTimestamp
  (JNIEnv *, jobject);

/*
 * Class:     com_badlogic_gdx_video_VideoDecoder
 * Method:    disposeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_video_VideoDecoder_disposeNative
  (JNIEnv *, jobject);

/*
 * Class:     com_badlogic_gdx_video_VideoDecoder
 * Method:    isBuffered
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_video_VideoDecoder_isBuffered
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_badlogic_gdx_video_VideoDecoder_VideoDecoderBuffers */

#ifndef _Included_com_badlogic_gdx_video_VideoDecoder_VideoDecoderBuffers
#define _Included_com_badlogic_gdx_video_VideoDecoder_VideoDecoderBuffers
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif