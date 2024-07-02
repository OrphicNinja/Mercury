// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMarkerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMarkerState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMarkerState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMarkerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMarkerState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMarkerState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMarkerState>()
	{
		return ESBZMarkerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMarkerState(ESBZMarkerState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMarkerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMarkerState_Hash() { return 555281254U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMarkerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMarkerState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMarkerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMarkerState::Suspicious", (int64)ESBZMarkerState::Suspicious },
				{ "ESBZMarkerState::Alerted", (int64)ESBZMarkerState::Alerted },
				{ "ESBZMarkerState::Alarm", (int64)ESBZMarkerState::Alarm },
				{ "ESBZMarkerState::Escalate", (int64)ESBZMarkerState::Escalate },
				{ "ESBZMarkerState::Escort", (int64)ESBZMarkerState::Escort },
				{ "ESBZMarkerState::PreEscort", (int64)ESBZMarkerState::PreEscort },
				{ "ESBZMarkerState::Arrest", (int64)ESBZMarkerState::Arrest },
				{ "ESBZMarkerState::Sabotage", (int64)ESBZMarkerState::Sabotage },
				{ "ESBZMarkerState::Bag", (int64)ESBZMarkerState::Bag },
				{ "ESBZMarkerState::Investigate", (int64)ESBZMarkerState::Investigate },
				{ "ESBZMarkerState::None", (int64)ESBZMarkerState::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alarm.Name", "ESBZMarkerState::Alarm" },
				{ "Alerted.Name", "ESBZMarkerState::Alerted" },
				{ "Arrest.Name", "ESBZMarkerState::Arrest" },
				{ "Bag.Name", "ESBZMarkerState::Bag" },
				{ "BlueprintType", "true" },
				{ "Escalate.Name", "ESBZMarkerState::Escalate" },
				{ "Escort.Name", "ESBZMarkerState::Escort" },
				{ "Investigate.Name", "ESBZMarkerState::Investigate" },
				{ "ModuleRelativePath", "Public/ESBZMarkerState.h" },
				{ "None.Name", "ESBZMarkerState::None" },
				{ "PreEscort.Name", "ESBZMarkerState::PreEscort" },
				{ "Sabotage.Name", "ESBZMarkerState::Sabotage" },
				{ "Suspicious.Name", "ESBZMarkerState::Suspicious" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMarkerState",
				"ESBZMarkerState",
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
