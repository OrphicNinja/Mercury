// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCookingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCookingState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCookingState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCookingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCookingState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCookingState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCookingState>()
	{
		return ESBZCookingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCookingState(ESBZCookingState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCookingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCookingState_Hash() { return 244258821U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCookingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCookingState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCookingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCookingState::Inactive", (int64)ESBZCookingState::Inactive },
				{ "ESBZCookingState::WaitingForIngredients", (int64)ESBZCookingState::WaitingForIngredients },
				{ "ESBZCookingState::Cooking", (int64)ESBZCookingState::Cooking },
				{ "ESBZCookingState::UnderCooked", (int64)ESBZCookingState::UnderCooked },
				{ "ESBZCookingState::Cooked", (int64)ESBZCookingState::Cooked },
				{ "ESBZCookingState::OverCooked", (int64)ESBZCookingState::OverCooked },
				{ "ESBZCookingState::Sabotaged", (int64)ESBZCookingState::Sabotaged },
				{ "ESBZCookingState::Destroyed", (int64)ESBZCookingState::Destroyed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cooked.Name", "ESBZCookingState::Cooked" },
				{ "Cooking.Name", "ESBZCookingState::Cooking" },
				{ "Destroyed.Name", "ESBZCookingState::Destroyed" },
				{ "Inactive.Name", "ESBZCookingState::Inactive" },
				{ "ModuleRelativePath", "Public/ESBZCookingState.h" },
				{ "OverCooked.Name", "ESBZCookingState::OverCooked" },
				{ "Sabotaged.Name", "ESBZCookingState::Sabotaged" },
				{ "UnderCooked.Name", "ESBZCookingState::UnderCooked" },
				{ "WaitingForIngredients.Name", "ESBZCookingState::WaitingForIngredients" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCookingState",
				"ESBZCookingState",
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
