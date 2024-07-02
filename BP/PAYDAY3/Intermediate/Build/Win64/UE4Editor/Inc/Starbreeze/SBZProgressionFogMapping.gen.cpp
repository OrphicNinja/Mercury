// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProgressionFogMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProgressionFogMapping() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionFogMapping();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings();
// End Cross Module References
class UScriptStruct* FSBZProgressionFogMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZProgressionFogMapping, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZProgressionFogMapping"), sizeof(FSBZProgressionFogMapping), Get_Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZProgressionFogMapping>()
{
	return FSBZProgressionFogMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZProgressionFogMapping(FSBZProgressionFogMapping::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZProgressionFogMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionFogMapping
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionFogMapping()
	{
		UScriptStruct::DeferCppStructOps<FSBZProgressionFogMapping>(FName(TEXT("SBZProgressionFogMapping")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionFogMapping;
	struct Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZProgressionFogMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZProgressionFogMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_FogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionFogMapping" },
		{ "ModuleRelativePath", "Public/SBZProgressionFogMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_FogSettings = { "FogSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionFogMapping, FogSettings), Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_FogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_FogSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_Progression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionFogMapping" },
		{ "ModuleRelativePath", "Public/SBZProgressionFogMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_Progression = { "Progression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionFogMapping, Progression), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_Progression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_Progression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_FogSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::NewProp_Progression,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZProgressionFogMapping",
		sizeof(FSBZProgressionFogMapping),
		alignof(FSBZProgressionFogMapping),
		Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionFogMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZProgressionFogMapping"), sizeof(FSBZProgressionFogMapping), Get_Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionFogMapping_Hash() { return 927191406U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
