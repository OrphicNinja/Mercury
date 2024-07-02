// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZGameStateMachineState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZGameStateMachineState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZGameStateMachineState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZGameStateMachineState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZGameStateMachineState>()
	{
		return ESBZGameStateMachineState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZGameStateMachineState(ESBZGameStateMachineState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZGameStateMachineState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState_Hash() { return 2179433195U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZGameStateMachineState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SM_NotLoggedIn", (int64)SM_NotLoggedIn },
				{ "SM_SubsystemInitialisation", (int64)SM_SubsystemInitialisation },
				{ "SM_WaitFirstGameStart", (int64)SM_WaitFirstGameStart },
				{ "SM_WaitSoloGame", (int64)SM_WaitSoloGame },
				{ "SM_GameStart", (int64)SM_GameStart },
				{ "SM_Matchmaking", (int64)SM_Matchmaking },
				{ "SM_Lobby", (int64)SM_Lobby },
				{ "SM_P2PHost", (int64)SM_P2PHost },
				{ "SM_WaitingActionPhase", (int64)SM_WaitingActionPhase },
				{ "SM_WaitingActionPhaseHost", (int64)SM_WaitingActionPhaseHost },
				{ "SM_WaitingActionPhaseClient", (int64)SM_WaitingActionPhaseClient },
				{ "SM_WaitingActionPhaseDropIn", (int64)SM_WaitingActionPhaseDropIn },
				{ "SM_FunctionalTest", (int64)SM_FunctionalTest },
				{ "SM_JobOverview", (int64)SM_JobOverview },
				{ "SM_JobOverviewDropIn", (int64)SM_JobOverviewDropIn },
				{ "SM_JobOverviewDirectJoin", (int64)SM_JobOverviewDirectJoin },
				{ "SM_ActionPhase", (int64)SM_ActionPhase },
				{ "SM_HostMigration", (int64)SM_HostMigration },
				{ "SM_WaitMainMenu", (int64)SM_WaitMainMenu },
				{ "SM_WaitingResult", (int64)SM_WaitingResult },
				{ "SM_Result", (int64)SM_Result },
				{ "SM_GameError", (int64)SM_GameError },
				{ "SM_BackendError", (int64)SM_BackendError },
				{ "SM_WaitingReturnToIIS", (int64)SM_WaitingReturnToIIS },
				{ "SM_WaitingReplay", (int64)SM_WaitingReplay },
				{ "SM_Replay", (int64)SM_Replay },
				{ "SM_Outro", (int64)SM_Outro },
				{ "SM_WaitingRestartLevel", (int64)SM_WaitingRestartLevel },
				{ "SM_Undefined", (int64)SM_Undefined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZGameStateMachineState.h" },
				{ "SM_ActionPhase.Name", "SM_ActionPhase" },
				{ "SM_BackendError.Name", "SM_BackendError" },
				{ "SM_FunctionalTest.Name", "SM_FunctionalTest" },
				{ "SM_GameError.Name", "SM_GameError" },
				{ "SM_GameStart.Name", "SM_GameStart" },
				{ "SM_HostMigration.Name", "SM_HostMigration" },
				{ "SM_JobOverview.Name", "SM_JobOverview" },
				{ "SM_JobOverviewDirectJoin.Name", "SM_JobOverviewDirectJoin" },
				{ "SM_JobOverviewDropIn.Name", "SM_JobOverviewDropIn" },
				{ "SM_Lobby.Name", "SM_Lobby" },
				{ "SM_Matchmaking.Name", "SM_Matchmaking" },
				{ "SM_NotLoggedIn.Name", "SM_NotLoggedIn" },
				{ "SM_Outro.Name", "SM_Outro" },
				{ "SM_P2PHost.Name", "SM_P2PHost" },
				{ "SM_Replay.Name", "SM_Replay" },
				{ "SM_Result.Name", "SM_Result" },
				{ "SM_SubsystemInitialisation.Name", "SM_SubsystemInitialisation" },
				{ "SM_Undefined.Name", "SM_Undefined" },
				{ "SM_WaitFirstGameStart.Name", "SM_WaitFirstGameStart" },
				{ "SM_WaitingActionPhase.Name", "SM_WaitingActionPhase" },
				{ "SM_WaitingActionPhaseClient.Name", "SM_WaitingActionPhaseClient" },
				{ "SM_WaitingActionPhaseDropIn.Name", "SM_WaitingActionPhaseDropIn" },
				{ "SM_WaitingActionPhaseHost.Name", "SM_WaitingActionPhaseHost" },
				{ "SM_WaitingReplay.Name", "SM_WaitingReplay" },
				{ "SM_WaitingRestartLevel.Name", "SM_WaitingRestartLevel" },
				{ "SM_WaitingResult.Name", "SM_WaitingResult" },
				{ "SM_WaitingReturnToIIS.Name", "SM_WaitingReturnToIIS" },
				{ "SM_WaitMainMenu.Name", "SM_WaitMainMenu" },
				{ "SM_WaitSoloGame.Name", "SM_WaitSoloGame" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZGameStateMachineState",
				"ESBZGameStateMachineState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
