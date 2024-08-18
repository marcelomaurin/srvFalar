

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 00:14:07 2038
 */
/* Compiler settings for C:\Program Files (x86)\Microsoft SDKs\Speech\v11.0\Include\sapi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __sapi_h_h__
#define __sapi_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ISpNotifySource_FWD_DEFINED__
#define __ISpNotifySource_FWD_DEFINED__
typedef interface ISpNotifySource ISpNotifySource;

#endif 	/* __ISpNotifySource_FWD_DEFINED__ */


#ifndef __ISpNotifySink_FWD_DEFINED__
#define __ISpNotifySink_FWD_DEFINED__
typedef interface ISpNotifySink ISpNotifySink;

#endif 	/* __ISpNotifySink_FWD_DEFINED__ */


#ifndef __ISpNotifyTranslator_FWD_DEFINED__
#define __ISpNotifyTranslator_FWD_DEFINED__
typedef interface ISpNotifyTranslator ISpNotifyTranslator;

#endif 	/* __ISpNotifyTranslator_FWD_DEFINED__ */


#ifndef __ISpDataKey_FWD_DEFINED__
#define __ISpDataKey_FWD_DEFINED__
typedef interface ISpDataKey ISpDataKey;

#endif 	/* __ISpDataKey_FWD_DEFINED__ */


#ifndef __ISpRegDataKey_FWD_DEFINED__
#define __ISpRegDataKey_FWD_DEFINED__
typedef interface ISpRegDataKey ISpRegDataKey;

#endif 	/* __ISpRegDataKey_FWD_DEFINED__ */


#ifndef __ISpObjectTokenCategory_FWD_DEFINED__
#define __ISpObjectTokenCategory_FWD_DEFINED__
typedef interface ISpObjectTokenCategory ISpObjectTokenCategory;

#endif 	/* __ISpObjectTokenCategory_FWD_DEFINED__ */


#ifndef __ISpObjectToken_FWD_DEFINED__
#define __ISpObjectToken_FWD_DEFINED__
typedef interface ISpObjectToken ISpObjectToken;

#endif 	/* __ISpObjectToken_FWD_DEFINED__ */


#ifndef __ISpObjectTokenInit_FWD_DEFINED__
#define __ISpObjectTokenInit_FWD_DEFINED__
typedef interface ISpObjectTokenInit ISpObjectTokenInit;

#endif 	/* __ISpObjectTokenInit_FWD_DEFINED__ */


#ifndef __IEnumSpObjectTokens_FWD_DEFINED__
#define __IEnumSpObjectTokens_FWD_DEFINED__
typedef interface IEnumSpObjectTokens IEnumSpObjectTokens;

#endif 	/* __IEnumSpObjectTokens_FWD_DEFINED__ */


#ifndef __ISpObjectWithToken_FWD_DEFINED__
#define __ISpObjectWithToken_FWD_DEFINED__
typedef interface ISpObjectWithToken ISpObjectWithToken;

#endif 	/* __ISpObjectWithToken_FWD_DEFINED__ */


#ifndef __ISpResourceManager_FWD_DEFINED__
#define __ISpResourceManager_FWD_DEFINED__
typedef interface ISpResourceManager ISpResourceManager;

#endif 	/* __ISpResourceManager_FWD_DEFINED__ */


#ifndef __ISpEventSource_FWD_DEFINED__
#define __ISpEventSource_FWD_DEFINED__
typedef interface ISpEventSource ISpEventSource;

#endif 	/* __ISpEventSource_FWD_DEFINED__ */


#ifndef __ISpEventSource2_FWD_DEFINED__
#define __ISpEventSource2_FWD_DEFINED__
typedef interface ISpEventSource2 ISpEventSource2;

#endif 	/* __ISpEventSource2_FWD_DEFINED__ */


#ifndef __ISpEventSink_FWD_DEFINED__
#define __ISpEventSink_FWD_DEFINED__
typedef interface ISpEventSink ISpEventSink;

#endif 	/* __ISpEventSink_FWD_DEFINED__ */


#ifndef __ISpStreamFormat_FWD_DEFINED__
#define __ISpStreamFormat_FWD_DEFINED__
typedef interface ISpStreamFormat ISpStreamFormat;

#endif 	/* __ISpStreamFormat_FWD_DEFINED__ */


#ifndef __ISpStream_FWD_DEFINED__
#define __ISpStream_FWD_DEFINED__
typedef interface ISpStream ISpStream;

#endif 	/* __ISpStream_FWD_DEFINED__ */


#ifndef __ISpStreamFormatConverter_FWD_DEFINED__
#define __ISpStreamFormatConverter_FWD_DEFINED__
typedef interface ISpStreamFormatConverter ISpStreamFormatConverter;

#endif 	/* __ISpStreamFormatConverter_FWD_DEFINED__ */


#ifndef __ISpAudio_FWD_DEFINED__
#define __ISpAudio_FWD_DEFINED__
typedef interface ISpAudio ISpAudio;

#endif 	/* __ISpAudio_FWD_DEFINED__ */


#ifndef __ISpMMSysAudio_FWD_DEFINED__
#define __ISpMMSysAudio_FWD_DEFINED__
typedef interface ISpMMSysAudio ISpMMSysAudio;

#endif 	/* __ISpMMSysAudio_FWD_DEFINED__ */


#ifndef __ISpTranscript_FWD_DEFINED__
#define __ISpTranscript_FWD_DEFINED__
typedef interface ISpTranscript ISpTranscript;

#endif 	/* __ISpTranscript_FWD_DEFINED__ */


#ifndef __ISpRIFFChunk_FWD_DEFINED__
#define __ISpRIFFChunk_FWD_DEFINED__
typedef interface ISpRIFFChunk ISpRIFFChunk;

#endif 	/* __ISpRIFFChunk_FWD_DEFINED__ */


#ifndef __ISpLexicon_FWD_DEFINED__
#define __ISpLexicon_FWD_DEFINED__
typedef interface ISpLexicon ISpLexicon;

#endif 	/* __ISpLexicon_FWD_DEFINED__ */


#ifndef __ISpContainerLexicon_FWD_DEFINED__
#define __ISpContainerLexicon_FWD_DEFINED__
typedef interface ISpContainerLexicon ISpContainerLexicon;

#endif 	/* __ISpContainerLexicon_FWD_DEFINED__ */


#ifndef __ISpLexicon2_FWD_DEFINED__
#define __ISpLexicon2_FWD_DEFINED__
typedef interface ISpLexicon2 ISpLexicon2;

#endif 	/* __ISpLexicon2_FWD_DEFINED__ */


#ifndef __ISpShortcut_FWD_DEFINED__
#define __ISpShortcut_FWD_DEFINED__
typedef interface ISpShortcut ISpShortcut;

#endif 	/* __ISpShortcut_FWD_DEFINED__ */


#ifndef __ISpPhoneConverter_FWD_DEFINED__
#define __ISpPhoneConverter_FWD_DEFINED__
typedef interface ISpPhoneConverter ISpPhoneConverter;

#endif 	/* __ISpPhoneConverter_FWD_DEFINED__ */


#ifndef __ISpPhoneticAlphabetConverter_FWD_DEFINED__
#define __ISpPhoneticAlphabetConverter_FWD_DEFINED__
typedef interface ISpPhoneticAlphabetConverter ISpPhoneticAlphabetConverter;

#endif 	/* __ISpPhoneticAlphabetConverter_FWD_DEFINED__ */


#ifndef __ISpPhoneticAlphabetSelection_FWD_DEFINED__
#define __ISpPhoneticAlphabetSelection_FWD_DEFINED__
typedef interface ISpPhoneticAlphabetSelection ISpPhoneticAlphabetSelection;

#endif 	/* __ISpPhoneticAlphabetSelection_FWD_DEFINED__ */


#ifndef __ISpPromptVoice_FWD_DEFINED__
#define __ISpPromptVoice_FWD_DEFINED__
typedef interface ISpPromptVoice ISpPromptVoice;

#endif 	/* __ISpPromptVoice_FWD_DEFINED__ */


#ifndef __ISpVoice_FWD_DEFINED__
#define __ISpVoice_FWD_DEFINED__
typedef interface ISpVoice ISpVoice;

#endif 	/* __ISpVoice_FWD_DEFINED__ */


#ifndef __ISpPhrase_FWD_DEFINED__
#define __ISpPhrase_FWD_DEFINED__
typedef interface ISpPhrase ISpPhrase;

#endif 	/* __ISpPhrase_FWD_DEFINED__ */


#ifndef __ISpPhraseAlt_FWD_DEFINED__
#define __ISpPhraseAlt_FWD_DEFINED__
typedef interface ISpPhraseAlt ISpPhraseAlt;

#endif 	/* __ISpPhraseAlt_FWD_DEFINED__ */


#ifndef __ISpPhrase2_FWD_DEFINED__
#define __ISpPhrase2_FWD_DEFINED__
typedef interface ISpPhrase2 ISpPhrase2;

#endif 	/* __ISpPhrase2_FWD_DEFINED__ */


#ifndef __ISpRecoResult_FWD_DEFINED__
#define __ISpRecoResult_FWD_DEFINED__
typedef interface ISpRecoResult ISpRecoResult;

#endif 	/* __ISpRecoResult_FWD_DEFINED__ */


#ifndef __ISpRecoResult2_FWD_DEFINED__
#define __ISpRecoResult2_FWD_DEFINED__
typedef interface ISpRecoResult2 ISpRecoResult2;

#endif 	/* __ISpRecoResult2_FWD_DEFINED__ */


#ifndef __ISpXMLRecoResult_FWD_DEFINED__
#define __ISpXMLRecoResult_FWD_DEFINED__
typedef interface ISpXMLRecoResult ISpXMLRecoResult;

#endif 	/* __ISpXMLRecoResult_FWD_DEFINED__ */


#ifndef __ISpGrammarBuilder_FWD_DEFINED__
#define __ISpGrammarBuilder_FWD_DEFINED__
typedef interface ISpGrammarBuilder ISpGrammarBuilder;

#endif 	/* __ISpGrammarBuilder_FWD_DEFINED__ */


#ifndef __ISpRecoGrammar_FWD_DEFINED__
#define __ISpRecoGrammar_FWD_DEFINED__
typedef interface ISpRecoGrammar ISpRecoGrammar;

#endif 	/* __ISpRecoGrammar_FWD_DEFINED__ */


#ifndef __ISpGrammarBuilder2_FWD_DEFINED__
#define __ISpGrammarBuilder2_FWD_DEFINED__
typedef interface ISpGrammarBuilder2 ISpGrammarBuilder2;

#endif 	/* __ISpGrammarBuilder2_FWD_DEFINED__ */


#ifndef __ISpGrammarBuilderLexicon_FWD_DEFINED__
#define __ISpGrammarBuilderLexicon_FWD_DEFINED__
typedef interface ISpGrammarBuilderLexicon ISpGrammarBuilderLexicon;

#endif 	/* __ISpGrammarBuilderLexicon_FWD_DEFINED__ */


#ifndef __ISpRecoGrammar2_FWD_DEFINED__
#define __ISpRecoGrammar2_FWD_DEFINED__
typedef interface ISpRecoGrammar2 ISpRecoGrammar2;

#endif 	/* __ISpRecoGrammar2_FWD_DEFINED__ */


#ifndef __ISpeechResourceLoader_FWD_DEFINED__
#define __ISpeechResourceLoader_FWD_DEFINED__
typedef interface ISpeechResourceLoader ISpeechResourceLoader;

#endif 	/* __ISpeechResourceLoader_FWD_DEFINED__ */


#ifndef __ISpRecoContext_FWD_DEFINED__
#define __ISpRecoContext_FWD_DEFINED__
typedef interface ISpRecoContext ISpRecoContext;

#endif 	/* __ISpRecoContext_FWD_DEFINED__ */


#ifndef __ISpRecoContext2_FWD_DEFINED__
#define __ISpRecoContext2_FWD_DEFINED__
typedef interface ISpRecoContext2 ISpRecoContext2;

#endif 	/* __ISpRecoContext2_FWD_DEFINED__ */


#ifndef __ISpProperties_FWD_DEFINED__
#define __ISpProperties_FWD_DEFINED__
typedef interface ISpProperties ISpProperties;

#endif 	/* __ISpProperties_FWD_DEFINED__ */


#ifndef __ISpRecognizer_FWD_DEFINED__
#define __ISpRecognizer_FWD_DEFINED__
typedef interface ISpRecognizer ISpRecognizer;

#endif 	/* __ISpRecognizer_FWD_DEFINED__ */


#ifndef __ISpSerializeState_FWD_DEFINED__
#define __ISpSerializeState_FWD_DEFINED__
typedef interface ISpSerializeState ISpSerializeState;

#endif 	/* __ISpSerializeState_FWD_DEFINED__ */


#ifndef __ISpRecognizer2_FWD_DEFINED__
#define __ISpRecognizer2_FWD_DEFINED__
typedef interface ISpRecognizer2 ISpRecognizer2;

#endif 	/* __ISpRecognizer2_FWD_DEFINED__ */


#ifndef __ISpRecoCategory_FWD_DEFINED__
#define __ISpRecoCategory_FWD_DEFINED__
typedef interface ISpRecoCategory ISpRecoCategory;

#endif 	/* __ISpRecoCategory_FWD_DEFINED__ */


#ifndef __ISpRecognizer3_FWD_DEFINED__
#define __ISpRecognizer3_FWD_DEFINED__
typedef interface ISpRecognizer3 ISpRecognizer3;

#endif 	/* __ISpRecognizer3_FWD_DEFINED__ */


#ifndef __ISpEnginePronunciation_FWD_DEFINED__
#define __ISpEnginePronunciation_FWD_DEFINED__
typedef interface ISpEnginePronunciation ISpEnginePronunciation;

#endif 	/* __ISpEnginePronunciation_FWD_DEFINED__ */


#ifndef __SpNotifyTranslator_FWD_DEFINED__
#define __SpNotifyTranslator_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpNotifyTranslator SpNotifyTranslator;
#else
typedef struct SpNotifyTranslator SpNotifyTranslator;
#endif /* __cplusplus */

#endif 	/* __SpNotifyTranslator_FWD_DEFINED__ */


#ifndef __SpObjectTokenCategory_FWD_DEFINED__
#define __SpObjectTokenCategory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpObjectTokenCategory SpObjectTokenCategory;
#else
typedef struct SpObjectTokenCategory SpObjectTokenCategory;
#endif /* __cplusplus */

#endif 	/* __SpObjectTokenCategory_FWD_DEFINED__ */


#ifndef __SpObjectToken_FWD_DEFINED__
#define __SpObjectToken_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpObjectToken SpObjectToken;
#else
typedef struct SpObjectToken SpObjectToken;
#endif /* __cplusplus */

#endif 	/* __SpObjectToken_FWD_DEFINED__ */


#ifndef __SpResourceManager_FWD_DEFINED__
#define __SpResourceManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpResourceManager SpResourceManager;
#else
typedef struct SpResourceManager SpResourceManager;
#endif /* __cplusplus */

#endif 	/* __SpResourceManager_FWD_DEFINED__ */


#ifndef __SpStreamFormatConverter_FWD_DEFINED__
#define __SpStreamFormatConverter_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpStreamFormatConverter SpStreamFormatConverter;
#else
typedef struct SpStreamFormatConverter SpStreamFormatConverter;
#endif /* __cplusplus */

#endif 	/* __SpStreamFormatConverter_FWD_DEFINED__ */


#ifndef __SpMMAudioEnum_FWD_DEFINED__
#define __SpMMAudioEnum_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpMMAudioEnum SpMMAudioEnum;
#else
typedef struct SpMMAudioEnum SpMMAudioEnum;
#endif /* __cplusplus */

#endif 	/* __SpMMAudioEnum_FWD_DEFINED__ */


#ifndef __SpMMAudioIn_FWD_DEFINED__
#define __SpMMAudioIn_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpMMAudioIn SpMMAudioIn;
#else
typedef struct SpMMAudioIn SpMMAudioIn;
#endif /* __cplusplus */

#endif 	/* __SpMMAudioIn_FWD_DEFINED__ */


#ifndef __SpMMAudioOut_FWD_DEFINED__
#define __SpMMAudioOut_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpMMAudioOut SpMMAudioOut;
#else
typedef struct SpMMAudioOut SpMMAudioOut;
#endif /* __cplusplus */

#endif 	/* __SpMMAudioOut_FWD_DEFINED__ */


#ifndef __SpStream_FWD_DEFINED__
#define __SpStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpStream SpStream;
#else
typedef struct SpStream SpStream;
#endif /* __cplusplus */

#endif 	/* __SpStream_FWD_DEFINED__ */


#ifndef __SpVoice_FWD_DEFINED__
#define __SpVoice_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpVoice SpVoice;
#else
typedef struct SpVoice SpVoice;
#endif /* __cplusplus */

#endif 	/* __SpVoice_FWD_DEFINED__ */


#ifndef __SpSharedRecoContext_FWD_DEFINED__
#define __SpSharedRecoContext_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpSharedRecoContext SpSharedRecoContext;
#else
typedef struct SpSharedRecoContext SpSharedRecoContext;
#endif /* __cplusplus */

#endif 	/* __SpSharedRecoContext_FWD_DEFINED__ */


#ifndef __SpInprocRecognizer_FWD_DEFINED__
#define __SpInprocRecognizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpInprocRecognizer SpInprocRecognizer;
#else
typedef struct SpInprocRecognizer SpInprocRecognizer;
#endif /* __cplusplus */

#endif 	/* __SpInprocRecognizer_FWD_DEFINED__ */


#ifndef __SpSharedRecognizer_FWD_DEFINED__
#define __SpSharedRecognizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpSharedRecognizer SpSharedRecognizer;
#else
typedef struct SpSharedRecognizer SpSharedRecognizer;
#endif /* __cplusplus */

#endif 	/* __SpSharedRecognizer_FWD_DEFINED__ */


#ifndef __SpLexicon_FWD_DEFINED__
#define __SpLexicon_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpLexicon SpLexicon;
#else
typedef struct SpLexicon SpLexicon;
#endif /* __cplusplus */

#endif 	/* __SpLexicon_FWD_DEFINED__ */


#ifndef __SpUnCompressedLexicon_FWD_DEFINED__
#define __SpUnCompressedLexicon_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpUnCompressedLexicon SpUnCompressedLexicon;
#else
typedef struct SpUnCompressedLexicon SpUnCompressedLexicon;
#endif /* __cplusplus */

#endif 	/* __SpUnCompressedLexicon_FWD_DEFINED__ */


#ifndef __SpCompressedLexicon_FWD_DEFINED__
#define __SpCompressedLexicon_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpCompressedLexicon SpCompressedLexicon;
#else
typedef struct SpCompressedLexicon SpCompressedLexicon;
#endif /* __cplusplus */

#endif 	/* __SpCompressedLexicon_FWD_DEFINED__ */


#ifndef __SpShortcut_FWD_DEFINED__
#define __SpShortcut_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpShortcut SpShortcut;
#else
typedef struct SpShortcut SpShortcut;
#endif /* __cplusplus */

#endif 	/* __SpShortcut_FWD_DEFINED__ */


#ifndef __SpPLSLexicon_FWD_DEFINED__
#define __SpPLSLexicon_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpPLSLexicon SpPLSLexicon;
#else
typedef struct SpPLSLexicon SpPLSLexicon;
#endif /* __cplusplus */

#endif 	/* __SpPLSLexicon_FWD_DEFINED__ */


#ifndef __SpPhoneConverter_FWD_DEFINED__
#define __SpPhoneConverter_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpPhoneConverter SpPhoneConverter;
#else
typedef struct SpPhoneConverter SpPhoneConverter;
#endif /* __cplusplus */

#endif 	/* __SpPhoneConverter_FWD_DEFINED__ */


#ifndef __SpPhoneticAlphabetConverter_FWD_DEFINED__
#define __SpPhoneticAlphabetConverter_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpPhoneticAlphabetConverter SpPhoneticAlphabetConverter;
#else
typedef struct SpPhoneticAlphabetConverter SpPhoneticAlphabetConverter;
#endif /* __cplusplus */

#endif 	/* __SpPhoneticAlphabetConverter_FWD_DEFINED__ */


#ifndef __SpNullPhoneConverter_FWD_DEFINED__
#define __SpNullPhoneConverter_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpNullPhoneConverter SpNullPhoneConverter;
#else
typedef struct SpNullPhoneConverter SpNullPhoneConverter;
#endif /* __cplusplus */

#endif 	/* __SpNullPhoneConverter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sapi_0000_0000 */
/* [local] */ 

#ifndef _SAPI_VER
#define _SAPI_VER 0x055
#endif // _SAPI_VER
#pragma warning(disable:4201) // Allow nameless structs/unions
#pragma comment(lib, "sapi.lib")
#if 0
typedef /* [hidden][restricted] */ struct WAVEFORMATEX
    {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
    } 	WAVEFORMATEX;

#else
#include <mmsystem.h>
#endif


































typedef /* [hidden] */ 
enum SPDATAKEYLOCATION
    {
        SPDKL_DefaultLocation	= 0,
        SPDKL_CurrentUser	= 1,
        SPDKL_LocalMachine	= 2,
        SPDKL_CurrentConfig	= 5
    } 	SPDATAKEYLOCATION;

#define SPDUI_EngineProperties   L"EngineProperties"
#define SPDUI_AddRemoveWord      L"AddRemoveWord"
#define SPDUI_UserTraining       L"UserTraining"
#define SPDUI_MicTraining        L"MicTraining"
#define SPDUI_RecoProfileProperties L"RecoProfileProperties"
#define SPDUI_AudioProperties    L"AudioProperties"
#define SPDUI_AudioVolume        L"AudioVolume"
#define SPDUI_UserEnrollment     L"UserEnrollment"
#define SPDUI_Tutorial           L"Tutorial"
#define SPDUI_ShareData          L"ShareData"
typedef /* [hidden] */ 
enum SPSTREAMFORMAT
    {
        SPSF_Default	= -1,
        SPSF_NoAssignedFormat	= 0,
        SPSF_Text	= ( SPSF_NoAssignedFormat + 1 ) ,
        SPSF_NonStandardFormat	= ( SPSF_Text + 1 ) ,
        SPSF_ExtendedAudioFormat	= ( SPSF_NonStandardFormat + 1 ) ,
        SPSF_8kHz8BitMono	= ( SPSF_ExtendedAudioFormat + 1 ) ,
        SPSF_8kHz8BitStereo	= ( SPSF_8kHz8BitMono + 1 ) ,
        SPSF_8kHz16BitMono	= ( SPSF_8kHz8BitStereo + 1 ) ,
        SPSF_8kHz16BitStereo	= ( SPSF_8kHz16BitMono + 1 ) ,
        SPSF_11kHz8BitMono	= ( SPSF_8kHz16BitStereo + 1 ) ,
        SPSF_11kHz8BitStereo	= ( SPSF_11kHz8BitMono + 1 ) ,
        SPSF_11kHz16BitMono	= ( SPSF_11kHz8BitStereo + 1 ) ,
        SPSF_11kHz16BitStereo	= ( SPSF_11kHz16BitMono + 1 ) ,
        SPSF_12kHz8BitMono	= ( SPSF_11kHz16BitStereo + 1 ) ,
        SPSF_12kHz8BitStereo	= ( SPSF_12kHz8BitMono + 1 ) ,
        SPSF_12kHz16BitMono	= ( SPSF_12kHz8BitStereo + 1 ) ,
        SPSF_12kHz16BitStereo	= ( SPSF_12kHz16BitMono + 1 ) ,
        SPSF_16kHz8BitMono	= ( SPSF_12kHz16BitStereo + 1 ) ,
        SPSF_16kHz8BitStereo	= ( SPSF_16kHz8BitMono + 1 ) ,
        SPSF_16kHz16BitMono	= ( SPSF_16kHz8BitStereo + 1 ) ,
        SPSF_16kHz16BitStereo	= ( SPSF_16kHz16BitMono + 1 ) ,
        SPSF_22kHz8BitMono	= ( SPSF_16kHz16BitStereo + 1 ) ,
        SPSF_22kHz8BitStereo	= ( SPSF_22kHz8BitMono + 1 ) ,
        SPSF_22kHz16BitMono	= ( SPSF_22kHz8BitStereo + 1 ) ,
        SPSF_22kHz16BitStereo	= ( SPSF_22kHz16BitMono + 1 ) ,
        SPSF_24kHz8BitMono	= ( SPSF_22kHz16BitStereo + 1 ) ,
        SPSF_24kHz8BitStereo	= ( SPSF_24kHz8BitMono + 1 ) ,
        SPSF_24kHz16BitMono	= ( SPSF_24kHz8BitStereo + 1 ) ,
        SPSF_24kHz16BitStereo	= ( SPSF_24kHz16BitMono + 1 ) ,
        SPSF_32kHz8BitMono	= ( SPSF_24kHz16BitStereo + 1 ) ,
        SPSF_32kHz8BitStereo	= ( SPSF_32kHz8BitMono + 1 ) ,
        SPSF_32kHz16BitMono	= ( SPSF_32kHz8BitStereo + 1 ) ,
        SPSF_32kHz16BitStereo	= ( SPSF_32kHz16BitMono + 1 ) ,
        SPSF_44kHz8BitMono	= ( SPSF_32kHz16BitStereo + 1 ) ,
        SPSF_44kHz8BitStereo	= ( SPSF_44kHz8BitMono + 1 ) ,
        SPSF_44kHz16BitMono	= ( SPSF_44kHz8BitStereo + 1 ) ,
        SPSF_44kHz16BitStereo	= ( SPSF_44kHz16BitMono + 1 ) ,
        SPSF_48kHz8BitMono	= ( SPSF_44kHz16BitStereo + 1 ) ,
        SPSF_48kHz8BitStereo	= ( SPSF_48kHz8BitMono + 1 ) ,
        SPSF_48kHz16BitMono	= ( SPSF_48kHz8BitStereo + 1 ) ,
        SPSF_48kHz16BitStereo	= ( SPSF_48kHz16BitMono + 1 ) ,
        SPSF_TrueSpeech_8kHz1BitMono	= ( SPSF_48kHz16BitStereo + 1 ) ,
        SPSF_CCITT_ALaw_8kHzMono	= ( SPSF_TrueSpeech_8kHz1BitMono + 1 ) ,
        SPSF_CCITT_ALaw_8kHzStereo	= ( SPSF_CCITT_ALaw_8kHzMono + 1 ) ,
        SPSF_CCITT_ALaw_11kHzMono	= ( SPSF_CCITT_ALaw_8kHzStereo + 1 ) ,
        SPSF_CCITT_ALaw_11kHzStereo	= ( SPSF_CCITT_ALaw_11kHzMono + 1 ) ,
        SPSF_CCITT_ALaw_22kHzMono	= ( SPSF_CCITT_ALaw_11kHzStereo + 1 ) ,
        SPSF_CCITT_ALaw_22kHzStereo	= ( SPSF_CCITT_ALaw_22kHzMono + 1 ) ,
        SPSF_CCITT_ALaw_44kHzMono	= ( SPSF_CCITT_ALaw_22kHzStereo + 1 ) ,
        SPSF_CCITT_ALaw_44kHzStereo	= ( SPSF_CCITT_ALaw_44kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_8kHzMono	= ( SPSF_CCITT_ALaw_44kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_8kHzStereo	= ( SPSF_CCITT_uLaw_8kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_11kHzMono	= ( SPSF_CCITT_uLaw_8kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_11kHzStereo	= ( SPSF_CCITT_uLaw_11kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_22kHzMono	= ( SPSF_CCITT_uLaw_11kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_22kHzStereo	= ( SPSF_CCITT_uLaw_22kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_44kHzMono	= ( SPSF_CCITT_uLaw_22kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_44kHzStereo	= ( SPSF_CCITT_uLaw_44kHzMono + 1 ) ,
        SPSF_ADPCM_8kHzMono	= ( SPSF_CCITT_uLaw_44kHzStereo + 1 ) ,
        SPSF_ADPCM_8kHzStereo	= ( SPSF_ADPCM_8kHzMono + 1 ) ,
        SPSF_ADPCM_11kHzMono	= ( SPSF_ADPCM_8kHzStereo + 1 ) ,
        SPSF_ADPCM_11kHzStereo	= ( SPSF_ADPCM_11kHzMono + 1 ) ,
        SPSF_ADPCM_22kHzMono	= ( SPSF_ADPCM_11kHzStereo + 1 ) ,
        SPSF_ADPCM_22kHzStereo	= ( SPSF_ADPCM_22kHzMono + 1 ) ,
        SPSF_ADPCM_44kHzMono	= ( SPSF_ADPCM_22kHzStereo + 1 ) ,
        SPSF_ADPCM_44kHzStereo	= ( SPSF_ADPCM_44kHzMono + 1 ) ,
        SPSF_GSM610_8kHzMono	= ( SPSF_ADPCM_44kHzStereo + 1 ) ,
        SPSF_GSM610_11kHzMono	= ( SPSF_GSM610_8kHzMono + 1 ) ,
        SPSF_GSM610_22kHzMono	= ( SPSF_GSM610_11kHzMono + 1 ) ,
        SPSF_GSM610_44kHzMono	= ( SPSF_GSM610_22kHzMono + 1 ) ,
        SPSF_NUM_FORMATS	= ( SPSF_GSM610_44kHzMono + 1 ) 
    } 	SPSTREAMFORMAT;

EXTERN_C const GUID SPDFID_Text;
EXTERN_C const GUID SPDFID_WaveFormatEx;
#define SPREG_USER_ROOT          L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech Server\\v11.0"
#define SPREG_LOCAL_MACHINE_ROOT L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0"
#define SPCAT_AUDIOOUT         L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\AudioOutput"
#define SPCAT_AUDIOIN          L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\AudioInput"
#define SPCAT_VOICES           L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\Voices"
#define SPCAT_RECOGNIZERS      L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\Recognizers"
#define SPCAT_APPLEXICONS      L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\AppLexicons"
#define SPCAT_PHONECONVERTERS  L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\PhoneConverters"
#define SPCAT_TEXTNORMALIZERS  L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\TextNormalizers"
#define SPCAT_RECOPROFILES     L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\RecoProfiles"
#define SPCAT_PROMPTVOICES     L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\PromptVoices"
#define SPMMSYS_AUDIO_IN_TOKEN_ID        L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\AudioInput\\TokenEnums\\MMAudioIn\\"
#define SPMMSYS_AUDIO_OUT_TOKEN_ID       L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\AudioOutput\\TokenEnums\\MMAudioOut\\"
#define SPCURRENT_USER_LEXICON_TOKEN_ID  L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\CurrentUserLexicon"
#define SPCURRENT_USER_SHORTCUT_TOKEN_ID  L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\CurrentUserShortcut"
#define SPTOKENVALUE_CLSID L"CLSID"
#define SPTOKENKEY_FILES L"Files"
#define SPTOKENKEY_UI L"UI"
#define SPTOKENKEY_ATTRIBUTES L"Attributes"
#define SPTOKENKEY_RETAINEDAUDIO L"SecondsPerRetainedAudioEvent"
#define SPVOICECATEGORY_TTSRATE L"DefaultTTSRate"
#define SPPROP_RESOURCE_USAGE                      L"ResourceUsage"
#define SPPROP_HIGH_CONFIDENCE_THRESHOLD           L"HighConfidenceThreshold"
#define SPPROP_NORMAL_CONFIDENCE_THRESHOLD         L"NormalConfidenceThreshold"
#define SPPROP_LOW_CONFIDENCE_THRESHOLD            L"LowConfidenceThreshold"
#define SPPROP_RESPONSE_SPEED                      L"ResponseSpeed"
#define SPPROP_COMPLEX_RESPONSE_SPEED              L"ComplexResponseSpeed"
#define SPPROP_ADAPTATION_ON                       L"AdaptationOn"
#define SPPROP_PERSISTED_BACKGROUND_ADAPTATION     L"PersistedBackgroundAdaptation"
#define SPPROP_PERSISTED_LANGUAGE_MODEL_ADAPTATION L"PersistedLanguageModelAdaptation"
#define SPPROP_UX_IS_LISTENING                     L"UXIsListening"
#define SPPROP_ASSUME_CFG_TRUSTED_SOURCE           L"AssumeCFGFromTrustedSource"
#define SPPROP_REJECTION_CONFIDENCE_THRESHOLD      L"CFGConfidenceRejectionThreshold"
#define SPPROP_ENGINE_THREAD_PRIORITY              L"EngineThreadPriority"
#define SPTOPIC_SPELLING L"Spelling"
#define SPWILDCARD L"..."
#define SPDICTATION    L"*"
#define SPINFDICTATION L"*+"
#define SPREG_SAFE_USER_TOKENS       L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech Server\\v11.0\\UserTokens"
#define	SP_LOW_CONFIDENCE	( -1 )

#define	SP_NORMAL_CONFIDENCE	( 0 )

#define	SP_HIGH_CONFIDENCE	( +1 )

#define	DEFAULT_WEIGHT	( 1 )

#define	SP_MAX_WORD_LENGTH	( 128 )

#define	SP_MAX_PRON_LENGTH	( 384 )

#define	SP_EMULATE_RESULT	( 0x40000000 )

#define	SP_GRAMMAR_CONFUSION	( 0x10000000 )

#define	SP_SIMULATE_ONCE	( 0x20000000 )

#if defined(__cplusplus)
interface ISpNotifyCallback
{
virtual HRESULT STDMETHODCALLTYPE NotifyCallback(
                                     WPARAM wParam,
                                     LPARAM lParam) = 0;
};
#else
typedef void *ISpNotifyCallback;

#endif
#if 0
typedef void *SPNOTIFYCALLBACK;

#else
typedef void __stdcall SPNOTIFYCALLBACK(WPARAM wParam, LPARAM lParam);
#endif


extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0000_v0_0_s_ifspec;

#ifndef __ISpNotifySource_INTERFACE_DEFINED__
#define __ISpNotifySource_INTERFACE_DEFINED__

/* interface ISpNotifySource */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpNotifySource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5EFF4AEF-8487-11D2-961C-00C04F8EE628")
    ISpNotifySource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNotifySink( 
            /* [in] */ ISpNotifySink *pNotifySink) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetNotifyWindowMessage( 
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetNotifyCallbackFunction( 
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetNotifyCallbackInterface( 
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetNotifyWin32Event( void) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE WaitForNotifyEvent( 
            /* [in] */ DWORD dwMilliseconds) = 0;
        
        virtual /* [local] */ HANDLE STDMETHODCALLTYPE GetNotifyEventHandle( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpNotifySourceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpNotifySource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpNotifySource * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpNotifySource * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifySink)
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )( 
            ISpNotifySource * This,
            /* [in] */ ISpNotifySink *pNotifySink);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWindowMessage)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )( 
            ISpNotifySource * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackFunction)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )( 
            ISpNotifySource * This,
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackInterface)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )( 
            ISpNotifySource * This,
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWin32Event)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )( 
            ISpNotifySource * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, WaitForNotifyEvent)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )( 
            ISpNotifySource * This,
            /* [in] */ DWORD dwMilliseconds);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, GetNotifyEventHandle)
        /* [local] */ HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )( 
            ISpNotifySource * This);
        
        END_INTERFACE
    } ISpNotifySourceVtbl;

    interface ISpNotifySource
    {
        CONST_VTBL struct ISpNotifySourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpNotifySource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpNotifySource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpNotifySource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpNotifySource_SetNotifySink(This,pNotifySink)	\
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) ) 

#define ISpNotifySource_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) ) 

#define ISpNotifySource_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) ) 

#define ISpNotifySource_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) ) 

#define ISpNotifySource_SetNotifyWin32Event(This)	\
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) ) 

#define ISpNotifySource_WaitForNotifyEvent(This,dwMilliseconds)	\
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) ) 

#define ISpNotifySource_GetNotifyEventHandle(This)	\
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpNotifySource_INTERFACE_DEFINED__ */


#ifndef __ISpNotifySink_INTERFACE_DEFINED__
#define __ISpNotifySink_INTERFACE_DEFINED__

