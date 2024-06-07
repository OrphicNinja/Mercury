// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioSession() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode();
// End Cross Module References
class UScriptStruct* FAkAudioSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioSession, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioSession"), sizeof(FAkAudioSession), Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAudioSession>()
{
	return FAkAudioSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAudioSession(FAkAudioSession::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAudioSession"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioSession
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioSession()
	{
		UScriptStruct::DeferCppStructOps<FAkAudioSession>(FName(TEXT("AkAudioSession")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAudioSession;
	struct Z_Construct_UScriptStruct_FAkAudioSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioSessionCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioSessionCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategoryOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AudioSessionCategoryOptions;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioSessionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSessionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioSessionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioSession>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioSession" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory = { "AudioSessionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategory), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioSession" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions = { "AudioSessionCategoryOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategoryOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioSession" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode = { "AudioSessionMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionMode), Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAudioSession",
		sizeof(FAkAudioSession),
		alignof(FAkAudioSession),
		Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAudioSession"), sizeof(FAkAudioSession), Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash() { return 1164073897U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
