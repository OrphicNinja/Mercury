// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZTimerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZTimerState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTimerState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZTimerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZTimerState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZTimerState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZTimerState>()
	{
		return ESBZTimerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZTimerState(ESBZTimerState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZTimerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZTimerState_Hash() { return 335767154U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZTimerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZTimerState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZTimerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZTimerState::Inactive", (int64)ESBZTimerState::Inactive },
				{ "ESBZTimerState::Running", (int64)ESBZTimerState::Running },
				{ "ESBZTimerState::Paused", (int64)ESBZTimerState::Paused },
				{ "ESBZTimerState::Sabotaged", (int64)ESBZTimerState::Sabotaged },
				{ "ESBZTimerState::Done", (int64)ESBZTimerState::Done },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Done.Name", "ESBZTimerState::Done" },
				{ "Inactive.Name", "ESBZTimerState::Inactive" },
				{ "ModuleRelativePath", "Public/ESBZTimerState.h" },
				{ "Paused.Name", "ESBZTimerState::Paused" },
				{ "Running.Name", "ESBZTimerState::Running" },
				{ "Sabotaged.Name", "ESBZTimerState::Sabotaged" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZTimerState",
				"ESBZTimerState",
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
