// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometrySurfaceOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometrySurfaceOverride() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FAkGeometrySurfaceOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfaceOverride"), sizeof(FAkGeometrySurfaceOverride), Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfaceOverride>()
{
	return FAkGeometrySurfaceOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkGeometrySurfaceOverride(FAkGeometrySurfaceOverride::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkGeometrySurfaceOverride"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfaceOverride
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfaceOverride()
	{
		UScriptStruct::DeferCppStructOps<FAkGeometrySurfaceOverride>(FName(TEXT("AkGeometrySurfaceOverride")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfaceOverride;
	struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusionOverride_MetaData[];
#endif
		static void NewProp_bEnableOcclusionOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusionOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit(void* Obj)
	{
		((FAkGeometrySurfaceOverride*)Obj)->bEnableOcclusionOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride = { "bEnableOcclusionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkGeometrySurfaceOverride), &Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, OcclusionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, SurfaceArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfaceOverride",
		sizeof(FAkGeometrySurfaceOverride),
		alignof(FAkGeometrySurfaceOverride),
		Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkGeometrySurfaceOverride"), sizeof(FAkGeometrySurfaceOverride), Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash() { return 3143628699U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
