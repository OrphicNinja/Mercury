// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemPurchaseCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelItemPurchaseCondition() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup();
// End Cross Module References
class UScriptStruct* FAccelByteModelItemPurchaseCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelItemPurchaseCondition"), sizeof(FAccelByteModelItemPurchaseCondition), Get_Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelItemPurchaseCondition>()
{
	return FAccelByteModelItemPurchaseCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelItemPurchaseCondition(FAccelByteModelItemPurchaseCondition::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelItemPurchaseCondition"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelItemPurchaseCondition
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelItemPurchaseCondition()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelItemPurchaseCondition>(FName(TEXT("AccelByteModelItemPurchaseCondition")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelItemPurchaseCondition;
	struct Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConditionGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemPurchaseCondition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelItemPurchaseCondition>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups_Inner = { "ConditionGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemPurchaseCondition" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemPurchaseCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups = { "ConditionGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelItemPurchaseCondition, ConditionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelItemPurchaseCondition",
		sizeof(FAccelByteModelItemPurchaseCondition),
		alignof(FAccelByteModelItemPurchaseCondition),
		Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelItemPurchaseCondition"), sizeof(FAccelByteModelItemPurchaseCondition), Get_Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Hash() { return 2376376429U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
