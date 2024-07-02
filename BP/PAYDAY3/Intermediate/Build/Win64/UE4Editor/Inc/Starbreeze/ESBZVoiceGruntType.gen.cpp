// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZVoiceGruntType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZVoiceGruntType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoiceGruntType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZVoiceGruntType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZVoiceGruntType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZVoiceGruntType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZVoiceGruntType>()
	{
		return ESBZVoiceGruntType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZVoiceGruntType(ESBZVoiceGruntType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZVoiceGruntType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZVoiceGruntType_Hash() { return 2864762550U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoiceGruntType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZVoiceGruntType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZVoiceGruntType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZVoiceGruntType::Light", (int64)ESBZVoiceGruntType::Light },
				{ "ESBZVoiceGruntType::Heavy", (int64)ESBZVoiceGruntType::Heavy },
				{ "ESBZVoiceGruntType::HurtLight", (int64)ESBZVoiceGruntType::HurtLight },
				{ "ESBZVoiceGruntType::HurtHeavy", (int64)ESBZVoiceGruntType::HurtHeavy },
				{ "ESBZVoiceGruntType::Upwards", (int64)ESBZVoiceGruntType::Upwards },
				{ "ESBZVoiceGruntType::Downwards", (int64)ESBZVoiceGruntType::Downwards },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Downwards.Name", "ESBZVoiceGruntType::Downwards" },
				{ "Heavy.Name", "ESBZVoiceGruntType::Heavy" },
				{ "HurtHeavy.Name", "ESBZVoiceGruntType::HurtHeavy" },
				{ "HurtLight.Name", "ESBZVoiceGruntType::HurtLight" },
				{ "Light.Name", "ESBZVoiceGruntType::Light" },
				{ "ModuleRelativePath", "Public/ESBZVoiceGruntType.h" },
				{ "Upwards.Name", "ESBZVoiceGruntType::Upwards" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZVoiceGruntType",
				"ESBZVoiceGruntType",
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
