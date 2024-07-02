// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirNavigationNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirNavigationNode() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNavigationNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo();
// End Cross Module References
class UScriptStruct* FSBZAirNavigationNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAirNavigationNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAirNavigationNode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAirNavigationNode"), sizeof(FSBZAirNavigationNode), Get_Z_Construct_UScriptStruct_FSBZAirNavigationNode_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAirNavigationNode>()
{
	return FSBZAirNavigationNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAirNavigationNode(FSBZAirNavigationNode::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAirNavigationNode"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNavigationNode
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNavigationNode()
	{
		UScriptStruct::DeferCppStructOps<FSBZAirNavigationNode>(FName(TEXT("SBZAirNavigationNode")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNavigationNode;
	struct Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_HalfSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLeaf_MetaData[];
#endif
		static void NewProp_bIsLeaf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLeaf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBlocked_MetaData[];
#endif
		static void NewProp_bIsBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstChildIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_FirstChildIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeighborInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighborInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NeighborInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAirNavigationNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_Center_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationNode" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationNode.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Center, FSBZAirNavigationNode), STRUCT_OFFSET(FSBZAirNavigationNode, Center), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_HalfSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationNode" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_HalfSize = { "HalfSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNavigationNode, HalfSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_HalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_HalfSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsLeaf_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationNode" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsLeaf_SetBit(void* Obj)
	{
		((FSBZAirNavigationNode*)Obj)->bIsLeaf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsLeaf = { "bIsLeaf", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZAirNavigationNode), &Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsLeaf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsLeaf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsLeaf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationNode" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
	{
		((FSBZAirNavigationNode*)Obj)->bIsBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZAirNavigationNode), &Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_FirstChildIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationNode" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_FirstChildIndex = { "FirstChildIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNavigationNode, FirstChildIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_FirstChildIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_FirstChildIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_NeighborInfo_Inner = { "NeighborInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_NeighborInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigationNode" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_NeighborInfo = { "NeighborInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNavigationNode, NeighborInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_NeighborInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_NeighborInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_HalfSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsLeaf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_bIsBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_FirstChildIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_NeighborInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::NewProp_NeighborInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAirNavigationNode",
		sizeof(FSBZAirNavigationNode),
		alignof(FSBZAirNavigationNode),
		Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNavigationNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAirNavigationNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAirNavigationNode"), sizeof(FSBZAirNavigationNode), Get_Z_Construct_UScriptStruct_FSBZAirNavigationNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAirNavigationNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAirNavigationNode_Hash() { return 77082282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
