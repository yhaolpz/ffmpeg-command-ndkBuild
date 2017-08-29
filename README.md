# ffmpeg---command---ndkBuild
Android 以命令方式调用 FFmpeg 时所需的修改好的待编译文件

详细：http://blog.csdn.net/yhaolpz/article/details/77146156

# 注意：

1.将 Android.mk 中的 INCLUDE_PATH 、FFMPEG_LIB_PATH 修改为你自己编译好的 FFmpeg 的对应路径

2.本目录中的 com_jni_FFmpegJni.c 已确定 Android 工程中的 native 方法、类名以及包名：
  
      方法：  public static native int run(String[] commands);
      类名：  FFmpegJni
      包名：  package com.jni;

   若不一致，则需自己生成底层接口文件，替换掉本目录中的 com_jni_FFmpegJni.c 和 com_jni_FFmpegJni.h 文件
   
   
   具体使用方法参见博客。

