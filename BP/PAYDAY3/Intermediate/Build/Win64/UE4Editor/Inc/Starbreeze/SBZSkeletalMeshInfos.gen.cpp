// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkeletalMeshInfos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkeletalMeshInfos() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData();
// End Cross Module References
class UScriptStruct* FSBZSkeletalMeshInfos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSkeletalMeshInfos"), sizeof(FSBZSkeletalMeshInfos), Get_Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSkeletalMeshInfos>()
{
	return FSBZSkeletalMeshInfos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSkeletalMeshInfos(FSBZSkeletalMeshInfos::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSkeletalMeshInfos"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkeletalMeshInfos
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkeletalMeshInfos()
	{
		UScriptStruct::DeferCppStructOps<FSBZSkeletalMeshInfos>(FName(TEXT("SBZSkeletalMeshInfos")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkeletalMeshInfos;
	struct Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneSpaceTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSpaceTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneSpaceTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPrimitiveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPrimitiveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshInfos.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSkeletalMeshInfos>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkeletalMeshInfos" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkeletalMeshInfos, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkeletalMeshInfos" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkeletalMeshInfos, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_BoneSpaceTransforms_Inner = { "BoneSpaceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_BoneSpaceTransforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkeletalMeshInfos" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_BoneSpaceTransforms = { "BoneSpaceTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkeletalMeshInfos, BoneSpaceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_BoneSpaceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_BoneSpaceTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_CustomPrimitiveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkeletalMeshInfos" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_CustomPrimitiveData = { "CustomPrimitiveData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkeletalMeshInfos, CustomPrimitiveData), Z_Construct_UScriptStruct_FCustomPrimitiveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_CustomPrimitiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_CustomPrimitiveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_LODIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkeletalMeshInfos" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkeletalMeshInfos, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_LODIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_BoneSpaceTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_BoneSpaceTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_CustomPrimitiveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::NewProp_LODIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSkeletalMeshInfos",
		sizeof(FSBZSkeletalMeshInfos),
		alignof(FSBZSkeletalMeshInfos),
		Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSkeletalMeshInfos"), sizeof(FSBZSkeletalMeshInfos), Get_Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos_Hash() { return 2688155826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
