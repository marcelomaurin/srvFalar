

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "sapi_h.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _sapi_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } sapi_MIDL_TYPE_FORMAT_STRING;

typedef struct _sapi_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } sapi_MIDL_PROC_FORMAT_STRING;

typedef struct _sapi_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } sapi_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const sapi_MIDL_TYPE_FORMAT_STRING sapi__MIDL_TypeFormatString;
extern const sapi_MIDL_PROC_FORMAT_STRING sapi__MIDL_ProcFormatString;
extern const sapi_MIDL_EXPR_FORMAT_STRING sapi__MIDL_ExprFormatString;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const sapi_MIDL_PROC_FORMAT_STRING sapi__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const sapi_MIDL_TYPE_FORMAT_STRING sapi__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_sapi_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISpNotifySource, ver. 0.0,
   GUID={0x5EFF4AEF,0x8487,0x11D2,{0x96,0x1C,0x00,0xC0,0x4F,0x8E,0xE6,0x28}} */


/* Object interface: ISpNotifySink, ver. 0.0,
   GUID={0x259684DC,0x37C3,0x11D2,{0x96,0x03,0x00,0xC0,0x4F,0x8E,0xE6,0x28}} */


/* Object interface: ISpNotifyTranslator, ver. 0.0,
   GUID={0xACA16614,0x5D3D,0x11D2,{0x96,0x0E,0x00,0xC0,0x4F,0x8E,0xE6,0x28}} */


/* Object interface: ISpDataKey, ver. 0.0,
   GUID={0x14056581,0xE16C,0x11D2,{0xBB,0x90,0x00,0xC0,0x4F,0x8E,0xE6,0xC0}} */


/* Object interface: ISpRegDataKey, ver. 0.0,
   GUID={0x92A66E2B,0xC830,0x4149,{0x83,0xDF,0x6F,0xC2,0xBA,0x1E,0x7A,0x5B}} */


/* Object interface: ISpObjectTokenCategory, ver. 0.0,
   GUID={0x2D3D3845,0x39AF,0x4850,{0xBB,0xF9,0x40,0xB4,0x97,0x80,0x01,0x1D}} */


/* Object interface: ISpObjectToken, ver. 0.0,
   GUID={0x14056589,0xE16C,0x11D2,{0xBB,0x90,0x00,0xC0,0x4F,0x8E,0xE6,0xC0}} */


/* Object interface: ISpObjectTokenInit, ver. 0.0,
   GUID={0xB8AAB0CF,0x346F,0x49D8,{0x94,0x99,0xC8,0xB0,0x3F,0x16,0x1D,0x51}} */


/* Object interface: IEnumSpObjectTokens, ver. 0.0,
   GUID={0x06B64F9E,0x7FDA,0x11D2,{0xB4,0xF2,0x00,0xC0,0x4F,0x79,0x73,0x96}} */


/* Object interface: ISpObjectWithToken, ver. 0.0,
   GUID={0x5B559F40,0xE952,0x11D2,{0xBB,0x91,0x00,0xC0,0x4F,0x8E,0xE6,0xC0}} */


/* Object interface: IServiceProvider, ver. 0.0,
   GUID={0x6d5140c1,0x7436,0x11ce,{0x80,0x34,0x00,0xaa,0x00,0x60,0x09,0xfa}} */


/* Object interface: ISpResourceManager, ver. 0.0,
   GUID={0x93384E18,0x5014,0x43D5,{0xAD,0xBB,0xA7,0x8E,0x05,0x59,0x26,0xBD}} */


/* Standard interface: __MIDL_itf_sapi_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpEventSource, ver. 0.0,
   GUID={0xBE7A9CCE,0x5F9E,0x11D2,{0x96,0x0F,0x00,0xC0,0x4F,0x8E,0xE6,0x28}} */


/* Object interface: ISpEventSource2, ver. 0.0,
   GUID={0x2373A435,0x6A4B,0x429e,{0xA6,0xAC,0xD4,0x23,0x1A,0x61,0x97,0x5B}} */


/* Object interface: ISpEventSink, ver. 0.0,
   GUID={0xBE7A9CC9,0x5F9E,0x11D2,{0x96,0x0F,0x00,0xC0,0x4F,0x8E,0xE6,0x28}} */


/* Object interface: ISequentialStream, ver. 0.0,
   GUID={0x0c733a30,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}} */


/* Object interface: IStream, ver. 0.0,
   GUID={0x0000000c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISpStreamFormat, ver. 0.0,
   GUID={0xBED530BE,0x2606,0x4F4D,{0xA1,0xC0,0x54,0xC5,0xCD,0xA5,0x56,0x6F}} */


/* Standard interface: __MIDL_itf_sapi_0000_0015, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpStream, ver. 0.0,
   GUID={0x12E3CCA9,0x7518,0x44C5,{0xA5,0xE7,0xBA,0x5A,0x79,0xCB,0x92,0x9E}} */


