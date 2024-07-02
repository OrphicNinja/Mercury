// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZEventReactorState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZEventReactorState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEventReactorState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZEventReactorState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZEventReactorState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZEventReactorState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZEventReactorState>()
	{
		return ESBZEventReactorState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZEventReactorState(ESBZEventReactorState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZEventReactorState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZEventReactorState_Hash() { return 1913304441U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZEventReactorState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZEventReactorState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZEventReactorState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZEventReactorState::Inactive", (int64)ESBZEventReactorState::Inactive },
				{ "ESBZEventReactorState::Normal", (int64)ESBZEventReactorState::Normal },
				{ "ESBZEventReactorState::Glitched", (int64)ESBZEventReactorState::Glitched },
				{ "ESBZEventReactorState::VeryGlitched", (int64)ESBZEventReactorState::VeryGlitched },
				{ "ESBZEventReactorState::Destroyed", (int64)ESBZEventReactorState::Destroyed },
				{ "ESBZEventReactorState::MAX", (int64)ESBZEventReactorState::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Destroyed.Name", "ESBZEventReactorState::Destroyed" },
				{ "Glitched.Name", "ESBZEventReactorState::Glitched" },
				{ "Inactive.Name", "ESBZEventReactorState::Inactive" },
				{ "MAX.Name", "ESBZEventReactorState::MAX" },
				{ "ModuleRelativePath", "Public/ESBZEventReactorState.h" },
				{ "Normal.Name", "ESBZEventReactorState::Normal" },
				{ "VeryGlitched.Name", "ESBZEventReactorState::VeryGlitched" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZEventReactorState",
				"ESBZEventReactorState",
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
