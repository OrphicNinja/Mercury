// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMainMenuAnimationName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMainMenuAnimationName() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMainMenuAnimationName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMainMenuAnimationName"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMainMenuAnimationName>()
	{
		return ESBZMainMenuAnimationName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMainMenuAnimationName(ESBZMainMenuAnimationName_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMainMenuAnimationName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName_Hash() { return 2607169731U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMainMenuAnimationName"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMainMenuAnimationName::IdleSequence", (int64)ESBZMainMenuAnimationName::IdleSequence },
				{ "ESBZMainMenuAnimationName::PrePlanningSequence", (int64)ESBZMainMenuAnimationName::PrePlanningSequence },
				{ "ESBZMainMenuAnimationName::SuitVisualization", (int64)ESBZMainMenuAnimationName::SuitVisualization },
				{ "ESBZMainMenuAnimationName::GloveVisualization", (int64)ESBZMainMenuAnimationName::GloveVisualization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GloveVisualization.Name", "ESBZMainMenuAnimationName::GloveVisualization" },
				{ "IdleSequence.Name", "ESBZMainMenuAnimationName::IdleSequence" },
				{ "ModuleRelativePath", "Public/ESBZMainMenuAnimationName.h" },
				{ "PrePlanningSequence.Name", "ESBZMainMenuAnimationName::PrePlanningSequence" },
				{ "SuitVisualization.Name", "ESBZMainMenuAnimationName::SuitVisualization" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMainMenuAnimationName",
				"ESBZMainMenuAnimationName",
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
