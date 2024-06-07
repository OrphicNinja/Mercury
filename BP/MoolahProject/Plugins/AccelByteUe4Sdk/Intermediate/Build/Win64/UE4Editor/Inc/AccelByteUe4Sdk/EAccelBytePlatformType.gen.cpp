// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelBytePlatformType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelBytePlatformType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelBytePlatformType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelBytePlatformType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePlatformType>()
	{
		return EAccelBytePlatformType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelBytePlatformType(EAccelBytePlatformType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelBytePlatformType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType_Hash() { return 1616239919U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelBytePlatformType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelBytePlatformType::Steam", (int64)EAccelBytePlatformType::Steam },
				{ "EAccelBytePlatformType::PS4", (int64)EAccelBytePlatformType::PS4 },
				{ "EAccelBytePlatformType::PS4CrossGen", (int64)EAccelBytePlatformType::PS4CrossGen },
				{ "EAccelBytePlatformType::PS5", (int64)EAccelBytePlatformType::PS5 },
				{ "EAccelBytePlatformType::Live", (int64)EAccelBytePlatformType::Live },
				{ "EAccelBytePlatformType::Google", (int64)EAccelBytePlatformType::Google },
				{ "EAccelBytePlatformType::Apple", (int64)EAccelBytePlatformType::Apple },
				{ "EAccelBytePlatformType::Facebook", (int64)EAccelBytePlatformType::Facebook },
				{ "EAccelBytePlatformType::Android", (int64)EAccelBytePlatformType::Android },
				{ "EAccelBytePlatformType::iOS", (int64)EAccelBytePlatformType::iOS },
				{ "EAccelBytePlatformType::Device", (int64)EAccelBytePlatformType::Device },
				{ "EAccelBytePlatformType::Twitch", (int64)EAccelBytePlatformType::Twitch },
				{ "EAccelBytePlatformType::Oculus", (int64)EAccelBytePlatformType::Oculus },
				{ "EAccelBytePlatformType::Twitter", (int64)EAccelBytePlatformType::Twitter },
				{ "EAccelBytePlatformType::EpicGames", (int64)EAccelBytePlatformType::EpicGames },
				{ "EAccelBytePlatformType::AwsCognito", (int64)EAccelBytePlatformType::AwsCognito },
				{ "EAccelBytePlatformType::Discord", (int64)EAccelBytePlatformType::Discord },
				{ "EAccelBytePlatformType::Nintendo", (int64)EAccelBytePlatformType::Nintendo },
				{ "EAccelBytePlatformType::SnapChat", (int64)EAccelBytePlatformType::SnapChat },
				{ "EAccelBytePlatformType::EAOrigin", (int64)EAccelBytePlatformType::EAOrigin },
				{ "EAccelBytePlatformType::PS4Web", (int64)EAccelBytePlatformType::PS4Web },
				{ "EAccelBytePlatformType::Unset", (int64)EAccelBytePlatformType::Unset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Android.Name", "EAccelBytePlatformType::Android" },
				{ "Apple.Name", "EAccelBytePlatformType::Apple" },
				{ "AwsCognito.Name", "EAccelBytePlatformType::AwsCognito" },
				{ "BlueprintType", "true" },
				{ "Device.Name", "EAccelBytePlatformType::Device" },
				{ "Discord.Name", "EAccelBytePlatformType::Discord" },
				{ "EAOrigin.Name", "EAccelBytePlatformType::EAOrigin" },
				{ "EpicGames.Name", "EAccelBytePlatformType::EpicGames" },
				{ "Facebook.Name", "EAccelBytePlatformType::Facebook" },
				{ "Google.Name", "EAccelBytePlatformType::Google" },
				{ "iOS.Name", "EAccelBytePlatformType::iOS" },
				{ "Live.Name", "EAccelBytePlatformType::Live" },
				{ "ModuleRelativePath", "Public/EAccelBytePlatformType.h" },
				{ "Nintendo.Name", "EAccelBytePlatformType::Nintendo" },
				{ "Oculus.Name", "EAccelBytePlatformType::Oculus" },
				{ "PS4.Name", "EAccelBytePlatformType::PS4" },
				{ "PS4CrossGen.Name", "EAccelBytePlatformType::PS4CrossGen" },
				{ "PS4Web.Name", "EAccelBytePlatformType::PS4Web" },
				{ "PS5.Name", "EAccelBytePlatformType::PS5" },
				{ "SnapChat.Name", "EAccelBytePlatformType::SnapChat" },
				{ "Steam.Name", "EAccelBytePlatformType::Steam" },
				{ "Twitch.Name", "EAccelBytePlatformType::Twitch" },
				{ "Twitter.Name", "EAccelBytePlatformType::Twitter" },
				{ "Unset.Name", "EAccelBytePlatformType::Unset" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelBytePlatformType",
				"EAccelBytePlatformType",
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
