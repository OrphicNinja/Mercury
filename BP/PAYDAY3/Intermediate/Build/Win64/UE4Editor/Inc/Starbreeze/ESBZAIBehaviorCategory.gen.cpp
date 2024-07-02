// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAIBehaviorCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAIBehaviorCategory() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAIBehaviorCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAIBehaviorCategory"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIBehaviorCategory>()
	{
		return ESBZAIBehaviorCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAIBehaviorCategory(ESBZAIBehaviorCategory_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAIBehaviorCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory_Hash() { return 909065369U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAIBehaviorCategory"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAIBehaviorCategory::None", (int64)ESBZAIBehaviorCategory::None },
				{ "ESBZAIBehaviorCategory::Idle", (int64)ESBZAIBehaviorCategory::Idle },
				{ "ESBZAIBehaviorCategory::Suspiscious", (int64)ESBZAIBehaviorCategory::Suspiscious },
				{ "ESBZAIBehaviorCategory::Combat", (int64)ESBZAIBehaviorCategory::Combat },
				{ "ESBZAIBehaviorCategory::MAX", (int64)ESBZAIBehaviorCategory::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Combat.Name", "ESBZAIBehaviorCategory::Combat" },
				{ "Idle.Name", "ESBZAIBehaviorCategory::Idle" },
				{ "MAX.Name", "ESBZAIBehaviorCategory::MAX" },
				{ "ModuleRelativePath", "Public/ESBZAIBehaviorCategory.h" },
				{ "None.Name", "ESBZAIBehaviorCategory::None" },
				{ "Suspiscious.Name", "ESBZAIBehaviorCategory::Suspiscious" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAIBehaviorCategory",
				"ESBZAIBehaviorCategory",
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
