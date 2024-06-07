// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EBanType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBanType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EBanType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EBanType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EBanType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EBanType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EBanType>()
	{
		return EBanType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBanType(EBanType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EBanType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EBanType_Hash() { return 3192065706U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EBanType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBanType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EBanType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBanType::EMPTY", (int64)EBanType::EMPTY },
				{ "EBanType::LOGIN", (int64)EBanType::LOGIN },
				{ "EBanType::CHAT_SEND", (int64)EBanType::CHAT_SEND },
				{ "EBanType::CHAT_ALL", (int64)EBanType::CHAT_ALL },
				{ "EBanType::ORDER_AND_PAYMENT", (int64)EBanType::ORDER_AND_PAYMENT },
				{ "EBanType::STATISTIC", (int64)EBanType::STATISTIC },
				{ "EBanType::LEADERBOARD", (int64)EBanType::LEADERBOARD },
				{ "EBanType::MATCHMAKING", (int64)EBanType::MATCHMAKING },
				{ "EBanType::UGC_CREATE_UPDATE", (int64)EBanType::UGC_CREATE_UPDATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CHAT_ALL.Name", "EBanType::CHAT_ALL" },
				{ "CHAT_SEND.Name", "EBanType::CHAT_SEND" },
				{ "EMPTY.Name", "EBanType::EMPTY" },
				{ "LEADERBOARD.Name", "EBanType::LEADERBOARD" },
				{ "LOGIN.Name", "EBanType::LOGIN" },
				{ "MATCHMAKING.Name", "EBanType::MATCHMAKING" },
				{ "ModuleRelativePath", "Public/EBanType.h" },
				{ "ORDER_AND_PAYMENT.Name", "EBanType::ORDER_AND_PAYMENT" },
				{ "STATISTIC.Name", "EBanType::STATISTIC" },
				{ "UGC_CREATE_UPDATE.Name", "EBanType::UGC_CREATE_UPDATE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EBanType",
				"EBanType",
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
