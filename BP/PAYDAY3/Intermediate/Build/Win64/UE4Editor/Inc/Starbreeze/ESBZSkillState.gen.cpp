// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSkillState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSkillState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSkillState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSkillState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSkillState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSkillState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSkillState>()
	{
		return ESBZSkillState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSkillState(ESBZSkillState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSkillState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSkillState_Hash() { return 3964137062U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSkillState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSkillState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSkillState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSkillState::Unresearched", (int64)ESBZSkillState::Unresearched },
				{ "ESBZSkillState::Locked", (int64)ESBZSkillState::Locked },
				{ "ESBZSkillState::Unequipped", (int64)ESBZSkillState::Unequipped },
				{ "ESBZSkillState::Equipped", (int64)ESBZSkillState::Equipped },
				{ "ESBZSkillState::Aced", (int64)ESBZSkillState::Aced },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aced.Name", "ESBZSkillState::Aced" },
				{ "BlueprintType", "true" },
				{ "Equipped.Name", "ESBZSkillState::Equipped" },
				{ "Locked.Name", "ESBZSkillState::Locked" },
				{ "ModuleRelativePath", "Public/ESBZSkillState.h" },
				{ "Unequipped.Name", "ESBZSkillState::Unequipped" },
				{ "Unresearched.Name", "ESBZSkillState::Unresearched" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSkillState",
				"ESBZSkillState",
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
