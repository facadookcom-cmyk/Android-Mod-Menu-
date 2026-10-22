Downloading https://services.gradle.org/distributions/gradle-8.12.1-bin.zip
.............10%.............20%.............30%.............40%.............50%.............60%.............70%.............80%.............90%.............100%

Welcome to Gradle 8.12.1!

Here are the highlights of this release:
 - Enhanced error and warning reporting with the Problems API
 - File-system watching support on Alpine Linux
 - Build and test Swift 6 libraries and apps

For more details see https://docs.gradle.org/8.12.1/release-notes.html

Starting a Gradle Daemon (subsequent builds will be faster)

> Configure project :app
Checking the license for package NDK (Side by side) 26.1.10909125 in /usr/local/share/android-sdk/licenses
License for package NDK (Side by side) 26.1.10909125 accepted.
Preparing "Install NDK (Side by side) 26.1.10909125 v.26.1.10909125".
"Install NDK (Side by side) 26.1.10909125 v.26.1.10909125" ready.
Installing NDK (Side by side) 26.1.10909125 in /usr/local/share/android-sdk/ndk/26.1.10909125
"Install NDK (Side by side) 26.1.10909125 v.26.1.10909125" complete.
"Install NDK (Side by side) 26.1.10909125 v.26.1.10909125" finished.
Checking the license for package Android SDK Build-Tools 34 in /usr/local/share/android-sdk/licenses
License for package Android SDK Build-Tools 34 accepted.
Preparing "Install Android SDK Build-Tools 34 v.34.0.0".
"Install Android SDK Build-Tools 34 v.34.0.0" ready.
Installing Android SDK Build-Tools 34 in /usr/local/share/android-sdk/build-tools/34.0.0
"Install Android SDK Build-Tools 34 v.34.0.0" complete.
"Install Android SDK Build-Tools 34 v.34.0.0" finished.

> Task :app:preBuild UP-TO-DATE
> Task :app:preDebugBuild UP-TO-DATE
> Task :app:mergeDebugNativeDebugMetadata NO-SOURCE
> Task :app:generateDebugResValues
> Task :app:checkDebugAarMetadata
> Task :app:javaPreCompileDebug
> Task :app:mapDebugSourceSetPaths
> Task :app:generateDebugResources
> Task :app:createDebugCompatibleScreenManifests
> Task :app:extractDeepLinksDebug
> Task :app:mergeDebugResources
> Task :app:processDebugMainManifest
> Task :app:processDebugManifest
> Task :app:mergeDebugShaders
> Task :app:compileDebugShaders NO-SOURCE
> Task :app:generateDebugAssets UP-TO-DATE
> Task :app:mergeDebugAssets
> Task :app:compressDebugAssets
> Task :app:processDebugJavaRes NO-SOURCE
> Task :app:processDebugManifestForPackage
> Task :app:mergeDebugJavaResource
> Task :app:checkDebugDuplicateClasses
> Task :app:processDebugResources
> Task :app:desugarDebugFileDependencies

> Task :app:compileDebugJavaWithJavac
Note: Some input files use or override a deprecated API.
Note: Recompile with -Xlint:deprecation for details.
Note: Some input files use unchecked or unsafe operations.
Note: Recompile with -Xlint:unchecked for details.

> Task :app:mergeLibDexDebug
> Task :app:mergeExtDexDebug
> Task :app:dexBuilderDebug
> Task :app:mergeProjectDexDebug
> Task :app:configureNdkBuildDebug[arm64-v8a]

> Task :app:buildNdkBuildDebug[arm64-v8a] FAILED
C/C++: ld.lld: error: undefined symbol: Changes(_JNIEnv*, _jclass*, _jobject*, int, _jstring*, int, long, unsigned char, _jstring*)
C/C++: >>> referenced by Setup.cpp:51 (src/main/jni/Menu/Setup.cpp:51)
C/C++: >>>               /Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/obj/local/arm64-v8a/objs/MyLibName/Menu/Setup.o:(RegisterPreferences(_JNIEnv*))
C/C++: >>> referenced by Setup.cpp:51 (src/main/jni/Menu/Setup.cpp:51)
C/C++: >>>               /Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/obj/local/arm64-v8a/objs/MyLibName/Menu/Setup.o:(RegisterPreferences(_JNIEnv*))
C/C++: clang++: error: linker command failed with exit code 1 (use -v to see invocation)
C/C++: make: *** [/usr/local/share/android-sdk/ndk/26.1.10909125/build/core/build-binary.mk:654: /Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/obj/local/arm64-v8a/libMyLibName.so] Error 1

