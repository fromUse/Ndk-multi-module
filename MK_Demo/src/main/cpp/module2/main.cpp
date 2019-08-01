//
// Created by 陈全桂 on 2019-08-01.
//
#include <jni.h>
#include "android/log.h"

#define TAG "LOG_TAG"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__)
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__)

extern "C" JNIEXPORT jstring JNICALL
Java_com_mkbuild_test_Module2_test(
        JNIEnv *env,
        jclass clazz){
        LOGD("log test %s","module2");
    return env->NewStringUTF("module2");
}