/* interface ISpNotifySink */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpNotifySink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("259684DC-37C3-11D2-9603-00C04F8EE628")
    ISpNotifySink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpNotifySinkVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpNotifySink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpNotifySink * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpNotifySink * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySink, Notify)
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            ISpNotifySink * This);
        
        END_INTERFACE
    } ISpNotifySinkVtbl;

    interface ISpNotifySink
    {
        CONST_VTBL struct ISpNotifySinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpNotifySink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpNotifySink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpNotifySink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpNotifySink_Notify(This)	\
    ( (This)->lpVtbl -> Notify(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpNotifySink_INTERFACE_DEFINED__ */


#ifndef __ISpNotifyTranslator_INTERFACE_DEFINED__
#define __ISpNotifyTranslator_INTERFACE_DEFINED__

/* interface ISpNotifyTranslator */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpNotifyTranslator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ACA16614-5D3D-11D2-960E-00C04F8EE628")
    ISpNotifyTranslator : public ISpNotifySink
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitWindowMessage( 
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitCallback( 
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitSpNotifyCallback( 
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitWin32Event( 
            HANDLE hEvent,
            BOOL fCloseHandleOnRelease) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Wait( 
            /* [in] */ DWORD dwMilliseconds) = 0;
        
        virtual HANDLE STDMETHODCALLTYPE GetEventHandle( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpNotifyTranslatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpNotifyTranslator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpNotifyTranslator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpNotifyTranslator * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySink, Notify)
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            ISpNotifyTranslator * This);
        
        DECLSPEC_XFGVIRT(ISpNotifyTranslator, InitWindowMessage)
        HRESULT ( STDMETHODCALLTYPE *InitWindowMessage )( 
            ISpNotifyTranslator * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifyTranslator, InitCallback)
        HRESULT ( STDMETHODCALLTYPE *InitCallback )( 
            ISpNotifyTranslator * This,
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifyTranslator, InitSpNotifyCallback)
        HRESULT ( STDMETHODCALLTYPE *InitSpNotifyCallback )( 
            ISpNotifyTranslator * This,
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifyTranslator, InitWin32Event)
        HRESULT ( STDMETHODCALLTYPE *InitWin32Event )( 
            ISpNotifyTranslator * This,
            HANDLE hEvent,
            BOOL fCloseHandleOnRelease);
        
        DECLSPEC_XFGVIRT(ISpNotifyTranslator, Wait)
        HRESULT ( STDMETHODCALLTYPE *Wait )( 
            ISpNotifyTranslator * This,
            /* [in] */ DWORD dwMilliseconds);
        
        DECLSPEC_XFGVIRT(ISpNotifyTranslator, GetEventHandle)
        HANDLE ( STDMETHODCALLTYPE *GetEventHandle )( 
            ISpNotifyTranslator * This);
        
        END_INTERFACE
    } ISpNotifyTranslatorVtbl;

    interface ISpNotifyTranslator
    {
        CONST_VTBL struct ISpNotifyTranslatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpNotifyTranslator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpNotifyTranslator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpNotifyTranslator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpNotifyTranslator_Notify(This)	\
    ( (This)->lpVtbl -> Notify(This) ) 


#define ISpNotifyTranslator_InitWindowMessage(This,hWnd,Msg,wParam,lParam)	\
    ( (This)->lpVtbl -> InitWindowMessage(This,hWnd,Msg,wParam,lParam) ) 

#define ISpNotifyTranslator_InitCallback(This,pfnCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> InitCallback(This,pfnCallback,wParam,lParam) ) 

#define ISpNotifyTranslator_InitSpNotifyCallback(This,pSpCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> InitSpNotifyCallback(This,pSpCallback,wParam,lParam) ) 

#define ISpNotifyTranslator_InitWin32Event(This,hEvent,fCloseHandleOnRelease)	\
    ( (This)->lpVtbl -> InitWin32Event(This,hEvent,fCloseHandleOnRelease) ) 

#define ISpNotifyTranslator_Wait(This,dwMilliseconds)	\
    ( (This)->lpVtbl -> Wait(This,dwMilliseconds) ) 

#define ISpNotifyTranslator_GetEventHandle(This)	\
    ( (This)->lpVtbl -> GetEventHandle(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpNotifyTranslator_INTERFACE_DEFINED__ */


#ifndef __ISpDataKey_INTERFACE_DEFINED__
#define __ISpDataKey_INTERFACE_DEFINED__

/* interface ISpDataKey */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpDataKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14056581-E16C-11D2-BB90-00C04F8EE6C0")
    ISpDataKey : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetData( 
            LPCWSTR pszValueName,
            ULONG cbData,
            const BYTE *pData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetData( 
            LPCWSTR pszValueName,
            ULONG *pcbData,
            /* [out] */ BYTE *pData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStringValue( 
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            LPCWSTR pszValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStringValue( 
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDWORD( 
            LPCWSTR pszValueName,
            DWORD dwValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDWORD( 
            LPCWSTR pszValueName,
            /* [out] */ DWORD *pdwValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenKey( 
            LPCWSTR pszSubKeyName,
            /* [out] */ ISpDataKey **ppSubKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateKey( 
            LPCWSTR pszSubKey,
            /* [out] */ ISpDataKey **ppSubKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteKey( 
            LPCWSTR pszSubKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteValue( 
            /* [in] */ LPCWSTR pszValueName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumKeys( 
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszSubKeyName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumValues( 
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValueName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpDataKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpDataKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpDataKey * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpDataKey * This);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetData)
        HRESULT ( STDMETHODCALLTYPE *SetData )( 
            ISpDataKey * This,
            LPCWSTR pszValueName,
            ULONG cbData,
            const BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetData)
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            ISpDataKey * This,
            LPCWSTR pszValueName,
            ULONG *pcbData,
            /* [out] */ BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetStringValue)
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )( 
            ISpDataKey * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            LPCWSTR pszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetStringValue)
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            ISpDataKey * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetDWORD)
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )( 
            ISpDataKey * This,
            LPCWSTR pszValueName,
            DWORD dwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetDWORD)
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )( 
            ISpDataKey * This,
            LPCWSTR pszValueName,
            /* [out] */ DWORD *pdwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, OpenKey)
        HRESULT ( STDMETHODCALLTYPE *OpenKey )( 
            ISpDataKey * This,
            LPCWSTR pszSubKeyName,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, CreateKey)
        HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            ISpDataKey * This,
            LPCWSTR pszSubKey,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteKey)
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            ISpDataKey * This,
            LPCWSTR pszSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteValue)
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )( 
            ISpDataKey * This,
            /* [in] */ LPCWSTR pszValueName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumKeys)
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )( 
            ISpDataKey * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszSubKeyName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumValues)
        HRESULT ( STDMETHODCALLTYPE *EnumValues )( 
            ISpDataKey * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValueName);
        
        END_INTERFACE
    } ISpDataKeyVtbl;

    interface ISpDataKey
    {
        CONST_VTBL struct ISpDataKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpDataKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpDataKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpDataKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpDataKey_SetData(This,pszValueName,cbData,pData)	\
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) ) 

#define ISpDataKey_GetData(This,pszValueName,pcbData,pData)	\
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) ) 

#define ISpDataKey_SetStringValue(This,pszValueName,pszValue)	\
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) ) 

#define ISpDataKey_GetStringValue(This,pszValueName,ppszValue)	\
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) ) 

#define ISpDataKey_SetDWORD(This,pszValueName,dwValue)	\
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) ) 

#define ISpDataKey_GetDWORD(This,pszValueName,pdwValue)	\
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) ) 

#define ISpDataKey_OpenKey(This,pszSubKeyName,ppSubKey)	\
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) ) 

#define ISpDataKey_CreateKey(This,pszSubKey,ppSubKey)	\
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) ) 

#define ISpDataKey_DeleteKey(This,pszSubKey)	\
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) ) 

#define ISpDataKey_DeleteValue(This,pszValueName)	\
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) ) 

#define ISpDataKey_EnumKeys(This,Index,ppszSubKeyName)	\
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) ) 

#define ISpDataKey_EnumValues(This,Index,ppszValueName)	\
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpDataKey_INTERFACE_DEFINED__ */


#ifndef __ISpRegDataKey_INTERFACE_DEFINED__
#define __ISpRegDataKey_INTERFACE_DEFINED__

/* interface ISpRegDataKey */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRegDataKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92A66E2B-C830-4149-83DF-6FC2BA1E7A5B")
    ISpRegDataKey : public ISpDataKey
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetKey( 
            /* [in] */ HKEY hkey,
            /* [in] */ BOOL fReadOnly) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRegDataKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRegDataKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRegDataKey * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRegDataKey * This);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetData)
        HRESULT ( STDMETHODCALLTYPE *SetData )( 
            ISpRegDataKey * This,
            LPCWSTR pszValueName,
            ULONG cbData,
            const BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetData)
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            ISpRegDataKey * This,
            LPCWSTR pszValueName,
            ULONG *pcbData,
            /* [out] */ BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetStringValue)
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )( 
            ISpRegDataKey * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            LPCWSTR pszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetStringValue)
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            ISpRegDataKey * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetDWORD)
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )( 
            ISpRegDataKey * This,
            LPCWSTR pszValueName,
            DWORD dwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetDWORD)
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )( 
            ISpRegDataKey * This,
            LPCWSTR pszValueName,
            /* [out] */ DWORD *pdwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, OpenKey)
        HRESULT ( STDMETHODCALLTYPE *OpenKey )( 
            ISpRegDataKey * This,
            LPCWSTR pszSubKeyName,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, CreateKey)
        HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            ISpRegDataKey * This,
            LPCWSTR pszSubKey,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteKey)
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            ISpRegDataKey * This,
            LPCWSTR pszSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteValue)
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )( 
            ISpRegDataKey * This,
            /* [in] */ LPCWSTR pszValueName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumKeys)
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )( 
            ISpRegDataKey * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszSubKeyName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumValues)
        HRESULT ( STDMETHODCALLTYPE *EnumValues )( 
            ISpRegDataKey * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValueName);
        
        DECLSPEC_XFGVIRT(ISpRegDataKey, SetKey)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetKey )( 
            ISpRegDataKey * This,
            /* [in] */ HKEY hkey,
            /* [in] */ BOOL fReadOnly);
        
        END_INTERFACE
    } ISpRegDataKeyVtbl;

    interface ISpRegDataKey
    {
        CONST_VTBL struct ISpRegDataKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRegDataKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRegDataKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRegDataKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRegDataKey_SetData(This,pszValueName,cbData,pData)	\
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) ) 

#define ISpRegDataKey_GetData(This,pszValueName,pcbData,pData)	\
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) ) 

#define ISpRegDataKey_SetStringValue(This,pszValueName,pszValue)	\
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) ) 

#define ISpRegDataKey_GetStringValue(This,pszValueName,ppszValue)	\
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) ) 

#define ISpRegDataKey_SetDWORD(This,pszValueName,dwValue)	\
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) ) 

#define ISpRegDataKey_GetDWORD(This,pszValueName,pdwValue)	\
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) ) 

#define ISpRegDataKey_OpenKey(This,pszSubKeyName,ppSubKey)	\
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) ) 

#define ISpRegDataKey_CreateKey(This,pszSubKey,ppSubKey)	\
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) ) 

#define ISpRegDataKey_DeleteKey(This,pszSubKey)	\
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) ) 

#define ISpRegDataKey_DeleteValue(This,pszValueName)	\
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) ) 

#define ISpRegDataKey_EnumKeys(This,Index,ppszSubKeyName)	\
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) ) 

#define ISpRegDataKey_EnumValues(This,Index,ppszValueName)	\
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) ) 


#define ISpRegDataKey_SetKey(This,hkey,fReadOnly)	\
    ( (This)->lpVtbl -> SetKey(This,hkey,fReadOnly) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRegDataKey_INTERFACE_DEFINED__ */


#ifndef __ISpObjectTokenCategory_INTERFACE_DEFINED__
#define __ISpObjectTokenCategory_INTERFACE_DEFINED__

/* interface ISpObjectTokenCategory */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpObjectTokenCategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D3D3845-39AF-4850-BBF9-40B49780011D")
    ISpObjectTokenCategory : public ISpDataKey
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetId( 
            /* [in] */ LPCWSTR pszCategoryId,
            BOOL fCreateIfNotExist) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemCategoryId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataKey( 
            SPDATAKEYLOCATION spdkl,
            /* [out] */ ISpDataKey **ppDataKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumTokens( 
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pzsReqAttribs,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszOptAttribs,
            /* [out] */ IEnumSpObjectTokens **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultTokenId( 
            /* [in] */ LPCWSTR pszTokenId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultTokenId( 
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemTokenId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpObjectTokenCategoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpObjectTokenCategory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpObjectTokenCategory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpObjectTokenCategory * This);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetData)
        HRESULT ( STDMETHODCALLTYPE *SetData )( 
            ISpObjectTokenCategory * This,
            LPCWSTR pszValueName,
            ULONG cbData,
            const BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetData)
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            ISpObjectTokenCategory * This,
            LPCWSTR pszValueName,
            ULONG *pcbData,
            /* [out] */ BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetStringValue)
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )( 
            ISpObjectTokenCategory * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            LPCWSTR pszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetStringValue)
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            ISpObjectTokenCategory * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetDWORD)
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )( 
            ISpObjectTokenCategory * This,
            LPCWSTR pszValueName,
            DWORD dwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetDWORD)
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )( 
            ISpObjectTokenCategory * This,
            LPCWSTR pszValueName,
            /* [out] */ DWORD *pdwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, OpenKey)
        HRESULT ( STDMETHODCALLTYPE *OpenKey )( 
            ISpObjectTokenCategory * This,
            LPCWSTR pszSubKeyName,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, CreateKey)
        HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            ISpObjectTokenCategory * This,
            LPCWSTR pszSubKey,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteKey)
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            ISpObjectTokenCategory * This,
            LPCWSTR pszSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteValue)
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )( 
            ISpObjectTokenCategory * This,
            /* [in] */ LPCWSTR pszValueName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumKeys)
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )( 
            ISpObjectTokenCategory * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszSubKeyName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumValues)
        HRESULT ( STDMETHODCALLTYPE *EnumValues )( 
            ISpObjectTokenCategory * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValueName);
        
        DECLSPEC_XFGVIRT(ISpObjectTokenCategory, SetId)
        HRESULT ( STDMETHODCALLTYPE *SetId )( 
            ISpObjectTokenCategory * This,
            /* [in] */ LPCWSTR pszCategoryId,
            BOOL fCreateIfNotExist);
        
        DECLSPEC_XFGVIRT(ISpObjectTokenCategory, GetId)
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            ISpObjectTokenCategory * This,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemCategoryId);
        
        DECLSPEC_XFGVIRT(ISpObjectTokenCategory, GetDataKey)
        HRESULT ( STDMETHODCALLTYPE *GetDataKey )( 
            ISpObjectTokenCategory * This,
            SPDATAKEYLOCATION spdkl,
            /* [out] */ ISpDataKey **ppDataKey);
        
        DECLSPEC_XFGVIRT(ISpObjectTokenCategory, EnumTokens)
        HRESULT ( STDMETHODCALLTYPE *EnumTokens )( 
            ISpObjectTokenCategory * This,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pzsReqAttribs,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszOptAttribs,
            /* [out] */ IEnumSpObjectTokens **ppEnum);
        
        DECLSPEC_XFGVIRT(ISpObjectTokenCategory, SetDefaultTokenId)
        HRESULT ( STDMETHODCALLTYPE *SetDefaultTokenId )( 
            ISpObjectTokenCategory * This,
            /* [in] */ LPCWSTR pszTokenId);
        
        DECLSPEC_XFGVIRT(ISpObjectTokenCategory, GetDefaultTokenId)
        HRESULT ( STDMETHODCALLTYPE *GetDefaultTokenId )( 
            ISpObjectTokenCategory * This,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemTokenId);
        
        END_INTERFACE
    } ISpObjectTokenCategoryVtbl;

    interface ISpObjectTokenCategory
    {
        CONST_VTBL struct ISpObjectTokenCategoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpObjectTokenCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpObjectTokenCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpObjectTokenCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpObjectTokenCategory_SetData(This,pszValueName,cbData,pData)	\
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) ) 

#define ISpObjectTokenCategory_GetData(This,pszValueName,pcbData,pData)	\
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) ) 

#define ISpObjectTokenCategory_SetStringValue(This,pszValueName,pszValue)	\
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) ) 

#define ISpObjectTokenCategory_GetStringValue(This,pszValueName,ppszValue)	\
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) ) 

#define ISpObjectTokenCategory_SetDWORD(This,pszValueName,dwValue)	\
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) ) 

#define ISpObjectTokenCategory_GetDWORD(This,pszValueName,pdwValue)	\
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) ) 

#define ISpObjectTokenCategory_OpenKey(This,pszSubKeyName,ppSubKey)	\
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) ) 

#define ISpObjectTokenCategory_CreateKey(This,pszSubKey,ppSubKey)	\
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) ) 

#define ISpObjectTokenCategory_DeleteKey(This,pszSubKey)	\
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) ) 

#define ISpObjectTokenCategory_DeleteValue(This,pszValueName)	\
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) ) 

#define ISpObjectTokenCategory_EnumKeys(This,Index,ppszSubKeyName)	\
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) ) 

#define ISpObjectTokenCategory_EnumValues(This,Index,ppszValueName)	\
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) ) 


#define ISpObjectTokenCategory_SetId(This,pszCategoryId,fCreateIfNotExist)	\
    ( (This)->lpVtbl -> SetId(This,pszCategoryId,fCreateIfNotExist) ) 

#define ISpObjectTokenCategory_GetId(This,ppszCoMemCategoryId)	\
    ( (This)->lpVtbl -> GetId(This,ppszCoMemCategoryId) ) 

#define ISpObjectTokenCategory_GetDataKey(This,spdkl,ppDataKey)	\
    ( (This)->lpVtbl -> GetDataKey(This,spdkl,ppDataKey) ) 

#define ISpObjectTokenCategory_EnumTokens(This,pzsReqAttribs,pszOptAttribs,ppEnum)	\
    ( (This)->lpVtbl -> EnumTokens(This,pzsReqAttribs,pszOptAttribs,ppEnum) ) 

#define ISpObjectTokenCategory_SetDefaultTokenId(This,pszTokenId)	\
    ( (This)->lpVtbl -> SetDefaultTokenId(This,pszTokenId) ) 

#define ISpObjectTokenCategory_GetDefaultTokenId(This,ppszCoMemTokenId)	\
    ( (This)->lpVtbl -> GetDefaultTokenId(This,ppszCoMemTokenId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpObjectTokenCategory_INTERFACE_DEFINED__ */


#ifndef __ISpObjectToken_INTERFACE_DEFINED__
#define __ISpObjectToken_INTERFACE_DEFINED__

/* interface ISpObjectToken */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpObjectToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14056589-E16C-11D2-BB90-00C04F8EE6C0")
    ISpObjectToken : public ISpDataKey
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetId( 
            /* [annotation] */ 
            __in_opt  LPCWSTR pszCategoryId,
            LPCWSTR pszTokenId,
            BOOL fCreateIfNotExist) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemTokenId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [out] */ ISpObjectTokenCategory **ppTokenCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [in] */ IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsContext,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStorageFileName( 
            /* [in] */ REFCLSID clsidCaller,
            /* [in] */ LPCWSTR pszValueName,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszFileNameSpecifier,
            /* [in] */ ULONG nFolder,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszFilePath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveStorageFileName( 
            /* [in] */ REFCLSID clsidCaller,
            /* [in] */ LPCWSTR pszKeyName,
            /* [in] */ BOOL fDeleteFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [annotation] */ 
            __in_opt  const CLSID *pclsidCaller) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE IsUISupported( 
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [in] */ IUnknown *punkObject,
            /* [out] */ BOOL *pfSupported) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DisplayUI( 
            /* [in] */ HWND hwndParent,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [in] */ IUnknown *punkObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MatchesAttributes( 
            /* [in] */ LPCWSTR pszAttributes,
            /* [out] */ BOOL *pfMatches) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpObjectTokenVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpObjectToken * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpObjectToken * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpObjectToken * This);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetData)
        HRESULT ( STDMETHODCALLTYPE *SetData )( 
            ISpObjectToken * This,
            LPCWSTR pszValueName,
            ULONG cbData,
            const BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetData)
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            ISpObjectToken * This,
            LPCWSTR pszValueName,
            ULONG *pcbData,
            /* [out] */ BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetStringValue)
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )( 
            ISpObjectToken * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            LPCWSTR pszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetStringValue)
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            ISpObjectToken * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetDWORD)
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )( 
            ISpObjectToken * This,
            LPCWSTR pszValueName,
            DWORD dwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetDWORD)
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )( 
            ISpObjectToken * This,
            LPCWSTR pszValueName,
            /* [out] */ DWORD *pdwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, OpenKey)
        HRESULT ( STDMETHODCALLTYPE *OpenKey )( 
            ISpObjectToken * This,
            LPCWSTR pszSubKeyName,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, CreateKey)
        HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            ISpObjectToken * This,
            LPCWSTR pszSubKey,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteKey)
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            ISpObjectToken * This,
            LPCWSTR pszSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteValue)
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )( 
            ISpObjectToken * This,
            /* [in] */ LPCWSTR pszValueName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumKeys)
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )( 
            ISpObjectToken * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszSubKeyName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumValues)
        HRESULT ( STDMETHODCALLTYPE *EnumValues )( 
            ISpObjectToken * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValueName);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, SetId)
        HRESULT ( STDMETHODCALLTYPE *SetId )( 
            ISpObjectToken * This,
            /* [annotation] */ 
            __in_opt  LPCWSTR pszCategoryId,
            LPCWSTR pszTokenId,
            BOOL fCreateIfNotExist);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, GetId)
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            ISpObjectToken * This,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemTokenId);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, GetCategory)
        HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            ISpObjectToken * This,
            /* [out] */ ISpObjectTokenCategory **ppTokenCategory);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, CreateInstance)
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            ISpObjectToken * This,
            /* [in] */ IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsContext,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, GetStorageFileName)
        HRESULT ( STDMETHODCALLTYPE *GetStorageFileName )( 
            ISpObjectToken * This,
            /* [in] */ REFCLSID clsidCaller,
            /* [in] */ LPCWSTR pszValueName,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszFileNameSpecifier,
            /* [in] */ ULONG nFolder,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszFilePath);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, RemoveStorageFileName)
        HRESULT ( STDMETHODCALLTYPE *RemoveStorageFileName )( 
            ISpObjectToken * This,
            /* [in] */ REFCLSID clsidCaller,
            /* [in] */ LPCWSTR pszKeyName,
            /* [in] */ BOOL fDeleteFile);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ISpObjectToken * This,
            /* [annotation] */ 
            __in_opt  const CLSID *pclsidCaller);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, IsUISupported)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *IsUISupported )( 
            ISpObjectToken * This,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [in] */ IUnknown *punkObject,
            /* [out] */ BOOL *pfSupported);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, DisplayUI)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *DisplayUI )( 
            ISpObjectToken * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [in] */ IUnknown *punkObject);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, MatchesAttributes)
        HRESULT ( STDMETHODCALLTYPE *MatchesAttributes )( 
            ISpObjectToken * This,
            /* [in] */ LPCWSTR pszAttributes,
            /* [out] */ BOOL *pfMatches);
        
        END_INTERFACE
    } ISpObjectTokenVtbl;

    interface ISpObjectToken
    {
        CONST_VTBL struct ISpObjectTokenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpObjectToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpObjectToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpObjectToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpObjectToken_SetData(This,pszValueName,cbData,pData)	\
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) ) 

#define ISpObjectToken_GetData(This,pszValueName,pcbData,pData)	\
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) ) 

#define ISpObjectToken_SetStringValue(This,pszValueName,pszValue)	\
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) ) 

#define ISpObjectToken_GetStringValue(This,pszValueName,ppszValue)	\
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) ) 

#define ISpObjectToken_SetDWORD(This,pszValueName,dwValue)	\
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) ) 

#define ISpObjectToken_GetDWORD(This,pszValueName,pdwValue)	\
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) ) 

#define ISpObjectToken_OpenKey(This,pszSubKeyName,ppSubKey)	\
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) ) 

#define ISpObjectToken_CreateKey(This,pszSubKey,ppSubKey)	\
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) ) 

#define ISpObjectToken_DeleteKey(This,pszSubKey)	\
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) ) 

#define ISpObjectToken_DeleteValue(This,pszValueName)	\
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) ) 

#define ISpObjectToken_EnumKeys(This,Index,ppszSubKeyName)	\
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) ) 

#define ISpObjectToken_EnumValues(This,Index,ppszValueName)	\
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) ) 


#define ISpObjectToken_SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist)	\
    ( (This)->lpVtbl -> SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist) ) 

#define ISpObjectToken_GetId(This,ppszCoMemTokenId)	\
    ( (This)->lpVtbl -> GetId(This,ppszCoMemTokenId) ) 

#define ISpObjectToken_GetCategory(This,ppTokenCategory)	\
    ( (This)->lpVtbl -> GetCategory(This,ppTokenCategory) ) 

#define ISpObjectToken_CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject)	\
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject) ) 

#define ISpObjectToken_GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath)	\
    ( (This)->lpVtbl -> GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath) ) 

#define ISpObjectToken_RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile)	\
    ( (This)->lpVtbl -> RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile) ) 

#define ISpObjectToken_Remove(This,pclsidCaller)	\
    ( (This)->lpVtbl -> Remove(This,pclsidCaller) ) 

#define ISpObjectToken_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported)	\
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) ) 

#define ISpObjectToken_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject)	\
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject) ) 

#define ISpObjectToken_MatchesAttributes(This,pszAttributes,pfMatches)	\
    ( (This)->lpVtbl -> MatchesAttributes(This,pszAttributes,pfMatches) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpObjectToken_INTERFACE_DEFINED__ */


#ifndef __ISpObjectTokenInit_INTERFACE_DEFINED__
#define __ISpObjectTokenInit_INTERFACE_DEFINED__

/* interface ISpObjectTokenInit */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpObjectTokenInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8AAB0CF-346F-49D8-9499-C8B03F161D51")
    ISpObjectTokenInit : public ISpObjectToken
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitFromDataKey( 
            /* [in] */ LPCWSTR pszCategoryId,
            /* [in] */ LPCWSTR pszTokenId,
            /* [in] */ ISpDataKey *pDataKey) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpObjectTokenInitVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpObjectTokenInit * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpObjectTokenInit * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpObjectTokenInit * This);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetData)
        HRESULT ( STDMETHODCALLTYPE *SetData )( 
            ISpObjectTokenInit * This,
            LPCWSTR pszValueName,
            ULONG cbData,
            const BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetData)
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            ISpObjectTokenInit * This,
            LPCWSTR pszValueName,
            ULONG *pcbData,
            /* [out] */ BYTE *pData);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetStringValue)
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )( 
            ISpObjectTokenInit * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            LPCWSTR pszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetStringValue)
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            ISpObjectTokenInit * This,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszValueName,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, SetDWORD)
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )( 
            ISpObjectTokenInit * This,
            LPCWSTR pszValueName,
            DWORD dwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, GetDWORD)
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )( 
            ISpObjectTokenInit * This,
            LPCWSTR pszValueName,
            /* [out] */ DWORD *pdwValue);
        
        DECLSPEC_XFGVIRT(ISpDataKey, OpenKey)
        HRESULT ( STDMETHODCALLTYPE *OpenKey )( 
            ISpObjectTokenInit * This,
            LPCWSTR pszSubKeyName,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, CreateKey)
        HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            ISpObjectTokenInit * This,
            LPCWSTR pszSubKey,
            /* [out] */ ISpDataKey **ppSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteKey)
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            ISpObjectTokenInit * This,
            LPCWSTR pszSubKey);
        
        DECLSPEC_XFGVIRT(ISpDataKey, DeleteValue)
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )( 
            ISpObjectTokenInit * This,
            /* [in] */ LPCWSTR pszValueName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumKeys)
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )( 
            ISpObjectTokenInit * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszSubKeyName);
        
        DECLSPEC_XFGVIRT(ISpDataKey, EnumValues)
        HRESULT ( STDMETHODCALLTYPE *EnumValues )( 
            ISpObjectTokenInit * This,
            ULONG Index,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszValueName);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, SetId)
        HRESULT ( STDMETHODCALLTYPE *SetId )( 
            ISpObjectTokenInit * This,
            /* [annotation] */ 
            __in_opt  LPCWSTR pszCategoryId,
            LPCWSTR pszTokenId,
            BOOL fCreateIfNotExist);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, GetId)
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            ISpObjectTokenInit * This,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemTokenId);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, GetCategory)
        HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            ISpObjectTokenInit * This,
            /* [out] */ ISpObjectTokenCategory **ppTokenCategory);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, CreateInstance)
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            ISpObjectTokenInit * This,
            /* [in] */ IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsContext,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, GetStorageFileName)
        HRESULT ( STDMETHODCALLTYPE *GetStorageFileName )( 
            ISpObjectTokenInit * This,
            /* [in] */ REFCLSID clsidCaller,
            /* [in] */ LPCWSTR pszValueName,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszFileNameSpecifier,
            /* [in] */ ULONG nFolder,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszFilePath);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, RemoveStorageFileName)
        HRESULT ( STDMETHODCALLTYPE *RemoveStorageFileName )( 
            ISpObjectTokenInit * This,
            /* [in] */ REFCLSID clsidCaller,
            /* [in] */ LPCWSTR pszKeyName,
            /* [in] */ BOOL fDeleteFile);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ISpObjectTokenInit * This,
            /* [annotation] */ 
            __in_opt  const CLSID *pclsidCaller);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, IsUISupported)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *IsUISupported )( 
            ISpObjectTokenInit * This,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [in] */ IUnknown *punkObject,
            /* [out] */ BOOL *pfSupported);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, DisplayUI)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *DisplayUI )( 
            ISpObjectTokenInit * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [in] */ IUnknown *punkObject);
        
        DECLSPEC_XFGVIRT(ISpObjectToken, MatchesAttributes)
        HRESULT ( STDMETHODCALLTYPE *MatchesAttributes )( 
            ISpObjectTokenInit * This,
            /* [in] */ LPCWSTR pszAttributes,
            /* [out] */ BOOL *pfMatches);
        
        DECLSPEC_XFGVIRT(ISpObjectTokenInit, InitFromDataKey)
        HRESULT ( STDMETHODCALLTYPE *InitFromDataKey )( 
            ISpObjectTokenInit * This,
            /* [in] */ LPCWSTR pszCategoryId,
            /* [in] */ LPCWSTR pszTokenId,
            /* [in] */ ISpDataKey *pDataKey);
        
        END_INTERFACE
    } ISpObjectTokenInitVtbl;

    interface ISpObjectTokenInit
    {
        CONST_VTBL struct ISpObjectTokenInitVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpObjectTokenInit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpObjectTokenInit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpObjectTokenInit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpObjectTokenInit_SetData(This,pszValueName,cbData,pData)	\
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) ) 

#define ISpObjectTokenInit_GetData(This,pszValueName,pcbData,pData)	\
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) ) 

#define ISpObjectTokenInit_SetStringValue(This,pszValueName,pszValue)	\
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) ) 

#define ISpObjectTokenInit_GetStringValue(This,pszValueName,ppszValue)	\
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) ) 

#define ISpObjectTokenInit_SetDWORD(This,pszValueName,dwValue)	\
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) ) 

#define ISpObjectTokenInit_GetDWORD(This,pszValueName,pdwValue)	\
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) ) 

#define ISpObjectTokenInit_OpenKey(This,pszSubKeyName,ppSubKey)	\
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) ) 

#define ISpObjectTokenInit_CreateKey(This,pszSubKey,ppSubKey)	\
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) ) 

#define ISpObjectTokenInit_DeleteKey(This,pszSubKey)	\
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) ) 

#define ISpObjectTokenInit_DeleteValue(This,pszValueName)	\
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) ) 

#define ISpObjectTokenInit_EnumKeys(This,Index,ppszSubKeyName)	\
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) ) 

#define ISpObjectTokenInit_EnumValues(This,Index,ppszValueName)	\
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) ) 


#define ISpObjectTokenInit_SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist)	\
    ( (This)->lpVtbl -> SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist) ) 

#define ISpObjectTokenInit_GetId(This,ppszCoMemTokenId)	\
    ( (This)->lpVtbl -> GetId(This,ppszCoMemTokenId) ) 

#define ISpObjectTokenInit_GetCategory(This,ppTokenCategory)	\
    ( (This)->lpVtbl -> GetCategory(This,ppTokenCategory) ) 

#define ISpObjectTokenInit_CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject)	\
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject) ) 

#define ISpObjectTokenInit_GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath)	\
    ( (This)->lpVtbl -> GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath) ) 

#define ISpObjectTokenInit_RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile)	\
    ( (This)->lpVtbl -> RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile) ) 

#define ISpObjectTokenInit_Remove(This,pclsidCaller)	\
    ( (This)->lpVtbl -> Remove(This,pclsidCaller) ) 

#define ISpObjectTokenInit_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported)	\
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) ) 

#define ISpObjectTokenInit_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject)	\
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject) ) 

#define ISpObjectTokenInit_MatchesAttributes(This,pszAttributes,pfMatches)	\
    ( (This)->lpVtbl -> MatchesAttributes(This,pszAttributes,pfMatches) ) 


#define ISpObjectTokenInit_InitFromDataKey(This,pszCategoryId,pszTokenId,pDataKey)	\
    ( (This)->lpVtbl -> InitFromDataKey(This,pszCategoryId,pszTokenId,pDataKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpObjectTokenInit_INTERFACE_DEFINED__ */


#ifndef __IEnumSpObjectTokens_INTERFACE_DEFINED__
#define __IEnumSpObjectTokens_INTERFACE_DEFINED__

/* interface IEnumSpObjectTokens */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IEnumSpObjectTokens;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06B64F9E-7FDA-11D2-B4F2-00C04F797396")
    IEnumSpObjectTokens : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ ISpObjectToken **pelt,
            /* [out][annotation] */ 
            __out_opt  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSpObjectTokens **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ ULONG Index,
            /* [out] */ ISpObjectToken **ppToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ ULONG *pCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSpObjectTokensVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSpObjectTokens * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSpObjectTokens * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSpObjectTokens * This);
        
        DECLSPEC_XFGVIRT(IEnumSpObjectTokens, Next)
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSpObjectTokens * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ ISpObjectToken **pelt,
            /* [out][annotation] */ 
            __out_opt  ULONG *pceltFetched);
        
        DECLSPEC_XFGVIRT(IEnumSpObjectTokens, Skip)
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSpObjectTokens * This,
            /* [in] */ ULONG celt);
        
        DECLSPEC_XFGVIRT(IEnumSpObjectTokens, Reset)
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSpObjectTokens * This);
        
        DECLSPEC_XFGVIRT(IEnumSpObjectTokens, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSpObjectTokens * This,
            /* [out] */ IEnumSpObjectTokens **ppEnum);
        
        DECLSPEC_XFGVIRT(IEnumSpObjectTokens, Item)
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IEnumSpObjectTokens * This,
            /* [in] */ ULONG Index,
            /* [out] */ ISpObjectToken **ppToken);
        
        DECLSPEC_XFGVIRT(IEnumSpObjectTokens, GetCount)
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IEnumSpObjectTokens * This,
            /* [out] */ ULONG *pCount);
        
        END_INTERFACE
    } IEnumSpObjectTokensVtbl;

    interface IEnumSpObjectTokens
    {
        CONST_VTBL struct IEnumSpObjectTokensVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSpObjectTokens_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSpObjectTokens_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSpObjectTokens_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSpObjectTokens_Next(This,celt,pelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,pelt,pceltFetched) ) 

#define IEnumSpObjectTokens_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSpObjectTokens_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSpObjectTokens_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumSpObjectTokens_Item(This,Index,ppToken)	\
    ( (This)->lpVtbl -> Item(This,Index,ppToken) ) 

