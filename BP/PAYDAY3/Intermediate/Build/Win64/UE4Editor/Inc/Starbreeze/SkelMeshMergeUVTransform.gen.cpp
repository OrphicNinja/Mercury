// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SkelMeshMergeUVTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkelMeshMergeUVTransform() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FSkelMeshMergeUVTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SkelMeshMergeUVTransform"), sizeof(FSkelMeshMergeUVTransform), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSkelMeshMergeUVTransform>()
{
	return FSkelMeshMergeUVTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshMergeUVTransform(FSkelMeshMergeUVTransform::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SkelMeshMergeUVTransform"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSkelMeshMergeUVTransform
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSkelMeshMergeUVTransform()
	{
		UScriptStruct::DeferCppStructOps<FSkelMeshMergeUVTransform>(FName(TEXT("SkelMeshMergeUVTransform")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSkelMeshMergeUVTransform;
	struct Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkelMeshMergeUVTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeUVTransform>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_Inner = { "UVTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkelMeshMergeUVTransform" },
		{ "ModuleRelativePath", "Public/SkelMeshMergeUVTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms = { "UVTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkelMeshMergeUVTransform, UVTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SkelMeshMergeUVTransform",
		sizeof(FSkelMeshMergeUVTransform),
		alignof(FSkelMeshMergeUVTransform),
		Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshMergeUVTransform"), sizeof(FSkelMeshMergeUVTransform), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Hash() { return 3247804771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
