// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficNode() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficSpline_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTrafficNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficNode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficNode"), sizeof(FSBZTrafficNode), Get_Z_Construct_UScriptStruct_FSBZTrafficNode_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficNode>()
{
	return FSBZTrafficNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficNode(FSBZTrafficNode::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficNode"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficNode
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficNode()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficNode>(FName(TEXT("SBZTrafficNode")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficNode;
	struct Z_Construct_UScriptStruct_FSBZTrafficNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForwardArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForwardArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineTypeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SplineTypeFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTypeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VehicleTypeFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpawner_MetaData[];
#endif
		static void NewProp_bIsSpawner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDestination_MetaData[];
#endif
		static void NewProp_bIsDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDestination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficNode>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_ForwardArray_Inner = { "ForwardArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_ForwardArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_ForwardArray = { "ForwardArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficNode, ForwardArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_ForwardArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_ForwardArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficNode, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_SplineTypeFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_SplineTypeFlags = { "SplineTypeFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficNode, SplineTypeFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_SplineTypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_SplineTypeFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_VehicleTypeFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_VehicleTypeFlags = { "VehicleTypeFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficNode, VehicleTypeFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_VehicleTypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_VehicleTypeFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsSpawner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsSpawner_SetBit(void* Obj)
	{
		((FSBZTrafficNode*)Obj)->bIsSpawner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsSpawner = { "bIsSpawner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTrafficNode), &Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsSpawner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsDestination_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsDestination_SetBit(void* Obj)
	{
		((FSBZTrafficNode*)Obj)->bIsDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsDestination = { "bIsDestination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZTrafficNode), &Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsDestination_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsDestination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_ForwardArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_ForwardArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_SplineTypeFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_VehicleTypeFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::NewProp_bIsDestination,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficNode",
		sizeof(FSBZTrafficNode),
		alignof(FSBZTrafficNode),
		Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficNode"), sizeof(FSBZTrafficNode), Get_Z_Construct_UScriptStruct_FSBZTrafficNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficNode_Hash() { return 3793943040U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
