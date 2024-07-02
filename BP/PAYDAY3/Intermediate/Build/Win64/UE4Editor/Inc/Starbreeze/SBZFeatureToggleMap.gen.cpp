// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFeatureToggleMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFeatureToggleMap() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFeatureToggleMap();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZFeatureToggleMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFeatureToggleMap, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFeatureToggleMap"), sizeof(FSBZFeatureToggleMap), Get_Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFeatureToggleMap>()
{
	return FSBZFeatureToggleMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFeatureToggleMap(FSBZFeatureToggleMap::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFeatureToggleMap"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFeatureToggleMap
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFeatureToggleMap()
	{
		UScriptStruct::DeferCppStructOps<FSBZFeatureToggleMap>(FName(TEXT("SBZFeatureToggleMap")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFeatureToggleMap;
	struct Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FeatureToggleMapping_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FeatureToggleMapping_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeatureToggleMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FeatureToggleMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFeatureToggleMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFeatureToggleMap>();
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping_ValueProp = { "FeatureToggleMapping", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping_Key_KeyProp = { "FeatureToggleMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFeatureToggleMap" },
		{ "ModuleRelativePath", "Public/SBZFeatureToggleMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping = { "FeatureToggleMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFeatureToggleMap, FeatureToggleMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::NewProp_FeatureToggleMapping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZFeatureToggleMap",
		sizeof(FSBZFeatureToggleMap),
		alignof(FSBZFeatureToggleMap),
		Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFeatureToggleMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFeatureToggleMap"), sizeof(FSBZFeatureToggleMap), Get_Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFeatureToggleMap_Hash() { return 2397508823U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
