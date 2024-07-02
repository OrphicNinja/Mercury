// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCharacterPreferenceButtonSelectionAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCharacterPreferenceButtonSelectionAction() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterPreferenceButtonSelectionAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCharacterPreferenceButtonSelectionAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCharacterPreferenceButtonSelectionAction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCharacterPreferenceButtonSelectionAction"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterPreferenceButtonSelectionAction>()
	{
		return ESBZCharacterPreferenceButtonSelectionAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCharacterPreferenceButtonSelectionAction(ESBZCharacterPreferenceButtonSelectionAction_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCharacterPreferenceButtonSelectionAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterPreferenceButtonSelectionAction_Hash() { return 1930337682U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterPreferenceButtonSelectionAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCharacterPreferenceButtonSelectionAction"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterPreferenceButtonSelectionAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCharacterPreferenceButtonSelectionAction::None", (int64)ESBZCharacterPreferenceButtonSelectionAction::None },
				{ "ESBZCharacterPreferenceButtonSelectionAction::Switch", (int64)ESBZCharacterPreferenceButtonSelectionAction::Switch },
				{ "ESBZCharacterPreferenceButtonSelectionAction::Select", (int64)ESBZCharacterPreferenceButtonSelectionAction::Select },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZCharacterPreferenceButtonSelectionAction.h" },
				{ "None.Name", "ESBZCharacterPreferenceButtonSelectionAction::None" },
				{ "Select.Name", "ESBZCharacterPreferenceButtonSelectionAction::Select" },
				{ "Switch.Name", "ESBZCharacterPreferenceButtonSelectionAction::Switch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCharacterPreferenceButtonSelectionAction",
				"ESBZCharacterPreferenceButtonSelectionAction",
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
