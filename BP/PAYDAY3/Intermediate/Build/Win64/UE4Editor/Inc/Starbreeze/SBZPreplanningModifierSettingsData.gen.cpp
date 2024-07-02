// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningModifierSettingsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningModifierSettingsData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZPreplanningModifierSettingsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPreplanningModifierSettingsData"), sizeof(FSBZPreplanningModifierSettingsData), Get_Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPreplanningModifierSettingsData>()
{
	return FSBZPreplanningModifierSettingsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPreplanningModifierSettingsData(FSBZPreplanningModifierSettingsData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPreplanningModifierSettingsData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningModifierSettingsData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningModifierSettingsData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPreplanningModifierSettingsData>(FName(TEXT("SBZPreplanningModifierSettingsData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningModifierSettingsData;
	struct Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PagerIncreaseAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PagerIncreaseAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostageReduceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HostageReduceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickupIncreasePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoPickupIncreasePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegotiationTimeIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegotiationTimeIncrease;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningModifierSettingsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPreplanningModifierSettingsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_PagerIncreaseAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningModifierSettingsData" },
		{ "ModuleRelativePath", "Public/SBZPreplanningModifierSettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_PagerIncreaseAmount = { "PagerIncreaseAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningModifierSettingsData, PagerIncreaseAmount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_PagerIncreaseAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_PagerIncreaseAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_HostageReduceAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningModifierSettingsData" },
		{ "ModuleRelativePath", "Public/SBZPreplanningModifierSettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_HostageReduceAmount = { "HostageReduceAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningModifierSettingsData, HostageReduceAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_HostageReduceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_HostageReduceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_AmmoPickupIncreasePercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningModifierSettingsData" },
		{ "ModuleRelativePath", "Public/SBZPreplanningModifierSettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_AmmoPickupIncreasePercent = { "AmmoPickupIncreasePercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningModifierSettingsData, AmmoPickupIncreasePercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_AmmoPickupIncreasePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_AmmoPickupIncreasePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_NegotiationTimeIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningModifierSettingsData" },
		{ "ModuleRelativePath", "Public/SBZPreplanningModifierSettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_NegotiationTimeIncrease = { "NegotiationTimeIncrease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningModifierSettingsData, NegotiationTimeIncrease), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_NegotiationTimeIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_NegotiationTimeIncrease_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_PagerIncreaseAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_HostageReduceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_AmmoPickupIncreasePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::NewProp_NegotiationTimeIncrease,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPreplanningModifierSettingsData",
		sizeof(FSBZPreplanningModifierSettingsData),
		alignof(FSBZPreplanningModifierSettingsData),
		Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPreplanningModifierSettingsData"), sizeof(FSBZPreplanningModifierSettingsData), Get_Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData_Hash() { return 2763587034U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
