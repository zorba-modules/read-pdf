/*
 * Copyright 2006-2012 The FLWOR Foundation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class InputStreamFromCpp */



#ifndef _Included_org_zorbaxquery_modules_readPdf_InputStreamFromCppH
#define _Included_org_zorbaxquery_modules_readPdf_InputStreamFromCppH

#ifdef WIN32
#  define DLL_EXPORT __declspec(dllexport)
#else
#  define DLL_EXPORT __attribute__ ((visibility("default")))
#endif

#ifdef __cplusplus
extern "C" {
#endif
#undef InputStreamFromCpp_SKIP_BUFFER_SIZE
#define InputStreamFromCpp_SKIP_BUFFER_SIZE 2048L

/*
 * Class:     InputStreamFromCpp
 * Method:    nativeRead
 * Signature: ([BI)I
 */

DLL_EXPORT JNIEXPORT jint JNICALL
Java_org_zorbaxquery_modules_readPdf_InputStreamFromCpp_nativeRead
    (JNIEnv * env, jobject jobj, jbyteArray ba, jint jsize, jlong p);

#ifdef __cplusplus
}
#endif
#endif