/* Object interface: ISpStreamFormatConverter, ver. 0.0,
   GUID={0x678A932C,0xEA71,0x4446,{0x9B,0x41,0x78,0xFD,0xA6,0x28,0x0A,0x29}} */


/* Standard interface: __MIDL_itf_sapi_0000_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpAudio, ver. 0.0,
   GUID={0xC05C768F,0xFAE8,0x4EC2,{0x8E,0x07,0x33,0x83,0x21,0xC1,0x24,0x52}} */


/* Object interface: ISpMMSysAudio, ver. 0.0,
   GUID={0x15806F6E,0x1D70,0x4B48,{0x98,0xE6,0x3B,0x1A,0x00,0x75,0x09,0xAB}} */


/* Object interface: ISpTranscript, ver. 0.0,
   GUID={0x10F63BCE,0x201A,0x11D3,{0xAC,0x70,0x00,0xC0,0x4F,0x8E,0xE6,0xC0}} */


/* Object interface: ISpRIFFChunk, ver. 0.0,
   GUID={0x4266C228,0x6751,0x4134,{0xA8,0x64,0x4E,0x10,0xF5,0xB7,0x18,0x1A}} */


/* Standard interface: __MIDL_itf_sapi_0000_0021, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpLexicon, ver. 0.0,
   GUID={0xDA41A7C2,0x5383,0x4DB2,{0x91,0x6B,0x6C,0x17,0x19,0xE3,0xDB,0x58}} */


/* Object interface: ISpContainerLexicon, ver. 0.0,
   GUID={0x8565572F,0xC094,0x41CC,{0xB5,0x6E,0x10,0xBD,0x9C,0x3F,0xF0,0x44}} */


/* Object interface: ISpLexicon2, ver. 0.0,
   GUID={0x1DCFC449,0x4F88,0x4b5d,{0xB0,0x6D,0x21,0x61,0xA5,0xFF,0x4A,0x56}} */


/* Standard interface: __MIDL_itf_sapi_0000_0024, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpShortcut, ver. 0.0,
   GUID={0x3DF681E2,0xEA56,0x11D9,{0x8B,0xDE,0xF6,0x6B,0xAD,0x1E,0x3F,0x3A}} */


/* Object interface: ISpPhoneConverter, ver. 0.0,
   GUID={0x8445C581,0x0CAC,0x4A38,{0xAB,0xFE,0x9B,0x2C,0xE2,0x82,0x64,0x55}} */


/* Object interface: ISpPhoneticAlphabetConverter, ver. 0.0,
   GUID={0x133ADCD4,0x19B4,0x4020,{0x9F,0xDC,0x84,0x2E,0x78,0x25,0x3B,0x17}} */


/* Object interface: ISpPhoneticAlphabetSelection, ver. 0.0,
   GUID={0xB2745EFD,0x42CE,0x48ca,{0x81,0xF1,0xA9,0x6E,0x02,0x53,0x8A,0x90}} */


/* Standard interface: __MIDL_itf_sapi_0000_0028, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpPromptVoice, ver. 0.0,
   GUID={0xCABE307A,0xDDD1,0x4650,{0xA3,0xAA,0x3A,0x5E,0x8D,0xCE,0x91,0xAF}} */


/* Object interface: ISpVoice, ver. 0.0,
   GUID={0x6C44DF74,0x72B9,0x4992,{0xA1,0xEC,0xEF,0x99,0x6E,0x04,0x22,0xD4}} */


/* Object interface: ISpPhrase, ver. 0.0,
   GUID={0x1A5C0354,0xB621,0x4b5a,{0x87,0x91,0xD3,0x06,0xED,0x37,0x9E,0x53}} */


/* Object interface: ISpPhraseAlt, ver. 0.0,
   GUID={0x8FCEBC98,0x4E49,0x4067,{0x9C,0x6C,0xD8,0x6A,0x0E,0x09,0x2E,0x3D}} */


/* Standard interface: __MIDL_itf_sapi_0000_0032, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpPhrase2, ver. 0.0,
   GUID={0xF264DA52,0xE457,0x4696,{0xB8,0x56,0xA7,0x37,0xB7,0x17,0xAF,0x79}} */


/* Standard interface: __MIDL_itf_sapi_0000_0033, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecoResult, ver. 0.0,
   GUID={0x20B053BE,0xE235,0x43cd,{0x9A,0x2A,0x8D,0x17,0xA4,0x8B,0x78,0x42}} */


/* Standard interface: __MIDL_itf_sapi_0000_0034, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecoResult2, ver. 0.0,
   GUID={0x27CAC6C4,0x88F2,0x41f2,{0x88,0x17,0x0C,0x95,0xE5,0x9F,0x1E,0x6E}} */


