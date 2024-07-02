// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SkeletalMeshMergeParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshMergeParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSrcMesh_BP();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FSkeletalMeshMergeParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SkeletalMeshMergeParams"), sizeof(FSkeletalMeshMergeParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSkeletalMeshMergeParams>()
{
	return FSkeletalMeshMergeParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshMergeParams(FSkeletalMeshMergeParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SkeletalMeshMergeParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSkeletalMeshMergeParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSkeletalMeshMergeParams()
	{
		UScriptStruct::DeferCppStructOps<FSkeletalMeshMergeParams>(FName(TEXT("SkeletalMeshMergeParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSkeletalMeshMergeParams;
	struct Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshSectionMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSectionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshSectionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTransformsPerMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTransformsPerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVTransformsPerMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshesToMerge_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshesToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshesToMerge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StripTopLODS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StripTopLODS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsCpuAccess_MetaData[];
#endif
		static void NewProp_bNeedsCpuAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsCpuAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkeletonBefore_MetaData[];
#endif
		static void NewProp_bSkeletonBefore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkeletonBefore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshMergeParams>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_Inner = { "MeshSectionMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings = { "MeshSectionMappings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshMergeParams, MeshSectionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_Inner = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshMergeParams, UVTransformsPerMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_Inner = { "MeshesToMerge", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSrcMesh_BP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge = { "MeshesToMerge", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshMergeParams, MeshesToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS = { "StripTopLODS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshMergeParams, StripTopLODS), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_SetBit(void* Obj)
	{
		((FSkeletalMeshMergeParams*)Obj)->bNeedsCpuAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess = { "bNeedsCpuAccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshMergeParams), &Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_SetBit(void* Obj)
	{
		((FSkeletalMeshMergeParams*)Obj)->bSkeletonBefore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore = { "bSkeletonBefore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshMergeParams), &Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergeParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshMergeParams, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SkeletalMeshMergeParams",
		sizeof(FSkeletalMeshMergeParams),
		alignof(FSkeletalMeshMergeParams),
		Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshMergeParams"), sizeof(FSkeletalMeshMergeParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Hash() { return 206763199U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
