// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZFacialEmotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZFacialEmotion() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZFacialEmotion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZFacialEmotion"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZFacialEmotion>()
	{
		return ESBZFacialEmotion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZFacialEmotion(ESBZFacialEmotion_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZFacialEmotion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion_Hash() { return 252088987U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZFacialEmotion"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZFacialEmotion::Invalid", (int64)ESBZFacialEmotion::Invalid },
				{ "ESBZFacialEmotion::Anger", (int64)ESBZFacialEmotion::Anger },
				{ "ESBZFacialEmotion::Fear", (int64)ESBZFacialEmotion::Fear },
				{ "ESBZFacialEmotion::Disgust", (int64)ESBZFacialEmotion::Disgust },
				{ "ESBZFacialEmotion::Happiness", (int64)ESBZFacialEmotion::Happiness },
				{ "ESBZFacialEmotion::Sadness", (int64)ESBZFacialEmotion::Sadness },
				{ "ESBZFacialEmotion::Surprise", (int64)ESBZFacialEmotion::Surprise },
				{ "ESBZFacialEmotion::Contempt", (int64)ESBZFacialEmotion::Contempt },
				{ "ESBZFacialEmotion::Neutral", (int64)ESBZFacialEmotion::Neutral },
				{ "ESBZFacialEmotion::Effort", (int64)ESBZFacialEmotion::Effort },
				{ "ESBZFacialEmotion::Pain", (int64)ESBZFacialEmotion::Pain },
				{ "ESBZFacialEmotion::Drunk", (int64)ESBZFacialEmotion::Drunk },
				{ "ESBZFacialEmotion::Suspicious", (int64)ESBZFacialEmotion::Suspicious },
				{ "ESBZFacialEmotion::Tough", (int64)ESBZFacialEmotion::Tough },
				{ "ESBZFacialEmotion::Rage", (int64)ESBZFacialEmotion::Rage },
				{ "ESBZFacialEmotion::HumanShieldVictim", (int64)ESBZFacialEmotion::HumanShieldVictim },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Anger.Name", "ESBZFacialEmotion::Anger" },
				{ "BlueprintType", "true" },
				{ "Contempt.Name", "ESBZFacialEmotion::Contempt" },
				{ "Disgust.Name", "ESBZFacialEmotion::Disgust" },
				{ "Drunk.Name", "ESBZFacialEmotion::Drunk" },
				{ "Effort.Name", "ESBZFacialEmotion::Effort" },
				{ "Fear.Name", "ESBZFacialEmotion::Fear" },
				{ "Happiness.Name", "ESBZFacialEmotion::Happiness" },
				{ "HumanShieldVictim.Name", "ESBZFacialEmotion::HumanShieldVictim" },
				{ "Invalid.Name", "ESBZFacialEmotion::Invalid" },
				{ "ModuleRelativePath", "Public/ESBZFacialEmotion.h" },
				{ "Neutral.Name", "ESBZFacialEmotion::Neutral" },
				{ "Pain.Name", "ESBZFacialEmotion::Pain" },
				{ "Rage.Name", "ESBZFacialEmotion::Rage" },
				{ "Sadness.Name", "ESBZFacialEmotion::Sadness" },
				{ "Surprise.Name", "ESBZFacialEmotion::Surprise" },
				{ "Suspicious.Name", "ESBZFacialEmotion::Suspicious" },
				{ "Tough.Name", "ESBZFacialEmotion::Tough" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZFacialEmotion",
				"ESBZFacialEmotion",
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
