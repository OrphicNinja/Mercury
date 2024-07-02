// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEditVariationSetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEditVariationSetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEditVariationSetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZEditVariationSetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEditVariationSetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEditVariationSetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEditVariationSetData"), sizeof(FSBZEditVariationSetData), Get_Z_Construct_UScriptStruct_FSBZEditVariationSetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEditVariationSetData>()
{
	return FSBZEditVariationSetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEditVariationSetData(FSBZEditVariationSetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEditVariationSetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEditVariationSetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEditVariationSetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZEditVariationSetData>(FName(TEXT("SBZEditVariationSetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEditVariationSetData;
	struct Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CDPFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CDPFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEditVariationSetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEditVariationSetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEditVariationSetData" },
		{ "ModuleRelativePath", "Public/SBZEditVariationSetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEditVariationSetData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEditVariationSetData" },
		{ "ModuleRelativePath", "Public/SBZEditVariationSetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEditVariationSetData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEditVariationSetData" },
		{ "ModuleRelativePath", "Public/SBZEditVariationSetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEditVariationSetData, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_OverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_CDPFormat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEditVariationSetData" },
		{ "ModuleRelativePath", "Public/SBZEditVariationSetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_CDPFormat = { "CDPFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEditVariationSetData, CDPFormat), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_CDPFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_CDPFormat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_OverrideMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_OverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::NewProp_CDPFormat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEditVariationSetData",
		sizeof(FSBZEditVariationSetData),
		alignof(FSBZEditVariationSetData),
		Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEditVariationSetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEditVariationSetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEditVariationSetData"), sizeof(FSBZEditVariationSetData), Get_Z_Construct_UScriptStruct_FSBZEditVariationSetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEditVariationSetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEditVariationSetData_Hash() { return 1292164820U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
