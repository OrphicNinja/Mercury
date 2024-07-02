// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRewardRecuctionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRewardRecuctionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardRecuctionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRewardReductionType();
// End Cross Module References
class UScriptStruct* FSBZRewardRecuctionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRewardRecuctionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRewardRecuctionData"), sizeof(FSBZRewardRecuctionData), Get_Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRewardRecuctionData>()
{
	return FSBZRewardRecuctionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRewardRecuctionData(FSBZRewardRecuctionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRewardRecuctionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardRecuctionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardRecuctionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZRewardRecuctionData>(FName(TEXT("SBZRewardRecuctionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardRecuctionData;
	struct Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RewardReductionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardReductionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RewardReductionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReductionPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReductionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxReductionPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRewardRecuctionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRewardRecuctionData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_RewardReductionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_RewardReductionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardRecuctionData" },
		{ "ModuleRelativePath", "Public/SBZRewardRecuctionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_RewardReductionType = { "RewardReductionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardRecuctionData, RewardReductionType), Z_Construct_UEnum_Starbreeze_ESBZRewardReductionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_RewardReductionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_RewardReductionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_ReductionPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardRecuctionData" },
		{ "ModuleRelativePath", "Public/SBZRewardRecuctionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_ReductionPercentage = { "ReductionPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardRecuctionData, ReductionPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_ReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_ReductionPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_MaxReductionPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardRecuctionData" },
		{ "ModuleRelativePath", "Public/SBZRewardRecuctionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_MaxReductionPercentage = { "MaxReductionPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardRecuctionData, MaxReductionPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_MaxReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_MaxReductionPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_RewardReductionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_RewardReductionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_ReductionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::NewProp_MaxReductionPercentage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRewardRecuctionData",
		sizeof(FSBZRewardRecuctionData),
		alignof(FSBZRewardRecuctionData),
		Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardRecuctionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRewardRecuctionData"), sizeof(FSBZRewardRecuctionData), Get_Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRewardRecuctionData_Hash() { return 2617227781U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
