// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommunicationSettingsWithSystemInitialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommunicationSettingsWithSystemInitialization() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
// End Cross Module References

static_assert(std::is_polymorphic<FAkCommunicationSettingsWithSystemInitialization>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithSystemInitialization cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

class UScriptStruct* FAkCommunicationSettingsWithSystemInitialization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithSystemInitialization"), sizeof(FAkCommunicationSettingsWithSystemInitialization), Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettingsWithSystemInitialization>()
{
	return FAkCommunicationSettingsWithSystemInitialization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(FAkCommunicationSettingsWithSystemInitialization::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommunicationSettingsWithSystemInitialization"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithSystemInitialization
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithSystemInitialization()
	{
		UScriptStruct::DeferCppStructOps<FAkCommunicationSettingsWithSystemInitialization>(FName(TEXT("AkCommunicationSettingsWithSystemInitialization")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithSystemInitialization;
	struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeSystemComms_MetaData[];
#endif
		static void NewProp_InitializeSystemComms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitializeSystemComms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithSystemInitialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithSystemInitialization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettingsWithSystemInitialization" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithSystemInitialization.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit(void* Obj)
	{
		((FAkCommunicationSettingsWithSystemInitialization*)Obj)->InitializeSystemComms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms = { "InitializeSystemComms", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkCommunicationSettingsWithSystemInitialization), &Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommunicationSettings,
		&NewStructOps,
		"AkCommunicationSettingsWithSystemInitialization",
		sizeof(FAkCommunicationSettingsWithSystemInitialization),
		alignof(FAkCommunicationSettingsWithSystemInitialization),
		Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommunicationSettingsWithSystemInitialization"), sizeof(FAkCommunicationSettingsWithSystemInitialization), Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash() { return 1035250950U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
