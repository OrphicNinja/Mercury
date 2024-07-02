// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRandomItemReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRandomItemReward() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRandomItemReward();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRandomRewardReason();
// End Cross Module References
class UScriptStruct* FSBZRandomItemReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRandomItemReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRandomItemReward, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRandomItemReward"), sizeof(FSBZRandomItemReward), Get_Z_Construct_UScriptStruct_FSBZRandomItemReward_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRandomItemReward>()
{
	return FSBZRandomItemReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRandomItemReward(FSBZRandomItemReward::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRandomItemReward"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRandomItemReward
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRandomItemReward()
	{
		UScriptStruct::DeferCppStructOps<FSBZRandomItemReward>(FName(TEXT("SBZRandomItemReward")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRandomItemReward;
	struct Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryBaseData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RandomRewardReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRewardReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RandomRewardReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRandomItemReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRandomItemReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_InventoryBaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomItemReward" },
		{ "ModuleRelativePath", "Public/SBZRandomItemReward.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_InventoryBaseData = { "InventoryBaseData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRandomItemReward, InventoryBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_InventoryBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_InventoryBaseData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_RandomRewardReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_RandomRewardReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomItemReward" },
		{ "ModuleRelativePath", "Public/SBZRandomItemReward.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_RandomRewardReason = { "RandomRewardReason", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRandomItemReward, RandomRewardReason), Z_Construct_UEnum_Starbreeze_ESBZRandomRewardReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_RandomRewardReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_RandomRewardReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_InventoryBaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_RandomRewardReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::NewProp_RandomRewardReason,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRandomItemReward",
		sizeof(FSBZRandomItemReward),
		alignof(FSBZRandomItemReward),
		Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRandomItemReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRandomItemReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRandomItemReward"), sizeof(FSBZRandomItemReward), Get_Z_Construct_UScriptStruct_FSBZRandomItemReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRandomItemReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRandomItemReward_Hash() { return 949715939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
