// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAICharacterVariationCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAICharacterVariationCategory() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAICharacterVariationCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAICharacterVariationCategory"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAICharacterVariationCategory>()
	{
		return ESBZAICharacterVariationCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAICharacterVariationCategory(ESBZAICharacterVariationCategory_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAICharacterVariationCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory_Hash() { return 2422879739U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAICharacterVariationCategory"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAICharacterVariationCategory::Default", (int64)ESBZAICharacterVariationCategory::Default },
				{ "ESBZAICharacterVariationCategory::Rescue", (int64)ESBZAICharacterVariationCategory::Rescue },
				{ "ESBZAICharacterVariationCategory::Sabotage", (int64)ESBZAICharacterVariationCategory::Sabotage },
				{ "ESBZAICharacterVariationCategory::MAX", (int64)ESBZAICharacterVariationCategory::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESBZAICharacterVariationCategory::Default" },
				{ "MAX.Name", "ESBZAICharacterVariationCategory::MAX" },
				{ "ModuleRelativePath", "Public/ESBZAICharacterVariationCategory.h" },
				{ "Rescue.Name", "ESBZAICharacterVariationCategory::Rescue" },
				{ "Sabotage.Name", "ESBZAICharacterVariationCategory::Sabotage" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAICharacterVariationCategory",
				"ESBZAICharacterVariationCategory",
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