#define IEnumSpObjectTokens_GetCount(This,pCount)	\
    ( (This)->lpVtbl -> GetCount(This,pCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSpObjectTokens_INTERFACE_DEFINED__ */


#ifndef __ISpObjectWithToken_INTERFACE_DEFINED__
#define __ISpObjectWithToken_INTERFACE_DEFINED__

/* interface ISpObjectWithToken */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpObjectWithToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B559F40-E952-11D2-BB91-00C04F8EE6C0")
    ISpObjectWithToken : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetObjectToken( 
            ISpObjectToken *pToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectToken( 
            ISpObjectToken **ppToken) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpObjectWithTokenVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpObjectWithToken * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpObjectWithToken * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpObjectWithToken * This);
        
        DECLSPEC_XFGVIRT(ISpObjectWithToken, SetObjectToken)
        HRESULT ( STDMETHODCALLTYPE *SetObjectToken )( 
            ISpObjectWithToken * This,
            ISpObjectToken *pToken);
        
        DECLSPEC_XFGVIRT(ISpObjectWithToken, GetObjectToken)
        HRESULT ( STDMETHODCALLTYPE *GetObjectToken )( 
            ISpObjectWithToken * This,
            ISpObjectToken **ppToken);
        
        END_INTERFACE
    } ISpObjectWithTokenVtbl;

    interface ISpObjectWithToken
    {
        CONST_VTBL struct ISpObjectWithTokenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpObjectWithToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpObjectWithToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpObjectWithToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpObjectWithToken_SetObjectToken(This,pToken)	\
    ( (This)->lpVtbl -> SetObjectToken(This,pToken) ) 

#define ISpObjectWithToken_GetObjectToken(This,ppToken)	\
    ( (This)->lpVtbl -> GetObjectToken(This,ppToken) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpObjectWithToken_INTERFACE_DEFINED__ */


#ifndef __ISpResourceManager_INTERFACE_DEFINED__
#define __ISpResourceManager_INTERFACE_DEFINED__

/* interface ISpResourceManager */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpResourceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93384E18-5014-43D5-ADBB-A78E055926BD")
    ISpResourceManager : public IServiceProvider
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetObject( 
            /* [in] */ REFGUID guidServiceId,
            /* [in] */ IUnknown *pUnkObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObject( 
            /* [in] */ REFGUID guidServiceId,
            /* [in] */ REFCLSID ObjectCLSID,
            /* [in] */ REFIID ObjectIID,
            /* [in] */ BOOL fReleaseWhenLastExternalRefReleased,
            /* [iid_is][out] */ void **ppObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpResourceManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpResourceManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpResourceManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpResourceManager * This);
        
        DECLSPEC_XFGVIRT(IServiceProvider, QueryService)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *QueryService )( 
            ISpResourceManager * This,
            /* [annotation][in] */ 
            _In_  REFGUID guidService,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][out] */ 
            _Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(ISpResourceManager, SetObject)
        HRESULT ( STDMETHODCALLTYPE *SetObject )( 
            ISpResourceManager * This,
            /* [in] */ REFGUID guidServiceId,
            /* [in] */ IUnknown *pUnkObject);
        
        DECLSPEC_XFGVIRT(ISpResourceManager, GetObject)
        HRESULT ( STDMETHODCALLTYPE *GetObject )( 
            ISpResourceManager * This,
            /* [in] */ REFGUID guidServiceId,
            /* [in] */ REFCLSID ObjectCLSID,
            /* [in] */ REFIID ObjectIID,
            /* [in] */ BOOL fReleaseWhenLastExternalRefReleased,
            /* [iid_is][out] */ void **ppObject);
        
        END_INTERFACE
    } ISpResourceManagerVtbl;

    interface ISpResourceManager
    {
        CONST_VTBL struct ISpResourceManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpResourceManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpResourceManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpResourceManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpResourceManager_QueryService(This,guidService,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject) ) 


#define ISpResourceManager_SetObject(This,guidServiceId,pUnkObject)	\
    ( (This)->lpVtbl -> SetObject(This,guidServiceId,pUnkObject) ) 

#define ISpResourceManager_GetObject(This,guidServiceId,ObjectCLSID,ObjectIID,fReleaseWhenLastExternalRefReleased,ppObject)	\
    ( (This)->lpVtbl -> GetObject(This,guidServiceId,ObjectCLSID,ObjectIID,fReleaseWhenLastExternalRefReleased,ppObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpResourceManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0011 */
/* [local] */ 

typedef /* [hidden] */ 
enum SPEVENTLPARAMTYPE
    {
        SPET_LPARAM_IS_UNDEFINED	= 0,
        SPET_LPARAM_IS_TOKEN	= ( SPET_LPARAM_IS_UNDEFINED + 1 ) ,
        SPET_LPARAM_IS_OBJECT	= ( SPET_LPARAM_IS_TOKEN + 1 ) ,
        SPET_LPARAM_IS_POINTER	= ( SPET_LPARAM_IS_OBJECT + 1 ) ,
        SPET_LPARAM_IS_STRING	= ( SPET_LPARAM_IS_POINTER + 1 ) 
    } 	SPEVENTLPARAMTYPE;

typedef /* [hidden] */ 
enum SPEVENTENUM
    {
        SPEI_UNDEFINED	= 0,
        SPEI_START_INPUT_STREAM	= 1,
        SPEI_END_INPUT_STREAM	= 2,
        SPEI_VOICE_CHANGE	= 3,
        SPEI_TTS_BOOKMARK	= 4,
        SPEI_WORD_BOUNDARY	= 5,
        SPEI_PHONEME	= 6,
        SPEI_SENTENCE_BOUNDARY	= 7,
        SPEI_VISEME	= 8,
        SPEI_TTS_AUDIO_LEVEL	= 9,
        SPEI_TTS_PRIVATE	= 15,
        SPEI_MIN_TTS	= 1,
        SPEI_MAX_TTS	= 15,
        SPEI_END_SR_STREAM	= 34,
        SPEI_SOUND_START	= 35,
        SPEI_SOUND_END	= 36,
        SPEI_PHRASE_START	= 37,
        SPEI_RECOGNITION	= 38,
        SPEI_HYPOTHESIS	= 39,
        SPEI_SR_BOOKMARK	= 40,
        SPEI_PROPERTY_NUM_CHANGE	= 41,
        SPEI_PROPERTY_STRING_CHANGE	= 42,
        SPEI_FALSE_RECOGNITION	= 43,
        SPEI_INTERFERENCE	= 44,
        SPEI_REQUEST_UI	= 45,
        SPEI_RECO_STATE_CHANGE	= 46,
        SPEI_ADAPTATION	= 47,
        SPEI_START_SR_STREAM	= 48,
        SPEI_RECO_OTHER_CONTEXT	= 49,
        SPEI_SR_AUDIO_LEVEL	= 50,
        SPEI_SR_RETAINEDAUDIO	= 51,
        SPEI_SR_PRIVATE	= 52,
        SPEI_ACTIVE_CATEGORY_CHANGED	= 53,
        SPEI_RESERVED5	= 54,
        SPEI_RESERVED6	= 55,
        SPEI_BARGE_IN	= 56,
        SPEI_TONE	= 57,
        SPEI_MIN_SR	= 34,
        SPEI_MAX_SR	= 57,
        SPEI_RESERVED1	= 30,
        SPEI_RESERVED2	= 33,
        SPEI_RESERVED3	= 63
    } 	SPEVENTENUM;

#define SPFEI_FLAGCHECK ( (1ui64 << SPEI_RESERVED1) | (1ui64 << SPEI_RESERVED2) )
#define SPFEI_ALL_TTS_EVENTS (0x000000000000FFFEui64 | SPFEI_FLAGCHECK)
#define SPFEI_ALL_SR_EVENTS  (0x033FFFFC00000000ui64 | SPFEI_FLAGCHECK)
#define SPFEI_ALL_EVENTS      0xEFFFFFFFFFFFFFFFui64
#define SPFEI(SPEI_ord) ((1ui64 << SPEI_ord) | SPFEI_FLAGCHECK)
#if 0
typedef /* [hidden][restricted] */ struct SPEVENT
    {
    WORD eEventId;
    WORD elParamType;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    WPARAM wParam;
    LPARAM lParam;
    } 	SPEVENT;

typedef /* [hidden][restricted] */ struct SPSERIALIZEDEVENT
    {
    WORD eEventId;
    WORD elParamType;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONG SerializedwParam;
    LONG SerializedlParam;
    } 	SPSERIALIZEDEVENT;

typedef /* [hidden][restricted] */ struct SPSERIALIZEDEVENT64
    {
    WORD eEventId;
    WORD elParamType;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONGLONG SerializedwParam;
    LONGLONG SerializedlParam;
    } 	SPSERIALIZEDEVENT64;

#else
typedef struct SPEVENT
{
    SPEVENTENUM        eEventId : 16;
    SPEVENTLPARAMTYPE  elParamType : 16;
    ULONG       ulStreamNum;
    ULONGLONG   ullAudioStreamOffset;
    WPARAM      wParam;
    LPARAM      lParam;
} SPEVENT;
typedef struct SPSERIALIZEDEVENT
{
    SPEVENTENUM        eEventId : 16;
    SPEVENTLPARAMTYPE  elParamType : 16;
    ULONG       ulStreamNum;
    ULONGLONG   ullAudioStreamOffset;
    ULONG       SerializedwParam;
    LONG        SerializedlParam;
} SPSERIALIZEDEVENT;
typedef struct SPSERIALIZEDEVENT64
{
    SPEVENTENUM        eEventId : 16;
    SPEVENTLPARAMTYPE  elParamType : 16;
    ULONG       ulStreamNum;
    ULONGLONG   ullAudioStreamOffset;
    ULONGLONG   SerializedwParam;
    LONGLONG    SerializedlParam;
} SPSERIALIZEDEVENT64;
#endif
#if 0
typedef /* [hidden][restricted] */ struct SPEVENTEX
    {
    WORD eEventId;
    WORD elParamType;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    WPARAM wParam;
    LPARAM lParam;
    ULONGLONG ullAudioTimeOffset;
    } 	SPEVENTEX;

#else
typedef struct SPEVENTEX
{
    SPEVENTENUM        eEventId : 16;
    SPEVENTLPARAMTYPE  elParamType : 16;
    ULONG       ulStreamNum;
    ULONGLONG   ullAudioStreamOffset;
    WPARAM      wParam;
    LPARAM      lParam;
    ULONGLONG   ullAudioTimeOffset;
} SPEVENTEX;
#endif
typedef /* [hidden] */ 
enum SPINTERFERENCE
    {
        SPINTERFERENCE_NONE	= 0,
        SPINTERFERENCE_NOISE	= ( SPINTERFERENCE_NONE + 1 ) ,
        SPINTERFERENCE_NOSIGNAL	= ( SPINTERFERENCE_NOISE + 1 ) ,
        SPINTERFERENCE_TOOLOUD	= ( SPINTERFERENCE_NOSIGNAL + 1 ) ,
        SPINTERFERENCE_TOOQUIET	= ( SPINTERFERENCE_TOOLOUD + 1 ) ,
        SPINTERFERENCE_TOOFAST	= ( SPINTERFERENCE_TOOQUIET + 1 ) ,
        SPINTERFERENCE_TOOSLOW	= ( SPINTERFERENCE_TOOFAST + 1 ) 
    } 	SPINTERFERENCE;

typedef /* [hidden] */ 
enum SPTONETYPE
    {
        SPTONETYPE_FAXTONE	= 0
    } 	SPTONETYPE;

typedef /* [hidden] */ 
enum SPENDSRSTREAMFLAGS
    {
        SPESF_NONE	= 0,
        SPESF_STREAM_RELEASED	= ( 1 << 0 ) ,
        SPESF_EMULATED	= ( 1 << 1 ) 
    } 	SPENDSRSTREAMFLAGS;

typedef /* [hidden] */ 
enum SPVFEATURE
    {
        SPVFEATURE_STRESSED	= ( 1L << 0 ) ,
        SPVFEATURE_EMPHASIS	= ( 1L << 1 ) 
    } 	SPVFEATURE;

typedef /* [hidden] */ 
enum SPVISEMES
    {
        SP_VISEME_0	= 0,
        SP_VISEME_1	= ( SP_VISEME_0 + 1 ) ,
        SP_VISEME_2	= ( SP_VISEME_1 + 1 ) ,
        SP_VISEME_3	= ( SP_VISEME_2 + 1 ) ,
        SP_VISEME_4	= ( SP_VISEME_3 + 1 ) ,
        SP_VISEME_5	= ( SP_VISEME_4 + 1 ) ,
        SP_VISEME_6	= ( SP_VISEME_5 + 1 ) ,
        SP_VISEME_7	= ( SP_VISEME_6 + 1 ) ,
        SP_VISEME_8	= ( SP_VISEME_7 + 1 ) ,
        SP_VISEME_9	= ( SP_VISEME_8 + 1 ) ,
        SP_VISEME_10	= ( SP_VISEME_9 + 1 ) ,
        SP_VISEME_11	= ( SP_VISEME_10 + 1 ) ,
        SP_VISEME_12	= ( SP_VISEME_11 + 1 ) ,
        SP_VISEME_13	= ( SP_VISEME_12 + 1 ) ,
        SP_VISEME_14	= ( SP_VISEME_13 + 1 ) ,
        SP_VISEME_15	= ( SP_VISEME_14 + 1 ) ,
        SP_VISEME_16	= ( SP_VISEME_15 + 1 ) ,
        SP_VISEME_17	= ( SP_VISEME_16 + 1 ) ,
        SP_VISEME_18	= ( SP_VISEME_17 + 1 ) ,
        SP_VISEME_19	= ( SP_VISEME_18 + 1 ) ,
        SP_VISEME_20	= ( SP_VISEME_19 + 1 ) ,
        SP_VISEME_21	= ( SP_VISEME_20 + 1 ) 
    } 	SPVISEMES;

typedef /* [hidden][restricted] */ struct SPEVENTSOURCEINFO
    {
    ULONGLONG ullEventInterest;
    ULONGLONG ullQueuedInterest;
    ULONG ulCount;
    } 	SPEVENTSOURCEINFO;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0011_v0_0_s_ifspec;

#ifndef __ISpEventSource_INTERFACE_DEFINED__
#define __ISpEventSource_INTERFACE_DEFINED__

/* interface ISpEventSource */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpEventSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE7A9CCE-5F9E-11D2-960F-00C04F8EE628")
    ISpEventSource : public ISpNotifySource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetInterest( 
            /* [in] */ ULONGLONG ullEventInterest,
            /* [in] */ ULONGLONG ullQueuedInterest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEvents( 
            /* [in] */ ULONG ulCount,
            /* [size_is][out] */ SPEVENT *pEventArray,
            /* [out] */ ULONG *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [out] */ SPEVENTSOURCEINFO *pInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpEventSourceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpEventSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpEventSource * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpEventSource * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifySink)
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )( 
            ISpEventSource * This,
            /* [in] */ ISpNotifySink *pNotifySink);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWindowMessage)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )( 
            ISpEventSource * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackFunction)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )( 
            ISpEventSource * This,
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackInterface)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )( 
            ISpEventSource * This,
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWin32Event)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )( 
            ISpEventSource * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, WaitForNotifyEvent)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )( 
            ISpEventSource * This,
            /* [in] */ DWORD dwMilliseconds);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, GetNotifyEventHandle)
        /* [local] */ HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )( 
            ISpEventSource * This);
        
        DECLSPEC_XFGVIRT(ISpEventSource, SetInterest)
        HRESULT ( STDMETHODCALLTYPE *SetInterest )( 
            ISpEventSource * This,
            /* [in] */ ULONGLONG ullEventInterest,
            /* [in] */ ULONGLONG ullQueuedInterest);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetEvents)
        HRESULT ( STDMETHODCALLTYPE *GetEvents )( 
            ISpEventSource * This,
            /* [in] */ ULONG ulCount,
            /* [size_is][out] */ SPEVENT *pEventArray,
            /* [out] */ ULONG *pulFetched);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetInfo)
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            ISpEventSource * This,
            /* [out] */ SPEVENTSOURCEINFO *pInfo);
        
        END_INTERFACE
    } ISpEventSourceVtbl;

    interface ISpEventSource
    {
        CONST_VTBL struct ISpEventSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpEventSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpEventSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpEventSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpEventSource_SetNotifySink(This,pNotifySink)	\
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) ) 

#define ISpEventSource_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) ) 

#define ISpEventSource_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) ) 

#define ISpEventSource_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) ) 

#define ISpEventSource_SetNotifyWin32Event(This)	\
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) ) 

#define ISpEventSource_WaitForNotifyEvent(This,dwMilliseconds)	\
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) ) 

#define ISpEventSource_GetNotifyEventHandle(This)	\
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) ) 


#define ISpEventSource_SetInterest(This,ullEventInterest,ullQueuedInterest)	\
    ( (This)->lpVtbl -> SetInterest(This,ullEventInterest,ullQueuedInterest) ) 

#define ISpEventSource_GetEvents(This,ulCount,pEventArray,pulFetched)	\
    ( (This)->lpVtbl -> GetEvents(This,ulCount,pEventArray,pulFetched) ) 

#define ISpEventSource_GetInfo(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpEventSource_INTERFACE_DEFINED__ */


#ifndef __ISpEventSource2_INTERFACE_DEFINED__
#define __ISpEventSource2_INTERFACE_DEFINED__

/* interface ISpEventSource2 */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpEventSource2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2373A435-6A4B-429e-A6AC-D4231A61975B")
    ISpEventSource2 : public ISpEventSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEventsEx( 
            /* [in] */ ULONG ulCount,
            /* [size_is][out] */ SPEVENTEX *pEventArray,
            /* [out] */ ULONG *pulFetched) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpEventSource2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpEventSource2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpEventSource2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpEventSource2 * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifySink)
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )( 
            ISpEventSource2 * This,
            /* [in] */ ISpNotifySink *pNotifySink);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWindowMessage)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )( 
            ISpEventSource2 * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackFunction)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )( 
            ISpEventSource2 * This,
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackInterface)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )( 
            ISpEventSource2 * This,
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWin32Event)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )( 
            ISpEventSource2 * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, WaitForNotifyEvent)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )( 
            ISpEventSource2 * This,
            /* [in] */ DWORD dwMilliseconds);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, GetNotifyEventHandle)
        /* [local] */ HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )( 
            ISpEventSource2 * This);
        
        DECLSPEC_XFGVIRT(ISpEventSource, SetInterest)
        HRESULT ( STDMETHODCALLTYPE *SetInterest )( 
            ISpEventSource2 * This,
            /* [in] */ ULONGLONG ullEventInterest,
            /* [in] */ ULONGLONG ullQueuedInterest);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetEvents)
        HRESULT ( STDMETHODCALLTYPE *GetEvents )( 
            ISpEventSource2 * This,
            /* [in] */ ULONG ulCount,
            /* [size_is][out] */ SPEVENT *pEventArray,
            /* [out] */ ULONG *pulFetched);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetInfo)
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            ISpEventSource2 * This,
            /* [out] */ SPEVENTSOURCEINFO *pInfo);
        
        DECLSPEC_XFGVIRT(ISpEventSource2, GetEventsEx)
        HRESULT ( STDMETHODCALLTYPE *GetEventsEx )( 
            ISpEventSource2 * This,
            /* [in] */ ULONG ulCount,
            /* [size_is][out] */ SPEVENTEX *pEventArray,
            /* [out] */ ULONG *pulFetched);
        
        END_INTERFACE
    } ISpEventSource2Vtbl;

    interface ISpEventSource2
    {
        CONST_VTBL struct ISpEventSource2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpEventSource2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpEventSource2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpEventSource2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpEventSource2_SetNotifySink(This,pNotifySink)	\
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) ) 

#define ISpEventSource2_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) ) 

#define ISpEventSource2_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) ) 

#define ISpEventSource2_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) ) 

#define ISpEventSource2_SetNotifyWin32Event(This)	\
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) ) 

#define ISpEventSource2_WaitForNotifyEvent(This,dwMilliseconds)	\
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) ) 

#define ISpEventSource2_GetNotifyEventHandle(This)	\
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) ) 


#define ISpEventSource2_SetInterest(This,ullEventInterest,ullQueuedInterest)	\
    ( (This)->lpVtbl -> SetInterest(This,ullEventInterest,ullQueuedInterest) ) 

#define ISpEventSource2_GetEvents(This,ulCount,pEventArray,pulFetched)	\
    ( (This)->lpVtbl -> GetEvents(This,ulCount,pEventArray,pulFetched) ) 

#define ISpEventSource2_GetInfo(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfo) ) 


#define ISpEventSource2_GetEventsEx(This,ulCount,pEventArray,pulFetched)	\
    ( (This)->lpVtbl -> GetEventsEx(This,ulCount,pEventArray,pulFetched) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpEventSource2_INTERFACE_DEFINED__ */


#ifndef __ISpEventSink_INTERFACE_DEFINED__
#define __ISpEventSink_INTERFACE_DEFINED__

/* interface ISpEventSink */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE7A9CC9-5F9E-11D2-960F-00C04F8EE628")
    ISpEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddEvents( 
            /* [in] */ const SPEVENT *pEventArray,
            /* [in] */ ULONG ulCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEventInterest( 
            /* [out] */ ULONGLONG *pullEventInterest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpEventSink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpEventSink * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpEventSink * This);
        
        DECLSPEC_XFGVIRT(ISpEventSink, AddEvents)
        HRESULT ( STDMETHODCALLTYPE *AddEvents )( 
            ISpEventSink * This,
            /* [in] */ const SPEVENT *pEventArray,
            /* [in] */ ULONG ulCount);
        
        DECLSPEC_XFGVIRT(ISpEventSink, GetEventInterest)
        HRESULT ( STDMETHODCALLTYPE *GetEventInterest )( 
            ISpEventSink * This,
            /* [out] */ ULONGLONG *pullEventInterest);
        
        END_INTERFACE
    } ISpEventSinkVtbl;

    interface ISpEventSink
    {
        CONST_VTBL struct ISpEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpEventSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpEventSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpEventSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpEventSink_AddEvents(This,pEventArray,ulCount)	\
    ( (This)->lpVtbl -> AddEvents(This,pEventArray,ulCount) ) 

#define ISpEventSink_GetEventInterest(This,pullEventInterest)	\
    ( (This)->lpVtbl -> GetEventInterest(This,pullEventInterest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpEventSink_INTERFACE_DEFINED__ */


#ifndef __ISpStreamFormat_INTERFACE_DEFINED__
#define __ISpStreamFormat_INTERFACE_DEFINED__

/* interface ISpStreamFormat */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpStreamFormat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BED530BE-2606-4F4D-A1C0-54C5CDA5566F")
    ISpStreamFormat : public IStream
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFormat( 
            GUID *pguidFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpStreamFormatVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpStreamFormat * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpStreamFormat * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpStreamFormat * This);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Read)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ISpStreamFormat * This,
            /* [annotation] */ 
            _Out_writes_bytes_to_(cb, *pcbRead)  void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbRead);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Write)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            ISpStreamFormat * This,
            /* [annotation] */ 
            _In_reads_bytes_(cb)  const void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Seek)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            ISpStreamFormat * This,
            /* [in] */ LARGE_INTEGER dlibMove,
            /* [in] */ DWORD dwOrigin,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *plibNewPosition);
        
        DECLSPEC_XFGVIRT(IStream, SetSize)
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ISpStreamFormat * This,
            /* [in] */ ULARGE_INTEGER libNewSize);
        
        DECLSPEC_XFGVIRT(IStream, CopyTo)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            ISpStreamFormat * This,
            /* [annotation][unique][in] */ 
            _In_  IStream *pstm,
            /* [in] */ ULARGE_INTEGER cb,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbRead,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpStreamFormat * This,
            /* [in] */ DWORD grfCommitFlags);
        
        DECLSPEC_XFGVIRT(IStream, Revert)
        HRESULT ( STDMETHODCALLTYPE *Revert )( 
            ISpStreamFormat * This);
        
        DECLSPEC_XFGVIRT(IStream, LockRegion)
        HRESULT ( STDMETHODCALLTYPE *LockRegion )( 
            ISpStreamFormat * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, UnlockRegion)
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )( 
            ISpStreamFormat * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, Stat)
        HRESULT ( STDMETHODCALLTYPE *Stat )( 
            ISpStreamFormat * This,
            /* [out] */ STATSTG *pstatstg,
            /* [in] */ DWORD grfStatFlag);
        
        DECLSPEC_XFGVIRT(IStream, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ISpStreamFormat * This,
            /* [out] */ IStream **ppstm);
        
        DECLSPEC_XFGVIRT(ISpStreamFormat, GetFormat)
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ISpStreamFormat * This,
            GUID *pguidFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx);
        
        END_INTERFACE
    } ISpStreamFormatVtbl;

    interface ISpStreamFormat
    {
        CONST_VTBL struct ISpStreamFormatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpStreamFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpStreamFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpStreamFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpStreamFormat_Read(This,pv,cb,pcbRead)	\
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) ) 

#define ISpStreamFormat_Write(This,pv,cb,pcbWritten)	\
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) ) 


#define ISpStreamFormat_Seek(This,dlibMove,dwOrigin,plibNewPosition)	\
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) ) 

#define ISpStreamFormat_SetSize(This,libNewSize)	\
    ( (This)->lpVtbl -> SetSize(This,libNewSize) ) 

#define ISpStreamFormat_CopyTo(This,pstm,cb,pcbRead,pcbWritten)	\
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) ) 

#define ISpStreamFormat_Commit(This,grfCommitFlags)	\
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) ) 

#define ISpStreamFormat_Revert(This)	\
    ( (This)->lpVtbl -> Revert(This) ) 

#define ISpStreamFormat_LockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpStreamFormat_UnlockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpStreamFormat_Stat(This,pstatstg,grfStatFlag)	\
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) ) 

#define ISpStreamFormat_Clone(This,ppstm)	\
    ( (This)->lpVtbl -> Clone(This,ppstm) ) 


#define ISpStreamFormat_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx)	\
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpStreamFormat_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0015 */
/* [local] */ 

typedef /* [hidden] */ 
enum SPFILEMODE
    {
        SPFM_OPEN_READONLY	= 0,
        SPFM_OPEN_READWRITE	= ( SPFM_OPEN_READONLY + 1 ) ,
        SPFM_CREATE	= ( SPFM_OPEN_READWRITE + 1 ) ,
        SPFM_CREATE_ALWAYS	= ( SPFM_CREATE + 1 ) ,
        SPFM_NUM_MODES	= ( SPFM_CREATE_ALWAYS + 1 ) 
    } 	SPFILEMODE;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0015_v0_0_s_ifspec;

#ifndef __ISpStream_INTERFACE_DEFINED__
#define __ISpStream_INTERFACE_DEFINED__

/* interface ISpStream */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12E3CCA9-7518-44C5-A5E7-BA5A79CB929E")
    ISpStream : public ISpStreamFormat
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBaseStream( 
            IStream *pStream,
            REFGUID rguidFormat,
            const WAVEFORMATEX *pWaveFormatEx) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBaseStream( 
            IStream **ppStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindToFile( 
            /* [annotation] */ 
            __in_z  LPCWSTR pszFileName,
            SPFILEMODE eMode,
            /* [annotation] */ 
            __in_opt  const GUID *pFormatId,
            /* [annotation] */ 
            __in_opt  const WAVEFORMATEX *pWaveFormatEx,
            ULONGLONG ullEventInterest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpStreamVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpStream * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpStream * This);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Read)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ISpStream * This,
            /* [annotation] */ 
            _Out_writes_bytes_to_(cb, *pcbRead)  void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbRead);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Write)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            ISpStream * This,
            /* [annotation] */ 
            _In_reads_bytes_(cb)  const void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Seek)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            ISpStream * This,
            /* [in] */ LARGE_INTEGER dlibMove,
            /* [in] */ DWORD dwOrigin,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *plibNewPosition);
        
        DECLSPEC_XFGVIRT(IStream, SetSize)
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ISpStream * This,
            /* [in] */ ULARGE_INTEGER libNewSize);
        
        DECLSPEC_XFGVIRT(IStream, CopyTo)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            ISpStream * This,
            /* [annotation][unique][in] */ 
            _In_  IStream *pstm,
            /* [in] */ ULARGE_INTEGER cb,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbRead,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpStream * This,
            /* [in] */ DWORD grfCommitFlags);
        
        DECLSPEC_XFGVIRT(IStream, Revert)
        HRESULT ( STDMETHODCALLTYPE *Revert )( 
            ISpStream * This);
        
        DECLSPEC_XFGVIRT(IStream, LockRegion)
        HRESULT ( STDMETHODCALLTYPE *LockRegion )( 
            ISpStream * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, UnlockRegion)
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )( 
            ISpStream * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, Stat)
        HRESULT ( STDMETHODCALLTYPE *Stat )( 
            ISpStream * This,
            /* [out] */ STATSTG *pstatstg,
            /* [in] */ DWORD grfStatFlag);
        
        DECLSPEC_XFGVIRT(IStream, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ISpStream * This,
            /* [out] */ IStream **ppstm);
        
        DECLSPEC_XFGVIRT(ISpStreamFormat, GetFormat)
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ISpStream * This,
            GUID *pguidFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpStream, SetBaseStream)
        HRESULT ( STDMETHODCALLTYPE *SetBaseStream )( 
            ISpStream * This,
            IStream *pStream,
            REFGUID rguidFormat,
            const WAVEFORMATEX *pWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpStream, GetBaseStream)
        HRESULT ( STDMETHODCALLTYPE *GetBaseStream )( 
            ISpStream * This,
            IStream **ppStream);
        
        DECLSPEC_XFGVIRT(ISpStream, BindToFile)
        HRESULT ( STDMETHODCALLTYPE *BindToFile )( 
            ISpStream * This,
            /* [annotation] */ 
            __in_z  LPCWSTR pszFileName,
            SPFILEMODE eMode,
            /* [annotation] */ 
            __in_opt  const GUID *pFormatId,
            /* [annotation] */ 
            __in_opt  const WAVEFORMATEX *pWaveFormatEx,
            ULONGLONG ullEventInterest);
        
        DECLSPEC_XFGVIRT(ISpStream, Close)
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            ISpStream * This);
        
        END_INTERFACE
    } ISpStreamVtbl;

    interface ISpStream
    {
        CONST_VTBL struct ISpStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpStream_Read(This,pv,cb,pcbRead)	\
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) ) 

#define ISpStream_Write(This,pv,cb,pcbWritten)	\
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) ) 


#define ISpStream_Seek(This,dlibMove,dwOrigin,plibNewPosition)	\
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) ) 

#define ISpStream_SetSize(This,libNewSize)	\
    ( (This)->lpVtbl -> SetSize(This,libNewSize) ) 

#define ISpStream_CopyTo(This,pstm,cb,pcbRead,pcbWritten)	\
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) ) 

#define ISpStream_Commit(This,grfCommitFlags)	\
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) ) 

#define ISpStream_Revert(This)	\
    ( (This)->lpVtbl -> Revert(This) ) 

#define ISpStream_LockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpStream_UnlockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpStream_Stat(This,pstatstg,grfStatFlag)	\
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) ) 

#define ISpStream_Clone(This,ppstm)	\
    ( (This)->lpVtbl -> Clone(This,ppstm) ) 


#define ISpStream_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx)	\
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) ) 


#define ISpStream_SetBaseStream(This,pStream,rguidFormat,pWaveFormatEx)	\
    ( (This)->lpVtbl -> SetBaseStream(This,pStream,rguidFormat,pWaveFormatEx) ) 

#define ISpStream_GetBaseStream(This,ppStream)	\
    ( (This)->lpVtbl -> GetBaseStream(This,ppStream) ) 

#define ISpStream_BindToFile(This,pszFileName,eMode,pFormatId,pWaveFormatEx,ullEventInterest)	\
    ( (This)->lpVtbl -> BindToFile(This,pszFileName,eMode,pFormatId,pWaveFormatEx,ullEventInterest) ) 

#define ISpStream_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpStream_INTERFACE_DEFINED__ */


#ifndef __ISpStreamFormatConverter_INTERFACE_DEFINED__
#define __ISpStreamFormatConverter_INTERFACE_DEFINED__

/* interface ISpStreamFormatConverter */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpStreamFormatConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("678A932C-EA71-4446-9B41-78FDA6280A29")
    ISpStreamFormatConverter : public ISpStreamFormat
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBaseStream( 
            /* [in] */ ISpStreamFormat *pStream,
            /* [in] */ BOOL fSetFormatToBaseStreamFormat,
            /* [in] */ BOOL fWriteToBaseStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBaseStream( 
            /* [out] */ ISpStreamFormat **ppStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFormat( 
            /* [in] */ REFGUID rguidFormatIdOfConvertedStream,
            /* [in] */ const WAVEFORMATEX *pWaveFormatExOfConvertedStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetSeekPosition( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScaleConvertedToBaseOffset( 
            /* [in] */ ULONGLONG ullOffsetConvertedStream,
            /* [out] */ ULONGLONG *pullOffsetBaseStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScaleBaseToConvertedOffset( 
            /* [in] */ ULONGLONG ullOffsetBaseStream,
            /* [out] */ ULONGLONG *pullOffsetConvertedStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpStreamFormatConverterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpStreamFormatConverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpStreamFormatConverter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpStreamFormatConverter * This);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Read)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ISpStreamFormatConverter * This,
            /* [annotation] */ 
            _Out_writes_bytes_to_(cb, *pcbRead)  void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbRead);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Write)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            ISpStreamFormatConverter * This,
            /* [annotation] */ 
            _In_reads_bytes_(cb)  const void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Seek)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            ISpStreamFormatConverter * This,
            /* [in] */ LARGE_INTEGER dlibMove,
            /* [in] */ DWORD dwOrigin,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *plibNewPosition);
        
        DECLSPEC_XFGVIRT(IStream, SetSize)
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ISpStreamFormatConverter * This,
            /* [in] */ ULARGE_INTEGER libNewSize);
        
        DECLSPEC_XFGVIRT(IStream, CopyTo)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            ISpStreamFormatConverter * This,
            /* [annotation][unique][in] */ 
            _In_  IStream *pstm,
            /* [in] */ ULARGE_INTEGER cb,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbRead,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpStreamFormatConverter * This,
            /* [in] */ DWORD grfCommitFlags);
        
        DECLSPEC_XFGVIRT(IStream, Revert)
        HRESULT ( STDMETHODCALLTYPE *Revert )( 
            ISpStreamFormatConverter * This);
        
        DECLSPEC_XFGVIRT(IStream, LockRegion)
        HRESULT ( STDMETHODCALLTYPE *LockRegion )( 
            ISpStreamFormatConverter * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, UnlockRegion)
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )( 
            ISpStreamFormatConverter * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, Stat)
        HRESULT ( STDMETHODCALLTYPE *Stat )( 
            ISpStreamFormatConverter * This,
            /* [out] */ STATSTG *pstatstg,
            /* [in] */ DWORD grfStatFlag);
        
        DECLSPEC_XFGVIRT(IStream, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ISpStreamFormatConverter * This,
            /* [out] */ IStream **ppstm);
        
        DECLSPEC_XFGVIRT(ISpStreamFormat, GetFormat)
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ISpStreamFormatConverter * This,
            GUID *pguidFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpStreamFormatConverter, SetBaseStream)
        HRESULT ( STDMETHODCALLTYPE *SetBaseStream )( 
            ISpStreamFormatConverter * This,
            /* [in] */ ISpStreamFormat *pStream,
            /* [in] */ BOOL fSetFormatToBaseStreamFormat,
            /* [in] */ BOOL fWriteToBaseStream);
        
        DECLSPEC_XFGVIRT(ISpStreamFormatConverter, GetBaseStream)
        HRESULT ( STDMETHODCALLTYPE *GetBaseStream )( 
            ISpStreamFormatConverter * This,
            /* [out] */ ISpStreamFormat **ppStream);
        
        DECLSPEC_XFGVIRT(ISpStreamFormatConverter, SetFormat)
        HRESULT ( STDMETHODCALLTYPE *SetFormat )( 
            ISpStreamFormatConverter * This,
            /* [in] */ REFGUID rguidFormatIdOfConvertedStream,
            /* [in] */ const WAVEFORMATEX *pWaveFormatExOfConvertedStream);
        
        DECLSPEC_XFGVIRT(ISpStreamFormatConverter, ResetSeekPosition)
        HRESULT ( STDMETHODCALLTYPE *ResetSeekPosition )( 
            ISpStreamFormatConverter * This);
        
        DECLSPEC_XFGVIRT(ISpStreamFormatConverter, ScaleConvertedToBaseOffset)
        HRESULT ( STDMETHODCALLTYPE *ScaleConvertedToBaseOffset )( 
            ISpStreamFormatConverter * This,
            /* [in] */ ULONGLONG ullOffsetConvertedStream,
            /* [out] */ ULONGLONG *pullOffsetBaseStream);
        
        DECLSPEC_XFGVIRT(ISpStreamFormatConverter, ScaleBaseToConvertedOffset)
        HRESULT ( STDMETHODCALLTYPE *ScaleBaseToConvertedOffset )( 
            ISpStreamFormatConverter * This,
            /* [in] */ ULONGLONG ullOffsetBaseStream,
            /* [out] */ ULONGLONG *pullOffsetConvertedStream);
        
        END_INTERFACE
    } ISpStreamFormatConverterVtbl;

    interface ISpStreamFormatConverter
    {
        CONST_VTBL struct ISpStreamFormatConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpStreamFormatConverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpStreamFormatConverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpStreamFormatConverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpStreamFormatConverter_Read(This,pv,cb,pcbRead)	\
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) ) 

#define ISpStreamFormatConverter_Write(This,pv,cb,pcbWritten)	\
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) ) 


#define ISpStreamFormatConverter_Seek(This,dlibMove,dwOrigin,plibNewPosition)	\
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) ) 

#define ISpStreamFormatConverter_SetSize(This,libNewSize)	\
    ( (This)->lpVtbl -> SetSize(This,libNewSize) ) 

#define ISpStreamFormatConverter_CopyTo(This,pstm,cb,pcbRead,pcbWritten)	\
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) ) 

#define ISpStreamFormatConverter_Commit(This,grfCommitFlags)	\
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) ) 

#define ISpStreamFormatConverter_Revert(This)	\
    ( (This)->lpVtbl -> Revert(This) ) 

#define ISpStreamFormatConverter_LockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpStreamFormatConverter_UnlockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpStreamFormatConverter_Stat(This,pstatstg,grfStatFlag)	\
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) ) 

#define ISpStreamFormatConverter_Clone(This,ppstm)	\
    ( (This)->lpVtbl -> Clone(This,ppstm) ) 


#define ISpStreamFormatConverter_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx)	\
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) ) 


#define ISpStreamFormatConverter_SetBaseStream(This,pStream,fSetFormatToBaseStreamFormat,fWriteToBaseStream)	\
    ( (This)->lpVtbl -> SetBaseStream(This,pStream,fSetFormatToBaseStreamFormat,fWriteToBaseStream) ) 

#define ISpStreamFormatConverter_GetBaseStream(This,ppStream)	\
    ( (This)->lpVtbl -> GetBaseStream(This,ppStream) ) 

#define ISpStreamFormatConverter_SetFormat(This,rguidFormatIdOfConvertedStream,pWaveFormatExOfConvertedStream)	\
    ( (This)->lpVtbl -> SetFormat(This,rguidFormatIdOfConvertedStream,pWaveFormatExOfConvertedStream) ) 

#define ISpStreamFormatConverter_ResetSeekPosition(This)	\
    ( (This)->lpVtbl -> ResetSeekPosition(This) ) 

#define ISpStreamFormatConverter_ScaleConvertedToBaseOffset(This,ullOffsetConvertedStream,pullOffsetBaseStream)	\
    ( (This)->lpVtbl -> ScaleConvertedToBaseOffset(This,ullOffsetConvertedStream,pullOffsetBaseStream) ) 

#define ISpStreamFormatConverter_ScaleBaseToConvertedOffset(This,ullOffsetBaseStream,pullOffsetConvertedStream)	\
    ( (This)->lpVtbl -> ScaleBaseToConvertedOffset(This,ullOffsetBaseStream,pullOffsetConvertedStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpStreamFormatConverter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0017 */
/* [local] */ 

typedef /* [hidden] */ 
enum _SPAUDIOSTATE
    {
        SPAS_CLOSED	= 0,
        SPAS_STOP	= ( SPAS_CLOSED + 1 ) ,
        SPAS_PAUSE	= ( SPAS_STOP + 1 ) ,
        SPAS_RUN	= ( SPAS_PAUSE + 1 ) 
    } 	SPAUDIOSTATE;

typedef /* [hidden][restricted] */ struct SPAUDIOSTATUS
    {
    long cbFreeBuffSpace;
    ULONG cbNonBlockingIO;
    SPAUDIOSTATE State;
    ULONGLONG CurSeekPos;
    ULONGLONG CurDevicePos;
    DWORD dwAudioLevel;
    DWORD dwReserved2;
    } 	SPAUDIOSTATUS;

typedef /* [hidden][restricted] */ struct SPAUDIOBUFFERINFO
    {
    ULONG ulMsMinNotification;
    ULONG ulMsBufferSize;
    ULONG ulMsEventBias;
    } 	SPAUDIOBUFFERINFO;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0017_v0_0_s_ifspec;

#ifndef __ISpAudio_INTERFACE_DEFINED__
#define __ISpAudio_INTERFACE_DEFINED__

/* interface ISpAudio */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C05C768F-FAE8-4EC2-8E07-338321C12452")
    ISpAudio : public ISpStreamFormat
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ SPAUDIOSTATE NewState,
            /* [in] */ ULONGLONG ullReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFormat( 
            /* [in] */ REFGUID rguidFmtId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ SPAUDIOSTATUS *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBufferInfo( 
            /* [in] */ const SPAUDIOBUFFERINFO *pBuffInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBufferInfo( 
            /* [out] */ SPAUDIOBUFFERINFO *pBuffInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultFormat( 
            /* [out] */ GUID *pFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx) = 0;
        
        virtual HANDLE STDMETHODCALLTYPE EventHandle( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVolumeLevel( 
            /* [out] */ ULONG *pLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVolumeLevel( 
            /* [in] */ ULONG Level) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBufferNotifySize( 
            /* [out] */ ULONG *pcbSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBufferNotifySize( 
            /* [in] */ ULONG cbSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpAudioVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpAudio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpAudio * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpAudio * This);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Read)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ISpAudio * This,
            /* [annotation] */ 
            _Out_writes_bytes_to_(cb, *pcbRead)  void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbRead);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Write)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            ISpAudio * This,
            /* [annotation] */ 
            _In_reads_bytes_(cb)  const void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Seek)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            ISpAudio * This,
            /* [in] */ LARGE_INTEGER dlibMove,
            /* [in] */ DWORD dwOrigin,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *plibNewPosition);
        
        DECLSPEC_XFGVIRT(IStream, SetSize)
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ISpAudio * This,
            /* [in] */ ULARGE_INTEGER libNewSize);
        
        DECLSPEC_XFGVIRT(IStream, CopyTo)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            ISpAudio * This,
            /* [annotation][unique][in] */ 
            _In_  IStream *pstm,
            /* [in] */ ULARGE_INTEGER cb,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbRead,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpAudio * This,
            /* [in] */ DWORD grfCommitFlags);
        
        DECLSPEC_XFGVIRT(IStream, Revert)
        HRESULT ( STDMETHODCALLTYPE *Revert )( 
            ISpAudio * This);
        
        DECLSPEC_XFGVIRT(IStream, LockRegion)
        HRESULT ( STDMETHODCALLTYPE *LockRegion )( 
            ISpAudio * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, UnlockRegion)
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )( 
            ISpAudio * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, Stat)
        HRESULT ( STDMETHODCALLTYPE *Stat )( 
            ISpAudio * This,
            /* [out] */ STATSTG *pstatstg,
            /* [in] */ DWORD grfStatFlag);
        
        DECLSPEC_XFGVIRT(IStream, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ISpAudio * This,
            /* [out] */ IStream **ppstm);
        
        DECLSPEC_XFGVIRT(ISpStreamFormat, GetFormat)
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ISpAudio * This,
            GUID *pguidFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetState)
        HRESULT ( STDMETHODCALLTYPE *SetState )( 
            ISpAudio * This,
            /* [in] */ SPAUDIOSTATE NewState,
            /* [in] */ ULONGLONG ullReserved);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetFormat)
        HRESULT ( STDMETHODCALLTYPE *SetFormat )( 
            ISpAudio * This,
            /* [in] */ REFGUID rguidFmtId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetStatus)
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISpAudio * This,
            /* [out] */ SPAUDIOSTATUS *pStatus);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetBufferInfo)
        HRESULT ( STDMETHODCALLTYPE *SetBufferInfo )( 
            ISpAudio * This,
            /* [in] */ const SPAUDIOBUFFERINFO *pBuffInfo);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetBufferInfo)
        HRESULT ( STDMETHODCALLTYPE *GetBufferInfo )( 
            ISpAudio * This,
            /* [out] */ SPAUDIOBUFFERINFO *pBuffInfo);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetDefaultFormat)
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFormat )( 
            ISpAudio * This,
            /* [out] */ GUID *pFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpAudio, EventHandle)
        HANDLE ( STDMETHODCALLTYPE *EventHandle )( 
            ISpAudio * This);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetVolumeLevel)
        HRESULT ( STDMETHODCALLTYPE *GetVolumeLevel )( 
            ISpAudio * This,
            /* [out] */ ULONG *pLevel);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetVolumeLevel)
        HRESULT ( STDMETHODCALLTYPE *SetVolumeLevel )( 
            ISpAudio * This,
            /* [in] */ ULONG Level);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetBufferNotifySize)
        HRESULT ( STDMETHODCALLTYPE *GetBufferNotifySize )( 
            ISpAudio * This,
            /* [out] */ ULONG *pcbSize);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetBufferNotifySize)
        HRESULT ( STDMETHODCALLTYPE *SetBufferNotifySize )( 
            ISpAudio * This,
            /* [in] */ ULONG cbSize);
        
        END_INTERFACE
    } ISpAudioVtbl;

    interface ISpAudio
    {
        CONST_VTBL struct ISpAudioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpAudio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpAudio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpAudio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpAudio_Read(This,pv,cb,pcbRead)	\
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) ) 