/* Object interface: ISpXMLRecoResult, ver. 0.0,
   GUID={0xAE39362B,0x45A8,0x4074,{0x9B,0x9E,0xCC,0xF4,0x9A,0xA2,0xD0,0xB6}} */


/* Standard interface: __MIDL_itf_sapi_0000_0036, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpGrammarBuilder, ver. 0.0,
   GUID={0x8137828F,0x591A,0x4A42,{0xBE,0x58,0x49,0xEA,0x7E,0xBA,0xAC,0x68}} */


/* Standard interface: __MIDL_itf_sapi_0000_0037, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecoGrammar, ver. 0.0,
   GUID={0x2177DB29,0x7F45,0x47D0,{0x85,0x54,0x06,0x7E,0x91,0xC8,0x05,0x02}} */


/* Standard interface: __MIDL_itf_sapi_0000_0038, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpGrammarBuilder2, ver. 0.0,
   GUID={0x8AB10026,0x20CC,0x4b20,{0x8C,0x22,0xA4,0x9C,0x9B,0xA7,0x8F,0x60}} */


/* Object interface: ISpGrammarBuilderLexicon, ver. 0.0,
   GUID={0xD58B97E7,0xA478,0x4c75,{0x9F,0x51,0x97,0x13,0xB2,0x24,0xE5,0xAF}} */


/* Standard interface: __MIDL_itf_sapi_0000_0040, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecoGrammar2, ver. 0.0,
   GUID={0x4B37BC9E,0x9ED6,0x44a3,{0x93,0xD3,0x18,0xF0,0x22,0xB7,0x9E,0xC3}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISpeechResourceLoader, ver. 0.0,
   GUID={0xB9AC5783,0xFCD0,0x4b21,{0xB1,0x19,0xB4,0xF8,0xDA,0x8F,0xD2,0xC3}} */


/* Standard interface: __MIDL_itf_sapi_0000_0042, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecoContext, ver. 0.0,
   GUID={0xF740A62F,0x7C15,0x489E,{0x82,0x34,0x94,0x0A,0x33,0xD9,0x27,0x2D}} */


/* Standard interface: __MIDL_itf_sapi_0000_0043, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecoContext2, ver. 0.0,
   GUID={0xBEAD311C,0x52FF,0x437f,{0x94,0x64,0x6B,0x21,0x05,0x4C,0xA7,0x3D}} */


/* Object interface: ISpProperties, ver. 0.0,
   GUID={0x5B4FB971,0xB115,0x4DE1,{0xAD,0x97,0xE4,0x82,0xE3,0xBF,0x6E,0xE4}} */


/* Standard interface: __MIDL_itf_sapi_0000_0045, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecognizer, ver. 0.0,
   GUID={0xC2B5F241,0xDAA0,0x4507,{0x9E,0x16,0x5A,0x1E,0xAA,0x2B,0x7A,0x5C}} */


/* Object interface: ISpSerializeState, ver. 0.0,
   GUID={0x21B501A0,0x0EC7,0x46c9,{0x92,0xC3,0xA2,0xBC,0x78,0x4C,0x54,0xB9}} */


/* Object interface: ISpRecognizer2, ver. 0.0,
   GUID={0x8FC6D974,0xC81E,0x4098,{0x93,0xC5,0x01,0x47,0xF6,0x1E,0xD4,0xD3}} */


/* Standard interface: __MIDL_itf_sapi_0000_0048, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpRecoCategory, ver. 0.0,
   GUID={0xDA0CD0F9,0x14A2,0x4f09,{0x8C,0x2A,0x85,0xCC,0x48,0x97,0x93,0x45}} */


/* Object interface: ISpRecognizer3, ver. 0.0,
   GUID={0xDF1B943C,0x5838,0x4AA2,{0x87,0x06,0xD7,0xCD,0x5B,0x33,0x34,0x99}} */


/* Standard interface: __MIDL_itf_sapi_0000_0050, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpEnginePronunciation, ver. 0.0,
   GUID={0xC360CE4B,0x76D1,0x4214,{0xAD,0x68,0x52,0x65,0x7D,0x50,0x83,0xDA}} */

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    sapi__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _sapi_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * const _sapi_StubVtblList[] = 
{
    0
};

PCInterfaceName const _sapi_InterfaceNamesList[] = 
{
    0
};


#define _sapi_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _sapi, pIID, n)

int __stdcall _sapi_IID_Lookup( const IID * pIID, int * pIndex )
{
    UNREFERENCED_PARAMETER(pIID);
    UNREFERENCED_PARAMETER(pIndex);
    return 0;
}

EXTERN_C const ExtendedProxyFileInfo sapi_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _sapi_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _sapi_StubVtblList,
    (const PCInterfaceName * ) & _sapi_InterfaceNamesList,
    0, /* no delegation */
    & _sapi_IID_Lookup, 
    0,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

