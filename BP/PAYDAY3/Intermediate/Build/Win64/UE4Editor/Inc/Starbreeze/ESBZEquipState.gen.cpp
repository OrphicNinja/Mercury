// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZEquipState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZEquipState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquipState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZEquipState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZEquipState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZEquipState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZEquipState>()
	{
		return ESBZEquipState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZEquipState(ESBZEquipState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZEquipState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZEquipState_Hash() { return 2364400514U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquipState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZEquipState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZEquipState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZEquipState::Unequipped", (int64)ESBZEquipState::Unequipped },
				{ "ESBZEquipState::Equipping", (int64)ESBZEquipState::Equipping },
				{ "ESBZEquipState::Equipped", (int64)ESBZEquipState::Equipped },
				{ "ESBZEquipState::Unequipping", (int64)ESBZEquipState::Unequipping },
				{ "ESBZEquipState::MAX", (int64)ESBZEquipState::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equipped.Name", "ESBZEquipState::Equipped" },
				{ "Equipping.Name", "ESBZEquipState::Equipping" },
				{ "MAX.Name", "ESBZEquipState::MAX" },
				{ "ModuleRelativePath", "Public/ESBZEquipState.h" },
				{ "Unequipped.Name", "ESBZEquipState::Unequipped" },
				{ "Unequipping.Name", "ESBZEquipState::Unequipping" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZEquipState",
				"ESBZEquipState",
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
