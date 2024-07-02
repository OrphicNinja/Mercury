// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSpeakerConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpeakerConfiguration() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* AkSpeakerConfiguration_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpeakerConfiguration"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkSpeakerConfiguration>()
	{
		return AkSpeakerConfiguration_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkSpeakerConfiguration(AkSpeakerConfiguration_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkSpeakerConfiguration"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Hash() { return 324640962U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkSpeakerConfiguration"), 0, Get_Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkSpeakerConfiguration::Ak_Speaker_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Left },
				{ "AkSpeakerConfiguration::Ak_Speaker_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Right },
				{ "AkSpeakerConfiguration::Ak_Speaker_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Center },
				{ "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency", (int64)AkSpeakerConfiguration::Ak_Speaker_Low_Frequency },
				{ "AkSpeakerConfiguration::Ak_Speaker_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Left },
				{ "AkSpeakerConfiguration::Ak_Speaker_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Right },
				{ "AkSpeakerConfiguration::Ak_Speaker_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Center },
				{ "AkSpeakerConfiguration::Ak_Speaker_Side_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Left },
				{ "AkSpeakerConfiguration::Ak_Speaker_Side_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Right },
				{ "AkSpeakerConfiguration::Ak_Speaker_Top", (int64)AkSpeakerConfiguration::Ak_Speaker_Top },
				{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left },
				{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center },
				{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right },
				{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left },
				{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center },
				{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ak_Speaker_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Center" },
				{ "Ak_Speaker_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Left" },
				{ "Ak_Speaker_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Right" },
				{ "Ak_Speaker_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Center" },
				{ "Ak_Speaker_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Left" },
				{ "Ak_Speaker_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Right" },
				{ "Ak_Speaker_Height_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center" },
				{ "Ak_Speaker_Height_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left" },
				{ "Ak_Speaker_Height_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right" },
				{ "Ak_Speaker_Height_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center" },
				{ "Ak_Speaker_Height_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left" },
				{ "Ak_Speaker_Height_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right" },
				{ "Ak_Speaker_Low_Frequency.Name", "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency" },
				{ "Ak_Speaker_Side_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Left" },
				{ "Ak_Speaker_Side_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Right" },
				{ "Ak_Speaker_Top.Name", "AkSpeakerConfiguration::Ak_Speaker_Top" },
				{ "ModuleRelativePath", "Public/AkSpeakerConfiguration.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"AkSpeakerConfiguration",
				"AkSpeakerConfiguration",
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
