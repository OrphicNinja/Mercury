// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHurtReactionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHurtReactionType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHurtReactionType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHurtReactionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHurtReactionType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHurtReactionType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHurtReactionType>()
	{
		return ESBZHurtReactionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHurtReactionType(ESBZHurtReactionType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHurtReactionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHurtReactionType_Hash() { return 2197334058U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHurtReactionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHurtReactionType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHurtReactionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHurtReactionType::Hurt", (int64)ESBZHurtReactionType::Hurt },
				{ "ESBZHurtReactionType::Death", (int64)ESBZHurtReactionType::Death },
				{ "ESBZHurtReactionType::SprintForwardHurt", (int64)ESBZHurtReactionType::SprintForwardHurt },
				{ "ESBZHurtReactionType::SprintForwardDeath", (int64)ESBZHurtReactionType::SprintForwardDeath },
				{ "ESBZHurtReactionType::ExplosionHurt", (int64)ESBZHurtReactionType::ExplosionHurt },
				{ "ESBZHurtReactionType::ExplosionDeath", (int64)ESBZHurtReactionType::ExplosionDeath },
				{ "ESBZHurtReactionType::NeutralHurt", (int64)ESBZHurtReactionType::NeutralHurt },
				{ "ESBZHurtReactionType::NeutralDeath", (int64)ESBZHurtReactionType::NeutralDeath },
				{ "ESBZHurtReactionType::NeutralSprintForwardHurt", (int64)ESBZHurtReactionType::NeutralSprintForwardHurt },
				{ "ESBZHurtReactionType::NeutralSprintForwardDeath", (int64)ESBZHurtReactionType::NeutralSprintForwardDeath },
				{ "ESBZHurtReactionType::NeutralExplosionHurt", (int64)ESBZHurtReactionType::NeutralExplosionHurt },
				{ "ESBZHurtReactionType::NeutralExplosionDeath", (int64)ESBZHurtReactionType::NeutralExplosionDeath },
				{ "ESBZHurtReactionType::BracedHurt", (int64)ESBZHurtReactionType::BracedHurt },
				{ "ESBZHurtReactionType::BracedDeath", (int64)ESBZHurtReactionType::BracedDeath },
				{ "ESBZHurtReactionType::BracedSprintForwardHurt", (int64)ESBZHurtReactionType::BracedSprintForwardHurt },
				{ "ESBZHurtReactionType::BracedSprintForwardDeath", (int64)ESBZHurtReactionType::BracedSprintForwardDeath },
				{ "ESBZHurtReactionType::BracedExplosionHurt", (int64)ESBZHurtReactionType::BracedExplosionHurt },
				{ "ESBZHurtReactionType::BracedExplosionDeath", (int64)ESBZHurtReactionType::BracedExplosionDeath },
				{ "ESBZHurtReactionType::NeutralBracedHurt", (int64)ESBZHurtReactionType::NeutralBracedHurt },
				{ "ESBZHurtReactionType::NeutralBracedDeath", (int64)ESBZHurtReactionType::NeutralBracedDeath },
				{ "ESBZHurtReactionType::NeutralBracedSprintForwardHurt", (int64)ESBZHurtReactionType::NeutralBracedSprintForwardHurt },
				{ "ESBZHurtReactionType::NeutralBracedSprintForwardDeath", (int64)ESBZHurtReactionType::NeutralBracedSprintForwardDeath },
				{ "ESBZHurtReactionType::NeutralBracedExplosionHurt", (int64)ESBZHurtReactionType::NeutralBracedExplosionHurt },
				{ "ESBZHurtReactionType::NeutralBracedExplosionDeath", (int64)ESBZHurtReactionType::NeutralBracedExplosionDeath },
				{ "ESBZHurtReactionType::MAX", (int64)ESBZHurtReactionType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BracedDeath.Name", "ESBZHurtReactionType::BracedDeath" },
				{ "BracedExplosionDeath.Name", "ESBZHurtReactionType::BracedExplosionDeath" },
				{ "BracedExplosionHurt.Name", "ESBZHurtReactionType::BracedExplosionHurt" },
				{ "BracedHurt.Name", "ESBZHurtReactionType::BracedHurt" },
				{ "BracedSprintForwardDeath.Name", "ESBZHurtReactionType::BracedSprintForwardDeath" },
				{ "BracedSprintForwardHurt.Name", "ESBZHurtReactionType::BracedSprintForwardHurt" },
				{ "Death.Name", "ESBZHurtReactionType::Death" },
				{ "ExplosionDeath.Name", "ESBZHurtReactionType::ExplosionDeath" },
				{ "ExplosionHurt.Name", "ESBZHurtReactionType::ExplosionHurt" },
				{ "Hurt.Name", "ESBZHurtReactionType::Hurt" },
				{ "MAX.Name", "ESBZHurtReactionType::MAX" },
				{ "ModuleRelativePath", "Public/ESBZHurtReactionType.h" },
				{ "NeutralBracedDeath.Name", "ESBZHurtReactionType::NeutralBracedDeath" },
				{ "NeutralBracedExplosionDeath.Name", "ESBZHurtReactionType::NeutralBracedExplosionDeath" },
				{ "NeutralBracedExplosionHurt.Name", "ESBZHurtReactionType::NeutralBracedExplosionHurt" },
				{ "NeutralBracedHurt.Name", "ESBZHurtReactionType::NeutralBracedHurt" },
				{ "NeutralBracedSprintForwardDeath.Name", "ESBZHurtReactionType::NeutralBracedSprintForwardDeath" },
				{ "NeutralBracedSprintForwardHurt.Name", "ESBZHurtReactionType::NeutralBracedSprintForwardHurt" },
				{ "NeutralDeath.Name", "ESBZHurtReactionType::NeutralDeath" },
				{ "NeutralExplosionDeath.Name", "ESBZHurtReactionType::NeutralExplosionDeath" },
				{ "NeutralExplosionHurt.Name", "ESBZHurtReactionType::NeutralExplosionHurt" },
				{ "NeutralHurt.Name", "ESBZHurtReactionType::NeutralHurt" },
				{ "NeutralSprintForwardDeath.Name", "ESBZHurtReactionType::NeutralSprintForwardDeath" },
				{ "NeutralSprintForwardHurt.Name", "ESBZHurtReactionType::NeutralSprintForwardHurt" },
				{ "SprintForwardDeath.Name", "ESBZHurtReactionType::SprintForwardDeath" },
				{ "SprintForwardHurt.Name", "ESBZHurtReactionType::SprintForwardHurt" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHurtReactionType",
				"ESBZHurtReactionType",
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
