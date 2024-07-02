// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZDifficulty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZDifficulty() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZDifficulty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZDifficulty, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZDifficulty"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZDifficulty>()
	{
		return ESBZDifficulty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZDifficulty(ESBZDifficulty_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZDifficulty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZDifficulty_Hash() { return 4225359425U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZDifficulty"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZDifficulty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZDifficulty::Normal", (int64)ESBZDifficulty::Normal },
				{ "ESBZDifficulty::Hard", (int64)ESBZDifficulty::Hard },
				{ "ESBZDifficulty::VeryHard", (int64)ESBZDifficulty::VeryHard },
				{ "ESBZDifficulty::Overkill", (int64)ESBZDifficulty::Overkill },
				{ "ESBZDifficulty::MAX", (int64)ESBZDifficulty::MAX },
				{ "ESBZDifficulty::Default", (int64)ESBZDifficulty::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESBZDifficulty::Default" },
				{ "Hard.Name", "ESBZDifficulty::Hard" },
				{ "MAX.Name", "ESBZDifficulty::MAX" },
				{ "ModuleRelativePath", "Public/ESBZDifficulty.h" },
				{ "Normal.Name", "ESBZDifficulty::Normal" },
				{ "Overkill.Name", "ESBZDifficulty::Overkill" },
				{ "VeryHard.Name", "ESBZDifficulty::VeryHard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZDifficulty",
				"ESBZDifficulty",
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
