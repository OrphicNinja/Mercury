// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EV2SessionNotifTopic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEV2SessionNotifTopic() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EV2SessionNotifTopic();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EV2SessionNotifTopic_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EV2SessionNotifTopic, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EV2SessionNotifTopic"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EV2SessionNotifTopic>()
	{
		return EV2SessionNotifTopic_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EV2SessionNotifTopic(EV2SessionNotifTopic_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EV2SessionNotifTopic"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EV2SessionNotifTopic_Hash() { return 3428355813U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EV2SessionNotifTopic()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EV2SessionNotifTopic"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EV2SessionNotifTopic_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EV2SessionNotifTopic::Invalid", (int64)EV2SessionNotifTopic::Invalid },
				{ "EV2SessionNotifTopic::OnPartyInvited", (int64)EV2SessionNotifTopic::OnPartyInvited },
				{ "EV2SessionNotifTopic::OnPartyMembersChanged", (int64)EV2SessionNotifTopic::OnPartyMembersChanged },
				{ "EV2SessionNotifTopic::OnPartyJoined", (int64)EV2SessionNotifTopic::OnPartyJoined },
				{ "EV2SessionNotifTopic::OnPartyRejected", (int64)EV2SessionNotifTopic::OnPartyRejected },
				{ "EV2SessionNotifTopic::OnPartyKicked", (int64)EV2SessionNotifTopic::OnPartyKicked },
				{ "EV2SessionNotifTopic::OnSessionInvited", (int64)EV2SessionNotifTopic::OnSessionInvited },
				{ "EV2SessionNotifTopic::OnSessionJoined", (int64)EV2SessionNotifTopic::OnSessionJoined },
				{ "EV2SessionNotifTopic::OnSessionMembersChanged", (int64)EV2SessionNotifTopic::OnSessionMembersChanged },
				{ "EV2SessionNotifTopic::OnSessionKicked", (int64)EV2SessionNotifTopic::OnSessionKicked },
				{ "EV2SessionNotifTopic::OnSessionRejected", (int64)EV2SessionNotifTopic::OnSessionRejected },
				{ "EV2SessionNotifTopic::OnDSStatusChanged", (int64)EV2SessionNotifTopic::OnDSStatusChanged },
				{ "EV2SessionNotifTopic::OnPartyUpdated", (int64)EV2SessionNotifTopic::OnPartyUpdated },
				{ "EV2SessionNotifTopic::OnGameSessionUpdated", (int64)EV2SessionNotifTopic::OnGameSessionUpdated },
				{ "EV2SessionNotifTopic::OnSessionStorageChanged", (int64)EV2SessionNotifTopic::OnSessionStorageChanged },
				{ "EV2SessionNotifTopic::OnSessionEnded", (int64)EV2SessionNotifTopic::OnSessionEnded },
				{ "EV2SessionNotifTopic::OnSessionNativePlatformSynced", (int64)EV2SessionNotifTopic::OnSessionNativePlatformSynced },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "EV2SessionNotifTopic::Invalid" },
				{ "ModuleRelativePath", "Public/EV2SessionNotifTopic.h" },
				{ "OnDSStatusChanged.Name", "EV2SessionNotifTopic::OnDSStatusChanged" },
				{ "OnGameSessionUpdated.Name", "EV2SessionNotifTopic::OnGameSessionUpdated" },
				{ "OnPartyInvited.Name", "EV2SessionNotifTopic::OnPartyInvited" },
				{ "OnPartyJoined.Name", "EV2SessionNotifTopic::OnPartyJoined" },
				{ "OnPartyKicked.Name", "EV2SessionNotifTopic::OnPartyKicked" },
				{ "OnPartyMembersChanged.Name", "EV2SessionNotifTopic::OnPartyMembersChanged" },
				{ "OnPartyRejected.Name", "EV2SessionNotifTopic::OnPartyRejected" },
				{ "OnPartyUpdated.Name", "EV2SessionNotifTopic::OnPartyUpdated" },
				{ "OnSessionEnded.Name", "EV2SessionNotifTopic::OnSessionEnded" },
				{ "OnSessionInvited.Name", "EV2SessionNotifTopic::OnSessionInvited" },
				{ "OnSessionJoined.Name", "EV2SessionNotifTopic::OnSessionJoined" },
				{ "OnSessionKicked.Name", "EV2SessionNotifTopic::OnSessionKicked" },
				{ "OnSessionMembersChanged.Name", "EV2SessionNotifTopic::OnSessionMembersChanged" },
				{ "OnSessionNativePlatformSynced.Name", "EV2SessionNotifTopic::OnSessionNativePlatformSynced" },
				{ "OnSessionRejected.Name", "EV2SessionNotifTopic::OnSessionRejected" },
				{ "OnSessionStorageChanged.Name", "EV2SessionNotifTopic::OnSessionStorageChanged" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EV2SessionNotifTopic",
				"EV2SessionNotifTopic",
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