#define ISpAudio_Write(This,pv,cb,pcbWritten)	\
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) ) 


#define ISpAudio_Seek(This,dlibMove,dwOrigin,plibNewPosition)	\
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) ) 

#define ISpAudio_SetSize(This,libNewSize)	\
    ( (This)->lpVtbl -> SetSize(This,libNewSize) ) 

#define ISpAudio_CopyTo(This,pstm,cb,pcbRead,pcbWritten)	\
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) ) 

#define ISpAudio_Commit(This,grfCommitFlags)	\
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) ) 

#define ISpAudio_Revert(This)	\
    ( (This)->lpVtbl -> Revert(This) ) 

#define ISpAudio_LockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpAudio_UnlockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpAudio_Stat(This,pstatstg,grfStatFlag)	\
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) ) 

#define ISpAudio_Clone(This,ppstm)	\
    ( (This)->lpVtbl -> Clone(This,ppstm) ) 


#define ISpAudio_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx)	\
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) ) 


#define ISpAudio_SetState(This,NewState,ullReserved)	\
    ( (This)->lpVtbl -> SetState(This,NewState,ullReserved) ) 

#define ISpAudio_SetFormat(This,rguidFmtId,pWaveFormatEx)	\
    ( (This)->lpVtbl -> SetFormat(This,rguidFmtId,pWaveFormatEx) ) 

#define ISpAudio_GetStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pStatus) ) 

#define ISpAudio_SetBufferInfo(This,pBuffInfo)	\
    ( (This)->lpVtbl -> SetBufferInfo(This,pBuffInfo) ) 

#define ISpAudio_GetBufferInfo(This,pBuffInfo)	\
    ( (This)->lpVtbl -> GetBufferInfo(This,pBuffInfo) ) 

#define ISpAudio_GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx)	\
    ( (This)->lpVtbl -> GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx) ) 

#define ISpAudio_EventHandle(This)	\
    ( (This)->lpVtbl -> EventHandle(This) ) 

#define ISpAudio_GetVolumeLevel(This,pLevel)	\
    ( (This)->lpVtbl -> GetVolumeLevel(This,pLevel) ) 

#define ISpAudio_SetVolumeLevel(This,Level)	\
    ( (This)->lpVtbl -> SetVolumeLevel(This,Level) ) 

#define ISpAudio_GetBufferNotifySize(This,pcbSize)	\
    ( (This)->lpVtbl -> GetBufferNotifySize(This,pcbSize) ) 

#define ISpAudio_SetBufferNotifySize(This,cbSize)	\
    ( (This)->lpVtbl -> SetBufferNotifySize(This,cbSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpAudio_INTERFACE_DEFINED__ */


#ifndef __ISpMMSysAudio_INTERFACE_DEFINED__
#define __ISpMMSysAudio_INTERFACE_DEFINED__

/* interface ISpMMSysAudio */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpMMSysAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15806F6E-1D70-4B48-98E6-3B1A007509AB")
    ISpMMSysAudio : public ISpAudio
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDeviceId( 
            /* [out] */ UINT *puDeviceId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDeviceId( 
            /* [in] */ UINT uDeviceId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMMHandle( 
            void **pHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineId( 
            /* [out] */ UINT *puLineId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLineId( 
            /* [in] */ UINT uLineId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpMMSysAudioVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpMMSysAudio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpMMSysAudio * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpMMSysAudio * This);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Read)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ISpMMSysAudio * This,
            /* [annotation] */ 
            _Out_writes_bytes_to_(cb, *pcbRead)  void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbRead);
        
        DECLSPEC_XFGVIRT(ISequentialStream, Write)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            ISpMMSysAudio * This,
            /* [annotation] */ 
            _In_reads_bytes_(cb)  const void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Seek)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            ISpMMSysAudio * This,
            /* [in] */ LARGE_INTEGER dlibMove,
            /* [in] */ DWORD dwOrigin,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *plibNewPosition);
        
        DECLSPEC_XFGVIRT(IStream, SetSize)
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ISpMMSysAudio * This,
            /* [in] */ ULARGE_INTEGER libNewSize);
        
        DECLSPEC_XFGVIRT(IStream, CopyTo)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            ISpMMSysAudio * This,
            /* [annotation][unique][in] */ 
            _In_  IStream *pstm,
            /* [in] */ ULARGE_INTEGER cb,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbRead,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbWritten);
        
        DECLSPEC_XFGVIRT(IStream, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpMMSysAudio * This,
            /* [in] */ DWORD grfCommitFlags);
        
        DECLSPEC_XFGVIRT(IStream, Revert)
        HRESULT ( STDMETHODCALLTYPE *Revert )( 
            ISpMMSysAudio * This);
        
        DECLSPEC_XFGVIRT(IStream, LockRegion)
        HRESULT ( STDMETHODCALLTYPE *LockRegion )( 
            ISpMMSysAudio * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, UnlockRegion)
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )( 
            ISpMMSysAudio * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        DECLSPEC_XFGVIRT(IStream, Stat)
        HRESULT ( STDMETHODCALLTYPE *Stat )( 
            ISpMMSysAudio * This,
            /* [out] */ STATSTG *pstatstg,
            /* [in] */ DWORD grfStatFlag);
        
        DECLSPEC_XFGVIRT(IStream, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ISpMMSysAudio * This,
            /* [out] */ IStream **ppstm);
        
        DECLSPEC_XFGVIRT(ISpStreamFormat, GetFormat)
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ISpMMSysAudio * This,
            GUID *pguidFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetState)
        HRESULT ( STDMETHODCALLTYPE *SetState )( 
            ISpMMSysAudio * This,
            /* [in] */ SPAUDIOSTATE NewState,
            /* [in] */ ULONGLONG ullReserved);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetFormat)
        HRESULT ( STDMETHODCALLTYPE *SetFormat )( 
            ISpMMSysAudio * This,
            /* [in] */ REFGUID rguidFmtId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetStatus)
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISpMMSysAudio * This,
            /* [out] */ SPAUDIOSTATUS *pStatus);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetBufferInfo)
        HRESULT ( STDMETHODCALLTYPE *SetBufferInfo )( 
            ISpMMSysAudio * This,
            /* [in] */ const SPAUDIOBUFFERINFO *pBuffInfo);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetBufferInfo)
        HRESULT ( STDMETHODCALLTYPE *GetBufferInfo )( 
            ISpMMSysAudio * This,
            /* [out] */ SPAUDIOBUFFERINFO *pBuffInfo);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetDefaultFormat)
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFormat )( 
            ISpMMSysAudio * This,
            /* [out] */ GUID *pFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpAudio, EventHandle)
        HANDLE ( STDMETHODCALLTYPE *EventHandle )( 
            ISpMMSysAudio * This);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetVolumeLevel)
        HRESULT ( STDMETHODCALLTYPE *GetVolumeLevel )( 
            ISpMMSysAudio * This,
            /* [out] */ ULONG *pLevel);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetVolumeLevel)
        HRESULT ( STDMETHODCALLTYPE *SetVolumeLevel )( 
            ISpMMSysAudio * This,
            /* [in] */ ULONG Level);
        
        DECLSPEC_XFGVIRT(ISpAudio, GetBufferNotifySize)
        HRESULT ( STDMETHODCALLTYPE *GetBufferNotifySize )( 
            ISpMMSysAudio * This,
            /* [out] */ ULONG *pcbSize);
        
        DECLSPEC_XFGVIRT(ISpAudio, SetBufferNotifySize)
        HRESULT ( STDMETHODCALLTYPE *SetBufferNotifySize )( 
            ISpMMSysAudio * This,
            /* [in] */ ULONG cbSize);
        
        DECLSPEC_XFGVIRT(ISpMMSysAudio, GetDeviceId)
        HRESULT ( STDMETHODCALLTYPE *GetDeviceId )( 
            ISpMMSysAudio * This,
            /* [out] */ UINT *puDeviceId);
        
        DECLSPEC_XFGVIRT(ISpMMSysAudio, SetDeviceId)
        HRESULT ( STDMETHODCALLTYPE *SetDeviceId )( 
            ISpMMSysAudio * This,
            /* [in] */ UINT uDeviceId);
        
        DECLSPEC_XFGVIRT(ISpMMSysAudio, GetMMHandle)
        HRESULT ( STDMETHODCALLTYPE *GetMMHandle )( 
            ISpMMSysAudio * This,
            void **pHandle);
        
        DECLSPEC_XFGVIRT(ISpMMSysAudio, GetLineId)
        HRESULT ( STDMETHODCALLTYPE *GetLineId )( 
            ISpMMSysAudio * This,
            /* [out] */ UINT *puLineId);
        
        DECLSPEC_XFGVIRT(ISpMMSysAudio, SetLineId)
        HRESULT ( STDMETHODCALLTYPE *SetLineId )( 
            ISpMMSysAudio * This,
            /* [in] */ UINT uLineId);
        
        END_INTERFACE
    } ISpMMSysAudioVtbl;

    interface ISpMMSysAudio
    {
        CONST_VTBL struct ISpMMSysAudioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpMMSysAudio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpMMSysAudio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpMMSysAudio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpMMSysAudio_Read(This,pv,cb,pcbRead)	\
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) ) 

#define ISpMMSysAudio_Write(This,pv,cb,pcbWritten)	\
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) ) 


#define ISpMMSysAudio_Seek(This,dlibMove,dwOrigin,plibNewPosition)	\
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) ) 

#define ISpMMSysAudio_SetSize(This,libNewSize)	\
    ( (This)->lpVtbl -> SetSize(This,libNewSize) ) 

#define ISpMMSysAudio_CopyTo(This,pstm,cb,pcbRead,pcbWritten)	\
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) ) 

#define ISpMMSysAudio_Commit(This,grfCommitFlags)	\
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) ) 

#define ISpMMSysAudio_Revert(This)	\
    ( (This)->lpVtbl -> Revert(This) ) 

#define ISpMMSysAudio_LockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpMMSysAudio_UnlockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) ) 

#define ISpMMSysAudio_Stat(This,pstatstg,grfStatFlag)	\
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) ) 

#define ISpMMSysAudio_Clone(This,ppstm)	\
    ( (This)->lpVtbl -> Clone(This,ppstm) ) 


#define ISpMMSysAudio_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx)	\
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) ) 


#define ISpMMSysAudio_SetState(This,NewState,ullReserved)	\
    ( (This)->lpVtbl -> SetState(This,NewState,ullReserved) ) 

#define ISpMMSysAudio_SetFormat(This,rguidFmtId,pWaveFormatEx)	\
    ( (This)->lpVtbl -> SetFormat(This,rguidFmtId,pWaveFormatEx) ) 

#define ISpMMSysAudio_GetStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pStatus) ) 

#define ISpMMSysAudio_SetBufferInfo(This,pBuffInfo)	\
    ( (This)->lpVtbl -> SetBufferInfo(This,pBuffInfo) ) 

#define ISpMMSysAudio_GetBufferInfo(This,pBuffInfo)	\
    ( (This)->lpVtbl -> GetBufferInfo(This,pBuffInfo) ) 

#define ISpMMSysAudio_GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx)	\
    ( (This)->lpVtbl -> GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx) ) 

#define ISpMMSysAudio_EventHandle(This)	\
    ( (This)->lpVtbl -> EventHandle(This) ) 

#define ISpMMSysAudio_GetVolumeLevel(This,pLevel)	\
    ( (This)->lpVtbl -> GetVolumeLevel(This,pLevel) ) 

#define ISpMMSysAudio_SetVolumeLevel(This,Level)	\
    ( (This)->lpVtbl -> SetVolumeLevel(This,Level) ) 

#define ISpMMSysAudio_GetBufferNotifySize(This,pcbSize)	\
    ( (This)->lpVtbl -> GetBufferNotifySize(This,pcbSize) ) 

#define ISpMMSysAudio_SetBufferNotifySize(This,cbSize)	\
    ( (This)->lpVtbl -> SetBufferNotifySize(This,cbSize) ) 


#define ISpMMSysAudio_GetDeviceId(This,puDeviceId)	\
    ( (This)->lpVtbl -> GetDeviceId(This,puDeviceId) ) 

#define ISpMMSysAudio_SetDeviceId(This,uDeviceId)	\
    ( (This)->lpVtbl -> SetDeviceId(This,uDeviceId) ) 

#define ISpMMSysAudio_GetMMHandle(This,pHandle)	\
    ( (This)->lpVtbl -> GetMMHandle(This,pHandle) ) 

#define ISpMMSysAudio_GetLineId(This,puLineId)	\
    ( (This)->lpVtbl -> GetLineId(This,puLineId) ) 

#define ISpMMSysAudio_SetLineId(This,uLineId)	\
    ( (This)->lpVtbl -> SetLineId(This,uLineId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpMMSysAudio_INTERFACE_DEFINED__ */


#ifndef __ISpTranscript_INTERFACE_DEFINED__
#define __ISpTranscript_INTERFACE_DEFINED__

/* interface ISpTranscript */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpTranscript;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10F63BCE-201A-11D3-AC70-00C04F8EE6C0")
    ISpTranscript : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTranscript( 
            /* [string][out][annotation] */ 
            __deref_out  LPWSTR *ppszTranscript) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendTranscript( 
            /* [string][in] */ LPCWSTR pszTranscript) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpTranscriptVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpTranscript * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpTranscript * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpTranscript * This);
        
        DECLSPEC_XFGVIRT(ISpTranscript, GetTranscript)
        HRESULT ( STDMETHODCALLTYPE *GetTranscript )( 
            ISpTranscript * This,
            /* [string][out][annotation] */ 
            __deref_out  LPWSTR *ppszTranscript);
        
        DECLSPEC_XFGVIRT(ISpTranscript, AppendTranscript)
        HRESULT ( STDMETHODCALLTYPE *AppendTranscript )( 
            ISpTranscript * This,
            /* [string][in] */ LPCWSTR pszTranscript);
        
        END_INTERFACE
    } ISpTranscriptVtbl;

    interface ISpTranscript
    {
        CONST_VTBL struct ISpTranscriptVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpTranscript_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpTranscript_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpTranscript_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpTranscript_GetTranscript(This,ppszTranscript)	\
    ( (This)->lpVtbl -> GetTranscript(This,ppszTranscript) ) 

#define ISpTranscript_AppendTranscript(This,pszTranscript)	\
    ( (This)->lpVtbl -> AppendTranscript(This,pszTranscript) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpTranscript_INTERFACE_DEFINED__ */


#ifndef __ISpRIFFChunk_INTERFACE_DEFINED__
#define __ISpRIFFChunk_INTERFACE_DEFINED__

/* interface ISpRIFFChunk */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRIFFChunk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4266C228-6751-4134-A864-4E10F5B7181A")
    ISpRIFFChunk : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChunk( 
            /* [in] */ DWORD chunk,
            /* [out] */ void **ppCoMemBytes,
            /* [out] */ ULONG *pcbSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetChunk( 
            /* [in] */ DWORD chunk,
            /* [in] */ const void *pBytes,
            /* [in] */ ULONG cbSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRIFFChunkVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRIFFChunk * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRIFFChunk * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRIFFChunk * This);
        
        DECLSPEC_XFGVIRT(ISpRIFFChunk, GetChunk)
        HRESULT ( STDMETHODCALLTYPE *GetChunk )( 
            ISpRIFFChunk * This,
            /* [in] */ DWORD chunk,
            /* [out] */ void **ppCoMemBytes,
            /* [out] */ ULONG *pcbSize);
        
        DECLSPEC_XFGVIRT(ISpRIFFChunk, SetChunk)
        HRESULT ( STDMETHODCALLTYPE *SetChunk )( 
            ISpRIFFChunk * This,
            /* [in] */ DWORD chunk,
            /* [in] */ const void *pBytes,
            /* [in] */ ULONG cbSize);
        
        END_INTERFACE
    } ISpRIFFChunkVtbl;

    interface ISpRIFFChunk
    {
        CONST_VTBL struct ISpRIFFChunkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRIFFChunk_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRIFFChunk_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRIFFChunk_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRIFFChunk_GetChunk(This,chunk,ppCoMemBytes,pcbSize)	\
    ( (This)->lpVtbl -> GetChunk(This,chunk,ppCoMemBytes,pcbSize) ) 

#define ISpRIFFChunk_SetChunk(This,chunk,pBytes,cbSize)	\
    ( (This)->lpVtbl -> SetChunk(This,chunk,pBytes,cbSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRIFFChunk_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0021 */
/* [local] */ 

typedef /* [hidden] */ 
enum SPDISPLYATTRIBUTES
    {
        SPAF_ONE_TRAILING_SPACE	= 0x2,
        SPAF_TWO_TRAILING_SPACES	= 0x4,
        SPAF_CONSUME_LEADING_SPACES	= 0x8,
        SPAF_BUFFER_POSITION	= 0x10,
        SPAF_ALL	= 0x1f,
        SPAF_USER_SPECIFIED	= 0x80
    } 	SPDISPLAYATTRIBUTES;

typedef WCHAR SPPHONEID;

typedef LPWSTR PSPPHONEID;

typedef LPCWSTR PCSPPHONEID;

typedef /* [hidden][restricted] */ struct SPPHRASEELEMENT
    {
    ULONG ulAudioTimeOffset;
    ULONG ulAudioSizeTime;
    ULONG ulAudioStreamOffset;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedStreamOffset;
    ULONG ulRetainedSizeBytes;
    LPCWSTR pszDisplayText;
    LPCWSTR pszLexicalForm;
    const SPPHONEID *pszPronunciation;
    BYTE bDisplayAttributes;
    signed char RequiredConfidence;
    signed char ActualConfidence;
    BYTE Reserved;
    float SREngineConfidence;
    } 	SPPHRASEELEMENT;

typedef /* [hidden][restricted] */ struct SPPHRASERULE SPPHRASERULE;

struct SPPHRASERULE
    {
    LPCWSTR pszName;
    ULONG ulId;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    const SPPHRASERULE *pNextSibling;
    const SPPHRASERULE *pFirstChild;
    float SREngineConfidence;
    signed char Confidence;
    } ;
typedef /* [hidden][restricted] */ struct SPPHRASEPROPERTY SPPHRASEPROPERTY;

typedef /* [hidden] */ 
enum SPPHRASEPROPERTYUNIONTYPE
    {
        SPPPUT_UNUSED	= 0,
        SPPPUT_ARRAY_INDEX	= ( SPPPUT_UNUSED + 1 ) ,
        SPPPUT_ARRAY_LENGTH	= ( SPPPUT_ARRAY_INDEX + 1 ) 
    } 	SPPHRASEPROPERTYUNIONTYPE;

struct SPPHRASEPROPERTY
    {
    LPCWSTR pszName;
    union 
        {
        ULONG ulId;
        struct 
            {
            byte bType;
            byte bReserved;
            union 
                {
                unsigned short usArrayIndex;
                unsigned short usArrayLength;
                } 	;
            } 	;
        } 	;
    LPCWSTR pszValue;
    VARIANT vValue;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    const SPPHRASEPROPERTY *pNextSibling;
    const SPPHRASEPROPERTY *pFirstChild;
    float SREngineConfidence;
    signed char Confidence;
    } ;
typedef /* [hidden][restricted] */ struct SPPHRASEREPLACEMENT
    {
    BYTE bDisplayAttributes;
    LPCWSTR pszReplacementText;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    } 	SPPHRASEREPLACEMENT;

typedef /* [hidden][restricted] */ struct SPSEMANTICERRORINFO
    {
    ULONG ulLineNumber;
    LPWSTR pszScriptLine;
    LPWSTR pszSource;
    LPWSTR pszDescription;
    HRESULT hrResultCode;
    } 	SPSEMANTICERRORINFO;

typedef 
enum SPSEMANTICFORMAT
    {
        SPSMF_SAPI_PROPERTIES	= 0,
        SPSMF_SRGS_SEMANTICINTERPRETATION_MS	= 1,
        SPSMF_SRGS_SAPIPROPERTIES	= 2,
        SPSMF_UPS	= 4,
        SPSMF_SRGS_SEMANTICINTERPRETATION_W3C	= 8
    } 	SPSEMANTICFORMAT;

typedef /* [hidden][restricted] */ struct SPPHRASE_50
    {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    } 	SPPHRASE_50;

#define SP_SPPHRASESIZE_500 sizeof(SPPHRASE_50)
#ifdef __cplusplus
typedef struct SPPHRASE_53 : public SPPHRASE_50
{
LPWSTR pSML;
SPSEMANTICERRORINFO *pSemanticErrorInfo;
} SPPHRASE_53;
#else
typedef /* [hidden][restricted] */ struct SPPHRASE_53
    {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    LPWSTR pSML;
    SPSEMANTICERRORINFO *pSemanticErrorInfo;
    } 	SPPHRASE_53;

#endif // __cplusplus
#define SP_SPPHRASESIZE_530 sizeof(SPPHRASE_53)
#ifdef __cplusplus
typedef  struct SPPHRASE_54 : public SPPHRASE_53
{
SPSEMANTICFORMAT SemanticTagFormat;
} SPPHRASE_54;
#else
typedef /* [hidden][restricted] */ struct SPPHRASE_54
    {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    LPWSTR pSML;
    SPSEMANTICERRORINFO *pSemanticErrorInfo;
    SPSEMANTICFORMAT SemanticTagFormat;
    } 	SPPHRASE_54;

#endif // __cplusplus
#define SP_SPPHRASESIZE_540 sizeof(SPPHRASE_54)
#ifdef __cplusplus
typedef  struct SPPHRASE : public SPPHRASE_54
{
LPCWSTR pszGrammarUri;
} SPPHRASE;
#else
typedef /* [hidden][restricted] */ struct SPPHRASE
    {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    LPWSTR pSML;
    SPSEMANTICERRORINFO *pSemanticErrorInfo;
    SPSEMANTICFORMAT SemanticTagFormat;
    LPCWSTR pszGrammarUri;
    } 	SPPHRASE;

#endif // __cplusplus
typedef /* [hidden][restricted] */ struct SPSERIALIZEDPHRASE
    {
    ULONG ulSerializedSize;
    } 	SPSERIALIZEDPHRASE;

typedef /* [hidden][restricted] */ struct SPRULE
    {
    LPCWSTR pszRuleName;
    ULONG ulRuleId;
    DWORD dwAttributes;
    } 	SPRULE;

typedef /* [hidden] */ 
enum SPVALUETYPE
    {
        SPDF_PROPERTY	= 0x1,
        SPDF_REPLACEMENT	= 0x2,
        SPDF_RULE	= 0x4,
        SPDF_DISPLAYTEXT	= 0x8,
        SPDF_LEXICALFORM	= 0x10,
        SPDF_PRONUNCIATION	= 0x20,
        SPDF_AUDIO	= 0x40,
        SPDF_ALTERNATES	= 0x80,
        SPDF_ALL	= 0xff
    } 	SPVALUETYPE;

typedef /* [hidden] */ struct SPBINARYGRAMMAR
    {
    ULONG ulTotalSerializedSize;
    } 	SPBINARYGRAMMAR;

typedef /* [hidden] */ 
enum SPPHRASERNG
    {
        SPPR_ALL_ELEMENTS	= -1
    } 	SPPHRASERNG;

#define SP_GETWHOLEPHRASE SPPR_ALL_ELEMENTS
#define SPRR_ALL_ELEMENTS SPPR_ALL_ELEMENTS
#if 0
typedef void *SPSTATEHANDLE;

#else
DECLARE_HANDLE(SPSTATEHANDLE);
#endif
typedef /* [hidden] */ 
enum SPRECOEVENTFLAGS
    {
        SPREF_AutoPause	= ( 1 << 0 ) ,
        SPREF_Emulated	= ( 1 << 1 ) ,
        SPREF_SMLTimeout	= ( 1 << 2 ) ,
        SPREF_ExtendableParse	= ( 1 << 3 ) ,
        SPREF_ReSent	= ( 1 << 4 ) ,
        SPREF_Hypothesis	= ( 1 << 5 ) ,
        SPREF_FalseRecognition	= ( 1 << 6 ) ,
        SPREF_Simulated	= ( 1 << 7 ) 
    } 	SPRECOEVENTFLAGS;

typedef /* [hidden] */ 
enum SPPARTOFSPEECH
    {
        SPPS_NotOverriden	= -1,
        SPPS_Unknown	= 0,
        SPPS_Noun	= 0x1000,
        SPPS_Verb	= 0x2000,
        SPPS_Modifier	= 0x3000,
        SPPS_Function	= 0x4000,
        SPPS_Interjection	= 0x5000,
        SPPS_Noncontent	= 0x6000,
        SPPS_LMA	= 0x7000,
        SPPS_SuppressWord	= 0xf000
    } 	SPPARTOFSPEECH;

typedef /* [hidden] */ 
enum SPLEXICONTYPE
    {
        eLEXTYPE_USER	= ( 1L << 0 ) ,
        eLEXTYPE_APP	= ( 1L << 1 ) ,
        eLEXTYPE_VENDORLEXICON	= ( 1L << 2 ) ,
        eLEXTYPE_LETTERTOSOUND	= ( 1L << 3 ) ,
        eLEXTYPE_MORPHOLOGY	= ( 1L << 4 ) ,
        eLEXTYPE_GRAMMAR	= ( 1L << 5 ) ,
        eLEXTYPE_USER_SHORTCUT	= ( 1L << 6 ) ,
        eLEXTYPE_RESERVED6	= ( 1L << 7 ) ,
        eLEXTYPE_RESERVED7	= ( 1L << 8 ) ,
        eLEXTYPE_RESERVED8	= ( 1L << 9 ) ,
        eLEXTYPE_RESERVED9	= ( 1L << 10 ) ,
        eLEXTYPE_RESERVED10	= ( 1L << 11 ) ,
        eLEXTYPE_PRIVATE1	= ( 1L << 12 ) ,
        eLEXTYPE_PRIVATE2	= ( 1L << 13 ) ,
        eLEXTYPE_PRIVATE3	= ( 1L << 14 ) ,
        eLEXTYPE_PRIVATE4	= ( 1L << 15 ) ,
        eLEXTYPE_PRIVATE5	= ( 1L << 16 ) ,
        eLEXTYPE_PRIVATE6	= ( 1L << 17 ) ,
        eLEXTYPE_PRIVATE7	= ( 1L << 18 ) ,
        eLEXTYPE_PRIVATE8	= ( 1L << 19 ) ,
        eLEXTYPE_PRIVATE9	= ( 1L << 20 ) ,
        eLEXTYPE_PRIVATE10	= ( 1L << 21 ) ,
        eLEXTYPE_PRIVATE11	= ( 1L << 22 ) ,
        eLEXTYPE_PRIVATE12	= ( 1L << 23 ) ,
        eLEXTYPE_PRIVATE13	= ( 1L << 24 ) ,
        eLEXTYPE_PRIVATE14	= ( 1L << 25 ) ,
        eLEXTYPE_PRIVATE15	= ( 1L << 26 ) ,
        eLEXTYPE_PRIVATE16	= ( 1L << 27 ) ,
        eLEXTYPE_PRIVATE17	= ( 1L << 28 ) ,
        eLEXTYPE_PRIVATE18	= ( 1L << 29 ) ,
        eLEXTYPE_PRIVATE19	= ( 1L << 30 ) ,
        eLEXTYPE_PRIVATE20	= ( 1L << 31 ) 
    } 	SPLEXICONTYPE;

typedef /* [hidden] */ 
enum SPWORDTYPE
    {
        eWORDTYPE_ADDED	= ( 1L << 0 ) ,
        eWORDTYPE_DELETED	= ( 1L << 1 ) 
    } 	SPWORDTYPE;

typedef /* [hidden] */ 
enum SPPRONUNCIATIONFLAGS
    {
        ePRONFLAG_USED	= ( 1 << 0 ) 
    } 	SPPRONUNCIATIONFLAGS;

typedef /* [hidden][restricted] */ struct SPWORDPRONUNCIATION
    {
    struct SPWORDPRONUNCIATION *pNextWordPronunciation;
    SPLEXICONTYPE eLexiconType;
    WORD LangID;
    WORD wPronunciationFlags;
    SPPARTOFSPEECH ePartOfSpeech;
    SPPHONEID szPronunciation[ 1 ];
    } 	SPWORDPRONUNCIATION;

typedef /* [hidden][restricted] */ struct SPWORDPRONUNCIATIONLIST
    {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPWORDPRONUNCIATION *pFirstWordPronunciation;
    } 	SPWORDPRONUNCIATIONLIST;

typedef /* [hidden][restricted] */ struct SPWORD
    {
    struct SPWORD *pNextWord;
    WORD LangID;
    WORD wReserved;
    SPWORDTYPE eWordType;
    LPWSTR pszWord;
    SPWORDPRONUNCIATION *pFirstWordPronunciation;
    } 	SPWORD;

typedef /* [hidden][restricted] */ struct SPWORDLIST
    {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPWORD *pFirstWord;
    } 	SPWORDLIST;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0021_v0_0_s_ifspec;

#ifndef __ISpLexicon_INTERFACE_DEFINED__
#define __ISpLexicon_INTERFACE_DEFINED__

/* interface ISpLexicon */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpLexicon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA41A7C2-5383-4DB2-916B-6C1719E3DB58")
    ISpLexicon : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPronunciations( 
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ SPWORDPRONUNCIATIONLIST *pWordPronunciationList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPronunciation( 
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemovePronunciation( 
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGeneration( 
            DWORD *pdwGeneration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGenerationChange( 
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPWORDLIST *pWordList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWords( 
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in][annotation] */ 
            __inout_opt  DWORD *pdwCookie,
            /* [out][in] */ SPWORDLIST *pWordList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpLexiconVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpLexicon * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpLexicon * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpLexicon * This);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetPronunciations)
        HRESULT ( STDMETHODCALLTYPE *GetPronunciations )( 
            ISpLexicon * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ SPWORDPRONUNCIATIONLIST *pWordPronunciationList);
        
        DECLSPEC_XFGVIRT(ISpLexicon, AddPronunciation)
        HRESULT ( STDMETHODCALLTYPE *AddPronunciation )( 
            ISpLexicon * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation);
        
        DECLSPEC_XFGVIRT(ISpLexicon, RemovePronunciation)
        HRESULT ( STDMETHODCALLTYPE *RemovePronunciation )( 
            ISpLexicon * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetGeneration)
        HRESULT ( STDMETHODCALLTYPE *GetGeneration )( 
            ISpLexicon * This,
            DWORD *pdwGeneration);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetGenerationChange)
        HRESULT ( STDMETHODCALLTYPE *GetGenerationChange )( 
            ISpLexicon * This,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetWords)
        HRESULT ( STDMETHODCALLTYPE *GetWords )( 
            ISpLexicon * This,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in][annotation] */ 
            __inout_opt  DWORD *pdwCookie,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        END_INTERFACE
    } ISpLexiconVtbl;

    interface ISpLexicon
    {
        CONST_VTBL struct ISpLexiconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpLexicon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpLexicon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpLexicon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpLexicon_GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList)	\
    ( (This)->lpVtbl -> GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList) ) 

#define ISpLexicon_AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation)	\
    ( (This)->lpVtbl -> AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) ) 

#define ISpLexicon_RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation)	\
    ( (This)->lpVtbl -> RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) ) 

#define ISpLexicon_GetGeneration(This,pdwGeneration)	\
    ( (This)->lpVtbl -> GetGeneration(This,pdwGeneration) ) 

#define ISpLexicon_GetGenerationChange(This,dwFlags,pdwGeneration,pWordList)	\
    ( (This)->lpVtbl -> GetGenerationChange(This,dwFlags,pdwGeneration,pWordList) ) 

#define ISpLexicon_GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList)	\
    ( (This)->lpVtbl -> GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpLexicon_INTERFACE_DEFINED__ */


#ifndef __ISpContainerLexicon_INTERFACE_DEFINED__
#define __ISpContainerLexicon_INTERFACE_DEFINED__

/* interface ISpContainerLexicon */
/* [restricted][unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_ISpContainerLexicon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8565572F-C094-41CC-B56E-10BD9C3FF044")
    ISpContainerLexicon : public ISpLexicon
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddLexicon( 
            /* [in] */ ISpLexicon *pAddLexicon,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpContainerLexiconVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpContainerLexicon * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpContainerLexicon * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpContainerLexicon * This);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetPronunciations)
        HRESULT ( STDMETHODCALLTYPE *GetPronunciations )( 
            ISpContainerLexicon * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ SPWORDPRONUNCIATIONLIST *pWordPronunciationList);
        
        DECLSPEC_XFGVIRT(ISpLexicon, AddPronunciation)
        HRESULT ( STDMETHODCALLTYPE *AddPronunciation )( 
            ISpContainerLexicon * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation);
        
        DECLSPEC_XFGVIRT(ISpLexicon, RemovePronunciation)
        HRESULT ( STDMETHODCALLTYPE *RemovePronunciation )( 
            ISpContainerLexicon * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetGeneration)
        HRESULT ( STDMETHODCALLTYPE *GetGeneration )( 
            ISpContainerLexicon * This,
            DWORD *pdwGeneration);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetGenerationChange)
        HRESULT ( STDMETHODCALLTYPE *GetGenerationChange )( 
            ISpContainerLexicon * This,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetWords)
        HRESULT ( STDMETHODCALLTYPE *GetWords )( 
            ISpContainerLexicon * This,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in][annotation] */ 
            __inout_opt  DWORD *pdwCookie,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        DECLSPEC_XFGVIRT(ISpContainerLexicon, AddLexicon)
        HRESULT ( STDMETHODCALLTYPE *AddLexicon )( 
            ISpContainerLexicon * This,
            /* [in] */ ISpLexicon *pAddLexicon,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } ISpContainerLexiconVtbl;

    interface ISpContainerLexicon
    {
        CONST_VTBL struct ISpContainerLexiconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpContainerLexicon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpContainerLexicon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpContainerLexicon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpContainerLexicon_GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList)	\
    ( (This)->lpVtbl -> GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList) ) 

#define ISpContainerLexicon_AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation)	\
    ( (This)->lpVtbl -> AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) ) 

#define ISpContainerLexicon_RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation)	\
    ( (This)->lpVtbl -> RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) ) 

#define ISpContainerLexicon_GetGeneration(This,pdwGeneration)	\
    ( (This)->lpVtbl -> GetGeneration(This,pdwGeneration) ) 

#define ISpContainerLexicon_GetGenerationChange(This,dwFlags,pdwGeneration,pWordList)	\
    ( (This)->lpVtbl -> GetGenerationChange(This,dwFlags,pdwGeneration,pWordList) ) 

#define ISpContainerLexicon_GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList)	\
    ( (This)->lpVtbl -> GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList) ) 


