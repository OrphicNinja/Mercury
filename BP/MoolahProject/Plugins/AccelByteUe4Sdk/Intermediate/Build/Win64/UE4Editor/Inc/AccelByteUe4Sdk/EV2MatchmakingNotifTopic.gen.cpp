// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EV2MatchmakingNotifTopic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEV2MatchmakingNotifTopic() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EV2MatchmakingNotifTopic();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EV2MatchmakingNotifTopic_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EV2MatchmakingNotifTopic, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EV2MatchmakingNotifTopic"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EV2MatchmakingNotifTopic>()
	{
		return EV2MatchmakingNotifTopic_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EV2MatchmakingNotifTopic(EV2MatchmakingNotifTopic_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EV2MatchmakingNotifTopic"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EV2MatchmakingNotifTopic_Hash() { return 3866667969U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EV2MatchmakingNotifTopic()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EV2MatchmakingNotifTopic"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EV2MatchmakingNotifTopic_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EV2MatchmakingNotifTopic::Invalid", (int64)EV2MatchmakingNotifTopic::Invalid },
				{ "EV2MatchmakingNotifTopic::OnMatchFound", (int64)EV2MatchmakingNotifTopic::OnMatchFound },
				{ "EV2MatchmakingNotifTopic::OnMatchmakingStarted", (int64)EV2MatchmakingNotifTopic::OnMatchmakingStarted },
				{ "EV2MatchmakingNotifTopic::OnMatchmakingTicketExpired", (int64)EV2MatchmakingNotifTopic::OnMatchmakingTicketExpired },
				{ "EV2MatchmakingNotifTopic::OnMatchmakingTicketCanceled", (int64)EV2MatchmakingNotifTopic::OnMatchmakingTicketCanceled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "EV2MatchmakingNotifTopic::Invalid" },
				{ "ModuleRelativePath", "Public/EV2MatchmakingNotifTopic.h" },
				{ "OnMatchFound.Name", "EV2MatchmakingNotifTopic::OnMatchFound" },
				{ "OnMatchmakingStarted.Name", "EV2MatchmakingNotifTopic::OnMatchmakingStarted" },
				{ "OnMatchmakingTicketCanceled.Name", "EV2MatchmakingNotifTopic::OnMatchmakingTicketCanceled" },
				{ "OnMatchmakingTicketExpired.Name", "EV2MatchmakingNotifTopic::OnMatchmakingTicketExpired" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EV2MatchmakingNotifTopic",
				"EV2MatchmakingNotifTopic",
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
