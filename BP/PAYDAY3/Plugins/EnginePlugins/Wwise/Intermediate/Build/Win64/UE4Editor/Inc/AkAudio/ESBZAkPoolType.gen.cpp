// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/ESBZAkPoolType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAkPoolType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ESBZAkPoolType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* ESBZAkPoolType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_ESBZAkPoolType, Z_Construct_UPackage__Script_AkAudio(), TEXT("ESBZAkPoolType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<ESBZAkPoolType>()
	{
		return ESBZAkPoolType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAkPoolType(ESBZAkPoolType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("ESBZAkPoolType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_ESBZAkPoolType_Hash() { return 2735510925U; }
	UEnum* Z_Construct_UEnum_AkAudio_ESBZAkPoolType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAkPoolType"), 0, Get_Z_Construct_UEnum_AkAudio_ESBZAkPoolType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAkPoolType::NoPool", (int64)ESBZAkPoolType::NoPool },
				{ "ESBZAkPoolType::MainCharacterFootSteps", (int64)ESBZAkPoolType::MainCharacterFootSteps },
				{ "ESBZAkPoolType::OtherFootSteps", (int64)ESBZAkPoolType::OtherFootSteps },
				{ "ESBZAkPoolType::WeaponImpact", (int64)ESBZAkPoolType::WeaponImpact },
				{ "ESBZAkPoolType::EnvironmentImpact", (int64)ESBZAkPoolType::EnvironmentImpact },
				{ "ESBZAkPoolType::Interaction", (int64)ESBZAkPoolType::Interaction },
				{ "ESBZAkPoolType::Max", (int64)ESBZAkPoolType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EnvironmentImpact.Name", "ESBZAkPoolType::EnvironmentImpact" },
				{ "Interaction.Name", "ESBZAkPoolType::Interaction" },
				{ "MainCharacterFootSteps.Name", "ESBZAkPoolType::MainCharacterFootSteps" },
				{ "Max.Name", "ESBZAkPoolType::Max" },
				{ "ModuleRelativePath", "Public/ESBZAkPoolType.h" },
				{ "NoPool.Name", "ESBZAkPoolType::NoPool" },
				{ "OtherFootSteps.Name", "ESBZAkPoolType::OtherFootSteps" },
				{ "WeaponImpact.Name", "ESBZAkPoolType::WeaponImpact" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"ESBZAkPoolType",
				"ESBZAkPoolType",
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