#define ISpContainerLexicon_AddLexicon(This,pAddLexicon,dwFlags)	\
    ( (This)->lpVtbl -> AddLexicon(This,pAddLexicon,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpContainerLexicon_INTERFACE_DEFINED__ */


#ifndef __ISpLexicon2_INTERFACE_DEFINED__
#define __ISpLexicon2_INTERFACE_DEFINED__

/* interface ISpLexicon2 */
/* [restricted][unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_ISpLexicon2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCFC449-4F88-4b5d-B06D-2161A5FF4A56")
    ISpLexicon2 : public ISpLexicon
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadLexiconFromFile( 
            /* [in] */ LPCWSTR pszFileName,
            DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadLexiconFromStream( 
            IStream *pStream,
            DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveLexiconToFile( 
            /* [in] */ LPCWSTR pszFileName,
            DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveLexiconToStream( 
            IStream *pStream,
            DWORD dwReserved) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpLexicon2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpLexicon2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpLexicon2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpLexicon2 * This);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetPronunciations)
        HRESULT ( STDMETHODCALLTYPE *GetPronunciations )( 
            ISpLexicon2 * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ SPWORDPRONUNCIATIONLIST *pWordPronunciationList);
        
        DECLSPEC_XFGVIRT(ISpLexicon, AddPronunciation)
        HRESULT ( STDMETHODCALLTYPE *AddPronunciation )( 
            ISpLexicon2 * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation);
        
        DECLSPEC_XFGVIRT(ISpLexicon, RemovePronunciation)
        HRESULT ( STDMETHODCALLTYPE *RemovePronunciation )( 
            ISpLexicon2 * This,
            /* [in] */ LPCWSTR pszWord,
            /* [in] */ WORD LangID,
            /* [in] */ SPPARTOFSPEECH ePartOfSpeech,
            /* [in][annotation] */ 
            __in_opt  PCSPPHONEID pszPronunciation);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetGeneration)
        HRESULT ( STDMETHODCALLTYPE *GetGeneration )( 
            ISpLexicon2 * This,
            DWORD *pdwGeneration);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetGenerationChange)
        HRESULT ( STDMETHODCALLTYPE *GetGenerationChange )( 
            ISpLexicon2 * This,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        DECLSPEC_XFGVIRT(ISpLexicon, GetWords)
        HRESULT ( STDMETHODCALLTYPE *GetWords )( 
            ISpLexicon2 * This,
            /* [in] */ DWORD dwFlags,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in][annotation] */ 
            __inout_opt  DWORD *pdwCookie,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        DECLSPEC_XFGVIRT(ISpLexicon2, LoadLexiconFromFile)
        HRESULT ( STDMETHODCALLTYPE *LoadLexiconFromFile )( 
            ISpLexicon2 * This,
            /* [in] */ LPCWSTR pszFileName,
            DWORD dwReserved);
        
        DECLSPEC_XFGVIRT(ISpLexicon2, LoadLexiconFromStream)
        HRESULT ( STDMETHODCALLTYPE *LoadLexiconFromStream )( 
            ISpLexicon2 * This,
            IStream *pStream,
            DWORD dwReserved);
        
        DECLSPEC_XFGVIRT(ISpLexicon2, SaveLexiconToFile)
        HRESULT ( STDMETHODCALLTYPE *SaveLexiconToFile )( 
            ISpLexicon2 * This,
            /* [in] */ LPCWSTR pszFileName,
            DWORD dwReserved);
        
        DECLSPEC_XFGVIRT(ISpLexicon2, SaveLexiconToStream)
        HRESULT ( STDMETHODCALLTYPE *SaveLexiconToStream )( 
            ISpLexicon2 * This,
            IStream *pStream,
            DWORD dwReserved);
        
        END_INTERFACE
    } ISpLexicon2Vtbl;

    interface ISpLexicon2
    {
        CONST_VTBL struct ISpLexicon2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpLexicon2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpLexicon2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpLexicon2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpLexicon2_GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList)	\
    ( (This)->lpVtbl -> GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList) ) 

#define ISpLexicon2_AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation)	\
    ( (This)->lpVtbl -> AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) ) 

#define ISpLexicon2_RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation)	\
    ( (This)->lpVtbl -> RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) ) 

#define ISpLexicon2_GetGeneration(This,pdwGeneration)	\
    ( (This)->lpVtbl -> GetGeneration(This,pdwGeneration) ) 

#define ISpLexicon2_GetGenerationChange(This,dwFlags,pdwGeneration,pWordList)	\
    ( (This)->lpVtbl -> GetGenerationChange(This,dwFlags,pdwGeneration,pWordList) ) 

#define ISpLexicon2_GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList)	\
    ( (This)->lpVtbl -> GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList) ) 


#define ISpLexicon2_LoadLexiconFromFile(This,pszFileName,dwReserved)	\
    ( (This)->lpVtbl -> LoadLexiconFromFile(This,pszFileName,dwReserved) ) 

#define ISpLexicon2_LoadLexiconFromStream(This,pStream,dwReserved)	\
    ( (This)->lpVtbl -> LoadLexiconFromStream(This,pStream,dwReserved) ) 

#define ISpLexicon2_SaveLexiconToFile(This,pszFileName,dwReserved)	\
    ( (This)->lpVtbl -> SaveLexiconToFile(This,pszFileName,dwReserved) ) 

#define ISpLexicon2_SaveLexiconToStream(This,pStream,dwReserved)	\
    ( (This)->lpVtbl -> SaveLexiconToStream(This,pStream,dwReserved) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpLexicon2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0024 */
/* [local] */ 

typedef /* [hidden] */ 
enum SPSHORTCUTTYPE
    {
        SPSHT_NotOverriden	= -1,
        SPSHT_Unknown	= 0,
        SPSHT_EMAIL	= 0x1000,
        SPSHT_OTHER	= 0x2000,
        SPPS_RESERVED1	= 0x3000,
        SPPS_RESERVED2	= 0x4000,
        SPPS_RESERVED3	= 0x5000,
        SPPS_RESERVED4	= 0xf000
    } 	SPSHORTCUTTYPE;

typedef /* [hidden][restricted] */ struct SPSHORTCUTPAIR
    {
    struct SPSHORTCUTPAIR *pNextSHORTCUTPAIR;
    WORD LangID;
    SPSHORTCUTTYPE shType;
    LPWSTR pszDisplay;
    LPWSTR pszSpoken;
    } 	SPSHORTCUTPAIR;

typedef /* [hidden][restricted] */ struct SPSHORTCUTPAIRLIST
    {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPSHORTCUTPAIR *pFirstShortcutPair;
    } 	SPSHORTCUTPAIRLIST;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0024_v0_0_s_ifspec;

#ifndef __ISpShortcut_INTERFACE_DEFINED__
#define __ISpShortcut_INTERFACE_DEFINED__

/* interface ISpShortcut */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpShortcut;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3DF681E2-EA56-11D9-8BDE-F66BAD1E3F3A")
    ISpShortcut : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddShortcut( 
            /* [in] */ LPCWSTR pszDisplay,
            /* [in] */ WORD LangID,
            /* [in] */ LPCWSTR pszSpoken,
            /* [in] */ SPSHORTCUTTYPE shType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveShortcut( 
            /* [in] */ LPCWSTR pszDisplay,
            /* [in] */ WORD LangID,
            /* [in] */ LPCWSTR pszSpoken,
            /* [in] */ SPSHORTCUTTYPE shType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShortcuts( 
            /* [in] */ WORD LangID,
            /* [out][in] */ SPSHORTCUTPAIRLIST *pShortcutpairList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGeneration( 
            DWORD *pdwGeneration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWordsFromGenerationChange( 
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPWORDLIST *pWordList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWords( 
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ DWORD *pdwCookie,
            /* [out][in] */ SPWORDLIST *pWordList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShortcutsForGeneration( 
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ DWORD *pdwCookie,
            /* [out][in] */ SPSHORTCUTPAIRLIST *pShortcutpairList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGenerationChange( 
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPSHORTCUTPAIRLIST *pShortcutpairList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpShortcutVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpShortcut * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpShortcut * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpShortcut * This);
        
        DECLSPEC_XFGVIRT(ISpShortcut, AddShortcut)
        HRESULT ( STDMETHODCALLTYPE *AddShortcut )( 
            ISpShortcut * This,
            /* [in] */ LPCWSTR pszDisplay,
            /* [in] */ WORD LangID,
            /* [in] */ LPCWSTR pszSpoken,
            /* [in] */ SPSHORTCUTTYPE shType);
        
        DECLSPEC_XFGVIRT(ISpShortcut, RemoveShortcut)
        HRESULT ( STDMETHODCALLTYPE *RemoveShortcut )( 
            ISpShortcut * This,
            /* [in] */ LPCWSTR pszDisplay,
            /* [in] */ WORD LangID,
            /* [in] */ LPCWSTR pszSpoken,
            /* [in] */ SPSHORTCUTTYPE shType);
        
        DECLSPEC_XFGVIRT(ISpShortcut, GetShortcuts)
        HRESULT ( STDMETHODCALLTYPE *GetShortcuts )( 
            ISpShortcut * This,
            /* [in] */ WORD LangID,
            /* [out][in] */ SPSHORTCUTPAIRLIST *pShortcutpairList);
        
        DECLSPEC_XFGVIRT(ISpShortcut, GetGeneration)
        HRESULT ( STDMETHODCALLTYPE *GetGeneration )( 
            ISpShortcut * This,
            DWORD *pdwGeneration);
        
        DECLSPEC_XFGVIRT(ISpShortcut, GetWordsFromGenerationChange)
        HRESULT ( STDMETHODCALLTYPE *GetWordsFromGenerationChange )( 
            ISpShortcut * This,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        DECLSPEC_XFGVIRT(ISpShortcut, GetWords)
        HRESULT ( STDMETHODCALLTYPE *GetWords )( 
            ISpShortcut * This,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ DWORD *pdwCookie,
            /* [out][in] */ SPWORDLIST *pWordList);
        
        DECLSPEC_XFGVIRT(ISpShortcut, GetShortcutsForGeneration)
        HRESULT ( STDMETHODCALLTYPE *GetShortcutsForGeneration )( 
            ISpShortcut * This,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ DWORD *pdwCookie,
            /* [out][in] */ SPSHORTCUTPAIRLIST *pShortcutpairList);
        
        DECLSPEC_XFGVIRT(ISpShortcut, GetGenerationChange)
        HRESULT ( STDMETHODCALLTYPE *GetGenerationChange )( 
            ISpShortcut * This,
            /* [out][in] */ DWORD *pdwGeneration,
            /* [out][in] */ SPSHORTCUTPAIRLIST *pShortcutpairList);
        
        END_INTERFACE
    } ISpShortcutVtbl;

    interface ISpShortcut
    {
        CONST_VTBL struct ISpShortcutVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpShortcut_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpShortcut_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpShortcut_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpShortcut_AddShortcut(This,pszDisplay,LangID,pszSpoken,shType)	\
    ( (This)->lpVtbl -> AddShortcut(This,pszDisplay,LangID,pszSpoken,shType) ) 

#define ISpShortcut_RemoveShortcut(This,pszDisplay,LangID,pszSpoken,shType)	\
    ( (This)->lpVtbl -> RemoveShortcut(This,pszDisplay,LangID,pszSpoken,shType) ) 

#define ISpShortcut_GetShortcuts(This,LangID,pShortcutpairList)	\
    ( (This)->lpVtbl -> GetShortcuts(This,LangID,pShortcutpairList) ) 

#define ISpShortcut_GetGeneration(This,pdwGeneration)	\
    ( (This)->lpVtbl -> GetGeneration(This,pdwGeneration) ) 

#define ISpShortcut_GetWordsFromGenerationChange(This,pdwGeneration,pWordList)	\
    ( (This)->lpVtbl -> GetWordsFromGenerationChange(This,pdwGeneration,pWordList) ) 

#define ISpShortcut_GetWords(This,pdwGeneration,pdwCookie,pWordList)	\
    ( (This)->lpVtbl -> GetWords(This,pdwGeneration,pdwCookie,pWordList) ) 

#define ISpShortcut_GetShortcutsForGeneration(This,pdwGeneration,pdwCookie,pShortcutpairList)	\
    ( (This)->lpVtbl -> GetShortcutsForGeneration(This,pdwGeneration,pdwCookie,pShortcutpairList) ) 

#define ISpShortcut_GetGenerationChange(This,pdwGeneration,pShortcutpairList)	\
    ( (This)->lpVtbl -> GetGenerationChange(This,pdwGeneration,pShortcutpairList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpShortcut_INTERFACE_DEFINED__ */


#ifndef __ISpPhoneConverter_INTERFACE_DEFINED__
#define __ISpPhoneConverter_INTERFACE_DEFINED__

/* interface ISpPhoneConverter */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpPhoneConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8445C581-0CAC-4A38-ABFE-9B2CE2826455")
    ISpPhoneConverter : public ISpObjectWithToken
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PhoneToId( 
            /* [in] */ LPCWSTR pszPhone,
            /* [out][annotation] */ 
            __out  SPPHONEID *pId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IdToPhone( 
            /* [in] */ PCSPPHONEID pId,
            /* [out][annotation] */ 
            __out  WCHAR *pszPhone) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPhoneConverterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpPhoneConverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpPhoneConverter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpPhoneConverter * This);
        
        DECLSPEC_XFGVIRT(ISpObjectWithToken, SetObjectToken)
        HRESULT ( STDMETHODCALLTYPE *SetObjectToken )( 
            ISpPhoneConverter * This,
            ISpObjectToken *pToken);
        
        DECLSPEC_XFGVIRT(ISpObjectWithToken, GetObjectToken)
        HRESULT ( STDMETHODCALLTYPE *GetObjectToken )( 
            ISpPhoneConverter * This,
            ISpObjectToken **ppToken);
        
        DECLSPEC_XFGVIRT(ISpPhoneConverter, PhoneToId)
        HRESULT ( STDMETHODCALLTYPE *PhoneToId )( 
            ISpPhoneConverter * This,
            /* [in] */ LPCWSTR pszPhone,
            /* [out][annotation] */ 
            __out  SPPHONEID *pId);
        
        DECLSPEC_XFGVIRT(ISpPhoneConverter, IdToPhone)
        HRESULT ( STDMETHODCALLTYPE *IdToPhone )( 
            ISpPhoneConverter * This,
            /* [in] */ PCSPPHONEID pId,
            /* [out][annotation] */ 
            __out  WCHAR *pszPhone);
        
        END_INTERFACE
    } ISpPhoneConverterVtbl;

    interface ISpPhoneConverter
    {
        CONST_VTBL struct ISpPhoneConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpPhoneConverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpPhoneConverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpPhoneConverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpPhoneConverter_SetObjectToken(This,pToken)	\
    ( (This)->lpVtbl -> SetObjectToken(This,pToken) ) 

#define ISpPhoneConverter_GetObjectToken(This,ppToken)	\
    ( (This)->lpVtbl -> GetObjectToken(This,ppToken) ) 


#define ISpPhoneConverter_PhoneToId(This,pszPhone,pId)	\
    ( (This)->lpVtbl -> PhoneToId(This,pszPhone,pId) ) 

#define ISpPhoneConverter_IdToPhone(This,pId,pszPhone)	\
    ( (This)->lpVtbl -> IdToPhone(This,pId,pszPhone) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpPhoneConverter_INTERFACE_DEFINED__ */


#ifndef __ISpPhoneticAlphabetConverter_INTERFACE_DEFINED__
#define __ISpPhoneticAlphabetConverter_INTERFACE_DEFINED__

/* interface ISpPhoneticAlphabetConverter */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpPhoneticAlphabetConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("133ADCD4-19B4-4020-9FDC-842E78253B17")
    ISpPhoneticAlphabetConverter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLangId( 
            /* [out][annotation] */ 
            __out_ecount(1)  WORD *pLangID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLangId( 
            WORD LangID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SAPI2UPS( 
            /* [in][annotation] */ 
            __in_z  const SPPHONEID *pszSAPIId,
            /* [out][annotation] */ 
            __out_ecount_z(cMaxLength)  SPPHONEID *pszUPSId,
            DWORD cMaxLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UPS2SAPI( 
            /* [in][annotation] */ 
            __in_z  const SPPHONEID *pszUPSId,
            /* [out][annotation] */ 
            __out_ecount_z(cMaxLength)  SPPHONEID *pszSAPIId,
            DWORD cMaxLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxConvertLength( 
            DWORD cSrcLength,
            BOOL bSAPI2UPS,
            /* [out][annotation] */ 
            __out_ecount(1)  DWORD *pcMaxDestLength) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPhoneticAlphabetConverterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpPhoneticAlphabetConverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpPhoneticAlphabetConverter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpPhoneticAlphabetConverter * This);
        
        DECLSPEC_XFGVIRT(ISpPhoneticAlphabetConverter, GetLangId)
        HRESULT ( STDMETHODCALLTYPE *GetLangId )( 
            ISpPhoneticAlphabetConverter * This,
            /* [out][annotation] */ 
            __out_ecount(1)  WORD *pLangID);
        
        DECLSPEC_XFGVIRT(ISpPhoneticAlphabetConverter, SetLangId)
        HRESULT ( STDMETHODCALLTYPE *SetLangId )( 
            ISpPhoneticAlphabetConverter * This,
            WORD LangID);
        
        DECLSPEC_XFGVIRT(ISpPhoneticAlphabetConverter, SAPI2UPS)
        HRESULT ( STDMETHODCALLTYPE *SAPI2UPS )( 
            ISpPhoneticAlphabetConverter * This,
            /* [in][annotation] */ 
            __in_z  const SPPHONEID *pszSAPIId,
            /* [out][annotation] */ 
            __out_ecount_z(cMaxLength)  SPPHONEID *pszUPSId,
            DWORD cMaxLength);
        
        DECLSPEC_XFGVIRT(ISpPhoneticAlphabetConverter, UPS2SAPI)
        HRESULT ( STDMETHODCALLTYPE *UPS2SAPI )( 
            ISpPhoneticAlphabetConverter * This,
            /* [in][annotation] */ 
            __in_z  const SPPHONEID *pszUPSId,
            /* [out][annotation] */ 
            __out_ecount_z(cMaxLength)  SPPHONEID *pszSAPIId,
            DWORD cMaxLength);
        
        DECLSPEC_XFGVIRT(ISpPhoneticAlphabetConverter, GetMaxConvertLength)
        HRESULT ( STDMETHODCALLTYPE *GetMaxConvertLength )( 
            ISpPhoneticAlphabetConverter * This,
            DWORD cSrcLength,
            BOOL bSAPI2UPS,
            /* [out][annotation] */ 
            __out_ecount(1)  DWORD *pcMaxDestLength);
        
        END_INTERFACE
    } ISpPhoneticAlphabetConverterVtbl;

    interface ISpPhoneticAlphabetConverter
    {
        CONST_VTBL struct ISpPhoneticAlphabetConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpPhoneticAlphabetConverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpPhoneticAlphabetConverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpPhoneticAlphabetConverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpPhoneticAlphabetConverter_GetLangId(This,pLangID)	\
    ( (This)->lpVtbl -> GetLangId(This,pLangID) ) 

#define ISpPhoneticAlphabetConverter_SetLangId(This,LangID)	\
    ( (This)->lpVtbl -> SetLangId(This,LangID) ) 

#define ISpPhoneticAlphabetConverter_SAPI2UPS(This,pszSAPIId,pszUPSId,cMaxLength)	\
    ( (This)->lpVtbl -> SAPI2UPS(This,pszSAPIId,pszUPSId,cMaxLength) ) 

#define ISpPhoneticAlphabetConverter_UPS2SAPI(This,pszUPSId,pszSAPIId,cMaxLength)	\
    ( (This)->lpVtbl -> UPS2SAPI(This,pszUPSId,pszSAPIId,cMaxLength) ) 

#define ISpPhoneticAlphabetConverter_GetMaxConvertLength(This,cSrcLength,bSAPI2UPS,pcMaxDestLength)	\
    ( (This)->lpVtbl -> GetMaxConvertLength(This,cSrcLength,bSAPI2UPS,pcMaxDestLength) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpPhoneticAlphabetConverter_INTERFACE_DEFINED__ */


#ifndef __ISpPhoneticAlphabetSelection_INTERFACE_DEFINED__
#define __ISpPhoneticAlphabetSelection_INTERFACE_DEFINED__

/* interface ISpPhoneticAlphabetSelection */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpPhoneticAlphabetSelection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2745EFD-42CE-48ca-81F1-A96E02538A90")
    ISpPhoneticAlphabetSelection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsAlphabetUPS( 
            /* [out] */ BOOL *pfIsUPS) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAlphabetToUPS( 
            BOOL fForceUPS) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPhoneticAlphabetSelectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpPhoneticAlphabetSelection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpPhoneticAlphabetSelection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpPhoneticAlphabetSelection * This);
        
        DECLSPEC_XFGVIRT(ISpPhoneticAlphabetSelection, IsAlphabetUPS)
        HRESULT ( STDMETHODCALLTYPE *IsAlphabetUPS )( 
            ISpPhoneticAlphabetSelection * This,
            /* [out] */ BOOL *pfIsUPS);
        
        DECLSPEC_XFGVIRT(ISpPhoneticAlphabetSelection, SetAlphabetToUPS)
        HRESULT ( STDMETHODCALLTYPE *SetAlphabetToUPS )( 
            ISpPhoneticAlphabetSelection * This,
            BOOL fForceUPS);
        
        END_INTERFACE
    } ISpPhoneticAlphabetSelectionVtbl;

    interface ISpPhoneticAlphabetSelection
    {
        CONST_VTBL struct ISpPhoneticAlphabetSelectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpPhoneticAlphabetSelection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpPhoneticAlphabetSelection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpPhoneticAlphabetSelection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpPhoneticAlphabetSelection_IsAlphabetUPS(This,pfIsUPS)	\
    ( (This)->lpVtbl -> IsAlphabetUPS(This,pfIsUPS) ) 

#define ISpPhoneticAlphabetSelection_SetAlphabetToUPS(This,fForceUPS)	\
    ( (This)->lpVtbl -> SetAlphabetToUPS(This,fForceUPS) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpPhoneticAlphabetSelection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0028 */
/* [local] */ 

typedef /* [hidden][restricted] */ struct SPVPITCH
    {
    long MiddleAdj;
    long RangeAdj;
    } 	SPVPITCH;

typedef /* [hidden] */ 
enum SPVACTIONS
    {
        SPVA_Speak	= 0,
        SPVA_Silence	= ( SPVA_Speak + 1 ) ,
        SPVA_Pronounce	= ( SPVA_Silence + 1 ) ,
        SPVA_Bookmark	= ( SPVA_Pronounce + 1 ) ,
        SPVA_SpellOut	= ( SPVA_Bookmark + 1 ) ,
        SPVA_Section	= ( SPVA_SpellOut + 1 ) ,
        SPVA_ParseUnknownTag	= ( SPVA_Section + 1 ) 
    } 	SPVACTIONS;

typedef /* [hidden][restricted] */ struct SPVCONTEXT
    {
    LPCWSTR pCategory;
    LPCWSTR pBefore;
    LPCWSTR pAfter;
    } 	SPVCONTEXT;

typedef /* [hidden][restricted] */ struct SPVSTATE
    {
    SPVACTIONS eAction;
    WORD LangID;
    WORD wReserved;
    long EmphAdj;
    long RateAdj;
    ULONG Volume;
    SPVPITCH PitchAdj;
    ULONG SilenceMSecs;
    SPPHONEID *pPhoneIds;
    SPPARTOFSPEECH ePartOfSpeech;
    SPVCONTEXT Context;
    } 	SPVSTATE;

typedef /* [hidden] */ 
enum SPRUNSTATE
    {
        SPRS_DONE	= ( 1L << 0 ) ,
        SPRS_IS_SPEAKING	= ( 1L << 1 ) 
    } 	SPRUNSTATE;

typedef /* [hidden] */ 
enum SPVLIMITS
    {
        SPMIN_VOLUME	= 0,
        SPMAX_VOLUME	= 100,
        SPMIN_RATE	= -10,
        SPMAX_RATE	= 10
    } 	SPVLIMITS;

typedef /* [hidden] */ 
enum SPVPRIORITY
    {
        SPVPRI_NORMAL	= 0,
        SPVPRI_ALERT	= ( 1L << 0 ) ,
        SPVPRI_OVER	= ( 1L << 1 ) 
    } 	SPVPRIORITY;

typedef /* [hidden][restricted] */ struct SPVOICESTATUS
    {
    ULONG ulCurrentStream;
    ULONG ulLastStreamQueued;
    HRESULT hrLastResult;
    DWORD dwRunningState;
    ULONG ulInputWordPos;
    ULONG ulInputWordLen;
    ULONG ulInputSentPos;
    ULONG ulInputSentLen;
    LONG lBookmarkId;
    SPPHONEID PhonemeId;
    SPVISEMES VisemeId;
    DWORD dwReserved1;
    DWORD dwReserved2;
    } 	SPVOICESTATUS;

typedef /* [hidden] */ 
enum SPEAKFLAGS
    {
        SPF_DEFAULT	= 0,
        SPF_ASYNC	= ( 1L << 0 ) ,
        SPF_PURGEBEFORESPEAK	= ( 1L << 1 ) ,
        SPF_IS_FILENAME	= ( 1L << 2 ) ,
        SPF_IS_XML	= ( 1L << 3 ) ,
        SPF_IS_NOT_XML	= ( 1L << 4 ) ,
        SPF_PERSIST_XML	= ( 1L << 5 ) ,
        SPF_NLP_SPEAK_PUNC	= ( 1L << 6 ) ,
        SPF_PARSE_SAPI	= ( 1L << 7 ) ,
        SPF_PARSE_SSML	= ( 1L << 8 ) ,
        SPF_PARSE_AUTODETECT	= 0,
        SPF_NLP_MASK	= SPF_NLP_SPEAK_PUNC,
        SPF_PARSE_MASK	= ( SPF_PARSE_SAPI | SPF_PARSE_SSML ) ,
        SPF_VOICE_MASK	= ( ( ( ( ( ( ( SPF_ASYNC | SPF_PURGEBEFORESPEAK )  | SPF_IS_FILENAME )  | SPF_IS_XML )  | SPF_IS_NOT_XML )  | SPF_NLP_MASK )  | SPF_PERSIST_XML )  | SPF_PARSE_MASK ) ,
        SPF_UNUSED_FLAGS	= ~SPF_VOICE_MASK
    } 	SPEAKFLAGS;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0028_v0_0_s_ifspec;

#ifndef __ISpPromptVoice_INTERFACE_DEFINED__
#define __ISpPromptVoice_INTERFACE_DEFINED__

/* interface ISpPromptVoice */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpPromptVoice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CABE307A-DDD1-4650-A3AA-3A5E8DCE91AF")
    ISpPromptVoice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBackupVoice( 
            /* [in] */ ISpObjectToken *pToken,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadDatabase( 
            /* [string][in] */ LPCWSTR pwcsLocalName,
            /* [string][in] */ LPCWSTR pwcsAlias,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnloadDatabase( 
            /* [string][in] */ LPCWSTR pwcsAlias,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetResourceLoader( 
            /* [in] */ ISpeechResourceLoader *pLoader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPromptVoiceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpPromptVoice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpPromptVoice * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpPromptVoice * This);
        
        DECLSPEC_XFGVIRT(ISpPromptVoice, SetBackupVoice)
        HRESULT ( STDMETHODCALLTYPE *SetBackupVoice )( 
            ISpPromptVoice * This,
            /* [in] */ ISpObjectToken *pToken,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(ISpPromptVoice, LoadDatabase)
        HRESULT ( STDMETHODCALLTYPE *LoadDatabase )( 
            ISpPromptVoice * This,
            /* [string][in] */ LPCWSTR pwcsLocalName,
            /* [string][in] */ LPCWSTR pwcsAlias,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(ISpPromptVoice, UnloadDatabase)
        HRESULT ( STDMETHODCALLTYPE *UnloadDatabase )( 
            ISpPromptVoice * This,
            /* [string][in] */ LPCWSTR pwcsAlias,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(ISpPromptVoice, SetResourceLoader)
        HRESULT ( STDMETHODCALLTYPE *SetResourceLoader )( 
            ISpPromptVoice * This,
            /* [in] */ ISpeechResourceLoader *pLoader);
        
        END_INTERFACE
    } ISpPromptVoiceVtbl;

    interface ISpPromptVoice
    {
        CONST_VTBL struct ISpPromptVoiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpPromptVoice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpPromptVoice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpPromptVoice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpPromptVoice_SetBackupVoice(This,pToken,dwFlags)	\
    ( (This)->lpVtbl -> SetBackupVoice(This,pToken,dwFlags) ) 

#define ISpPromptVoice_LoadDatabase(This,pwcsLocalName,pwcsAlias,dwFlags)	\
    ( (This)->lpVtbl -> LoadDatabase(This,pwcsLocalName,pwcsAlias,dwFlags) ) 

#define ISpPromptVoice_UnloadDatabase(This,pwcsAlias,dwFlags)	\
    ( (This)->lpVtbl -> UnloadDatabase(This,pwcsAlias,dwFlags) ) 

#define ISpPromptVoice_SetResourceLoader(This,pLoader)	\
    ( (This)->lpVtbl -> SetResourceLoader(This,pLoader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpPromptVoice_INTERFACE_DEFINED__ */


#ifndef __ISpVoice_INTERFACE_DEFINED__
#define __ISpVoice_INTERFACE_DEFINED__

/* interface ISpVoice */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpVoice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C44DF74-72B9-4992-A1EC-EF996E0422D4")
    ISpVoice : public ISpEventSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOutput( 
            /* [in] */ IUnknown *pUnkOutput,
            /* [in] */ BOOL fAllowFormatChanges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputObjectToken( 
            /* [out] */ ISpObjectToken **ppObjectToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputStream( 
            /* [out] */ ISpStreamFormat **ppStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVoice( 
            /* [in] */ ISpObjectToken *pToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVoice( 
            /* [out] */ ISpObjectToken **ppToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Speak( 
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pwcs,
            /* [in] */ DWORD dwFlags,
            /* [out][annotation] */ 
            __out_opt  ULONG *pulStreamNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SpeakStream( 
            /* [in] */ IStream *pStream,
            /* [in] */ DWORD dwFlags,
            /* [out][annotation] */ 
            __out_opt  ULONG *pulStreamNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ SPVOICESTATUS *pStatus,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszLastBookmark) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [string][in] */ LPCWSTR pItemType,
            /* [in] */ long lNumItems,
            /* [out] */ ULONG *pulNumSkipped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPriority( 
            /* [in] */ SPVPRIORITY ePriority) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPriority( 
            /* [out] */ SPVPRIORITY *pePriority) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAlertBoundary( 
            /* [in] */ SPEVENTENUM eBoundary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAlertBoundary( 
            /* [out] */ SPEVENTENUM *peBoundary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ long RateAdjust) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ long *pRateAdjust) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVolume( 
            /* [in] */ USHORT usVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVolume( 
            /* [out] */ USHORT *pusVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WaitUntilDone( 
            /* [in] */ ULONG msTimeout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSyncSpeakTimeout( 
            /* [in] */ ULONG msTimeout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSyncSpeakTimeout( 
            /* [out] */ ULONG *pmsTimeout) = 0;
        
        virtual /* [local] */ HANDLE STDMETHODCALLTYPE SpeakCompleteEvent( void) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE IsUISupported( 
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [out] */ BOOL *pfSupported) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DisplayUI( 
            /* [in] */ HWND hwndParent,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpVoiceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpVoice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpVoice * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpVoice * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifySink)
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )( 
            ISpVoice * This,
            /* [in] */ ISpNotifySink *pNotifySink);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWindowMessage)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )( 
            ISpVoice * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackFunction)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )( 
            ISpVoice * This,
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackInterface)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )( 
            ISpVoice * This,
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWin32Event)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )( 
            ISpVoice * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, WaitForNotifyEvent)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )( 
            ISpVoice * This,
            /* [in] */ DWORD dwMilliseconds);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, GetNotifyEventHandle)
        /* [local] */ HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )( 
            ISpVoice * This);
        
        DECLSPEC_XFGVIRT(ISpEventSource, SetInterest)
        HRESULT ( STDMETHODCALLTYPE *SetInterest )( 
            ISpVoice * This,
            /* [in] */ ULONGLONG ullEventInterest,
            /* [in] */ ULONGLONG ullQueuedInterest);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetEvents)
        HRESULT ( STDMETHODCALLTYPE *GetEvents )( 
            ISpVoice * This,
            /* [in] */ ULONG ulCount,
            /* [size_is][out] */ SPEVENT *pEventArray,
            /* [out] */ ULONG *pulFetched);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetInfo)
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            ISpVoice * This,
            /* [out] */ SPEVENTSOURCEINFO *pInfo);
        
        DECLSPEC_XFGVIRT(ISpVoice, SetOutput)
        HRESULT ( STDMETHODCALLTYPE *SetOutput )( 
            ISpVoice * This,
            /* [in] */ IUnknown *pUnkOutput,
            /* [in] */ BOOL fAllowFormatChanges);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetOutputObjectToken)
        HRESULT ( STDMETHODCALLTYPE *GetOutputObjectToken )( 
            ISpVoice * This,
            /* [out] */ ISpObjectToken **ppObjectToken);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetOutputStream)
        HRESULT ( STDMETHODCALLTYPE *GetOutputStream )( 
            ISpVoice * This,
            /* [out] */ ISpStreamFormat **ppStream);
        
        DECLSPEC_XFGVIRT(ISpVoice, Pause)
        HRESULT ( STDMETHODCALLTYPE *Pause )( 
            ISpVoice * This);
        
        DECLSPEC_XFGVIRT(ISpVoice, Resume)
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            ISpVoice * This);
        
        DECLSPEC_XFGVIRT(ISpVoice, SetVoice)
        HRESULT ( STDMETHODCALLTYPE *SetVoice )( 
            ISpVoice * This,
            /* [in] */ ISpObjectToken *pToken);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetVoice)
        HRESULT ( STDMETHODCALLTYPE *GetVoice )( 
            ISpVoice * This,
            /* [out] */ ISpObjectToken **ppToken);
        
        DECLSPEC_XFGVIRT(ISpVoice, Speak)
        HRESULT ( STDMETHODCALLTYPE *Speak )( 
            ISpVoice * This,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pwcs,
            /* [in] */ DWORD dwFlags,
            /* [out][annotation] */ 
            __out_opt  ULONG *pulStreamNumber);
        
        DECLSPEC_XFGVIRT(ISpVoice, SpeakStream)
        HRESULT ( STDMETHODCALLTYPE *SpeakStream )( 
            ISpVoice * This,
            /* [in] */ IStream *pStream,
            /* [in] */ DWORD dwFlags,
            /* [out][annotation] */ 
            __out_opt  ULONG *pulStreamNumber);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetStatus)
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISpVoice * This,
            /* [out] */ SPVOICESTATUS *pStatus,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszLastBookmark);
        
        DECLSPEC_XFGVIRT(ISpVoice, Skip)
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            ISpVoice * This,
            /* [string][in] */ LPCWSTR pItemType,
            /* [in] */ long lNumItems,
            /* [out] */ ULONG *pulNumSkipped);
        
        DECLSPEC_XFGVIRT(ISpVoice, SetPriority)
        HRESULT ( STDMETHODCALLTYPE *SetPriority )( 
            ISpVoice * This,
            /* [in] */ SPVPRIORITY ePriority);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetPriority)
        HRESULT ( STDMETHODCALLTYPE *GetPriority )( 
            ISpVoice * This,
            /* [out] */ SPVPRIORITY *pePriority);
        
        DECLSPEC_XFGVIRT(ISpVoice, SetAlertBoundary)
        HRESULT ( STDMETHODCALLTYPE *SetAlertBoundary )( 
            ISpVoice * This,
            /* [in] */ SPEVENTENUM eBoundary);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetAlertBoundary)
        HRESULT ( STDMETHODCALLTYPE *GetAlertBoundary )( 
            ISpVoice * This,
            /* [out] */ SPEVENTENUM *peBoundary);
        
        DECLSPEC_XFGVIRT(ISpVoice, SetRate)
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            ISpVoice * This,
            /* [in] */ long RateAdjust);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetRate)
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            ISpVoice * This,
            /* [out] */ long *pRateAdjust);
        
        DECLSPEC_XFGVIRT(ISpVoice, SetVolume)
        HRESULT ( STDMETHODCALLTYPE *SetVolume )( 
            ISpVoice * This,
            /* [in] */ USHORT usVolume);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetVolume)
        HRESULT ( STDMETHODCALLTYPE *GetVolume )( 
            ISpVoice * This,
            /* [out] */ USHORT *pusVolume);
        
        DECLSPEC_XFGVIRT(ISpVoice, WaitUntilDone)
        HRESULT ( STDMETHODCALLTYPE *WaitUntilDone )( 
            ISpVoice * This,
            /* [in] */ ULONG msTimeout);
        
        DECLSPEC_XFGVIRT(ISpVoice, SetSyncSpeakTimeout)
        HRESULT ( STDMETHODCALLTYPE *SetSyncSpeakTimeout )( 
            ISpVoice * This,
            /* [in] */ ULONG msTimeout);
        
        DECLSPEC_XFGVIRT(ISpVoice, GetSyncSpeakTimeout)
        HRESULT ( STDMETHODCALLTYPE *GetSyncSpeakTimeout )( 
            ISpVoice * This,
            /* [out] */ ULONG *pmsTimeout);
        
        DECLSPEC_XFGVIRT(ISpVoice, SpeakCompleteEvent)
        /* [local] */ HANDLE ( STDMETHODCALLTYPE *SpeakCompleteEvent )( 
            ISpVoice * This);
        
        DECLSPEC_XFGVIRT(ISpVoice, IsUISupported)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *IsUISupported )( 
            ISpVoice * This,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [out] */ BOOL *pfSupported);
        
        DECLSPEC_XFGVIRT(ISpVoice, DisplayUI)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *DisplayUI )( 
            ISpVoice * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData);
        
        END_INTERFACE
    } ISpVoiceVtbl;

    interface ISpVoice
    {
        CONST_VTBL struct ISpVoiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpVoice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpVoice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpVoice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpVoice_SetNotifySink(This,pNotifySink)	\
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) ) 

#define ISpVoice_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) ) 

#define ISpVoice_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) ) 

#define ISpVoice_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) ) 

#define ISpVoice_SetNotifyWin32Event(This)	\
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) ) 

#define ISpVoice_WaitForNotifyEvent(This,dwMilliseconds)	\
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) ) 

#define ISpVoice_GetNotifyEventHandle(This)	\
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) ) 


#define ISpVoice_SetInterest(This,ullEventInterest,ullQueuedInterest)	\
    ( (This)->lpVtbl -> SetInterest(This,ullEventInterest,ullQueuedInterest) ) 

#define ISpVoice_GetEvents(This,ulCount,pEventArray,pulFetched)	\
    ( (This)->lpVtbl -> GetEvents(This,ulCount,pEventArray,pulFetched) ) 

#define ISpVoice_GetInfo(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfo) ) 


#define ISpVoice_SetOutput(This,pUnkOutput,fAllowFormatChanges)	\
    ( (This)->lpVtbl -> SetOutput(This,pUnkOutput,fAllowFormatChanges) ) 

