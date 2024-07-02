// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SkelMeshMergeUVTransformMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkelMeshMergeUVTransformMapping() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform();
// End Cross Module References
class UScriptStruct* FSkelMeshMergeUVTransformMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SkelMeshMergeUVTransformMapping"), sizeof(FSkelMeshMergeUVTransformMapping), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSkelMeshMergeUVTransformMapping>()
{
	return FSkelMeshMergeUVTransformMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshMergeUVTransformMapping(FSkelMeshMergeUVTransformMapping::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SkelMeshMergeUVTransformMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSkelMeshMergeUVTransformMapping
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSkelMeshMergeUVTransformMapping()
	{
		UScriptStruct::DeferCppStructOps<FSkelMeshMergeUVTransformMapping>(FName(TEXT("SkelMeshMergeUVTransformMapping")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSkelMeshMergeUVTransformMapping;
	struct Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTransformsPerMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTransformsPerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVTransformsPerMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkelMeshMergeUVTransformMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeUVTransformMapping>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_Inner = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkelMeshMergeUVTransformMapping" },
		{ "ModuleRelativePath", "Public/SkelMeshMergeUVTransformMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkelMeshMergeUVTransformMapping, UVTransformsPerMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SkelMeshMergeUVTransformMapping",
		sizeof(FSkelMeshMergeUVTransformMapping),
		alignof(FSkelMeshMergeUVTransformMapping),
		Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshMergeUVTransformMapping"), sizeof(FSkelMeshMergeUVTransformMapping), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Hash() { return 3605127095U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
