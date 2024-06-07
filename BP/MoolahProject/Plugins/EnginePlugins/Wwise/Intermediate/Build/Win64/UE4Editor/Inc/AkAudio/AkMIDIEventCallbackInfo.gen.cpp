// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMIDIEventCallbackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMIDIEventCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
// End Cross Module References
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetCc)
	{
		P_GET_STRUCT_REF(FAkMidiCc,Z_Param_Out_AsCc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCc(Z_Param_Out_AsCc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannelAftertouch)
	{
		P_GET_STRUCT_REF(FAkMidiChannelAftertouch,Z_Param_Out_AsChannelAftertouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChannelAftertouch(Z_Param_Out_AsChannelAftertouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetGeneric)
	{
		P_GET_STRUCT_REF(FAkMidiGeneric,Z_Param_Out_AsGeneric);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGeneric(Z_Param_Out_AsGeneric);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteAftertouch)
	{
		P_GET_STRUCT_REF(FAkMidiNoteAftertouch,Z_Param_Out_AsNoteAftertouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteAftertouch(Z_Param_Out_AsNoteAftertouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOff)
	{
		P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteOff(Z_Param_Out_AsNoteOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOn)
	{
		P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteOn(Z_Param_Out_AsNoteOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetPitchBend)
	{
		P_GET_STRUCT_REF(FAkMidiPitchBend,Z_Param_Out_AsPitchBend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPitchBend(Z_Param_Out_AsPitchBend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetProgramChange)
	{
		P_GET_STRUCT_REF(FAkMidiProgramChange,Z_Param_Out_AsProgramChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProgramChange(Z_Param_Out_AsProgramChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAkMidiEventType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	void UAkMIDIEventCallbackInfo::StaticRegisterNativesUAkMIDIEventCallbackInfo()
	{
		UClass* Class = UAkMIDIEventCallbackInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCc", &UAkMIDIEventCallbackInfo::execGetCc },
			{ "GetChannel", &UAkMIDIEventCallbackInfo::execGetChannel },
			{ "GetChannelAftertouch", &UAkMIDIEventCallbackInfo::execGetChannelAftertouch },
			{ "GetGeneric", &UAkMIDIEventCallbackInfo::execGetGeneric },
			{ "GetNoteAftertouch", &UAkMIDIEventCallbackInfo::execGetNoteAftertouch },
			{ "GetNoteOff", &UAkMIDIEventCallbackInfo::execGetNoteOff },
			{ "GetNoteOn", &UAkMIDIEventCallbackInfo::execGetNoteOn },
			{ "GetPitchBend", &UAkMIDIEventCallbackInfo::execGetPitchBend },
			{ "GetProgramChange", &UAkMIDIEventCallbackInfo::execGetProgramChange },
			{ "GetType", &UAkMIDIEventCallbackInfo::execGetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetCc_Parms
		{
			FAkMidiCc AsCc;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsCc;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_AsCc = { "AsCc", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetCc_Parms, AsCc), Z_Construct_UScriptStruct_FAkMidiCc, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetCc_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetCc_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_AsCc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetCc", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetCc_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetChannel_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannel", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetChannel_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms
		{
			FAkMidiChannelAftertouch AsChannelAftertouch;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsChannelAftertouch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_AsChannelAftertouch = { "AsChannelAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms, AsChannelAftertouch), Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_AsChannelAftertouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannelAftertouch", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetGeneric_Parms
		{
			FAkMidiGeneric AsGeneric;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsGeneric;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_AsGeneric = { "AsGeneric", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetGeneric_Parms, AsGeneric), Z_Construct_UScriptStruct_FAkMidiGeneric, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetGeneric_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetGeneric_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_AsGeneric,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetGeneric", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetGeneric_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms
		{
			FAkMidiNoteAftertouch AsNoteAftertouch;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsNoteAftertouch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_AsNoteAftertouch = { "AsNoteAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms, AsNoteAftertouch), Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_AsNoteAftertouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteAftertouch", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOff_Parms
		{
			FAkMidiNoteOnOff AsNoteOff;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsNoteOff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_AsNoteOff = { "AsNoteOff", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms, AsNoteOff), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_AsNoteOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOff", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOn_Parms
		{
			FAkMidiNoteOnOff AsNoteOn;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsNoteOn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_AsNoteOn = { "AsNoteOn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms, AsNoteOn), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_AsNoteOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOn", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetPitchBend_Parms
		{
			FAkMidiPitchBend AsPitchBend;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsPitchBend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_AsPitchBend = { "AsPitchBend", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms, AsPitchBend), Z_Construct_UScriptStruct_FAkMidiPitchBend, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetPitchBend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_AsPitchBend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetPitchBend", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetProgramChange_Parms
		{
			FAkMidiProgramChange AsProgramChange;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsProgramChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_AsProgramChange = { "AsProgramChange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms, AsProgramChange), Z_Construct_UScriptStruct_FAkMidiProgramChange, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetProgramChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_AsProgramChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetProgramChange", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetType_Parms
		{
			EAkMidiEventType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetType", nullptr, nullptr, sizeof(AkMIDIEventCallbackInfo_eventGetType_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister()
	{
		return UAkMIDIEventCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc, "GetCc" }, // 721508697
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel, "GetChannel" }, // 1592450552
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch, "GetChannelAftertouch" }, // 2147285779
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric, "GetGeneric" }, // 840083920
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch, "GetNoteAftertouch" }, // 4156607937
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff, "GetNoteOff" }, // 2205390891
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn, "GetNoteOn" }, // 2338983629
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend, "GetPitchBend" }, // 3366203453
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange, "GetProgramChange" }, // 1991765455
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType, "GetType" }, // 482921816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMIDIEventCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMIDIEventCallbackInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::ClassParams = {
		&UAkMIDIEventCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMIDIEventCallbackInfo, 2709624164);
	template<> AKAUDIO_API UClass* StaticClass<UAkMIDIEventCallbackInfo>()
	{
		return UAkMIDIEventCallbackInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMIDIEventCallbackInfo(Z_Construct_UClass_UAkMIDIEventCallbackInfo, &UAkMIDIEventCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMIDIEventCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMIDIEventCallbackInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