#define ISpVoice_GetOutputObjectToken(This,ppObjectToken)	\
    ( (This)->lpVtbl -> GetOutputObjectToken(This,ppObjectToken) ) 

#define ISpVoice_GetOutputStream(This,ppStream)	\
    ( (This)->lpVtbl -> GetOutputStream(This,ppStream) ) 

#define ISpVoice_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) ) 

#define ISpVoice_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define ISpVoice_SetVoice(This,pToken)	\
    ( (This)->lpVtbl -> SetVoice(This,pToken) ) 

#define ISpVoice_GetVoice(This,ppToken)	\
    ( (This)->lpVtbl -> GetVoice(This,ppToken) ) 

#define ISpVoice_Speak(This,pwcs,dwFlags,pulStreamNumber)	\
    ( (This)->lpVtbl -> Speak(This,pwcs,dwFlags,pulStreamNumber) ) 

#define ISpVoice_SpeakStream(This,pStream,dwFlags,pulStreamNumber)	\
    ( (This)->lpVtbl -> SpeakStream(This,pStream,dwFlags,pulStreamNumber) ) 

#define ISpVoice_GetStatus(This,pStatus,ppszLastBookmark)	\
    ( (This)->lpVtbl -> GetStatus(This,pStatus,ppszLastBookmark) ) 

#define ISpVoice_Skip(This,pItemType,lNumItems,pulNumSkipped)	\
    ( (This)->lpVtbl -> Skip(This,pItemType,lNumItems,pulNumSkipped) ) 

#define ISpVoice_SetPriority(This,ePriority)	\
    ( (This)->lpVtbl -> SetPriority(This,ePriority) ) 

#define ISpVoice_GetPriority(This,pePriority)	\
    ( (This)->lpVtbl -> GetPriority(This,pePriority) ) 

#define ISpVoice_SetAlertBoundary(This,eBoundary)	\
    ( (This)->lpVtbl -> SetAlertBoundary(This,eBoundary) ) 

#define ISpVoice_GetAlertBoundary(This,peBoundary)	\
    ( (This)->lpVtbl -> GetAlertBoundary(This,peBoundary) ) 

#define ISpVoice_SetRate(This,RateAdjust)	\
    ( (This)->lpVtbl -> SetRate(This,RateAdjust) ) 

#define ISpVoice_GetRate(This,pRateAdjust)	\
    ( (This)->lpVtbl -> GetRate(This,pRateAdjust) ) 

#define ISpVoice_SetVolume(This,usVolume)	\
    ( (This)->lpVtbl -> SetVolume(This,usVolume) ) 

#define ISpVoice_GetVolume(This,pusVolume)	\
    ( (This)->lpVtbl -> GetVolume(This,pusVolume) ) 

#define ISpVoice_WaitUntilDone(This,msTimeout)	\
    ( (This)->lpVtbl -> WaitUntilDone(This,msTimeout) ) 

#define ISpVoice_SetSyncSpeakTimeout(This,msTimeout)	\
    ( (This)->lpVtbl -> SetSyncSpeakTimeout(This,msTimeout) ) 

#define ISpVoice_GetSyncSpeakTimeout(This,pmsTimeout)	\
    ( (This)->lpVtbl -> GetSyncSpeakTimeout(This,pmsTimeout) ) 

#define ISpVoice_SpeakCompleteEvent(This)	\
    ( (This)->lpVtbl -> SpeakCompleteEvent(This) ) 

#define ISpVoice_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported)	\
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported) ) 

#define ISpVoice_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData)	\
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpVoice_INTERFACE_DEFINED__ */


#ifndef __ISpPhrase_INTERFACE_DEFINED__
#define __ISpPhrase_INTERFACE_DEFINED__

/* interface ISpPhrase */
/* [restricted][unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_ISpPhrase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1A5C0354-B621-4b5a-8791-D306ED379E53")
    ISpPhrase : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPhrase( 
            /* [out] */ SPPHRASE **ppCoMemPhrase) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSerializedPhrase( 
            /* [out] */ SPSERIALIZEDPHRASE **ppCoMemPhrase) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ ULONG ulStart,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOL fUseTextReplacements,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemText,
            /* [optional][out][annotation] */ 
            __out_ecount_opt(1)  BYTE *pbDisplayAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Discard( 
            /* [in] */ DWORD dwValueTypes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPhraseVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpPhrase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpPhrase * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpPhrase * This);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )( 
            ISpPhrase * This,
            /* [out] */ SPPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetSerializedPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )( 
            ISpPhrase * This,
            /* [out] */ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetText)
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ISpPhrase * This,
            /* [in] */ ULONG ulStart,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOL fUseTextReplacements,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemText,
            /* [optional][out][annotation] */ 
            __out_ecount_opt(1)  BYTE *pbDisplayAttributes);
        
        DECLSPEC_XFGVIRT(ISpPhrase, Discard)
        HRESULT ( STDMETHODCALLTYPE *Discard )( 
            ISpPhrase * This,
            /* [in] */ DWORD dwValueTypes);
        
        END_INTERFACE
    } ISpPhraseVtbl;

    interface ISpPhrase
    {
        CONST_VTBL struct ISpPhraseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpPhrase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpPhrase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpPhrase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpPhrase_GetPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) ) 

#define ISpPhrase_GetSerializedPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) ) 

#define ISpPhrase_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes)	\
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) ) 

#define ISpPhrase_Discard(This,dwValueTypes)	\
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpPhrase_INTERFACE_DEFINED__ */


#ifndef __ISpPhraseAlt_INTERFACE_DEFINED__
#define __ISpPhraseAlt_INTERFACE_DEFINED__

/* interface ISpPhraseAlt */
/* [restricted][unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_ISpPhraseAlt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8FCEBC98-4E49-4067-9C6C-D86A0E092E3D")
    ISpPhraseAlt : public ISpPhrase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAltInfo( 
            /* [out] */ ISpPhrase **ppParent,
            /* [out] */ ULONG *pulStartElementInParent,
            /* [out] */ ULONG *pcElementsInParent,
            /* [out] */ ULONG *pcElementsInAlt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPhraseAltVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpPhraseAlt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpPhraseAlt * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpPhraseAlt * This);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )( 
            ISpPhraseAlt * This,
            /* [out] */ SPPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetSerializedPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )( 
            ISpPhraseAlt * This,
            /* [out] */ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetText)
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ISpPhraseAlt * This,
            /* [in] */ ULONG ulStart,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOL fUseTextReplacements,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemText,
            /* [optional][out][annotation] */ 
            __out_ecount_opt(1)  BYTE *pbDisplayAttributes);
        
        DECLSPEC_XFGVIRT(ISpPhrase, Discard)
        HRESULT ( STDMETHODCALLTYPE *Discard )( 
            ISpPhraseAlt * This,
            /* [in] */ DWORD dwValueTypes);
        
        DECLSPEC_XFGVIRT(ISpPhraseAlt, GetAltInfo)
        HRESULT ( STDMETHODCALLTYPE *GetAltInfo )( 
            ISpPhraseAlt * This,
            /* [out] */ ISpPhrase **ppParent,
            /* [out] */ ULONG *pulStartElementInParent,
            /* [out] */ ULONG *pcElementsInParent,
            /* [out] */ ULONG *pcElementsInAlt);
        
        DECLSPEC_XFGVIRT(ISpPhraseAlt, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpPhraseAlt * This);
        
        END_INTERFACE
    } ISpPhraseAltVtbl;

    interface ISpPhraseAlt
    {
        CONST_VTBL struct ISpPhraseAltVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpPhraseAlt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpPhraseAlt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpPhraseAlt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpPhraseAlt_GetPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) ) 

#define ISpPhraseAlt_GetSerializedPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) ) 

#define ISpPhraseAlt_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes)	\
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) ) 

#define ISpPhraseAlt_Discard(This,dwValueTypes)	\
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) ) 


#define ISpPhraseAlt_GetAltInfo(This,ppParent,pulStartElementInParent,pcElementsInParent,pcElementsInAlt)	\
    ( (This)->lpVtbl -> GetAltInfo(This,ppParent,pulStartElementInParent,pcElementsInParent,pcElementsInAlt) ) 

#define ISpPhraseAlt_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpPhraseAlt_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0032 */
/* [local] */ 

typedef 
enum SPXMLRESULTOPTIONS
    {
        SPXRO_SML	= 0,
        SPXRO_Alternates_SML	= 1,
        SPXRO_RESERVED1	= 2,
        SPXRO_RESERVED2	= 3
    } 	SPXMLRESULTOPTIONS;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0032_v0_0_s_ifspec;

#ifndef __ISpPhrase2_INTERFACE_DEFINED__
#define __ISpPhrase2_INTERFACE_DEFINED__

/* interface ISpPhrase2 */
/* [restricted][unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_ISpPhrase2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F264DA52-E457-4696-B856-A737B717AF79")
    ISpPhrase2 : public ISpPhrase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetXMLResult( 
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemXMLResult,
            /* [in] */ SPXMLRESULTOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetXMLErrorInfo( 
            SPSEMANTICERRORINFO *pSemanticErrorInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudio( 
            ULONG ulStartElement,
            ULONG cElements,
            /* [out] */ ISpStreamFormat **ppStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPhrase2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpPhrase2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpPhrase2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpPhrase2 * This);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )( 
            ISpPhrase2 * This,
            /* [out] */ SPPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetSerializedPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )( 
            ISpPhrase2 * This,
            /* [out] */ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetText)
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ISpPhrase2 * This,
            /* [in] */ ULONG ulStart,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOL fUseTextReplacements,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemText,
            /* [optional][out][annotation] */ 
            __out_ecount_opt(1)  BYTE *pbDisplayAttributes);
        
        DECLSPEC_XFGVIRT(ISpPhrase, Discard)
        HRESULT ( STDMETHODCALLTYPE *Discard )( 
            ISpPhrase2 * This,
            /* [in] */ DWORD dwValueTypes);
        
        DECLSPEC_XFGVIRT(ISpPhrase2, GetXMLResult)
        HRESULT ( STDMETHODCALLTYPE *GetXMLResult )( 
            ISpPhrase2 * This,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemXMLResult,
            /* [in] */ SPXMLRESULTOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpPhrase2, GetXMLErrorInfo)
        HRESULT ( STDMETHODCALLTYPE *GetXMLErrorInfo )( 
            ISpPhrase2 * This,
            SPSEMANTICERRORINFO *pSemanticErrorInfo);
        
        DECLSPEC_XFGVIRT(ISpPhrase2, GetAudio)
        HRESULT ( STDMETHODCALLTYPE *GetAudio )( 
            ISpPhrase2 * This,
            ULONG ulStartElement,
            ULONG cElements,
            /* [out] */ ISpStreamFormat **ppStream);
        
        END_INTERFACE
    } ISpPhrase2Vtbl;

    interface ISpPhrase2
    {
        CONST_VTBL struct ISpPhrase2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpPhrase2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpPhrase2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpPhrase2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpPhrase2_GetPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) ) 

#define ISpPhrase2_GetSerializedPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) ) 

#define ISpPhrase2_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes)	\
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) ) 

#define ISpPhrase2_Discard(This,dwValueTypes)	\
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) ) 


#define ISpPhrase2_GetXMLResult(This,ppszCoMemXMLResult,Options)	\
    ( (This)->lpVtbl -> GetXMLResult(This,ppszCoMemXMLResult,Options) ) 

#define ISpPhrase2_GetXMLErrorInfo(This,pSemanticErrorInfo)	\
    ( (This)->lpVtbl -> GetXMLErrorInfo(This,pSemanticErrorInfo) ) 

#define ISpPhrase2_GetAudio(This,ulStartElement,cElements,ppStream)	\
    ( (This)->lpVtbl -> GetAudio(This,ulStartElement,cElements,ppStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpPhrase2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0033 */
/* [local] */ 

typedef /* [hidden][restricted] */ struct SPRECORESULTTIMES
    {
    FILETIME ftStreamTime;
    ULONGLONG ullLength;
    DWORD dwTickCount;
    ULONGLONG ullStart;
    } 	SPRECORESULTTIMES;

typedef /* [hidden] */ struct SPSERIALIZEDRESULT
    {
    ULONG ulSerializedSize;
    } 	SPSERIALIZEDRESULT;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0033_v0_0_s_ifspec;

#ifndef __ISpRecoResult_INTERFACE_DEFINED__
#define __ISpRecoResult_INTERFACE_DEFINED__

/* interface ISpRecoResult */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecoResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20B053BE-E235-43cd-9A2A-8D17A48B7842")
    ISpRecoResult : public ISpPhrase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetResultTimes( 
            /* [out] */ SPRECORESULTTIMES *pTimes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAlternates( 
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ ULONG ulRequestCount,
            /* [out][annotation] */ 
            __out_ecount_part(ulRequestCount,*pcPhrasesReturned)  ISpPhraseAlt **ppPhrases,
            /* [out] */ ULONG *pcPhrasesReturned) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudio( 
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [out] */ ISpStreamFormat **ppStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SpeakAudio( 
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ DWORD dwFlags,
            /* [out] */ ULONG *pulStreamNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Serialize( 
            /* [out] */ SPSERIALIZEDRESULT **ppCoMemSerializedResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScaleAudio( 
            /* [in] */ const GUID *pAudioFormatId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecoContext( 
            /* [out] */ ISpRecoContext **ppRecoContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecoResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecoResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecoResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecoResult * This);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )( 
            ISpRecoResult * This,
            /* [out] */ SPPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetSerializedPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )( 
            ISpRecoResult * This,
            /* [out] */ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetText)
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ISpRecoResult * This,
            /* [in] */ ULONG ulStart,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOL fUseTextReplacements,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemText,
            /* [optional][out][annotation] */ 
            __out_ecount_opt(1)  BYTE *pbDisplayAttributes);
        
        DECLSPEC_XFGVIRT(ISpPhrase, Discard)
        HRESULT ( STDMETHODCALLTYPE *Discard )( 
            ISpRecoResult * This,
            /* [in] */ DWORD dwValueTypes);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetResultTimes)
        HRESULT ( STDMETHODCALLTYPE *GetResultTimes )( 
            ISpRecoResult * This,
            /* [out] */ SPRECORESULTTIMES *pTimes);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetAlternates)
        HRESULT ( STDMETHODCALLTYPE *GetAlternates )( 
            ISpRecoResult * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ ULONG ulRequestCount,
            /* [out][annotation] */ 
            __out_ecount_part(ulRequestCount,*pcPhrasesReturned)  ISpPhraseAlt **ppPhrases,
            /* [out] */ ULONG *pcPhrasesReturned);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetAudio)
        HRESULT ( STDMETHODCALLTYPE *GetAudio )( 
            ISpRecoResult * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [out] */ ISpStreamFormat **ppStream);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, SpeakAudio)
        HRESULT ( STDMETHODCALLTYPE *SpeakAudio )( 
            ISpRecoResult * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ DWORD dwFlags,
            /* [out] */ ULONG *pulStreamNumber);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, Serialize)
        HRESULT ( STDMETHODCALLTYPE *Serialize )( 
            ISpRecoResult * This,
            /* [out] */ SPSERIALIZEDRESULT **ppCoMemSerializedResult);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, ScaleAudio)
        HRESULT ( STDMETHODCALLTYPE *ScaleAudio )( 
            ISpRecoResult * This,
            /* [in] */ const GUID *pAudioFormatId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetRecoContext)
        HRESULT ( STDMETHODCALLTYPE *GetRecoContext )( 
            ISpRecoResult * This,
            /* [out] */ ISpRecoContext **ppRecoContext);
        
        END_INTERFACE
    } ISpRecoResultVtbl;

    interface ISpRecoResult
    {
        CONST_VTBL struct ISpRecoResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecoResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecoResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecoResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecoResult_GetPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) ) 

#define ISpRecoResult_GetSerializedPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) ) 

#define ISpRecoResult_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes)	\
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) ) 

#define ISpRecoResult_Discard(This,dwValueTypes)	\
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) ) 


#define ISpRecoResult_GetResultTimes(This,pTimes)	\
    ( (This)->lpVtbl -> GetResultTimes(This,pTimes) ) 

#define ISpRecoResult_GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned)	\
    ( (This)->lpVtbl -> GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned) ) 

#define ISpRecoResult_GetAudio(This,ulStartElement,cElements,ppStream)	\
    ( (This)->lpVtbl -> GetAudio(This,ulStartElement,cElements,ppStream) ) 

#define ISpRecoResult_SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber)	\
    ( (This)->lpVtbl -> SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber) ) 

#define ISpRecoResult_Serialize(This,ppCoMemSerializedResult)	\
    ( (This)->lpVtbl -> Serialize(This,ppCoMemSerializedResult) ) 

#define ISpRecoResult_ScaleAudio(This,pAudioFormatId,pWaveFormatEx)	\
    ( (This)->lpVtbl -> ScaleAudio(This,pAudioFormatId,pWaveFormatEx) ) 

#define ISpRecoResult_GetRecoContext(This,ppRecoContext)	\
    ( (This)->lpVtbl -> GetRecoContext(This,ppRecoContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecoResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0034 */
/* [local] */ 

typedef /* [hidden] */ 
enum SPCOMMITFLAGS
    {
        SPCF_NONE	= 0,
        SPCF_ADD_TO_USER_LEXICON	= ( 1 << 0 ) ,
        SPCF_DEFINITE_CORRECTION	= ( 1 << 1 ) 
    } 	SPCOMMITFLAGS;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0034_v0_0_s_ifspec;

#ifndef __ISpRecoResult2_INTERFACE_DEFINED__
#define __ISpRecoResult2_INTERFACE_DEFINED__

/* interface ISpRecoResult2 */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecoResult2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27CAC6C4-88F2-41f2-8817-0C95E59F1E6E")
    ISpRecoResult2 : public ISpRecoResult
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CommitAlternate( 
            ISpPhraseAlt *pPhraseAlt,
            /* [out] */ ISpRecoResult **ppNewResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CommitText( 
            ULONG ulStartElement,
            ULONG cElements,
            /* [annotation] */ 
            __in_opt  LPCWSTR pszCorrectedData,
            DWORD eCommitFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTextFeedback( 
            /* [string][in] */ LPCWSTR pszFeedback,
            /* [in] */ BOOL fSuccessful) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecoResult2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecoResult2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecoResult2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecoResult2 * This);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )( 
            ISpRecoResult2 * This,
            /* [out] */ SPPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetSerializedPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )( 
            ISpRecoResult2 * This,
            /* [out] */ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetText)
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ISpRecoResult2 * This,
            /* [in] */ ULONG ulStart,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOL fUseTextReplacements,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemText,
            /* [optional][out][annotation] */ 
            __out_ecount_opt(1)  BYTE *pbDisplayAttributes);
        
        DECLSPEC_XFGVIRT(ISpPhrase, Discard)
        HRESULT ( STDMETHODCALLTYPE *Discard )( 
            ISpRecoResult2 * This,
            /* [in] */ DWORD dwValueTypes);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetResultTimes)
        HRESULT ( STDMETHODCALLTYPE *GetResultTimes )( 
            ISpRecoResult2 * This,
            /* [out] */ SPRECORESULTTIMES *pTimes);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetAlternates)
        HRESULT ( STDMETHODCALLTYPE *GetAlternates )( 
            ISpRecoResult2 * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ ULONG ulRequestCount,
            /* [out][annotation] */ 
            __out_ecount_part(ulRequestCount,*pcPhrasesReturned)  ISpPhraseAlt **ppPhrases,
            /* [out] */ ULONG *pcPhrasesReturned);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetAudio)
        HRESULT ( STDMETHODCALLTYPE *GetAudio )( 
            ISpRecoResult2 * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [out] */ ISpStreamFormat **ppStream);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, SpeakAudio)
        HRESULT ( STDMETHODCALLTYPE *SpeakAudio )( 
            ISpRecoResult2 * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ DWORD dwFlags,
            /* [out] */ ULONG *pulStreamNumber);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, Serialize)
        HRESULT ( STDMETHODCALLTYPE *Serialize )( 
            ISpRecoResult2 * This,
            /* [out] */ SPSERIALIZEDRESULT **ppCoMemSerializedResult);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, ScaleAudio)
        HRESULT ( STDMETHODCALLTYPE *ScaleAudio )( 
            ISpRecoResult2 * This,
            /* [in] */ const GUID *pAudioFormatId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetRecoContext)
        HRESULT ( STDMETHODCALLTYPE *GetRecoContext )( 
            ISpRecoResult2 * This,
            /* [out] */ ISpRecoContext **ppRecoContext);
        
        DECLSPEC_XFGVIRT(ISpRecoResult2, CommitAlternate)
        HRESULT ( STDMETHODCALLTYPE *CommitAlternate )( 
            ISpRecoResult2 * This,
            ISpPhraseAlt *pPhraseAlt,
            /* [out] */ ISpRecoResult **ppNewResult);
        
        DECLSPEC_XFGVIRT(ISpRecoResult2, CommitText)
        HRESULT ( STDMETHODCALLTYPE *CommitText )( 
            ISpRecoResult2 * This,
            ULONG ulStartElement,
            ULONG cElements,
            /* [annotation] */ 
            __in_opt  LPCWSTR pszCorrectedData,
            DWORD eCommitFlags);
        
        DECLSPEC_XFGVIRT(ISpRecoResult2, SetTextFeedback)
        HRESULT ( STDMETHODCALLTYPE *SetTextFeedback )( 
            ISpRecoResult2 * This,
            /* [string][in] */ LPCWSTR pszFeedback,
            /* [in] */ BOOL fSuccessful);
        
        END_INTERFACE
    } ISpRecoResult2Vtbl;

    interface ISpRecoResult2
    {
        CONST_VTBL struct ISpRecoResult2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecoResult2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecoResult2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecoResult2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecoResult2_GetPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) ) 

#define ISpRecoResult2_GetSerializedPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) ) 

#define ISpRecoResult2_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes)	\
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) ) 

#define ISpRecoResult2_Discard(This,dwValueTypes)	\
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) ) 


#define ISpRecoResult2_GetResultTimes(This,pTimes)	\
    ( (This)->lpVtbl -> GetResultTimes(This,pTimes) ) 

#define ISpRecoResult2_GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned)	\
    ( (This)->lpVtbl -> GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned) ) 

#define ISpRecoResult2_GetAudio(This,ulStartElement,cElements,ppStream)	\
    ( (This)->lpVtbl -> GetAudio(This,ulStartElement,cElements,ppStream) ) 

#define ISpRecoResult2_SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber)	\
    ( (This)->lpVtbl -> SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber) ) 

#define ISpRecoResult2_Serialize(This,ppCoMemSerializedResult)	\
    ( (This)->lpVtbl -> Serialize(This,ppCoMemSerializedResult) ) 

#define ISpRecoResult2_ScaleAudio(This,pAudioFormatId,pWaveFormatEx)	\
    ( (This)->lpVtbl -> ScaleAudio(This,pAudioFormatId,pWaveFormatEx) ) 

#define ISpRecoResult2_GetRecoContext(This,ppRecoContext)	\
    ( (This)->lpVtbl -> GetRecoContext(This,ppRecoContext) ) 


#define ISpRecoResult2_CommitAlternate(This,pPhraseAlt,ppNewResult)	\
    ( (This)->lpVtbl -> CommitAlternate(This,pPhraseAlt,ppNewResult) ) 

#define ISpRecoResult2_CommitText(This,ulStartElement,cElements,pszCorrectedData,eCommitFlags)	\
    ( (This)->lpVtbl -> CommitText(This,ulStartElement,cElements,pszCorrectedData,eCommitFlags) ) 

#define ISpRecoResult2_SetTextFeedback(This,pszFeedback,fSuccessful)	\
    ( (This)->lpVtbl -> SetTextFeedback(This,pszFeedback,fSuccessful) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecoResult2_INTERFACE_DEFINED__ */


#ifndef __ISpXMLRecoResult_INTERFACE_DEFINED__
#define __ISpXMLRecoResult_INTERFACE_DEFINED__

/* interface ISpXMLRecoResult */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpXMLRecoResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE39362B-45A8-4074-9B9E-CCF49AA2D0B6")
    ISpXMLRecoResult : public ISpRecoResult
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetXMLResult( 
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemXMLResult,
            /* [in] */ SPXMLRESULTOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetXMLErrorInfo( 
            SPSEMANTICERRORINFO *pSemanticErrorInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpXMLRecoResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpXMLRecoResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpXMLRecoResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpXMLRecoResult * This);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )( 
            ISpXMLRecoResult * This,
            /* [out] */ SPPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetSerializedPhrase)
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )( 
            ISpXMLRecoResult * This,
            /* [out] */ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        
        DECLSPEC_XFGVIRT(ISpPhrase, GetText)
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ISpXMLRecoResult * This,
            /* [in] */ ULONG ulStart,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOL fUseTextReplacements,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemText,
            /* [optional][out][annotation] */ 
            __out_ecount_opt(1)  BYTE *pbDisplayAttributes);
        
        DECLSPEC_XFGVIRT(ISpPhrase, Discard)
        HRESULT ( STDMETHODCALLTYPE *Discard )( 
            ISpXMLRecoResult * This,
            /* [in] */ DWORD dwValueTypes);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetResultTimes)
        HRESULT ( STDMETHODCALLTYPE *GetResultTimes )( 
            ISpXMLRecoResult * This,
            /* [out] */ SPRECORESULTTIMES *pTimes);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetAlternates)
        HRESULT ( STDMETHODCALLTYPE *GetAlternates )( 
            ISpXMLRecoResult * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ ULONG ulRequestCount,
            /* [out][annotation] */ 
            __out_ecount_part(ulRequestCount,*pcPhrasesReturned)  ISpPhraseAlt **ppPhrases,
            /* [out] */ ULONG *pcPhrasesReturned);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetAudio)
        HRESULT ( STDMETHODCALLTYPE *GetAudio )( 
            ISpXMLRecoResult * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [out] */ ISpStreamFormat **ppStream);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, SpeakAudio)
        HRESULT ( STDMETHODCALLTYPE *SpeakAudio )( 
            ISpXMLRecoResult * This,
            /* [in] */ ULONG ulStartElement,
            /* [in] */ ULONG cElements,
            /* [in] */ DWORD dwFlags,
            /* [out] */ ULONG *pulStreamNumber);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, Serialize)
        HRESULT ( STDMETHODCALLTYPE *Serialize )( 
            ISpXMLRecoResult * This,
            /* [out] */ SPSERIALIZEDRESULT **ppCoMemSerializedResult);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, ScaleAudio)
        HRESULT ( STDMETHODCALLTYPE *ScaleAudio )( 
            ISpXMLRecoResult * This,
            /* [in] */ const GUID *pAudioFormatId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpRecoResult, GetRecoContext)
        HRESULT ( STDMETHODCALLTYPE *GetRecoContext )( 
            ISpXMLRecoResult * This,
            /* [out] */ ISpRecoContext **ppRecoContext);
        
        DECLSPEC_XFGVIRT(ISpXMLRecoResult, GetXMLResult)
        HRESULT ( STDMETHODCALLTYPE *GetXMLResult )( 
            ISpXMLRecoResult * This,
            /* [out][annotation] */ 
            __deref_out  LPWSTR *ppszCoMemXMLResult,
            /* [in] */ SPXMLRESULTOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpXMLRecoResult, GetXMLErrorInfo)
        HRESULT ( STDMETHODCALLTYPE *GetXMLErrorInfo )( 
            ISpXMLRecoResult * This,
            SPSEMANTICERRORINFO *pSemanticErrorInfo);
        
        END_INTERFACE
    } ISpXMLRecoResultVtbl;

    interface ISpXMLRecoResult
    {
        CONST_VTBL struct ISpXMLRecoResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpXMLRecoResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpXMLRecoResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpXMLRecoResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpXMLRecoResult_GetPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) ) 

#define ISpXMLRecoResult_GetSerializedPhrase(This,ppCoMemPhrase)	\
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) ) 

#define ISpXMLRecoResult_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes)	\
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) ) 

#define ISpXMLRecoResult_Discard(This,dwValueTypes)	\
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) ) 


#define ISpXMLRecoResult_GetResultTimes(This,pTimes)	\
    ( (This)->lpVtbl -> GetResultTimes(This,pTimes) ) 

#define ISpXMLRecoResult_GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned)	\
    ( (This)->lpVtbl -> GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned) ) 

#define ISpXMLRecoResult_GetAudio(This,ulStartElement,cElements,ppStream)	\
    ( (This)->lpVtbl -> GetAudio(This,ulStartElement,cElements,ppStream) ) 

#define ISpXMLRecoResult_SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber)	\
    ( (This)->lpVtbl -> SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber) ) 

#define ISpXMLRecoResult_Serialize(This,ppCoMemSerializedResult)	\
    ( (This)->lpVtbl -> Serialize(This,ppCoMemSerializedResult) ) 

#define ISpXMLRecoResult_ScaleAudio(This,pAudioFormatId,pWaveFormatEx)	\
    ( (This)->lpVtbl -> ScaleAudio(This,pAudioFormatId,pWaveFormatEx) ) 

#define ISpXMLRecoResult_GetRecoContext(This,ppRecoContext)	\
    ( (This)->lpVtbl -> GetRecoContext(This,ppRecoContext) ) 


#define ISpXMLRecoResult_GetXMLResult(This,ppszCoMemXMLResult,Options)	\
    ( (This)->lpVtbl -> GetXMLResult(This,ppszCoMemXMLResult,Options) ) 

#define ISpXMLRecoResult_GetXMLErrorInfo(This,pSemanticErrorInfo)	\
    ( (This)->lpVtbl -> GetXMLErrorInfo(This,pSemanticErrorInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpXMLRecoResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0036 */
/* [local] */ 

typedef /* [hidden] */ struct tagSPTEXTSELECTIONINFO
    {
    ULONG ulStartActiveOffset;
    ULONG cchActiveChars;
    ULONG ulStartSelection;
    ULONG cchSelection;
    } 	SPTEXTSELECTIONINFO;

typedef /* [hidden] */ 
enum SPWORDPRONOUNCEABLE
    {
        SPWP_UNKNOWN_WORD_UNPRONOUNCEABLE	= 0,
        SPWP_UNKNOWN_WORD_PRONOUNCEABLE	= 1,
        SPWP_KNOWN_WORD_PRONOUNCEABLE	= 2
    } 	SPWORDPRONOUNCEABLE;

typedef /* [hidden] */ 
enum SPGRAMMARSTATE
    {
        SPGS_DISABLED	= 0,
        SPGS_ENABLED	= 1,
        SPGS_EXCLUSIVE	= 3
    } 	SPGRAMMARSTATE;

typedef /* [hidden] */ 
enum SPCONTEXTSTATE
    {
        SPCS_DISABLED	= 0,
        SPCS_ENABLED	= 1
    } 	SPCONTEXTSTATE;

typedef /* [hidden] */ 
enum SPRULESTATE
    {
        SPRS_INACTIVE	= 0,
        SPRS_ACTIVE	= 1,
        SPRS_ACTIVE_WITH_AUTO_PAUSE	= 3,
        SPRS_ACTIVE_USER_DELIMITED	= 4
    } 	SPRULESTATE;

#define	SP_STREAMPOS_ASAP	( 0 )

#define	SP_STREAMPOS_REALTIME	( -1 )

#define SPRULETRANS_TEXTBUFFER (SPSTATEHANDLE)(-1)
#define SPRULETRANS_WILDCARD   (SPSTATEHANDLE)(-2)
#define SPRULETRANS_DICTATION  (SPSTATEHANDLE)(-3)
typedef /* [hidden] */ 
enum SPGRAMMARWORDTYPE
    {
        SPWT_DISPLAY	= 0,
        SPWT_LEXICAL	= ( SPWT_DISPLAY + 1 ) ,
        SPWT_PRONUNCIATION	= ( SPWT_LEXICAL + 1 ) ,
        SPWT_LEXICAL_NO_SPECIAL_CHARS	= ( SPWT_PRONUNCIATION + 1 ) 
    } 	SPGRAMMARWORDTYPE;

typedef /* [hidden] */ struct tagSPPROPERTYINFO
    {
    LPCWSTR pszName;
    ULONG ulId;
    LPCWSTR pszValue;
    VARIANT vValue;
    } 	SPPROPERTYINFO;

typedef /* [hidden] */ 
enum SPCFGRULEATTRIBUTES
    {
        SPRAF_TopLevel	= ( 1 << 0 ) ,
        SPRAF_Active	= ( 1 << 1 ) ,
        SPRAF_Export	= ( 1 << 2 ) ,
        SPRAF_Import	= ( 1 << 3 ) ,
        SPRAF_Interpreter	= ( 1 << 4 ) ,
        SPRAF_Dynamic	= ( 1 << 5 ) ,
        SPRAF_Root	= ( 1 << 6 ) ,
        SPRAF_Reserved	= ( 1 << 7 ) ,
        SPRAF_AutoPause	= ( 1 << 16 ) ,
        SPRAF_UserDelimited	= ( 1 << 17 ) 
    } 	SPCFGRULEATTRIBUTES;

typedef /* [hidden] */ 
enum SPGRAMBUILDCOMMITFLAGS
    {
        SPGBCF_NONE	= 0,
        SPGBCF_OPTIMIZE	= ( 1L << 0 ) ,
        SPGBCF_RESERVED1	= ( 1L << 1 ) ,
        SPGBCF_RESERVED2	= ( 1L << 2 ) ,
        SPGBCF_RESERVED3	= ( 1L << 3 ) ,
        SPGBCF_RESERVED4	= ( 1L << 4 ) ,
        SPGBCF_RESERVED5	= ( 1L << 5 ) ,
        SPGBCF_RESERVED6	= ( 1L << 6 ) ,
        SPGBCF_RESERVED7	= ( 1L << 7 ) ,
        SPGBCF_RESERVED8	= ( 1L << 8 ) ,
        SPGBCF_RESERVED9	= ( 1L << 9 ) ,
        SPGBCF_RESERVED10	= ( 1L << 10 ) ,
        SPGBCF_RESERVED11	= ( 1L << 11 ) ,
        SPGBCF_RESERVED12	= ( 1L << 12 ) ,
        SPGBCF_RESERVED13	= ( 1L << 13 ) ,
        SPGBCF_RESERVED14	= ( 1L << 14 ) ,
        SPGBCF_RESERVED15	= ( 1L << 15 ) ,
        SPGBCF_PRIVATE1	= ( 1L << 16 ) ,
        SPGBCF_PRIVATE2	= ( 1L << 17 ) ,
        SPGBCF_PRIVATE3	= ( 1L << 18 ) ,
        SPGBCF_PRIVATE4	= ( 1L << 19 ) ,
        SPGBCF_PRIVATE5	= ( 1L << 20 ) ,
        SPGBCF_PRIVATE6	= ( 1L << 21 ) ,
        SPGBCF_PRIVATE7	= ( 1L << 22 ) ,
        SPGBCF_PRIVATE8	= ( 1L << 23 ) ,
        SPGBCF_PRIVATE9	= ( 1L << 24 ) ,
        SPGBCF_PRIVATE10	= ( 1L << 25 ) ,
        SPGBCF_PRIVATE11	= ( 1L << 26 ) ,
        SPGBCF_PRIVATE12	= ( 1L << 27 ) ,
        SPGBCF_PRIVATE13	= ( 1L << 28 ) ,
        SPGBCF_PRIVATE14	= ( 1L << 29 ) ,
        SPGBCF_PRIVATE15	= ( 1L << 30 ) ,
        SPGBCF_PRIVATE16	= ( 1L << 31 ) 
    } 	SPGRAMBUILDCOMMITFLAGS;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0036_v0_0_s_ifspec;

#ifndef __ISpGrammarBuilder_INTERFACE_DEFINED__
#define __ISpGrammarBuilder_INTERFACE_DEFINED__

/* interface ISpGrammarBuilder */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpGrammarBuilder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8137828F-591A-4A42-BE58-49EA7EBAAC68")
    ISpGrammarBuilder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ResetGrammar( 
            /* [in] */ WORD NewLanguage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRule( 
            /* [in] */ LPCWSTR pszRuleName,
            /* [in] */ DWORD dwRuleId,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ BOOL fCreateIfNotExist,
            /* [out] */ SPSTATEHANDLE *phInitialState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearRule( 
            SPSTATEHANDLE hState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNewState( 
            SPSTATEHANDLE hState,
            SPSTATEHANDLE *phState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddWordTransition( 
            SPSTATEHANDLE hFromState,
            SPSTATEHANDLE hToState,
            LPCWSTR psz,
            LPCWSTR pszSeparators,
            SPGRAMMARWORDTYPE eWordType,
            float Weight,
            const SPPROPERTYINFO *pPropInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRuleTransition( 
            SPSTATEHANDLE hFromState,
            SPSTATEHANDLE hToState,
            SPSTATEHANDLE hRule,
            float Weight,
            const SPPROPERTYINFO *pPropInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddResource( 
            /* [in] */ SPSTATEHANDLE hRuleState,
            /* [in] */ LPCWSTR pszResourceName,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszResourceValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( 
            DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpGrammarBuilderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpGrammarBuilder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpGrammarBuilder * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpGrammarBuilder * This);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, ResetGrammar)
        HRESULT ( STDMETHODCALLTYPE *ResetGrammar )( 
            ISpGrammarBuilder * This,
            /* [in] */ WORD NewLanguage);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, GetRule)
        HRESULT ( STDMETHODCALLTYPE *GetRule )( 
            ISpGrammarBuilder * This,
            /* [in] */ LPCWSTR pszRuleName,
            /* [in] */ DWORD dwRuleId,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ BOOL fCreateIfNotExist,
            /* [out] */ SPSTATEHANDLE *phInitialState);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, ClearRule)
        HRESULT ( STDMETHODCALLTYPE *ClearRule )( 
            ISpGrammarBuilder * This,
            SPSTATEHANDLE hState);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, CreateNewState)
        HRESULT ( STDMETHODCALLTYPE *CreateNewState )( 
            ISpGrammarBuilder * This,
            SPSTATEHANDLE hState,
            SPSTATEHANDLE *phState);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, AddWordTransition)
        HRESULT ( STDMETHODCALLTYPE *AddWordTransition )( 
            ISpGrammarBuilder * This,
            SPSTATEHANDLE hFromState,
            SPSTATEHANDLE hToState,
            LPCWSTR psz,
            LPCWSTR pszSeparators,
            SPGRAMMARWORDTYPE eWordType,
            float Weight,
            const SPPROPERTYINFO *pPropInfo);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, AddRuleTransition)
        HRESULT ( STDMETHODCALLTYPE *AddRuleTransition )( 
            ISpGrammarBuilder * This,
            SPSTATEHANDLE hFromState,
            SPSTATEHANDLE hToState,
            SPSTATEHANDLE hRule,
            float Weight,
            const SPPROPERTYINFO *pPropInfo);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, AddResource)
        HRESULT ( STDMETHODCALLTYPE *AddResource )( 
            ISpGrammarBuilder * This,
            /* [in] */ SPSTATEHANDLE hRuleState,
            /* [in] */ LPCWSTR pszResourceName,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszResourceValue);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpGrammarBuilder * This,
            DWORD dwFlags);
        
        END_INTERFACE
    } ISpGrammarBuilderVtbl;

    interface ISpGrammarBuilder
    {
        CONST_VTBL struct ISpGrammarBuilderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpGrammarBuilder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpGrammarBuilder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpGrammarBuilder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpGrammarBuilder_ResetGrammar(This,NewLanguage)	\
    ( (This)->lpVtbl -> ResetGrammar(This,NewLanguage) ) 

#define ISpGrammarBuilder_GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState)	\
    ( (This)->lpVtbl -> GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) ) 

