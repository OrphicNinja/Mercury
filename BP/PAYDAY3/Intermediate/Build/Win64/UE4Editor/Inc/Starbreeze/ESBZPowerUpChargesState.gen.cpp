// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPowerUpChargesState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPowerUpChargesState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPowerUpChargesState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPowerUpChargesState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPowerUpChargesState>()
	{
		return ESBZPowerUpChargesState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPowerUpChargesState(ESBZPowerUpChargesState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPowerUpChargesState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState_Hash() { return 252139723U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPowerUpChargesState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPowerUpChargesState::NotPlaced", (int64)ESBZPowerUpChargesState::NotPlaced },
				{ "ESBZPowerUpChargesState::Placed", (int64)ESBZPowerUpChargesState::Placed },
				{ "ESBZPowerUpChargesState::Interactable", (int64)ESBZPowerUpChargesState::Interactable },
				{ "ESBZPowerUpChargesState::Empty", (int64)ESBZPowerUpChargesState::Empty },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Empty.Name", "ESBZPowerUpChargesState::Empty" },
				{ "Interactable.Name", "ESBZPowerUpChargesState::Interactable" },
				{ "ModuleRelativePath", "Public/ESBZPowerUpChargesState.h" },
				{ "NotPlaced.Name", "ESBZPowerUpChargesState::NotPlaced" },
				{ "Placed.Name", "ESBZPowerUpChargesState::Placed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPowerUpChargesState",
				"ESBZPowerUpChargesState",
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
