// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometrySurfacePropertiesToMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometrySurfacePropertiesToMap() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FAkGeometrySurfacePropertiesToMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfacePropertiesToMap"), sizeof(FAkGeometrySurfacePropertiesToMap), Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfacePropertiesToMap>()
{
	return FAkGeometrySurfacePropertiesToMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkGeometrySurfacePropertiesToMap(FAkGeometrySurfacePropertiesToMap::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkGeometrySurfacePropertiesToMap"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfacePropertiesToMap
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfacePropertiesToMap()
	{
		UScriptStruct::DeferCppStructOps<FAkGeometrySurfacePropertiesToMap>(FName(TEXT("AkGeometrySurfacePropertiesToMap")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfacePropertiesToMap;
	struct Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfacePropertiesToMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfacePropertiesToMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfacePropertiesToMap" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfacePropertiesToMap.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfacePropertiesToMap" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfacePropertiesToMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, OcclusionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfacePropertiesToMap",
		sizeof(FAkGeometrySurfacePropertiesToMap),
		alignof(FAkGeometrySurfacePropertiesToMap),
		Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkGeometrySurfacePropertiesToMap"), sizeof(FAkGeometrySurfacePropertiesToMap), Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash() { return 437441609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