#define ISpGrammarBuilder_ClearRule(This,hState)	\
    ( (This)->lpVtbl -> ClearRule(This,hState) ) 

#define ISpGrammarBuilder_CreateNewState(This,hState,phState)	\
    ( (This)->lpVtbl -> CreateNewState(This,hState,phState) ) 

#define ISpGrammarBuilder_AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo)	\
    ( (This)->lpVtbl -> AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) ) 

#define ISpGrammarBuilder_AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo)	\
    ( (This)->lpVtbl -> AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) ) 

#define ISpGrammarBuilder_AddResource(This,hRuleState,pszResourceName,pszResourceValue)	\
    ( (This)->lpVtbl -> AddResource(This,hRuleState,pszResourceName,pszResourceValue) ) 

#define ISpGrammarBuilder_Commit(This,dwFlags)	\
    ( (This)->lpVtbl -> Commit(This,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpGrammarBuilder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0037 */
/* [local] */ 

typedef /* [hidden] */ 
enum SPLOADOPTIONS
    {
        SPLO_STATIC	= 0,
        SPLO_DYNAMIC	= 1
    } 	SPLOADOPTIONS;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0037_v0_0_s_ifspec;

#ifndef __ISpRecoGrammar_INTERFACE_DEFINED__
#define __ISpRecoGrammar_INTERFACE_DEFINED__

/* interface ISpRecoGrammar */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecoGrammar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2177DB29-7F45-47D0-8554-067E91C80502")
    ISpRecoGrammar : public ISpGrammarBuilder
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetGrammarId( 
            /* [out] */ ULONGLONG *pullGrammarId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecoContext( 
            /* [out] */ ISpRecoContext **ppRecoCtxt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadCmdFromFile( 
            /* [string][in] */ LPCWSTR pszFileName,
            /* [in] */ SPLOADOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadCmdFromObject( 
            /* [in] */ REFCLSID rcid,
            /* [string][in] */ LPCWSTR pszGrammarName,
            /* [in] */ SPLOADOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadCmdFromResource( 
            /* [in] */ HMODULE hModule,
            /* [string][in] */ LPCWSTR pszResourceName,
            /* [string][in] */ LPCWSTR pszResourceType,
            /* [in] */ WORD wLanguage,
            /* [in] */ SPLOADOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadCmdFromMemory( 
            /* [in] */ const SPBINARYGRAMMAR *pGrammar,
            /* [in] */ SPLOADOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadCmdFromProprietaryGrammar( 
            /* [in] */ REFGUID rguidParam,
            /* [string][in] */ LPCWSTR pszStringParam,
            /* [in] */ const void *pvDataPrarm,
            /* [in] */ ULONG cbDataSize,
            /* [in] */ SPLOADOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRuleState( 
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszName,
            void *pReserved,
            /* [in] */ SPRULESTATE NewState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRuleIdState( 
            /* [in] */ ULONG ulRuleId,
            /* [in] */ SPRULESTATE NewState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadDictation( 
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszTopicName,
            /* [in] */ SPLOADOPTIONS Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnloadDictation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDictationState( 
            /* [in] */ SPRULESTATE NewState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWordSequenceData( 
            /* [in][annotation] */ 
            __in_ecount_opt(cchText)  const WCHAR *pText,
            /* [in] */ ULONG cchText,
            /* [in] */ const SPTEXTSELECTIONINFO *pInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTextSelection( 
            /* [in] */ const SPTEXTSELECTIONINFO *pInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsPronounceable( 
            /* [string][in] */ LPCWSTR pszWord,
            /* [out] */ SPWORDPRONOUNCEABLE *pWordPronounceable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGrammarState( 
            /* [in] */ SPGRAMMARSTATE eGrammarState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveCmd( 
            /* [in] */ IStream *pStream,
            /* [optional][out][annotation] */ 
            __deref_opt_out  LPWSTR *ppszCoMemErrorText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGrammarState( 
            /* [out] */ SPGRAMMARSTATE *peGrammarState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecoGrammarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecoGrammar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecoGrammar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecoGrammar * This);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, ResetGrammar)
        HRESULT ( STDMETHODCALLTYPE *ResetGrammar )( 
            ISpRecoGrammar * This,
            /* [in] */ WORD NewLanguage);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, GetRule)
        HRESULT ( STDMETHODCALLTYPE *GetRule )( 
            ISpRecoGrammar * This,
            /* [in] */ LPCWSTR pszRuleName,
            /* [in] */ DWORD dwRuleId,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ BOOL fCreateIfNotExist,
            /* [out] */ SPSTATEHANDLE *phInitialState);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, ClearRule)
        HRESULT ( STDMETHODCALLTYPE *ClearRule )( 
            ISpRecoGrammar * This,
            SPSTATEHANDLE hState);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, CreateNewState)
        HRESULT ( STDMETHODCALLTYPE *CreateNewState )( 
            ISpRecoGrammar * This,
            SPSTATEHANDLE hState,
            SPSTATEHANDLE *phState);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, AddWordTransition)
        HRESULT ( STDMETHODCALLTYPE *AddWordTransition )( 
            ISpRecoGrammar * This,
            SPSTATEHANDLE hFromState,
            SPSTATEHANDLE hToState,
            LPCWSTR psz,
            LPCWSTR pszSeparators,
            SPGRAMMARWORDTYPE eWordType,
            float Weight,
            const SPPROPERTYINFO *pPropInfo);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, AddRuleTransition)
        HRESULT ( STDMETHODCALLTYPE *AddRuleTransition )( 
            ISpRecoGrammar * This,
            SPSTATEHANDLE hFromState,
            SPSTATEHANDLE hToState,
            SPSTATEHANDLE hRule,
            float Weight,
            const SPPROPERTYINFO *pPropInfo);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, AddResource)
        HRESULT ( STDMETHODCALLTYPE *AddResource )( 
            ISpRecoGrammar * This,
            /* [in] */ SPSTATEHANDLE hRuleState,
            /* [in] */ LPCWSTR pszResourceName,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszResourceValue);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder, Commit)
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            ISpRecoGrammar * This,
            DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, GetGrammarId)
        HRESULT ( STDMETHODCALLTYPE *GetGrammarId )( 
            ISpRecoGrammar * This,
            /* [out] */ ULONGLONG *pullGrammarId);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, GetRecoContext)
        HRESULT ( STDMETHODCALLTYPE *GetRecoContext )( 
            ISpRecoGrammar * This,
            /* [out] */ ISpRecoContext **ppRecoCtxt);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, LoadCmdFromFile)
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromFile )( 
            ISpRecoGrammar * This,
            /* [string][in] */ LPCWSTR pszFileName,
            /* [in] */ SPLOADOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, LoadCmdFromObject)
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromObject )( 
            ISpRecoGrammar * This,
            /* [in] */ REFCLSID rcid,
            /* [string][in] */ LPCWSTR pszGrammarName,
            /* [in] */ SPLOADOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, LoadCmdFromResource)
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromResource )( 
            ISpRecoGrammar * This,
            /* [in] */ HMODULE hModule,
            /* [string][in] */ LPCWSTR pszResourceName,
            /* [string][in] */ LPCWSTR pszResourceType,
            /* [in] */ WORD wLanguage,
            /* [in] */ SPLOADOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, LoadCmdFromMemory)
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromMemory )( 
            ISpRecoGrammar * This,
            /* [in] */ const SPBINARYGRAMMAR *pGrammar,
            /* [in] */ SPLOADOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, LoadCmdFromProprietaryGrammar)
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromProprietaryGrammar )( 
            ISpRecoGrammar * This,
            /* [in] */ REFGUID rguidParam,
            /* [string][in] */ LPCWSTR pszStringParam,
            /* [in] */ const void *pvDataPrarm,
            /* [in] */ ULONG cbDataSize,
            /* [in] */ SPLOADOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, SetRuleState)
        HRESULT ( STDMETHODCALLTYPE *SetRuleState )( 
            ISpRecoGrammar * This,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszName,
            void *pReserved,
            /* [in] */ SPRULESTATE NewState);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, SetRuleIdState)
        HRESULT ( STDMETHODCALLTYPE *SetRuleIdState )( 
            ISpRecoGrammar * This,
            /* [in] */ ULONG ulRuleId,
            /* [in] */ SPRULESTATE NewState);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, LoadDictation)
        HRESULT ( STDMETHODCALLTYPE *LoadDictation )( 
            ISpRecoGrammar * This,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszTopicName,
            /* [in] */ SPLOADOPTIONS Options);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, UnloadDictation)
        HRESULT ( STDMETHODCALLTYPE *UnloadDictation )( 
            ISpRecoGrammar * This);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, SetDictationState)
        HRESULT ( STDMETHODCALLTYPE *SetDictationState )( 
            ISpRecoGrammar * This,
            /* [in] */ SPRULESTATE NewState);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, SetWordSequenceData)
        HRESULT ( STDMETHODCALLTYPE *SetWordSequenceData )( 
            ISpRecoGrammar * This,
            /* [in][annotation] */ 
            __in_ecount_opt(cchText)  const WCHAR *pText,
            /* [in] */ ULONG cchText,
            /* [in] */ const SPTEXTSELECTIONINFO *pInfo);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, SetTextSelection)
        HRESULT ( STDMETHODCALLTYPE *SetTextSelection )( 
            ISpRecoGrammar * This,
            /* [in] */ const SPTEXTSELECTIONINFO *pInfo);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, IsPronounceable)
        HRESULT ( STDMETHODCALLTYPE *IsPronounceable )( 
            ISpRecoGrammar * This,
            /* [string][in] */ LPCWSTR pszWord,
            /* [out] */ SPWORDPRONOUNCEABLE *pWordPronounceable);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, SetGrammarState)
        HRESULT ( STDMETHODCALLTYPE *SetGrammarState )( 
            ISpRecoGrammar * This,
            /* [in] */ SPGRAMMARSTATE eGrammarState);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, SaveCmd)
        HRESULT ( STDMETHODCALLTYPE *SaveCmd )( 
            ISpRecoGrammar * This,
            /* [in] */ IStream *pStream,
            /* [optional][out][annotation] */ 
            __deref_opt_out  LPWSTR *ppszCoMemErrorText);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar, GetGrammarState)
        HRESULT ( STDMETHODCALLTYPE *GetGrammarState )( 
            ISpRecoGrammar * This,
            /* [out] */ SPGRAMMARSTATE *peGrammarState);
        
        END_INTERFACE
    } ISpRecoGrammarVtbl;

    interface ISpRecoGrammar
    {
        CONST_VTBL struct ISpRecoGrammarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecoGrammar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecoGrammar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecoGrammar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecoGrammar_ResetGrammar(This,NewLanguage)	\
    ( (This)->lpVtbl -> ResetGrammar(This,NewLanguage) ) 

#define ISpRecoGrammar_GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState)	\
    ( (This)->lpVtbl -> GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) ) 

#define ISpRecoGrammar_ClearRule(This,hState)	\
    ( (This)->lpVtbl -> ClearRule(This,hState) ) 

#define ISpRecoGrammar_CreateNewState(This,hState,phState)	\
    ( (This)->lpVtbl -> CreateNewState(This,hState,phState) ) 

#define ISpRecoGrammar_AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo)	\
    ( (This)->lpVtbl -> AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) ) 

#define ISpRecoGrammar_AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo)	\
    ( (This)->lpVtbl -> AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) ) 

#define ISpRecoGrammar_AddResource(This,hRuleState,pszResourceName,pszResourceValue)	\
    ( (This)->lpVtbl -> AddResource(This,hRuleState,pszResourceName,pszResourceValue) ) 

#define ISpRecoGrammar_Commit(This,dwFlags)	\
    ( (This)->lpVtbl -> Commit(This,dwFlags) ) 


#define ISpRecoGrammar_GetGrammarId(This,pullGrammarId)	\
    ( (This)->lpVtbl -> GetGrammarId(This,pullGrammarId) ) 

#define ISpRecoGrammar_GetRecoContext(This,ppRecoCtxt)	\
    ( (This)->lpVtbl -> GetRecoContext(This,ppRecoCtxt) ) 

#define ISpRecoGrammar_LoadCmdFromFile(This,pszFileName,Options)	\
    ( (This)->lpVtbl -> LoadCmdFromFile(This,pszFileName,Options) ) 

#define ISpRecoGrammar_LoadCmdFromObject(This,rcid,pszGrammarName,Options)	\
    ( (This)->lpVtbl -> LoadCmdFromObject(This,rcid,pszGrammarName,Options) ) 

#define ISpRecoGrammar_LoadCmdFromResource(This,hModule,pszResourceName,pszResourceType,wLanguage,Options)	\
    ( (This)->lpVtbl -> LoadCmdFromResource(This,hModule,pszResourceName,pszResourceType,wLanguage,Options) ) 

#define ISpRecoGrammar_LoadCmdFromMemory(This,pGrammar,Options)	\
    ( (This)->lpVtbl -> LoadCmdFromMemory(This,pGrammar,Options) ) 

#define ISpRecoGrammar_LoadCmdFromProprietaryGrammar(This,rguidParam,pszStringParam,pvDataPrarm,cbDataSize,Options)	\
    ( (This)->lpVtbl -> LoadCmdFromProprietaryGrammar(This,rguidParam,pszStringParam,pvDataPrarm,cbDataSize,Options) ) 

#define ISpRecoGrammar_SetRuleState(This,pszName,pReserved,NewState)	\
    ( (This)->lpVtbl -> SetRuleState(This,pszName,pReserved,NewState) ) 

#define ISpRecoGrammar_SetRuleIdState(This,ulRuleId,NewState)	\
    ( (This)->lpVtbl -> SetRuleIdState(This,ulRuleId,NewState) ) 

#define ISpRecoGrammar_LoadDictation(This,pszTopicName,Options)	\
    ( (This)->lpVtbl -> LoadDictation(This,pszTopicName,Options) ) 

#define ISpRecoGrammar_UnloadDictation(This)	\
    ( (This)->lpVtbl -> UnloadDictation(This) ) 

#define ISpRecoGrammar_SetDictationState(This,NewState)	\
    ( (This)->lpVtbl -> SetDictationState(This,NewState) ) 

#define ISpRecoGrammar_SetWordSequenceData(This,pText,cchText,pInfo)	\
    ( (This)->lpVtbl -> SetWordSequenceData(This,pText,cchText,pInfo) ) 

#define ISpRecoGrammar_SetTextSelection(This,pInfo)	\
    ( (This)->lpVtbl -> SetTextSelection(This,pInfo) ) 

#define ISpRecoGrammar_IsPronounceable(This,pszWord,pWordPronounceable)	\
    ( (This)->lpVtbl -> IsPronounceable(This,pszWord,pWordPronounceable) ) 

#define ISpRecoGrammar_SetGrammarState(This,eGrammarState)	\
    ( (This)->lpVtbl -> SetGrammarState(This,eGrammarState) ) 

#define ISpRecoGrammar_SaveCmd(This,pStream,ppszCoMemErrorText)	\
    ( (This)->lpVtbl -> SaveCmd(This,pStream,ppszCoMemErrorText) ) 

#define ISpRecoGrammar_GetGrammarState(This,peGrammarState)	\
    ( (This)->lpVtbl -> GetGrammarState(This,peGrammarState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecoGrammar_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0038 */
/* [local] */ 

typedef 
enum SPMATCHINGMODE
    {
        AllWords	= 0,
        Subsequence	= 1,
        OrderedSubset	= 3,
        SubsequenceContentRequired	= 5,
        OrderedSubsetContentRequired	= 7
    } 	SPMATCHINGMODE;

typedef 
enum PHONETICALPHABET
    {
        PA_Ipa	= 0,
        PA_Ups	= 1,
        PA_Sapi	= 2
    } 	PHONETICALPHABET;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0038_v0_0_s_ifspec;

#ifndef __ISpGrammarBuilder2_INTERFACE_DEFINED__
#define __ISpGrammarBuilder2_INTERFACE_DEFINED__

/* interface ISpGrammarBuilder2 */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpGrammarBuilder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8AB10026-20CC-4b20-8C22-A49C9BA78F60")
    ISpGrammarBuilder2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTextSubset( 
            /* [in] */ SPSTATEHANDLE hFromState,
            /* [in] */ SPSTATEHANDLE hToState,
            /* [in] */ LPCWSTR psz,
            /* [in] */ SPMATCHINGMODE eMatchMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPhoneticAlphabet( 
            PHONETICALPHABET phoneticALphabet) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpGrammarBuilder2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpGrammarBuilder2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpGrammarBuilder2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpGrammarBuilder2 * This);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder2, AddTextSubset)
        HRESULT ( STDMETHODCALLTYPE *AddTextSubset )( 
            ISpGrammarBuilder2 * This,
            /* [in] */ SPSTATEHANDLE hFromState,
            /* [in] */ SPSTATEHANDLE hToState,
            /* [in] */ LPCWSTR psz,
            /* [in] */ SPMATCHINGMODE eMatchMode);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilder2, SetPhoneticAlphabet)
        HRESULT ( STDMETHODCALLTYPE *SetPhoneticAlphabet )( 
            ISpGrammarBuilder2 * This,
            PHONETICALPHABET phoneticALphabet);
        
        END_INTERFACE
    } ISpGrammarBuilder2Vtbl;

    interface ISpGrammarBuilder2
    {
        CONST_VTBL struct ISpGrammarBuilder2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpGrammarBuilder2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpGrammarBuilder2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpGrammarBuilder2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpGrammarBuilder2_AddTextSubset(This,hFromState,hToState,psz,eMatchMode)	\
    ( (This)->lpVtbl -> AddTextSubset(This,hFromState,hToState,psz,eMatchMode) ) 

#define ISpGrammarBuilder2_SetPhoneticAlphabet(This,phoneticALphabet)	\
    ( (This)->lpVtbl -> SetPhoneticAlphabet(This,phoneticALphabet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpGrammarBuilder2_INTERFACE_DEFINED__ */


#ifndef __ISpGrammarBuilderLexicon_INTERFACE_DEFINED__
#define __ISpGrammarBuilderLexicon_INTERFACE_DEFINED__

/* interface ISpGrammarBuilderLexicon */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpGrammarBuilderLexicon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D58B97E7-A478-4c75-9F51-9713B224E5AF")
    ISpGrammarBuilderLexicon : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddLexicon( 
            ISpLexicon *pLexicon,
            DWORD dwLexiconTypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllLexicons( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpGrammarBuilderLexiconVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpGrammarBuilderLexicon * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpGrammarBuilderLexicon * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpGrammarBuilderLexicon * This);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilderLexicon, AddLexicon)
        HRESULT ( STDMETHODCALLTYPE *AddLexicon )( 
            ISpGrammarBuilderLexicon * This,
            ISpLexicon *pLexicon,
            DWORD dwLexiconTypes);
        
        DECLSPEC_XFGVIRT(ISpGrammarBuilderLexicon, RemoveAllLexicons)
        HRESULT ( STDMETHODCALLTYPE *RemoveAllLexicons )( 
            ISpGrammarBuilderLexicon * This);
        
        END_INTERFACE
    } ISpGrammarBuilderLexiconVtbl;

    interface ISpGrammarBuilderLexicon
    {
        CONST_VTBL struct ISpGrammarBuilderLexiconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpGrammarBuilderLexicon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpGrammarBuilderLexicon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpGrammarBuilderLexicon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpGrammarBuilderLexicon_AddLexicon(This,pLexicon,dwLexiconTypes)	\
    ( (This)->lpVtbl -> AddLexicon(This,pLexicon,dwLexiconTypes) ) 

#define ISpGrammarBuilderLexicon_RemoveAllLexicons(This)	\
    ( (This)->lpVtbl -> RemoveAllLexicons(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpGrammarBuilderLexicon_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0040 */
/* [local] */ 

#define SPRP_NORMAL 0


extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0040_v0_0_s_ifspec;

#ifndef __ISpRecoGrammar2_INTERFACE_DEFINED__
#define __ISpRecoGrammar2_INTERFACE_DEFINED__

/* interface ISpRecoGrammar2 */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecoGrammar2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B37BC9E-9ED6-44a3-93D3-18F022B79EC3")
    ISpRecoGrammar2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRules( 
            /* [out] */ SPRULE **ppCoMemRules,
            /* [out] */ UINT *puNumRules) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadCmdFromFile2( 
            /* [string][in] */ LPCWSTR pszFileName,
            /* [in] */ SPLOADOPTIONS Options,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszSharingUri,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszBaseUri) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadCmdFromMemory2( 
            /* [in] */ const SPBINARYGRAMMAR *pGrammar,
            /* [in] */ SPLOADOPTIONS Options,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszSharingUri,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszBaseUri) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRulePriority( 
            /* [string][in] */ LPCWSTR pszRuleName,
            /* [in] */ ULONG ulRuleId,
            /* [in] */ int nRulePriority) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRuleWeight( 
            /* [string][in] */ LPCWSTR pszRuleName,
            /* [in] */ ULONG ulRuleId,
            /* [in] */ float flWeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDictationWeight( 
            /* [in] */ float flWeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGrammarLoader( 
            /* [in] */ ISpeechResourceLoader *pLoader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSMLSecurityManager( 
            /* [in] */ IInternetSecurityManager *pSMLSecurityManager) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecoGrammar2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecoGrammar2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecoGrammar2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecoGrammar2 * This);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, GetRules)
        HRESULT ( STDMETHODCALLTYPE *GetRules )( 
            ISpRecoGrammar2 * This,
            /* [out] */ SPRULE **ppCoMemRules,
            /* [out] */ UINT *puNumRules);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, LoadCmdFromFile2)
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromFile2 )( 
            ISpRecoGrammar2 * This,
            /* [string][in] */ LPCWSTR pszFileName,
            /* [in] */ SPLOADOPTIONS Options,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszSharingUri,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszBaseUri);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, LoadCmdFromMemory2)
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromMemory2 )( 
            ISpRecoGrammar2 * This,
            /* [in] */ const SPBINARYGRAMMAR *pGrammar,
            /* [in] */ SPLOADOPTIONS Options,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszSharingUri,
            /* [string][in][annotation] */ 
            __in_opt  LPCWSTR pszBaseUri);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, SetRulePriority)
        HRESULT ( STDMETHODCALLTYPE *SetRulePriority )( 
            ISpRecoGrammar2 * This,
            /* [string][in] */ LPCWSTR pszRuleName,
            /* [in] */ ULONG ulRuleId,
            /* [in] */ int nRulePriority);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, SetRuleWeight)
        HRESULT ( STDMETHODCALLTYPE *SetRuleWeight )( 
            ISpRecoGrammar2 * This,
            /* [string][in] */ LPCWSTR pszRuleName,
            /* [in] */ ULONG ulRuleId,
            /* [in] */ float flWeight);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, SetDictationWeight)
        HRESULT ( STDMETHODCALLTYPE *SetDictationWeight )( 
            ISpRecoGrammar2 * This,
            /* [in] */ float flWeight);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, SetGrammarLoader)
        HRESULT ( STDMETHODCALLTYPE *SetGrammarLoader )( 
            ISpRecoGrammar2 * This,
            /* [in] */ ISpeechResourceLoader *pLoader);
        
        DECLSPEC_XFGVIRT(ISpRecoGrammar2, SetSMLSecurityManager)
        HRESULT ( STDMETHODCALLTYPE *SetSMLSecurityManager )( 
            ISpRecoGrammar2 * This,
            /* [in] */ IInternetSecurityManager *pSMLSecurityManager);
        
        END_INTERFACE
    } ISpRecoGrammar2Vtbl;

    interface ISpRecoGrammar2
    {
        CONST_VTBL struct ISpRecoGrammar2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecoGrammar2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecoGrammar2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecoGrammar2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecoGrammar2_GetRules(This,ppCoMemRules,puNumRules)	\
    ( (This)->lpVtbl -> GetRules(This,ppCoMemRules,puNumRules) ) 

#define ISpRecoGrammar2_LoadCmdFromFile2(This,pszFileName,Options,pszSharingUri,pszBaseUri)	\
    ( (This)->lpVtbl -> LoadCmdFromFile2(This,pszFileName,Options,pszSharingUri,pszBaseUri) ) 

#define ISpRecoGrammar2_LoadCmdFromMemory2(This,pGrammar,Options,pszSharingUri,pszBaseUri)	\
    ( (This)->lpVtbl -> LoadCmdFromMemory2(This,pGrammar,Options,pszSharingUri,pszBaseUri) ) 

#define ISpRecoGrammar2_SetRulePriority(This,pszRuleName,ulRuleId,nRulePriority)	\
    ( (This)->lpVtbl -> SetRulePriority(This,pszRuleName,ulRuleId,nRulePriority) ) 

#define ISpRecoGrammar2_SetRuleWeight(This,pszRuleName,ulRuleId,flWeight)	\
    ( (This)->lpVtbl -> SetRuleWeight(This,pszRuleName,ulRuleId,flWeight) ) 

#define ISpRecoGrammar2_SetDictationWeight(This,flWeight)	\
    ( (This)->lpVtbl -> SetDictationWeight(This,flWeight) ) 

#define ISpRecoGrammar2_SetGrammarLoader(This,pLoader)	\
    ( (This)->lpVtbl -> SetGrammarLoader(This,pLoader) ) 

#define ISpRecoGrammar2_SetSMLSecurityManager(This,pSMLSecurityManager)	\
    ( (This)->lpVtbl -> SetSMLSecurityManager(This,pSMLSecurityManager) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecoGrammar2_INTERFACE_DEFINED__ */


#ifndef __ISpeechResourceLoader_INTERFACE_DEFINED__
#define __ISpeechResourceLoader_INTERFACE_DEFINED__

/* interface ISpeechResourceLoader */
/* [dual][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpeechResourceLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B9AC5783-FCD0-4b21-B119-B4F8DA8FD2C3")
    ISpeechResourceLoader : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadResource( 
            /* [in] */ BSTR bstrResourceUri,
            /* [in] */ VARIANT_BOOL fAlwaysReload,
            /* [out] */ IUnknown **pStream,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrMIMEType,
            /* [out] */ VARIANT_BOOL *pfModified,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrRedirectUrl) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLocalCopy( 
            /* [in] */ BSTR bstrResourceUri,
            /* [out] */ BSTR *pbstrLocalPath,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrMIMEType,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrRedirectUrl) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReleaseLocalCopy( 
            /* [in] */ BSTR pbstrLocalPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpeechResourceLoaderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpeechResourceLoader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpeechResourceLoader * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpeechResourceLoader * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpeechResourceLoader * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpeechResourceLoader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpeechResourceLoader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpeechResourceLoader * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISpeechResourceLoader, LoadResource)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadResource )( 
            ISpeechResourceLoader * This,
            /* [in] */ BSTR bstrResourceUri,
            /* [in] */ VARIANT_BOOL fAlwaysReload,
            /* [out] */ IUnknown **pStream,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrMIMEType,
            /* [out] */ VARIANT_BOOL *pfModified,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrRedirectUrl);
        
        DECLSPEC_XFGVIRT(ISpeechResourceLoader, GetLocalCopy)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetLocalCopy )( 
            ISpeechResourceLoader * This,
            /* [in] */ BSTR bstrResourceUri,
            /* [out] */ BSTR *pbstrLocalPath,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrMIMEType,
            /* [out][annotation] */ 
            __out_opt  BSTR *pbstrRedirectUrl);
        
        DECLSPEC_XFGVIRT(ISpeechResourceLoader, ReleaseLocalCopy)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReleaseLocalCopy )( 
            ISpeechResourceLoader * This,
            /* [in] */ BSTR pbstrLocalPath);
        
        END_INTERFACE
    } ISpeechResourceLoaderVtbl;

    interface ISpeechResourceLoader
    {
        CONST_VTBL struct ISpeechResourceLoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpeechResourceLoader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpeechResourceLoader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpeechResourceLoader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpeechResourceLoader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpeechResourceLoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpeechResourceLoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpeechResourceLoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpeechResourceLoader_LoadResource(This,bstrResourceUri,fAlwaysReload,pStream,pbstrMIMEType,pfModified,pbstrRedirectUrl)	\
    ( (This)->lpVtbl -> LoadResource(This,bstrResourceUri,fAlwaysReload,pStream,pbstrMIMEType,pfModified,pbstrRedirectUrl) ) 

#define ISpeechResourceLoader_GetLocalCopy(This,bstrResourceUri,pbstrLocalPath,pbstrMIMEType,pbstrRedirectUrl)	\
    ( (This)->lpVtbl -> GetLocalCopy(This,bstrResourceUri,pbstrLocalPath,pbstrMIMEType,pbstrRedirectUrl) ) 

#define ISpeechResourceLoader_ReleaseLocalCopy(This,pbstrLocalPath)	\
    ( (This)->lpVtbl -> ReleaseLocalCopy(This,pbstrLocalPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpeechResourceLoader_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0042 */
/* [local] */ 

typedef /* [hidden][restricted] */ struct SPRECOCONTEXTSTATUS
    {
    SPINTERFERENCE eInterference;
    WCHAR szRequestTypeOfUI[ 255 ];
    DWORD dwReserved1;
    DWORD dwReserved2;
    } 	SPRECOCONTEXTSTATUS;

typedef /* [hidden] */ 
enum SPBOOKMARKOPTIONS
    {
        SPBO_NONE	= 0,
        SPBO_PAUSE	= ( 1 << 0 ) ,
        SPBO_AHEAD	= ( 1 << 1 ) ,
        SPBO_TIME_UNITS	= ( 1 << 2 ) 
    } 	SPBOOKMARKOPTIONS;

typedef /* [hidden] */ 
enum SPAUDIOOPTIONS
    {
        SPAO_NONE	= 0,
        SPAO_RETAIN_AUDIO	= ( 1 << 0 ) 
    } 	SPAUDIOOPTIONS;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0042_v0_0_s_ifspec;

#ifndef __ISpRecoContext_INTERFACE_DEFINED__
#define __ISpRecoContext_INTERFACE_DEFINED__

/* interface ISpRecoContext */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecoContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F740A62F-7C15-489E-8234-940A33D9272D")
    ISpRecoContext : public ISpEventSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRecognizer( 
            /* [out] */ ISpRecognizer **ppRecognizer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateGrammar( 
            /* [in] */ ULONGLONG ullGrammarId,
            /* [out] */ ISpRecoGrammar **ppGrammar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ SPRECOCONTEXTSTATUS *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxAlternates( 
            /* [in] */ ULONG *pcAlternates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaxAlternates( 
            /* [in] */ ULONG cAlternates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioOptions( 
            /* [in] */ SPAUDIOOPTIONS Options,
            /* [in] */ const GUID *pAudioFormatId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioOptions( 
            /* [in] */ SPAUDIOOPTIONS *pOptions,
            /* [out] */ GUID *pAudioFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWFEX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeserializeResult( 
            /* [in] */ const SPSERIALIZEDRESULT *pSerializedResult,
            /* [out] */ ISpRecoResult **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Bookmark( 
            /* [in] */ SPBOOKMARKOPTIONS Options,
            /* [in] */ ULONGLONG ullStreamPosition,
            /* [in] */ LPARAM lparamEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAdaptationData( 
            /* [string][in] */ LPCWSTR pAdaptationData,
            /* [in] */ const ULONG cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pause( 
            DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( 
            DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVoice( 
            /* [in] */ ISpVoice *pVoice,
            /* [in] */ BOOL fAllowFormatChanges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVoice( 
            /* [out] */ ISpVoice **ppVoice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVoicePurgeEvent( 
            /* [in] */ ULONGLONG ullEventInterest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVoicePurgeEvent( 
            /* [out] */ ULONGLONG *pullEventInterest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContextState( 
            /* [in] */ SPCONTEXTSTATE eContextState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContextState( 
            /* [out] */ SPCONTEXTSTATE *peContextState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecoContextVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecoContext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecoContext * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecoContext * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifySink)
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )( 
            ISpRecoContext * This,
            /* [in] */ ISpNotifySink *pNotifySink);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWindowMessage)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )( 
            ISpRecoContext * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackFunction)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )( 
            ISpRecoContext * This,
            /* [in] */ SPNOTIFYCALLBACK *pfnCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyCallbackInterface)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )( 
            ISpRecoContext * This,
            /* [in] */ ISpNotifyCallback *pSpCallback,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, SetNotifyWin32Event)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )( 
            ISpRecoContext * This);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, WaitForNotifyEvent)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )( 
            ISpRecoContext * This,
            /* [in] */ DWORD dwMilliseconds);
        
        DECLSPEC_XFGVIRT(ISpNotifySource, GetNotifyEventHandle)
        /* [local] */ HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )( 
            ISpRecoContext * This);
        
        DECLSPEC_XFGVIRT(ISpEventSource, SetInterest)
        HRESULT ( STDMETHODCALLTYPE *SetInterest )( 
            ISpRecoContext * This,
            /* [in] */ ULONGLONG ullEventInterest,
            /* [in] */ ULONGLONG ullQueuedInterest);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetEvents)
        HRESULT ( STDMETHODCALLTYPE *GetEvents )( 
            ISpRecoContext * This,
            /* [in] */ ULONG ulCount,
            /* [size_is][out] */ SPEVENT *pEventArray,
            /* [out] */ ULONG *pulFetched);
        
        DECLSPEC_XFGVIRT(ISpEventSource, GetInfo)
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            ISpRecoContext * This,
            /* [out] */ SPEVENTSOURCEINFO *pInfo);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, GetRecognizer)
        HRESULT ( STDMETHODCALLTYPE *GetRecognizer )( 
            ISpRecoContext * This,
            /* [out] */ ISpRecognizer **ppRecognizer);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, CreateGrammar)
        HRESULT ( STDMETHODCALLTYPE *CreateGrammar )( 
            ISpRecoContext * This,
            /* [in] */ ULONGLONG ullGrammarId,
            /* [out] */ ISpRecoGrammar **ppGrammar);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, GetStatus)
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISpRecoContext * This,
            /* [out] */ SPRECOCONTEXTSTATUS *pStatus);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, GetMaxAlternates)
        HRESULT ( STDMETHODCALLTYPE *GetMaxAlternates )( 
            ISpRecoContext * This,
            /* [in] */ ULONG *pcAlternates);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, SetMaxAlternates)
        HRESULT ( STDMETHODCALLTYPE *SetMaxAlternates )( 
            ISpRecoContext * This,
            /* [in] */ ULONG cAlternates);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, SetAudioOptions)
        HRESULT ( STDMETHODCALLTYPE *SetAudioOptions )( 
            ISpRecoContext * This,
            /* [in] */ SPAUDIOOPTIONS Options,
            /* [in] */ const GUID *pAudioFormatId,
            /* [in] */ const WAVEFORMATEX *pWaveFormatEx);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, GetAudioOptions)
        HRESULT ( STDMETHODCALLTYPE *GetAudioOptions )( 
            ISpRecoContext * This,
            /* [in] */ SPAUDIOOPTIONS *pOptions,
            /* [out] */ GUID *pAudioFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWFEX);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, DeserializeResult)
        HRESULT ( STDMETHODCALLTYPE *DeserializeResult )( 
            ISpRecoContext * This,
            /* [in] */ const SPSERIALIZEDRESULT *pSerializedResult,
            /* [out] */ ISpRecoResult **ppResult);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, Bookmark)
        HRESULT ( STDMETHODCALLTYPE *Bookmark )( 
            ISpRecoContext * This,
            /* [in] */ SPBOOKMARKOPTIONS Options,
            /* [in] */ ULONGLONG ullStreamPosition,
            /* [in] */ LPARAM lparamEvent);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, SetAdaptationData)
        HRESULT ( STDMETHODCALLTYPE *SetAdaptationData )( 
            ISpRecoContext * This,
            /* [string][in] */ LPCWSTR pAdaptationData,
            /* [in] */ const ULONG cch);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, Pause)
        HRESULT ( STDMETHODCALLTYPE *Pause )( 
            ISpRecoContext * This,
            DWORD dwReserved);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, Resume)
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            ISpRecoContext * This,
            DWORD dwReserved);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, SetVoice)
        HRESULT ( STDMETHODCALLTYPE *SetVoice )( 
            ISpRecoContext * This,
            /* [in] */ ISpVoice *pVoice,
            /* [in] */ BOOL fAllowFormatChanges);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, GetVoice)
        HRESULT ( STDMETHODCALLTYPE *GetVoice )( 
            ISpRecoContext * This,
            /* [out] */ ISpVoice **ppVoice);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, SetVoicePurgeEvent)
        HRESULT ( STDMETHODCALLTYPE *SetVoicePurgeEvent )( 
            ISpRecoContext * This,
            /* [in] */ ULONGLONG ullEventInterest);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, GetVoicePurgeEvent)
        HRESULT ( STDMETHODCALLTYPE *GetVoicePurgeEvent )( 
            ISpRecoContext * This,
            /* [out] */ ULONGLONG *pullEventInterest);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, SetContextState)
        HRESULT ( STDMETHODCALLTYPE *SetContextState )( 
            ISpRecoContext * This,
            /* [in] */ SPCONTEXTSTATE eContextState);
        
        DECLSPEC_XFGVIRT(ISpRecoContext, GetContextState)
        HRESULT ( STDMETHODCALLTYPE *GetContextState )( 
            ISpRecoContext * This,
            /* [out] */ SPCONTEXTSTATE *peContextState);
        
        END_INTERFACE
    } ISpRecoContextVtbl;

    interface ISpRecoContext
    {
        CONST_VTBL struct ISpRecoContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecoContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecoContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecoContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecoContext_SetNotifySink(This,pNotifySink)	\
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) ) 

