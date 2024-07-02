// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAIEscortState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAIEscortState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIEscortState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAIEscortState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAIEscortState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAIEscortState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIEscortState>()
	{
		return ESBZAIEscortState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAIEscortState(ESBZAIEscortState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAIEscortState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAIEscortState_Hash() { return 4266297678U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIEscortState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAIEscortState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAIEscortState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAIEscortState::None", (int64)ESBZAIEscortState::None },
				{ "ESBZAIEscortState::GoToEscortPoint", (int64)ESBZAIEscortState::GoToEscortPoint },
				{ "ESBZAIEscortState::Pickup", (int64)ESBZAIEscortState::Pickup },
				{ "ESBZAIEscortState::Start", (int64)ESBZAIEscortState::Start },
				{ "ESBZAIEscortState::Warn", (int64)ESBZAIEscortState::Warn },
				{ "ESBZAIEscortState::EscortEndWarning", (int64)ESBZAIEscortState::EscortEndWarning },
				{ "ESBZAIEscortState::MAX", (int64)ESBZAIEscortState::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EscortEndWarning.Name", "ESBZAIEscortState::EscortEndWarning" },
				{ "GoToEscortPoint.Name", "ESBZAIEscortState::GoToEscortPoint" },
				{ "MAX.Name", "ESBZAIEscortState::MAX" },
				{ "ModuleRelativePath", "Public/ESBZAIEscortState.h" },
				{ "None.Name", "ESBZAIEscortState::None" },
				{ "Pickup.Name", "ESBZAIEscortState::Pickup" },
				{ "Start.Name", "ESBZAIEscortState::Start" },
				{ "Warn.Name", "ESBZAIEscortState::Warn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAIEscortState",
				"ESBZAIEscortState",
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
