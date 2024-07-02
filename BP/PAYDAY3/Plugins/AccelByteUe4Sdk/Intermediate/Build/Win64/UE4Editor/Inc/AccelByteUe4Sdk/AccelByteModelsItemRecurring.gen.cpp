// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsItemRecurring.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsItemRecurring() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle();
// End Cross Module References
class UScriptStruct* FAccelByteModelsItemRecurring::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsItemRecurring"), sizeof(FAccelByteModelsItemRecurring), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsItemRecurring>()
{
	return FAccelByteModelsItemRecurring::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsItemRecurring(FAccelByteModelsItemRecurring::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsItemRecurring"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemRecurring
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemRecurring()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsItemRecurring>(FName(TEXT("AccelByteModelsItemRecurring")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemRecurring;
	struct Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cycle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedFreeDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FixedFreeDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedTrialCycles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FixedTrialCycles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraceDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GraceDays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemRecurring.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsItemRecurring>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_Cycle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_Cycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemRecurring" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemRecurring.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_Cycle = { "Cycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemRecurring, Cycle), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_Cycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_Cycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedFreeDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemRecurring" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemRecurring.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedFreeDays = { "FixedFreeDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemRecurring, FixedFreeDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedFreeDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedFreeDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedTrialCycles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemRecurring" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemRecurring.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedTrialCycles = { "FixedTrialCycles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemRecurring, FixedTrialCycles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedTrialCycles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedTrialCycles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_GraceDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemRecurring" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemRecurring.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_GraceDays = { "GraceDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemRecurring, GraceDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_GraceDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_GraceDays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_Cycle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_Cycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedFreeDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_FixedTrialCycles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::NewProp_GraceDays,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsItemRecurring",
		sizeof(FAccelByteModelsItemRecurring),
		alignof(FAccelByteModelsItemRecurring),
		Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsItemRecurring"), sizeof(FAccelByteModelsItemRecurring), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring_Hash() { return 3889614918U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
