// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelBytePlatformRewardOrigin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelBytePlatformRewardOrigin() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardOrigin();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelBytePlatformRewardOrigin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardOrigin, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelBytePlatformRewardOrigin"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePlatformRewardOrigin>()
	{
		return EAccelBytePlatformRewardOrigin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelBytePlatformRewardOrigin(EAccelBytePlatformRewardOrigin_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelBytePlatformRewardOrigin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardOrigin_Hash() { return 3406639889U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardOrigin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelBytePlatformRewardOrigin"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardOrigin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelBytePlatformRewardOrigin::NONE", (int64)EAccelBytePlatformRewardOrigin::NONE },
				{ "EAccelBytePlatformRewardOrigin::Playstation", (int64)EAccelBytePlatformRewardOrigin::Playstation },
				{ "EAccelBytePlatformRewardOrigin::Xbox", (int64)EAccelBytePlatformRewardOrigin::Xbox },
				{ "EAccelBytePlatformRewardOrigin::Steam", (int64)EAccelBytePlatformRewardOrigin::Steam },
				{ "EAccelBytePlatformRewardOrigin::Epic", (int64)EAccelBytePlatformRewardOrigin::Epic },
				{ "EAccelBytePlatformRewardOrigin::IOS", (int64)EAccelBytePlatformRewardOrigin::IOS },
				{ "EAccelBytePlatformRewardOrigin::GooglePlay", (int64)EAccelBytePlatformRewardOrigin::GooglePlay },
				{ "EAccelBytePlatformRewardOrigin::Twitch", (int64)EAccelBytePlatformRewardOrigin::Twitch },
				{ "EAccelBytePlatformRewardOrigin::Nintendo", (int64)EAccelBytePlatformRewardOrigin::Nintendo },
				{ "EAccelBytePlatformRewardOrigin::Oculus", (int64)EAccelBytePlatformRewardOrigin::Oculus },
				{ "EAccelBytePlatformRewardOrigin::System", (int64)EAccelBytePlatformRewardOrigin::System },
				{ "EAccelBytePlatformRewardOrigin::Other", (int64)EAccelBytePlatformRewardOrigin::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Epic.Name", "EAccelBytePlatformRewardOrigin::Epic" },
				{ "GooglePlay.Name", "EAccelBytePlatformRewardOrigin::GooglePlay" },
				{ "IOS.Name", "EAccelBytePlatformRewardOrigin::IOS" },
				{ "ModuleRelativePath", "Public/EAccelBytePlatformRewardOrigin.h" },
				{ "Nintendo.Name", "EAccelBytePlatformRewardOrigin::Nintendo" },
				{ "NONE.Name", "EAccelBytePlatformRewardOrigin::NONE" },
				{ "Oculus.Name", "EAccelBytePlatformRewardOrigin::Oculus" },
				{ "Other.Name", "EAccelBytePlatformRewardOrigin::Other" },
				{ "Playstation.Name", "EAccelBytePlatformRewardOrigin::Playstation" },
				{ "Steam.Name", "EAccelBytePlatformRewardOrigin::Steam" },
				{ "System.Name", "EAccelBytePlatformRewardOrigin::System" },
				{ "Twitch.Name", "EAccelBytePlatformRewardOrigin::Twitch" },
				{ "Xbox.Name", "EAccelBytePlatformRewardOrigin::Xbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelBytePlatformRewardOrigin",
				"EAccelBytePlatformRewardOrigin",
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
