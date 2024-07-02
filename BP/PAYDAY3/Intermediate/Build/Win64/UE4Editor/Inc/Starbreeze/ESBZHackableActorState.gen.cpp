// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHackableActorState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHackableActorState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHackableActorState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHackableActorState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHackableActorState>()
	{
		return ESBZHackableActorState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHackableActorState(ESBZHackableActorState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHackableActorState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHackableActorState_Hash() { return 1605292523U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHackableActorState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHackableActorState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHackableActorState::Inactive", (int64)ESBZHackableActorState::Inactive },
				{ "ESBZHackableActorState::Active", (int64)ESBZHackableActorState::Active },
				{ "ESBZHackableActorState::Hacking", (int64)ESBZHackableActorState::Hacking },
				{ "ESBZHackableActorState::Sabotaged", (int64)ESBZHackableActorState::Sabotaged },
				{ "ESBZHackableActorState::NeedClearance", (int64)ESBZHackableActorState::NeedClearance },
				{ "ESBZHackableActorState::Unlocked", (int64)ESBZHackableActorState::Unlocked },
				{ "ESBZHackableActorState::GainedAccess", (int64)ESBZHackableActorState::GainedAccess },
				{ "ESBZHackableActorState::PendingSabotage", (int64)ESBZHackableActorState::PendingSabotage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "ESBZHackableActorState::Active" },
				{ "BlueprintType", "true" },
				{ "GainedAccess.Name", "ESBZHackableActorState::GainedAccess" },
				{ "Hacking.Name", "ESBZHackableActorState::Hacking" },
				{ "Inactive.Name", "ESBZHackableActorState::Inactive" },
				{ "ModuleRelativePath", "Public/ESBZHackableActorState.h" },
				{ "NeedClearance.Name", "ESBZHackableActorState::NeedClearance" },
				{ "PendingSabotage.Name", "ESBZHackableActorState::PendingSabotage" },
				{ "Sabotaged.Name", "ESBZHackableActorState::Sabotaged" },
				{ "Unlocked.Name", "ESBZHackableActorState::Unlocked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHackableActorState",
				"ESBZHackableActorState",
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
