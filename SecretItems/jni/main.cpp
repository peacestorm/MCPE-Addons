#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <mcpe.h>
#include <Substrate.h>

static std::string (*getGameVersionString_real)();

static std::string getGameVersionString_hook() {
	return "MCPE v0.11.0 + SecretItems v1.0";
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	void* getGameVersionString = dlsym(RTLD_DEFAULT, "_ZN6Common20getGameVersionStringEv");

	MSHookFunction(getGameVersionString, (void*)&getGameVersionString_hook, (void**)&getGameVersionString_real);
	return JNI_VERSION_1_2;
}