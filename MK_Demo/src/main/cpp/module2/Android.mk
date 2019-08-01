LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_CFLAGS += -pie -fPIE
LOCAL_LDFLAGS += -pie -fPIE -llog

#模块名称，最终生成libmodule2.so
LOCAL_MODULE := module2

#模块编译源码
LOCAL_SRC_FILES := main.cpp

#依赖的系统库
LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib -lm -lz

#编译类型
#include $(BUILD_SHARED_LIBRARY) 动态库
#include $(BUILD_STATIC_LIBRARY) 静态库
#include $(BUILD_EXECUTABLE) 可执行文件
include $(BUILD_SHARED_LIBRARY)