[Incubating] Problems report is available at: file:///Users/builder/clone/build/reports/problems/problems-report.html

FAILURE: Build failed with an exception.

* What went wrong:
Execution failed for task ':app:buildNdkBuildDebug[arm64-v8a]'.
> com.android.ide.common.process.ProcessException: [arm64-v8a] Compile++      : MyLibName <= Main.cpp
  [arm64-v8a] Compile++      : MyLibName <= Jni.cpp
  [arm64-v8a] Compile++      : MyLibName <= Menu.cpp
  [arm64-v8a] Compile++      : MyLibName <= Setup.cpp
  [arm64-v8a] Compile++      : MyLibName <= Utils.cpp
  [arm64-v8a] Compile++      : MyLibName <= KittyArm64.cpp
  [arm64-v8a] Compile++      : MyLibName <= KittyScanner.cpp
  [arm64-v8a] Compile++      : MyLibName <= KittyMemory.cpp
  [arm64-v8a] Compile++      : MyLibName <= KittyUtils.cpp
  [arm64-v8a] Compile++      : MyLibName <= MemoryPatch.cpp
  [arm64-v8a] Compile++      : MyLibName <= MemoryBackup.cpp
  [arm64-v8a] SharedLibrary  : libMyLibName.so
  
  C++ build system [build] failed while executing:
      /usr/local/share/android-sdk/ndk/26.1.10909125/ndk-build \
        NDK_PROJECT_PATH=null \
        APP_BUILD_SCRIPT=/Users/builder/clone/app/src/main/jni/Android.mk \
        NDK_APPLICATION_MK=/Users/builder/clone/app/src/main/jni/Application.mk \
        APP_ABI=arm64-v8a \
        NDK_ALL_ABIS=arm64-v8a \
        NDK_DEBUG=1 \
        APP_PLATFORM=android-21 \
        NDK_OUT=/Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/obj \
        NDK_LIBS_OUT=/Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/lib \
        MyLibName
    from /Users/builder/clone/app
  ld.lld: error: undefined symbol: Changes(_JNIEnv*, _jclass*, _jobject*, int, _jstring*, int, long, unsigned char, _jstring*)
  >>> referenced by Setup.cpp:51 (src/main/jni/Menu/Setup.cpp:51)
  >>>               /Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/obj/local/arm64-v8a/objs/MyLibName/Menu/Setup.o:(RegisterPreferences(_JNIEnv*))
  >>> referenced by Setup.cpp:51 (src/main/jni/Menu/Setup.cpp:51)
  >>>               /Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/obj/local/arm64-v8a/objs/MyLibName/Menu/Setup.o:(RegisterPreferences(_JNIEnv*))
  clang++: error: linker command failed with exit code 1 (use -v to see invocation)
  make: *** [/usr/local/share/android-sdk/ndk/26.1.10909125/build/core/build-binary.mk:654: /Users/builder/clone/app/build/intermediates/cxx/Debug/4a5f23a2/obj/local/arm64-v8a/libMyLibName.so] Error 1

* Try:
> Run with --stacktrace option to get the stack trace.
> Run with --info or --debug option to get more log output.
> Run with --scan to get full insights.
> Get more help at https://help.gradle.org.

Deprecated Gradle features were used in this build, making it incompatible with Gradle 9.0.

You can use '--warning-mode all' to show the individual deprecation warnings and determine if they come from your own scripts or plugins.

For more on this, please refer to https://docs.gradle.org/8.12.1/userguide/command_line_interface.html#sec:command_line_warnings in the Gradle documentation.

BUILD FAILED in 1m 17s
25 actionable tasks: 25 executed


Build failed :|
Step 3 script `Build APK` exited with status code 1
