// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESocialFriendButtonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESocialFriendButtonType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESocialFriendButtonType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESocialFriendButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESocialFriendButtonType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESocialFriendButtonType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESocialFriendButtonType>()
	{
		return ESocialFriendButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESocialFriendButtonType(ESocialFriendButtonType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESocialFriendButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESocialFriendButtonType_Hash() { return 1146199697U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESocialFriendButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESocialFriendButtonType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESocialFriendButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESocialFriendButtonType::AccelByteFriend", (int64)ESocialFriendButtonType::AccelByteFriend },
				{ "ESocialFriendButtonType::PlatformFriend", (int64)ESocialFriendButtonType::PlatformFriend },
				{ "ESocialFriendButtonType::IncomingFriendRequest", (int64)ESocialFriendButtonType::IncomingFriendRequest },
				{ "ESocialFriendButtonType::OutgoingFriendRequest", (int64)ESocialFriendButtonType::OutgoingFriendRequest },
				{ "ESocialFriendButtonType::UserSearchResult", (int64)ESocialFriendButtonType::UserSearchResult },
				{ "ESocialFriendButtonType::BlockedPlayers", (int64)ESocialFriendButtonType::BlockedPlayers },
				{ "ESocialFriendButtonType::OfflineFriends", (int64)ESocialFriendButtonType::OfflineFriends },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccelByteFriend.Name", "ESocialFriendButtonType::AccelByteFriend" },
				{ "BlockedPlayers.Name", "ESocialFriendButtonType::BlockedPlayers" },
				{ "BlueprintType", "true" },
				{ "IncomingFriendRequest.Name", "ESocialFriendButtonType::IncomingFriendRequest" },
				{ "ModuleRelativePath", "Public/ESocialFriendButtonType.h" },
				{ "OfflineFriends.Name", "ESocialFriendButtonType::OfflineFriends" },
				{ "OutgoingFriendRequest.Name", "ESocialFriendButtonType::OutgoingFriendRequest" },
				{ "PlatformFriend.Name", "ESocialFriendButtonType::PlatformFriend" },
				{ "UserSearchResult.Name", "ESocialFriendButtonType::UserSearchResult" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESocialFriendButtonType",
				"ESocialFriendButtonType",
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
