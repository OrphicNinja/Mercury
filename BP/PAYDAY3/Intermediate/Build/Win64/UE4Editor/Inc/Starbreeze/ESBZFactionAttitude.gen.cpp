// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZFactionAttitude.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZFactionAttitude() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFactionAttitude();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZFactionAttitude_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZFactionAttitude, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZFactionAttitude"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZFactionAttitude>()
	{
		return ESBZFactionAttitude_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZFactionAttitude(ESBZFactionAttitude_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZFactionAttitude"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZFactionAttitude_Hash() { return 2656652168U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZFactionAttitude()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZFactionAttitude"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZFactionAttitude_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZFactionAttitude::Invalid", (int64)ESBZFactionAttitude::Invalid },
				{ "ESBZFactionAttitude::Friendly", (int64)ESBZFactionAttitude::Friendly },
				{ "ESBZFactionAttitude::Neutral", (int64)ESBZFactionAttitude::Neutral },
				{ "ESBZFactionAttitude::Hostile", (int64)ESBZFactionAttitude::Hostile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Friendly.Name", "ESBZFactionAttitude::Friendly" },
				{ "Hostile.Name", "ESBZFactionAttitude::Hostile" },
				{ "Invalid.Name", "ESBZFactionAttitude::Invalid" },
				{ "ModuleRelativePath", "Public/ESBZFactionAttitude.h" },
				{ "Neutral.Name", "ESBZFactionAttitude::Neutral" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZFactionAttitude",
				"ESBZFactionAttitude",
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
