// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirNavigationTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirNavigationTree() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNavigationTree();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNavigationNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZAirNavigationTree::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAirNavigationTree_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAirNavigationTree, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAirNavigationTree"), sizeof(FSBZAirNavigationTree), Get_Z_Construct_UScriptStruct_FSBZAirNavigationTree_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAirNavigationTree>()
{
	return FSBZAirNavigationTree::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAirNavigationTree(FSBZAirNavigationTree::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAirNavigationTree"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNavigationTree
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNavigationTree()
	{
		UScriptStruct::DeferCppStructOps<FSBZAirNavigationTree>(FName(TEXT("SBZAirNavigationTree")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNavigationTree;
	struct Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MinHalfSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeHalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreeHalfSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TreeCenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationTree.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAirNavigationTree>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAirNavigationNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_Nodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationTree" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationTree.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNavigationTree, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_Nodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_MinHalfSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationTree" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationTree.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_MinHalfSize = { "MinHalfSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNavigationTree, MinHalfSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_MinHalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_MinHalfSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeHalfSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationTree" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationTree.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeHalfSize = { "TreeHalfSize", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNavigationTree, TreeHalfSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeHalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeHalfSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeCenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationTree" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationTree.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeCenter = { "TreeCenter", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNavigationTree, TreeCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeCenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_MinHalfSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeHalfSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::NewProp_TreeCenter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAirNavigationTree",
		sizeof(FSBZAirNavigationTree),
		alignof(FSBZAirNavigationTree),
		Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNavigationTree()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAirNavigationTree_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAirNavigationTree"), sizeof(FSBZAirNavigationTree), Get_Z_Construct_UScriptStruct_FSBZAirNavigationTree_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAirNavigationTree_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAirNavigationTree_Hash() { return 496400026U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
