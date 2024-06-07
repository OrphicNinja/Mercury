// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommonInitializationSettingsWithSampleRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommonInitializationSettingsWithSampleRate() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
// End Cross Module References

static_assert(std::is_polymorphic<FAkCommonInitializationSettingsWithSampleRate>() == std::is_polymorphic<FAkCommonInitializationSettings>(), "USTRUCT FAkCommonInitializationSettingsWithSampleRate cannot be polymorphic unless super FAkCommonInitializationSettings is polymorphic");

class UScriptStruct* FAkCommonInitializationSettingsWithSampleRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettingsWithSampleRate"), sizeof(FAkCommonInitializationSettingsWithSampleRate), Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommonInitializationSettingsWithSampleRate>()
{
	return FAkCommonInitializationSettingsWithSampleRate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(FAkCommonInitializationSettingsWithSampleRate::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommonInitializationSettingsWithSampleRate"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettingsWithSampleRate
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettingsWithSampleRate()
	{
		UScriptStruct::DeferCppStructOps<FAkCommonInitializationSettingsWithSampleRate>(FName(TEXT("AkCommonInitializationSettingsWithSampleRate")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettingsWithSampleRate;
	struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettingsWithSampleRate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettingsWithSampleRate" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettingsWithSampleRate.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettingsWithSampleRate, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommonInitializationSettings,
		&NewStructOps,
		"AkCommonInitializationSettingsWithSampleRate",
		sizeof(FAkCommonInitializationSettingsWithSampleRate),
		alignof(FAkCommonInitializationSettingsWithSampleRate),
		Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommonInitializationSettingsWithSampleRate"), sizeof(FAkCommonInitializationSettingsWithSampleRate), Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash() { return 1147438261U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
