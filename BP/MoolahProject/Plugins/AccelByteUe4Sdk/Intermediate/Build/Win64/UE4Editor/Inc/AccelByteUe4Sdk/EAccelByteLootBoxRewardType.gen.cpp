// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteLootBoxRewardType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteLootBoxRewardType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLootBoxRewardType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteLootBoxRewardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLootBoxRewardType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteLootBoxRewardType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteLootBoxRewardType>()
	{
		return EAccelByteLootBoxRewardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteLootBoxRewardType(EAccelByteLootBoxRewardType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteLootBoxRewardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLootBoxRewardType_Hash() { return 1146607650U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLootBoxRewardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteLootBoxRewardType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLootBoxRewardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteLootBoxRewardType::PROBABILITY_GROUP", (int64)EAccelByteLootBoxRewardType::PROBABILITY_GROUP },
				{ "EAccelByteLootBoxRewardType::REWARD_GROUP", (int64)EAccelByteLootBoxRewardType::REWARD_GROUP },
				{ "EAccelByteLootBoxRewardType::REWARD", (int64)EAccelByteLootBoxRewardType::REWARD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAccelByteLootBoxRewardType.h" },
				{ "PROBABILITY_GROUP.Name", "EAccelByteLootBoxRewardType::PROBABILITY_GROUP" },
				{ "REWARD.Name", "EAccelByteLootBoxRewardType::REWARD" },
				{ "REWARD_GROUP.Name", "EAccelByteLootBoxRewardType::REWARD_GROUP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteLootBoxRewardType",
				"EAccelByteLootBoxRewardType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
