// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSkillType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSkillType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSkillType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSkillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSkillType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSkillType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSkillType>()
	{
		return ESBZSkillType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSkillType(ESBZSkillType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSkillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSkillType_Hash() { return 3116820758U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSkillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSkillType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSkillType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSkillType::None", (int64)ESBZSkillType::None },
				{ "ESBZSkillType::BaseSkill", (int64)ESBZSkillType::BaseSkill },
				{ "ESBZSkillType::Mastery", (int64)ESBZSkillType::Mastery },
				{ "ESBZSkillType::Upgrade", (int64)ESBZSkillType::Upgrade },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BaseSkill.Name", "ESBZSkillType::BaseSkill" },
				{ "BlueprintType", "true" },
				{ "Mastery.Name", "ESBZSkillType::Mastery" },
				{ "ModuleRelativePath", "Public/ESBZSkillType.h" },
				{ "None.Name", "ESBZSkillType::None" },
				{ "Upgrade.Name", "ESBZSkillType::Upgrade" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSkillType",
				"ESBZSkillType",
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
