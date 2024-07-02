// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficLightPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficLightPool() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficLightPool();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTrafficLightPool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficLightPool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficLightPool, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficLightPool"), sizeof(FSBZTrafficLightPool), Get_Z_Construct_UScriptStruct_FSBZTrafficLightPool_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficLightPool>()
{
	return FSBZTrafficLightPool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficLightPool(FSBZTrafficLightPool::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficLightPool"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficLightPool
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficLightPool()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficLightPool>(FName(TEXT("SBZTrafficLightPool")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficLightPool;
	struct Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockerArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GreenTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchToGreenTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchToGreenTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchToRedTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchToRedTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficLightPool>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_BlockerArray_Inner = { "BlockerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_BlockerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPool" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_BlockerArray = { "BlockerArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPool, BlockerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_BlockerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_BlockerArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_MeshArray_Inner = { "MeshArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_MeshArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPool" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_MeshArray = { "MeshArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPool, MeshArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_MeshArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_MeshArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_GreenTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPool" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_GreenTimer = { "GreenTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPool, GreenTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_GreenTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_GreenTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToGreenTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPool" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToGreenTimer = { "SwitchToGreenTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPool, SwitchToGreenTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToGreenTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToGreenTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToRedTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPool" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToRedTimer = { "SwitchToRedTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPool, SwitchToRedTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToRedTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToRedTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_BlockerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_BlockerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_MeshArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_MeshArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_GreenTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToGreenTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::NewProp_SwitchToRedTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficLightPool",
		sizeof(FSBZTrafficLightPool),
		alignof(FSBZTrafficLightPool),
		Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficLightPool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficLightPool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficLightPool"), sizeof(FSBZTrafficLightPool), Get_Z_Construct_UScriptStruct_FSBZTrafficLightPool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficLightPool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficLightPool_Hash() { return 2034497427U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
