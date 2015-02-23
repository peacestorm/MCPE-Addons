#include <jni.h>

void wikiMainScreen();

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
	wikiMainScreen();

	return JNI_VERSION_1_2;
}