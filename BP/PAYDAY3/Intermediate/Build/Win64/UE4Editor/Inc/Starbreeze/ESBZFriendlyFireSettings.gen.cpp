// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZFriendlyFireSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZFriendlyFireSettings() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFriendlyFireSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZFriendlyFireSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZFriendlyFireSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZFriendlyFireSettings"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZFriendlyFireSettings>()
	{
		return ESBZFriendlyFireSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZFriendlyFireSettings(ESBZFriendlyFireSettings_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZFriendlyFireSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZFriendlyFireSettings_Hash() { return 3022535918U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZFriendlyFireSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZFriendlyFireSettings"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZFriendlyFireSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZFriendlyFireSettings::NoOverride", (int64)ESBZFriendlyFireSettings::NoOverride },
				{ "ESBZFriendlyFireSettings::Allowed", (int64)ESBZFriendlyFireSettings::Allowed },
				{ "ESBZFriendlyFireSettings::NotAllowed", (int64)ESBZFriendlyFireSettings::NotAllowed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Allowed.Name", "ESBZFriendlyFireSettings::Allowed" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZFriendlyFireSettings.h" },
				{ "NoOverride.Name", "ESBZFriendlyFireSettings::NoOverride" },
				{ "NotAllowed.Name", "ESBZFriendlyFireSettings::NotAllowed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZFriendlyFireSettings",
				"ESBZFriendlyFireSettings",
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