#define ISpRecoContext_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) ) 

#define ISpRecoContext_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) ) 

#define ISpRecoContext_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam)	\
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) ) 

#define ISpRecoContext_SetNotifyWin32Event(This)	\
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) ) 

#define ISpRecoContext_WaitForNotifyEvent(This,dwMilliseconds)	\
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) ) 

#define ISpRecoContext_GetNotifyEventHandle(This)	\
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) ) 


#define ISpRecoContext_SetInterest(This,ullEventInterest,ullQueuedInterest)	\
    ( (This)->lpVtbl -> SetInterest(This,ullEventInterest,ullQueuedInterest) ) 

#define ISpRecoContext_GetEvents(This,ulCount,pEventArray,pulFetched)	\
    ( (This)->lpVtbl -> GetEvents(This,ulCount,pEventArray,pulFetched) ) 

#define ISpRecoContext_GetInfo(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfo) ) 


#define ISpRecoContext_GetRecognizer(This,ppRecognizer)	\
    ( (This)->lpVtbl -> GetRecognizer(This,ppRecognizer) ) 

#define ISpRecoContext_CreateGrammar(This,ullGrammarId,ppGrammar)	\
    ( (This)->lpVtbl -> CreateGrammar(This,ullGrammarId,ppGrammar) ) 

#define ISpRecoContext_GetStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pStatus) ) 

#define ISpRecoContext_GetMaxAlternates(This,pcAlternates)	\
    ( (This)->lpVtbl -> GetMaxAlternates(This,pcAlternates) ) 

#define ISpRecoContext_SetMaxAlternates(This,cAlternates)	\
    ( (This)->lpVtbl -> SetMaxAlternates(This,cAlternates) ) 

#define ISpRecoContext_SetAudioOptions(This,Options,pAudioFormatId,pWaveFormatEx)	\
    ( (This)->lpVtbl -> SetAudioOptions(This,Options,pAudioFormatId,pWaveFormatEx) ) 

#define ISpRecoContext_GetAudioOptions(This,pOptions,pAudioFormatId,ppCoMemWFEX)	\
    ( (This)->lpVtbl -> GetAudioOptions(This,pOptions,pAudioFormatId,ppCoMemWFEX) ) 

#define ISpRecoContext_DeserializeResult(This,pSerializedResult,ppResult)	\
    ( (This)->lpVtbl -> DeserializeResult(This,pSerializedResult,ppResult) ) 

#define ISpRecoContext_Bookmark(This,Options,ullStreamPosition,lparamEvent)	\
    ( (This)->lpVtbl -> Bookmark(This,Options,ullStreamPosition,lparamEvent) ) 

#define ISpRecoContext_SetAdaptationData(This,pAdaptationData,cch)	\
    ( (This)->lpVtbl -> SetAdaptationData(This,pAdaptationData,cch) ) 

#define ISpRecoContext_Pause(This,dwReserved)	\
    ( (This)->lpVtbl -> Pause(This,dwReserved) ) 

#define ISpRecoContext_Resume(This,dwReserved)	\
    ( (This)->lpVtbl -> Resume(This,dwReserved) ) 

#define ISpRecoContext_SetVoice(This,pVoice,fAllowFormatChanges)	\
    ( (This)->lpVtbl -> SetVoice(This,pVoice,fAllowFormatChanges) ) 

#define ISpRecoContext_GetVoice(This,ppVoice)	\
    ( (This)->lpVtbl -> GetVoice(This,ppVoice) ) 

#define ISpRecoContext_SetVoicePurgeEvent(This,ullEventInterest)	\
    ( (This)->lpVtbl -> SetVoicePurgeEvent(This,ullEventInterest) ) 

#define ISpRecoContext_GetVoicePurgeEvent(This,pullEventInterest)	\
    ( (This)->lpVtbl -> GetVoicePurgeEvent(This,pullEventInterest) ) 

#define ISpRecoContext_SetContextState(This,eContextState)	\
    ( (This)->lpVtbl -> SetContextState(This,eContextState) ) 

#define ISpRecoContext_GetContextState(This,peContextState)	\
    ( (This)->lpVtbl -> GetContextState(This,peContextState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecoContext_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0043 */
/* [local] */ 

typedef /* [hidden] */ 
enum SPGRAMMAROPTIONS
    {
        SPGO_SAPI	= 0x1,
        SPGO_SRGS	= 0x2,
        SPGO_UPS	= 0x4,
        SPGO_SRGS_MS_SCRIPT	= 0x8,
        SPGO_SRGS_W3C_SCRIPT	= 0x100,
        SPGO_SRGS_STG_SCRIPT	= 0x200,
        SPGO_SRGS_SCRIPT	= ( ( ( SPGO_SRGS | SPGO_SRGS_MS_SCRIPT )  | SPGO_SRGS_W3C_SCRIPT )  | SPGO_SRGS_STG_SCRIPT ) ,
        SPGO_FILE	= 0x10,
        SPGO_HTTP	= 0x20,
        SPGO_RES	= 0x40,
        SPGO_OBJECT	= 0x80,
        SPGO_DEFAULT	= 0x3fb,
        SPGO_ALL	= 0x3ff
    } 	SPGRAMMAROPTIONS;

typedef /* [hidden] */ 
enum SPADAPTATIONSETTINGS
    {
        SPADS_Default	= 0,
        SPADS_CurrentRecognizer	= 0x1,
        SPADS_RecoProfile	= 0x2,
        SPADS_Immediate	= 0x4,
        SPADS_Reset	= 0x8,
        SPADS_HighVolumeDataSource	= 0x10
    } 	SPADAPTATIONSETTINGS;

typedef /* [hidden] */ 
enum SPADAPTATIONRELEVANCE
    {
        SPAR_Unknown	= 0,
        SPAR_Low	= 1,
        SPAR_Medium	= 2,
        SPAR_High	= 3
    } 	SPADAPTATIONRELEVANCE;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0043_v0_0_s_ifspec;

#ifndef __ISpRecoContext2_INTERFACE_DEFINED__
#define __ISpRecoContext2_INTERFACE_DEFINED__

/* interface ISpRecoContext2 */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecoContext2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BEAD311C-52FF-437f-9464-6B21054CA73D")
    ISpRecoContext2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetGrammarOptions( 
            /* [in] */ DWORD eGrammarOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGrammarOptions( 
            /* [out] */ DWORD *peGrammarOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAdaptationData2( 
            /* [in] */ LPCWSTR pAdaptationData,
            const ULONG cch,
            /* [in] */ LPCWSTR pTopicName,
            DWORD eAdaptationSettings,
            SPADAPTATIONRELEVANCE eRelevance) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecoContext2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecoContext2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecoContext2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecoContext2 * This);
        
        DECLSPEC_XFGVIRT(ISpRecoContext2, SetGrammarOptions)
        HRESULT ( STDMETHODCALLTYPE *SetGrammarOptions )( 
            ISpRecoContext2 * This,
            /* [in] */ DWORD eGrammarOptions);
        
        DECLSPEC_XFGVIRT(ISpRecoContext2, GetGrammarOptions)
        HRESULT ( STDMETHODCALLTYPE *GetGrammarOptions )( 
            ISpRecoContext2 * This,
            /* [out] */ DWORD *peGrammarOptions);
        
        DECLSPEC_XFGVIRT(ISpRecoContext2, SetAdaptationData2)
        HRESULT ( STDMETHODCALLTYPE *SetAdaptationData2 )( 
            ISpRecoContext2 * This,
            /* [in] */ LPCWSTR pAdaptationData,
            const ULONG cch,
            /* [in] */ LPCWSTR pTopicName,
            DWORD eAdaptationSettings,
            SPADAPTATIONRELEVANCE eRelevance);
        
        END_INTERFACE
    } ISpRecoContext2Vtbl;

    interface ISpRecoContext2
    {
        CONST_VTBL struct ISpRecoContext2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecoContext2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecoContext2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecoContext2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecoContext2_SetGrammarOptions(This,eGrammarOptions)	\
    ( (This)->lpVtbl -> SetGrammarOptions(This,eGrammarOptions) ) 

#define ISpRecoContext2_GetGrammarOptions(This,peGrammarOptions)	\
    ( (This)->lpVtbl -> GetGrammarOptions(This,peGrammarOptions) ) 

#define ISpRecoContext2_SetAdaptationData2(This,pAdaptationData,cch,pTopicName,eAdaptationSettings,eRelevance)	\
    ( (This)->lpVtbl -> SetAdaptationData2(This,pAdaptationData,cch,pTopicName,eAdaptationSettings,eRelevance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecoContext2_INTERFACE_DEFINED__ */


#ifndef __ISpProperties_INTERFACE_DEFINED__
#define __ISpProperties_INTERFACE_DEFINED__

/* interface ISpProperties */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B4FB971-B115-4DE1-AD97-E482E3BF6EE4")
    ISpProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPropertyNum( 
            /* [in] */ LPCWSTR pName,
            /* [in] */ LONG lValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyNum( 
            /* [in] */ LPCWSTR pName,
            /* [out] */ LONG *plValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPropertyString( 
            /* [in] */ LPCWSTR pName,
            /* [in] */ LPCWSTR pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyString( 
            /* [in] */ LPCWSTR pName,
            /* [string][out][annotation] */ 
            __deref_out  LPWSTR *ppCoMemValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpProperties * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpProperties * This);
        
        DECLSPEC_XFGVIRT(ISpProperties, SetPropertyNum)
        HRESULT ( STDMETHODCALLTYPE *SetPropertyNum )( 
            ISpProperties * This,
            /* [in] */ LPCWSTR pName,
            /* [in] */ LONG lValue);
        
        DECLSPEC_XFGVIRT(ISpProperties, GetPropertyNum)
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNum )( 
            ISpProperties * This,
            /* [in] */ LPCWSTR pName,
            /* [out] */ LONG *plValue);
        
        DECLSPEC_XFGVIRT(ISpProperties, SetPropertyString)
        HRESULT ( STDMETHODCALLTYPE *SetPropertyString )( 
            ISpProperties * This,
            /* [in] */ LPCWSTR pName,
            /* [in] */ LPCWSTR pValue);
        
        DECLSPEC_XFGVIRT(ISpProperties, GetPropertyString)
        HRESULT ( STDMETHODCALLTYPE *GetPropertyString )( 
            ISpProperties * This,
            /* [in] */ LPCWSTR pName,
            /* [string][out][annotation] */ 
            __deref_out  LPWSTR *ppCoMemValue);
        
        END_INTERFACE
    } ISpPropertiesVtbl;

    interface ISpProperties
    {
        CONST_VTBL struct ISpPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpProperties_SetPropertyNum(This,pName,lValue)	\
    ( (This)->lpVtbl -> SetPropertyNum(This,pName,lValue) ) 

#define ISpProperties_GetPropertyNum(This,pName,plValue)	\
    ( (This)->lpVtbl -> GetPropertyNum(This,pName,plValue) ) 

#define ISpProperties_SetPropertyString(This,pName,pValue)	\
    ( (This)->lpVtbl -> SetPropertyString(This,pName,pValue) ) 

#define ISpProperties_GetPropertyString(This,pName,ppCoMemValue)	\
    ( (This)->lpVtbl -> GetPropertyString(This,pName,ppCoMemValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpProperties_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0045 */
/* [local] */ 

#define	SP_MAX_LANGIDS	( 20 )

typedef /* [hidden][restricted] */ struct SPRECOGNIZERSTATUS
    {
    SPAUDIOSTATUS AudioStatus;
    ULONGLONG ullRecognitionStreamPos;
    ULONG ulStreamNumber;
    ULONG ulNumActive;
    CLSID clsidEngine;
    ULONG cLangIDs;
    WORD aLangID[ 20 ];
    ULONGLONG ullRecognitionStreamTime;
    } 	SPRECOGNIZERSTATUS;

typedef /* [hidden] */ 
enum SPWAVEFORMATTYPE
    {
        SPWF_INPUT	= 0,
        SPWF_SRENGINE	= ( SPWF_INPUT + 1 ) 
    } 	SPSTREAMFORMATTYPE;

typedef /* [hidden] */ 
enum SPRECOSTATE
    {
        SPRST_INACTIVE	= 0,
        SPRST_ACTIVE	= ( SPRST_INACTIVE + 1 ) ,
        SPRST_ACTIVE_ALWAYS	= ( SPRST_ACTIVE + 1 ) ,
        SPRST_INACTIVE_WITH_PURGE	= ( SPRST_ACTIVE_ALWAYS + 1 ) ,
        SPRST_NUM_STATES	= ( SPRST_INACTIVE_WITH_PURGE + 1 ) 
    } 	SPRECOSTATE;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0045_v0_0_s_ifspec;

#ifndef __ISpRecognizer_INTERFACE_DEFINED__
#define __ISpRecognizer_INTERFACE_DEFINED__

/* interface ISpRecognizer */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecognizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2B5F241-DAA0-4507-9E16-5A1EAA2B7A5C")
    ISpRecognizer : public ISpProperties
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRecognizer( 
            /* [in] */ ISpObjectToken *pRecognizer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecognizer( 
            /* [out] */ ISpObjectToken **ppRecognizer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInput( 
            /* [in][annotation] */ 
            __in_opt  IUnknown *pUnkInput,
            /* [in] */ BOOL fAllowFormatChanges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputObjectToken( 
            /* [out] */ ISpObjectToken **ppToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputStream( 
            /* [out] */ ISpStreamFormat **ppStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRecoContext( 
            /* [out] */ ISpRecoContext **ppNewCtxt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecoProfile( 
            /* [out] */ ISpObjectToken **ppToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRecoProfile( 
            /* [in] */ ISpObjectToken *pToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSharedInstance( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecoState( 
            /* [out] */ SPRECOSTATE *pState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRecoState( 
            /* [in] */ SPRECOSTATE NewState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ SPRECOGNIZERSTATUS *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormat( 
            /* [in] */ SPSTREAMFORMATTYPE WaveFormatType,
            /* [out] */ GUID *pFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWFEX) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE IsUISupported( 
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [out] */ BOOL *pfSupported) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DisplayUI( 
            /* [in] */ HWND hwndParent,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszTitle,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EmulateRecognition( 
            /* [in] */ ISpPhrase *pPhrase) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecognizerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecognizer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecognizer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecognizer * This);
        
        DECLSPEC_XFGVIRT(ISpProperties, SetPropertyNum)
        HRESULT ( STDMETHODCALLTYPE *SetPropertyNum )( 
            ISpRecognizer * This,
            /* [in] */ LPCWSTR pName,
            /* [in] */ LONG lValue);
        
        DECLSPEC_XFGVIRT(ISpProperties, GetPropertyNum)
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNum )( 
            ISpRecognizer * This,
            /* [in] */ LPCWSTR pName,
            /* [out] */ LONG *plValue);
        
        DECLSPEC_XFGVIRT(ISpProperties, SetPropertyString)
        HRESULT ( STDMETHODCALLTYPE *SetPropertyString )( 
            ISpRecognizer * This,
            /* [in] */ LPCWSTR pName,
            /* [in] */ LPCWSTR pValue);
        
        DECLSPEC_XFGVIRT(ISpProperties, GetPropertyString)
        HRESULT ( STDMETHODCALLTYPE *GetPropertyString )( 
            ISpRecognizer * This,
            /* [in] */ LPCWSTR pName,
            /* [string][out][annotation] */ 
            __deref_out  LPWSTR *ppCoMemValue);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, SetRecognizer)
        HRESULT ( STDMETHODCALLTYPE *SetRecognizer )( 
            ISpRecognizer * This,
            /* [in] */ ISpObjectToken *pRecognizer);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, GetRecognizer)
        HRESULT ( STDMETHODCALLTYPE *GetRecognizer )( 
            ISpRecognizer * This,
            /* [out] */ ISpObjectToken **ppRecognizer);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, SetInput)
        HRESULT ( STDMETHODCALLTYPE *SetInput )( 
            ISpRecognizer * This,
            /* [in][annotation] */ 
            __in_opt  IUnknown *pUnkInput,
            /* [in] */ BOOL fAllowFormatChanges);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, GetInputObjectToken)
        HRESULT ( STDMETHODCALLTYPE *GetInputObjectToken )( 
            ISpRecognizer * This,
            /* [out] */ ISpObjectToken **ppToken);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, GetInputStream)
        HRESULT ( STDMETHODCALLTYPE *GetInputStream )( 
            ISpRecognizer * This,
            /* [out] */ ISpStreamFormat **ppStream);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, CreateRecoContext)
        HRESULT ( STDMETHODCALLTYPE *CreateRecoContext )( 
            ISpRecognizer * This,
            /* [out] */ ISpRecoContext **ppNewCtxt);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, GetRecoProfile)
        HRESULT ( STDMETHODCALLTYPE *GetRecoProfile )( 
            ISpRecognizer * This,
            /* [out] */ ISpObjectToken **ppToken);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, SetRecoProfile)
        HRESULT ( STDMETHODCALLTYPE *SetRecoProfile )( 
            ISpRecognizer * This,
            /* [in] */ ISpObjectToken *pToken);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, IsSharedInstance)
        HRESULT ( STDMETHODCALLTYPE *IsSharedInstance )( 
            ISpRecognizer * This);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, GetRecoState)
        HRESULT ( STDMETHODCALLTYPE *GetRecoState )( 
            ISpRecognizer * This,
            /* [out] */ SPRECOSTATE *pState);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, SetRecoState)
        HRESULT ( STDMETHODCALLTYPE *SetRecoState )( 
            ISpRecognizer * This,
            /* [in] */ SPRECOSTATE NewState);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, GetStatus)
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISpRecognizer * This,
            /* [out] */ SPRECOGNIZERSTATUS *pStatus);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, GetFormat)
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ISpRecognizer * This,
            /* [in] */ SPSTREAMFORMATTYPE WaveFormatType,
            /* [out] */ GUID *pFormatId,
            /* [out] */ WAVEFORMATEX **ppCoMemWFEX);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, IsUISupported)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *IsUISupported )( 
            ISpRecognizer * This,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData,
            /* [out] */ BOOL *pfSupported);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, DisplayUI)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *DisplayUI )( 
            ISpRecognizer * This,
            /* [in] */ HWND hwndParent,
            /* [in][annotation] */ 
            __in_opt  LPCWSTR pszTitle,
            /* [in] */ LPCWSTR pszTypeOfUI,
            /* [in] */ void *pvExtraData,
            /* [in] */ ULONG cbExtraData);
        
        DECLSPEC_XFGVIRT(ISpRecognizer, EmulateRecognition)
        HRESULT ( STDMETHODCALLTYPE *EmulateRecognition )( 
            ISpRecognizer * This,
            /* [in] */ ISpPhrase *pPhrase);
        
        END_INTERFACE
    } ISpRecognizerVtbl;

    interface ISpRecognizer
    {
        CONST_VTBL struct ISpRecognizerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecognizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecognizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecognizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecognizer_SetPropertyNum(This,pName,lValue)	\
    ( (This)->lpVtbl -> SetPropertyNum(This,pName,lValue) ) 

#define ISpRecognizer_GetPropertyNum(This,pName,plValue)	\
    ( (This)->lpVtbl -> GetPropertyNum(This,pName,plValue) ) 

#define ISpRecognizer_SetPropertyString(This,pName,pValue)	\
    ( (This)->lpVtbl -> SetPropertyString(This,pName,pValue) ) 

#define ISpRecognizer_GetPropertyString(This,pName,ppCoMemValue)	\
    ( (This)->lpVtbl -> GetPropertyString(This,pName,ppCoMemValue) ) 


#define ISpRecognizer_SetRecognizer(This,pRecognizer)	\
    ( (This)->lpVtbl -> SetRecognizer(This,pRecognizer) ) 

#define ISpRecognizer_GetRecognizer(This,ppRecognizer)	\
    ( (This)->lpVtbl -> GetRecognizer(This,ppRecognizer) ) 

#define ISpRecognizer_SetInput(This,pUnkInput,fAllowFormatChanges)	\
    ( (This)->lpVtbl -> SetInput(This,pUnkInput,fAllowFormatChanges) ) 

#define ISpRecognizer_GetInputObjectToken(This,ppToken)	\
    ( (This)->lpVtbl -> GetInputObjectToken(This,ppToken) ) 

#define ISpRecognizer_GetInputStream(This,ppStream)	\
    ( (This)->lpVtbl -> GetInputStream(This,ppStream) ) 

#define ISpRecognizer_CreateRecoContext(This,ppNewCtxt)	\
    ( (This)->lpVtbl -> CreateRecoContext(This,ppNewCtxt) ) 

#define ISpRecognizer_GetRecoProfile(This,ppToken)	\
    ( (This)->lpVtbl -> GetRecoProfile(This,ppToken) ) 

#define ISpRecognizer_SetRecoProfile(This,pToken)	\
    ( (This)->lpVtbl -> SetRecoProfile(This,pToken) ) 

#define ISpRecognizer_IsSharedInstance(This)	\
    ( (This)->lpVtbl -> IsSharedInstance(This) ) 

#define ISpRecognizer_GetRecoState(This,pState)	\
    ( (This)->lpVtbl -> GetRecoState(This,pState) ) 

#define ISpRecognizer_SetRecoState(This,NewState)	\
    ( (This)->lpVtbl -> SetRecoState(This,NewState) ) 

#define ISpRecognizer_GetStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pStatus) ) 

#define ISpRecognizer_GetFormat(This,WaveFormatType,pFormatId,ppCoMemWFEX)	\
    ( (This)->lpVtbl -> GetFormat(This,WaveFormatType,pFormatId,ppCoMemWFEX) ) 

#define ISpRecognizer_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported)	\
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported) ) 

#define ISpRecognizer_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData)	\
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData) ) 

#define ISpRecognizer_EmulateRecognition(This,pPhrase)	\
    ( (This)->lpVtbl -> EmulateRecognition(This,pPhrase) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecognizer_INTERFACE_DEFINED__ */


#ifndef __ISpSerializeState_INTERFACE_DEFINED__
#define __ISpSerializeState_INTERFACE_DEFINED__

/* interface ISpSerializeState */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpSerializeState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21B501A0-0EC7-46c9-92C3-A2BC784C54B9")
    ISpSerializeState : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSerializedState( 
            /* [out] */ BYTE **ppbData,
            /* [out] */ ULONG *pulSize,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSerializedState( 
            /* [in] */ BYTE *pbData,
            /* [in] */ ULONG ulSize,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpSerializeStateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpSerializeState * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpSerializeState * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpSerializeState * This);
        
        DECLSPEC_XFGVIRT(ISpSerializeState, GetSerializedState)
        HRESULT ( STDMETHODCALLTYPE *GetSerializedState )( 
            ISpSerializeState * This,
            /* [out] */ BYTE **ppbData,
            /* [out] */ ULONG *pulSize,
            /* [in] */ DWORD dwReserved);
        
        DECLSPEC_XFGVIRT(ISpSerializeState, SetSerializedState)
        HRESULT ( STDMETHODCALLTYPE *SetSerializedState )( 
            ISpSerializeState * This,
            /* [in] */ BYTE *pbData,
            /* [in] */ ULONG ulSize,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } ISpSerializeStateVtbl;

    interface ISpSerializeState
    {
        CONST_VTBL struct ISpSerializeStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpSerializeState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpSerializeState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpSerializeState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpSerializeState_GetSerializedState(This,ppbData,pulSize,dwReserved)	\
    ( (This)->lpVtbl -> GetSerializedState(This,ppbData,pulSize,dwReserved) ) 

#define ISpSerializeState_SetSerializedState(This,pbData,ulSize,dwReserved)	\
    ( (This)->lpVtbl -> SetSerializedState(This,pbData,ulSize,dwReserved) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpSerializeState_INTERFACE_DEFINED__ */


#ifndef __ISpRecognizer2_INTERFACE_DEFINED__
#define __ISpRecognizer2_INTERFACE_DEFINED__

/* interface ISpRecognizer2 */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecognizer2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8FC6D974-C81E-4098-93C5-0147F61ED4D3")
    ISpRecognizer2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EmulateRecognitionEx( 
            /* [in] */ ISpPhrase *pPhrase,
            /* [in] */ DWORD dwCompareFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTrainingState( 
            BOOL fDoingTraining,
            BOOL fAdaptFromTrainingData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetAcousticModelAdaptation( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecognizer2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecognizer2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecognizer2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecognizer2 * This);
        
        DECLSPEC_XFGVIRT(ISpRecognizer2, EmulateRecognitionEx)
        HRESULT ( STDMETHODCALLTYPE *EmulateRecognitionEx )( 
            ISpRecognizer2 * This,
            /* [in] */ ISpPhrase *pPhrase,
            /* [in] */ DWORD dwCompareFlags);
        
        DECLSPEC_XFGVIRT(ISpRecognizer2, SetTrainingState)
        HRESULT ( STDMETHODCALLTYPE *SetTrainingState )( 
            ISpRecognizer2 * This,
            BOOL fDoingTraining,
            BOOL fAdaptFromTrainingData);
        
        DECLSPEC_XFGVIRT(ISpRecognizer2, ResetAcousticModelAdaptation)
        HRESULT ( STDMETHODCALLTYPE *ResetAcousticModelAdaptation )( 
            ISpRecognizer2 * This);
        
        END_INTERFACE
    } ISpRecognizer2Vtbl;

    interface ISpRecognizer2
    {
        CONST_VTBL struct ISpRecognizer2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecognizer2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecognizer2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecognizer2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecognizer2_EmulateRecognitionEx(This,pPhrase,dwCompareFlags)	\
    ( (This)->lpVtbl -> EmulateRecognitionEx(This,pPhrase,dwCompareFlags) ) 

#define ISpRecognizer2_SetTrainingState(This,fDoingTraining,fAdaptFromTrainingData)	\
    ( (This)->lpVtbl -> SetTrainingState(This,fDoingTraining,fAdaptFromTrainingData) ) 

#define ISpRecognizer2_ResetAcousticModelAdaptation(This)	\
    ( (This)->lpVtbl -> ResetAcousticModelAdaptation(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecognizer2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0048 */
/* [local] */ 

typedef 
enum SPCATEGORYTYPE
    {
        SPCT_COMMAND	= 0,
        SPCT_DICTATION	= ( SPCT_COMMAND + 1 ) ,
        SPCT_SLEEP	= ( SPCT_DICTATION + 1 ) ,
        SPCT_SUB_COMMAND	= ( SPCT_SLEEP + 1 ) ,
        SPCT_SUB_DICTATION	= ( SPCT_SUB_COMMAND + 1 ) 
    } 	SPCATEGORYTYPE;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0048_v0_0_s_ifspec;

#ifndef __ISpRecoCategory_INTERFACE_DEFINED__
#define __ISpRecoCategory_INTERFACE_DEFINED__

/* interface ISpRecoCategory */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecoCategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA0CD0F9-14A2-4f09-8C2A-85CC48979345")
    ISpRecoCategory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ SPCATEGORYTYPE *peCategoryType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecoCategoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecoCategory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecoCategory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecoCategory * This);
        
        DECLSPEC_XFGVIRT(ISpRecoCategory, GetType)
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            ISpRecoCategory * This,
            /* [out] */ SPCATEGORYTYPE *peCategoryType);
        
        END_INTERFACE
    } ISpRecoCategoryVtbl;

    interface ISpRecoCategory
    {
        CONST_VTBL struct ISpRecoCategoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecoCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecoCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecoCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecoCategory_GetType(This,peCategoryType)	\
    ( (This)->lpVtbl -> GetType(This,peCategoryType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecoCategory_INTERFACE_DEFINED__ */


#ifndef __ISpRecognizer3_INTERFACE_DEFINED__
#define __ISpRecognizer3_INTERFACE_DEFINED__

/* interface ISpRecognizer3 */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpRecognizer3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF1B943C-5838-4AA2-8706-D7CD5B333499")
    ISpRecognizer3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [in] */ SPCATEGORYTYPE categoryType,
            /* [out] */ ISpRecoCategory **ppCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetActiveCategory( 
            /* [in] */ ISpRecoCategory *pCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActiveCategory( 
            /* [out] */ ISpRecoCategory **ppCategory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpRecognizer3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpRecognizer3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpRecognizer3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpRecognizer3 * This);
        
        DECLSPEC_XFGVIRT(ISpRecognizer3, GetCategory)
        HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            ISpRecognizer3 * This,
            /* [in] */ SPCATEGORYTYPE categoryType,
            /* [out] */ ISpRecoCategory **ppCategory);
        
        DECLSPEC_XFGVIRT(ISpRecognizer3, SetActiveCategory)
        HRESULT ( STDMETHODCALLTYPE *SetActiveCategory )( 
            ISpRecognizer3 * This,
            /* [in] */ ISpRecoCategory *pCategory);
        
        DECLSPEC_XFGVIRT(ISpRecognizer3, GetActiveCategory)
        HRESULT ( STDMETHODCALLTYPE *GetActiveCategory )( 
            ISpRecognizer3 * This,
            /* [out] */ ISpRecoCategory **ppCategory);
        
        END_INTERFACE
    } ISpRecognizer3Vtbl;

    interface ISpRecognizer3
    {
        CONST_VTBL struct ISpRecognizer3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpRecognizer3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpRecognizer3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpRecognizer3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpRecognizer3_GetCategory(This,categoryType,ppCategory)	\
    ( (This)->lpVtbl -> GetCategory(This,categoryType,ppCategory) ) 

#define ISpRecognizer3_SetActiveCategory(This,pCategory)	\
    ( (This)->lpVtbl -> SetActiveCategory(This,pCategory) ) 

#define ISpRecognizer3_GetActiveCategory(This,ppCategory)	\
    ( (This)->lpVtbl -> GetActiveCategory(This,ppCategory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpRecognizer3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sapi_0000_0050 */
/* [local] */ 

typedef /* [hidden][restricted] */ struct SPNORMALIZATIONLIST
    {
    ULONG ulSize;
    WCHAR **ppszzNormalizedList;
    } 	SPNORMALIZATIONLIST;



extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi_0000_0050_v0_0_s_ifspec;

#ifndef __ISpEnginePronunciation_INTERFACE_DEFINED__
#define __ISpEnginePronunciation_INTERFACE_DEFINED__

/* interface ISpEnginePronunciation */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpEnginePronunciation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C360CE4B-76D1-4214-AD68-52657D5083DA")
    ISpEnginePronunciation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Normalize( 
            /* [string][in] */ LPCWSTR pszWord,
            /* [string][in] */ LPCWSTR pszLeftContext,
            /* [string][in] */ LPCWSTR pszRightContext,
            /* [in] */ WORD LangID,
            /* [out] */ SPNORMALIZATIONLIST *pNormalizationList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPronunciations( 
            /* [string][in] */ LPCWSTR pszWord,
            /* [string][in] */ LPCWSTR pszLeftContext,
            /* [string][in] */ LPCWSTR pszRightContext,
            /* [in] */ WORD LangID,
            /* [out][in] */ SPWORDPRONUNCIATIONLIST *pEnginePronunciationList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpEnginePronunciationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpEnginePronunciation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpEnginePronunciation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpEnginePronunciation * This);
        
        DECLSPEC_XFGVIRT(ISpEnginePronunciation, Normalize)
        HRESULT ( STDMETHODCALLTYPE *Normalize )( 
            ISpEnginePronunciation * This,
            /* [string][in] */ LPCWSTR pszWord,
            /* [string][in] */ LPCWSTR pszLeftContext,
            /* [string][in] */ LPCWSTR pszRightContext,
            /* [in] */ WORD LangID,
            /* [out] */ SPNORMALIZATIONLIST *pNormalizationList);
        
        DECLSPEC_XFGVIRT(ISpEnginePronunciation, GetPronunciations)
        HRESULT ( STDMETHODCALLTYPE *GetPronunciations )( 
            ISpEnginePronunciation * This,
            /* [string][in] */ LPCWSTR pszWord,
            /* [string][in] */ LPCWSTR pszLeftContext,
            /* [string][in] */ LPCWSTR pszRightContext,
            /* [in] */ WORD LangID,
            /* [out][in] */ SPWORDPRONUNCIATIONLIST *pEnginePronunciationList);
        
        END_INTERFACE
    } ISpEnginePronunciationVtbl;

    interface ISpEnginePronunciation
    {
        CONST_VTBL struct ISpEnginePronunciationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpEnginePronunciation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpEnginePronunciation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpEnginePronunciation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpEnginePronunciation_Normalize(This,pszWord,pszLeftContext,pszRightContext,LangID,pNormalizationList)	\
    ( (This)->lpVtbl -> Normalize(This,pszWord,pszLeftContext,pszRightContext,LangID,pNormalizationList) ) 

#define ISpEnginePronunciation_GetPronunciations(This,pszWord,pszLeftContext,pszRightContext,LangID,pEnginePronunciationList)	\
    ( (This)->lpVtbl -> GetPronunciations(This,pszWord,pszLeftContext,pszRightContext,LangID,pEnginePronunciationList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpEnginePronunciation_INTERFACE_DEFINED__ */



#ifndef __SpeechLib_LIBRARY_DEFINED__
#define __SpeechLib_LIBRARY_DEFINED__

/* library SpeechLib */
/* [version][uuid][helpstring] */ 


EXTERN_C const IID LIBID_SpeechLib;

EXTERN_C const CLSID CLSID_SpNotifyTranslator;

#ifdef __cplusplus

class DECLSPEC_UUID("f811ab5d-3557-426f-a8f4-3564e77c9eb2")
SpNotifyTranslator;
#endif

EXTERN_C const CLSID CLSID_SpObjectTokenCategory;

#ifdef __cplusplus

class DECLSPEC_UUID("bf86f6c4-f9ce-441a-821a-415a76b86d79")
SpObjectTokenCategory;
#endif

EXTERN_C const CLSID CLSID_SpObjectToken;

#ifdef __cplusplus

class DECLSPEC_UUID("4424cb70-2a7c-43e2-833d-cbfd82da104f")
SpObjectToken;
#endif

EXTERN_C const CLSID CLSID_SpResourceManager;

#ifdef __cplusplus

class DECLSPEC_UUID("d56d7ab0-a54c-4cee-a78c-d1ebb080f3d8")
SpResourceManager;
#endif

EXTERN_C const CLSID CLSID_SpStreamFormatConverter;

#ifdef __cplusplus

class DECLSPEC_UUID("2e7b17c4-8e8f-4f37-9229-b45f2cdd9502")
SpStreamFormatConverter;
#endif

EXTERN_C const CLSID CLSID_SpMMAudioEnum;

#ifdef __cplusplus

class DECLSPEC_UUID("b96a8138-074e-419e-826b-b7fca808386c")
SpMMAudioEnum;
#endif

EXTERN_C const CLSID CLSID_SpMMAudioIn;

#ifdef __cplusplus

class DECLSPEC_UUID("49604782-6814-4adc-8a03-9dab21adad29")
SpMMAudioIn;
#endif

EXTERN_C const CLSID CLSID_SpMMAudioOut;

#ifdef __cplusplus

class DECLSPEC_UUID("76eb3bc7-2385-40a1-b2bb-46c9c31ab39b")
SpMMAudioOut;
#endif

EXTERN_C const CLSID CLSID_SpStream;

#ifdef __cplusplus

class DECLSPEC_UUID("0f59bf10-9fa9-4469-b4d3-d83d939b4ac3")
SpStream;
#endif

EXTERN_C const CLSID CLSID_SpVoice;

#ifdef __cplusplus

class DECLSPEC_UUID("d941651c-44e6-4c17-badf-c36826fc3424")
SpVoice;
#endif

EXTERN_C const CLSID CLSID_SpSharedRecoContext;

#ifdef __cplusplus

class DECLSPEC_UUID("48206204-5ECA-11D2-960F-00C04F8EE628")
SpSharedRecoContext;
#endif

EXTERN_C const CLSID CLSID_SpInprocRecognizer;

#ifdef __cplusplus

class DECLSPEC_UUID("495648e7-f7ab-4267-8e0f-cafb7a33c160")
SpInprocRecognizer;
#endif

EXTERN_C const CLSID CLSID_SpSharedRecognizer;

#ifdef __cplusplus

class DECLSPEC_UUID("3CEE4890-4FE9-4A37-8C1E-5E7E12791C1F")
SpSharedRecognizer;
#endif

EXTERN_C const CLSID CLSID_SpLexicon;

#ifdef __cplusplus

class DECLSPEC_UUID("9a0e5117-bc15-46ec-b295-b086f5fe961c")
SpLexicon;
#endif

EXTERN_C const CLSID CLSID_SpUnCompressedLexicon;

#ifdef __cplusplus

class DECLSPEC_UUID("5137828e-b5bb-4305-9777-c2ebbfe68152")
SpUnCompressedLexicon;
#endif

EXTERN_C const CLSID CLSID_SpCompressedLexicon;

#ifdef __cplusplus

class DECLSPEC_UUID("36727e9a-fffa-46ec-9674-f1e31775d194")
SpCompressedLexicon;
#endif

EXTERN_C const CLSID CLSID_SpShortcut;

#ifdef __cplusplus

class DECLSPEC_UUID("3bb11e20-1e81-4971-99fd-ab5b3318b8cb")
SpShortcut;
#endif

EXTERN_C const CLSID CLSID_SpPLSLexicon;

#ifdef __cplusplus

class DECLSPEC_UUID("2ca21260-198c-4fad-aa02-006fce3d2467")
SpPLSLexicon;
#endif

EXTERN_C const CLSID CLSID_SpPhoneConverter;

#ifdef __cplusplus

class DECLSPEC_UUID("5695ad90-c86e-4b12-a42c-327d1c2ca35f")
SpPhoneConverter;
#endif

EXTERN_C const CLSID CLSID_SpPhoneticAlphabetConverter;

#ifdef __cplusplus

class DECLSPEC_UUID("379af0c8-b44c-48ec-94ed-4b15f3c7a0b5")
SpPhoneticAlphabetConverter;
#endif

EXTERN_C const CLSID CLSID_SpNullPhoneConverter;

#ifdef __cplusplus

class DECLSPEC_UUID("28a3099d-b97a-4a11-a0f8-2f2339178208")
SpNullPhoneConverter;
#endif
#endif /* __SpeechLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


