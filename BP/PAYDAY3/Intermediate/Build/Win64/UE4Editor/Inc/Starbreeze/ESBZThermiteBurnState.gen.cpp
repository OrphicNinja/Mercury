// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZThermiteBurnState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZThermiteBurnState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZThermiteBurnState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZThermiteBurnState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZThermiteBurnState>()
	{
		return ESBZThermiteBurnState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZThermiteBurnState(ESBZThermiteBurnState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZThermiteBurnState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState_Hash() { return 733155990U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZThermiteBurnState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZThermiteBurnState::Inactive", (int64)ESBZThermiteBurnState::Inactive },
				{ "ESBZThermiteBurnState::Unlit", (int64)ESBZThermiteBurnState::Unlit },
				{ "ESBZThermiteBurnState::Completed", (int64)ESBZThermiteBurnState::Completed },
				{ "ESBZThermiteBurnState::Burning", (int64)ESBZThermiteBurnState::Burning },
				{ "ESBZThermiteBurnState::CriticalBurning", (int64)ESBZThermiteBurnState::CriticalBurning },
				{ "ESBZThermiteBurnState::FlashOver", (int64)ESBZThermiteBurnState::FlashOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Burning.Name", "ESBZThermiteBurnState::Burning" },
				{ "Completed.Name", "ESBZThermiteBurnState::Completed" },
				{ "CriticalBurning.Name", "ESBZThermiteBurnState::CriticalBurning" },
				{ "FlashOver.Name", "ESBZThermiteBurnState::FlashOver" },
				{ "Inactive.Name", "ESBZThermiteBurnState::Inactive" },
				{ "ModuleRelativePath", "Public/ESBZThermiteBurnState.h" },
				{ "Unlit.Name", "ESBZThermiteBurnState::Unlit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZThermiteBurnState",
				"ESBZThermiteBurnState",
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
