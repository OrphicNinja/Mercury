// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAdvancedInitializationSettingsWithMultiCoreRendering() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings();
// End Cross Module References

static_assert(std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>() == std::is_polymorphic<FAkAdvancedInitializationSettings>(), "USTRUCT FAkAdvancedInitializationSettingsWithMultiCoreRendering cannot be polymorphic unless super FAkAdvancedInitializationSettings is polymorphic");

class UScriptStruct* FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettingsWithMultiCoreRendering>()
{
	return FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettingsWithMultiCoreRendering()
	{
		UScriptStruct::DeferCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(FName(TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettingsWithMultiCoreRendering;
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_EnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMultiCoreRendering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettingsWithMultiCoreRendering" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettingsWithMultiCoreRendering*)Obj)->EnableMultiCoreRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering = { "EnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings,
		&NewStructOps,
		"AkAdvancedInitializationSettingsWithMultiCoreRendering",
		sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash() { return 2257721072U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
