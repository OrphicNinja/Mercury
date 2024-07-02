// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZBreachingEquipmentState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZBreachingEquipmentState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZBreachingEquipmentState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZBreachingEquipmentState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZBreachingEquipmentState>()
	{
		return ESBZBreachingEquipmentState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZBreachingEquipmentState(ESBZBreachingEquipmentState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZBreachingEquipmentState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState_Hash() { return 3877527173U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZBreachingEquipmentState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZBreachingEquipmentState::HeatingUp", (int64)ESBZBreachingEquipmentState::HeatingUp },
				{ "ESBZBreachingEquipmentState::Running", (int64)ESBZBreachingEquipmentState::Running },
				{ "ESBZBreachingEquipmentState::NotAssembled", (int64)ESBZBreachingEquipmentState::NotAssembled },
				{ "ESBZBreachingEquipmentState::Off", (int64)ESBZBreachingEquipmentState::Off },
				{ "ESBZBreachingEquipmentState::NeedsAdjusting", (int64)ESBZBreachingEquipmentState::NeedsAdjusting },
				{ "ESBZBreachingEquipmentState::Jammed", (int64)ESBZBreachingEquipmentState::Jammed },
				{ "ESBZBreachingEquipmentState::Done", (int64)ESBZBreachingEquipmentState::Done },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Done.Name", "ESBZBreachingEquipmentState::Done" },
				{ "HeatingUp.Name", "ESBZBreachingEquipmentState::HeatingUp" },
				{ "Jammed.Name", "ESBZBreachingEquipmentState::Jammed" },
				{ "ModuleRelativePath", "Public/ESBZBreachingEquipmentState.h" },
				{ "NeedsAdjusting.Name", "ESBZBreachingEquipmentState::NeedsAdjusting" },
				{ "NotAssembled.Name", "ESBZBreachingEquipmentState::NotAssembled" },
				{ "Off.Name", "ESBZBreachingEquipmentState::Off" },
				{ "Running.Name", "ESBZBreachingEquipmentState::Running" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZBreachingEquipmentState",
				"ESBZBreachingEquipmentState",
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
