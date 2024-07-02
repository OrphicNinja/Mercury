// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCashRewardEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCashRewardEventData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardEventData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaEventType();
// End Cross Module References
class UScriptStruct* FSBZCashRewardEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCashRewardEventData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCashRewardEventData"), sizeof(FSBZCashRewardEventData), Get_Z_Construct_UScriptStruct_FSBZCashRewardEventData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCashRewardEventData>()
{
	return FSBZCashRewardEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCashRewardEventData(FSBZCashRewardEventData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCashRewardEventData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardEventData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardEventData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCashRewardEventData>(FName(TEXT("SBZCashRewardEventData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardEventData;
	struct Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferencePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DifferencePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CashDifference;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCashRewardEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCashRewardEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_DifferencePercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardEventData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_DifferencePercentage = { "DifferencePercentage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardEventData, DifferencePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_DifferencePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_DifferencePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_CashDifference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardEventData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_CashDifference = { "CashDifference", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardEventData, CashDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_CashDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_CashDifference_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_EventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardEventData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardEventData, EventType), Z_Construct_UEnum_Starbreeze_ESBZMetaEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_EventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_DifferencePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_CashDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::NewProp_EventType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCashRewardEventData",
		sizeof(FSBZCashRewardEventData),
		alignof(FSBZCashRewardEventData),
		Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCashRewardEventData"), sizeof(FSBZCashRewardEventData), Get_Z_Construct_UScriptStruct_FSBZCashRewardEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCashRewardEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardEventData_Hash() { return 173403802U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
