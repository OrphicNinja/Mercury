// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameStateMachine() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionRequestData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayInfo();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToLoginReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnStateMachineEnteredStateDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnStateMachineExitedStateDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnGameStateUIEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnJobOverviewUIEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerPressedReadyEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSetPlayerReadyTimeout__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerPressedRestartLevelEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnSendToServerPlayerToReadyDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCommonStateMachine_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameStateMachine::execAddMatchmakingSecurityCompany)
	{
		P_GET_ENUM(ESBZSecurityCompany,Z_Param_InSecurityCompany);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMatchmakingSecurityCompany(ESBZSecurityCompany(Z_Param_InSecurityCompany));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execCanRequestSoloGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRequestSoloGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execDebugOnlineTravel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelUrl);
		P_GET_UBOOL(Z_Param_bIsAbsolute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugOnlineTravel(Z_Param_LevelUrl,Z_Param_bIsAbsolute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetMatchmakingDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZDifficulty*)Z_Param__Result=P_THIS->GetMatchmakingDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetMatchmakingDifficultyIdx)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetMatchmakingDifficultyIdx();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetMatchmakingLevelIdx)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetMatchmakingLevelIdx();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetMatchMakingParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZOnlineMatchmakingParams*)Z_Param__Result=P_THIS->GetMatchMakingParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetMatchmakingRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMatchmakingRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetMatchmakingSecuritCompaniesForHeist)
	{
		P_GET_OBJECT(UPD3HeistDataAsset,Z_Param_InHeist);
		P_GET_ENUM(ESBZDifficulty,Z_Param_InDifficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESBZSecurityCompany>*)Z_Param__Result=P_THIS->GetMatchmakingSecuritCompaniesForHeist(Z_Param_InHeist,ESBZDifficulty(Z_Param_InDifficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetMatchmakingSecurityCompanies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESBZSecurityCompany>*)Z_Param__Result=P_THIS->GetMatchmakingSecurityCompanies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execGetSessionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZOnlineSessionPhase*)Z_Param__Result=P_THIS->GetSessionPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execHasStartedOutro)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStartedOutro();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execIsMatchmakingInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchmakingInProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execIsMatchmakingQuickMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchmakingQuickMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRemoveMatchmakingSecurityCompany)
	{
		P_GET_ENUM(ESBZSecurityCompany,Z_Param_InSecurityCompany);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMatchmakingSecurityCompany(ESBZSecurityCompany(Z_Param_InSecurityCompany));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestDefaultMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestDefaultMatchmaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestDirectJoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestDirectJoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestEndIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEndIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestEndOutroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEndOutroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestGameError)
	{
		P_GET_ENUM(ESBZGameMachineStateError,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGameError(ESBZGameMachineStateError(Z_Param_Error));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestGoToLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGoToLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestJobOverviewAllReady)
	{
		P_GET_ENUM(EBlackScreenTransitionType,Z_Param_BlackScreenTransitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestJobOverviewAllReady(EBlackScreenTransitionType(Z_Param_BlackScreenTransitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestJobOverviewComplete)
	{
		P_GET_UBOOL(Z_Param_bIsClientReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestJobOverviewComplete(Z_Param_bIsClientReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestJobOverviewReady)
	{
		P_GET_UBOOL(Z_Param_bSetClientReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestJobOverviewReady(Z_Param_bSetClientReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestMatchmaking)
	{
		P_GET_STRUCT_REF(FSBZOnlineMatchmakingParams,Z_Param_Out_MatchmakingParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestMatchmaking(Z_Param_Out_MatchmakingParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestMissionEnd)
	{
		P_GET_STRUCT_REF(FSBZEndMissionRequestData,Z_Param_Out_RequestData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestMissionEnd(Z_Param_Out_RequestData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestP2PHost)
	{
		P_GET_STRUCT_REF(FSBZOnlineMatchmakingParams,Z_Param_Out_MatchmakingParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestP2PHost(Z_Param_Out_MatchmakingParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestPlatformJoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPlatformJoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestReplay)
	{
		P_GET_STRUCT_REF(FSBZReplayInfo,Z_Param_Out_ReplayInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReplay(Z_Param_Out_ReplayInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRestart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestReturnToIIS)
	{
		P_GET_ENUM(ESBZReturnToIISReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReturnToIIS(ESBZReturnToIISReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestReturnToLogin)
	{
		P_GET_ENUM(ESBZReturnToLoginReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReturnToLogin(ESBZReturnToLoginReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestReturnToMainMenu)
	{
		P_GET_ENUM(ESBZReturnToMainMenuReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReturnToMainMenu(ESBZReturnToMainMenuReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execRequestSoloGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LevelIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_DifficultyIdx);
		P_GET_UBOOL(Z_Param_bSkipPreMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSoloGame(Z_Param_LevelIdx,Z_Param_DifficultyIdx,Z_Param_bSkipPreMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execSetIsMatchmakingQuickMatch)
	{
		P_GET_UBOOL(Z_Param_bInIsQuickMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsMatchmakingQuickMatch(Z_Param_bInIsQuickMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execSetMatchmakingDifficulty)
	{
		P_GET_ENUM(ESBZDifficulty,Z_Param_InDifficulty);
		P_GET_UBOOL(Z_Param_bIsSaved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchmakingDifficulty(ESBZDifficulty(Z_Param_InDifficulty),Z_Param_bIsSaved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execSetMatchmakingDifficultyIdx)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InDifficultyIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchmakingDifficultyIdx(Z_Param_InDifficultyIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execSetMatchmakingLevelIdx)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLevelIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchmakingLevelIdx(Z_Param_InLevelIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execSetMatchMakingParameters)
	{
		P_GET_STRUCT_REF(FSBZOnlineMatchmakingParams,Z_Param_Out_InMatchmakingParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchMakingParameters(Z_Param_Out_InMatchmakingParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execSetMatchmakingRandomSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InRandomSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchmakingRandomSeed(Z_Param_InRandomSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachine::execSetMatchmakingSecurityCompanies)
	{
		P_GET_TARRAY_REF(ESBZSecurityCompany,Z_Param_Out_InSecurityCompanies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchmakingSecurityCompanies(Z_Param_Out_InSecurityCompanies);
		P_NATIVE_END;
	}
	void USBZGameStateMachine::StaticRegisterNativesUSBZGameStateMachine()
	{
		UClass* Class = USBZGameStateMachine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMatchmakingSecurityCompany", &USBZGameStateMachine::execAddMatchmakingSecurityCompany },
			{ "CanRequestSoloGame", &USBZGameStateMachine::execCanRequestSoloGame },
			{ "DebugOnlineTravel", &USBZGameStateMachine::execDebugOnlineTravel },
			{ "GetMatchmakingDifficulty", &USBZGameStateMachine::execGetMatchmakingDifficulty },
			{ "GetMatchmakingDifficultyIdx", &USBZGameStateMachine::execGetMatchmakingDifficultyIdx },
			{ "GetMatchmakingLevelIdx", &USBZGameStateMachine::execGetMatchmakingLevelIdx },
			{ "GetMatchMakingParameters", &USBZGameStateMachine::execGetMatchMakingParameters },
			{ "GetMatchmakingRandomSeed", &USBZGameStateMachine::execGetMatchmakingRandomSeed },
			{ "GetMatchmakingSecuritCompaniesForHeist", &USBZGameStateMachine::execGetMatchmakingSecuritCompaniesForHeist },
			{ "GetMatchmakingSecurityCompanies", &USBZGameStateMachine::execGetMatchmakingSecurityCompanies },
			{ "GetSessionPhase", &USBZGameStateMachine::execGetSessionPhase },
			{ "HasStartedOutro", &USBZGameStateMachine::execHasStartedOutro },
			{ "IsMatchmakingInProgress", &USBZGameStateMachine::execIsMatchmakingInProgress },
			{ "IsMatchmakingQuickMatch", &USBZGameStateMachine::execIsMatchmakingQuickMatch },
			{ "RemoveMatchmakingSecurityCompany", &USBZGameStateMachine::execRemoveMatchmakingSecurityCompany },
			{ "RequestDefaultMatchmaking", &USBZGameStateMachine::execRequestDefaultMatchmaking },
			{ "RequestDirectJoin", &USBZGameStateMachine::execRequestDirectJoin },
			{ "RequestEndIntroSequence", &USBZGameStateMachine::execRequestEndIntroSequence },
			{ "RequestEndOutroSequence", &USBZGameStateMachine::execRequestEndOutroSequence },
			{ "RequestGameError", &USBZGameStateMachine::execRequestGameError },
			{ "RequestGameStart", &USBZGameStateMachine::execRequestGameStart },
			{ "RequestGoToLobby", &USBZGameStateMachine::execRequestGoToLobby },
			{ "RequestJobOverviewAllReady", &USBZGameStateMachine::execRequestJobOverviewAllReady },
			{ "RequestJobOverviewComplete", &USBZGameStateMachine::execRequestJobOverviewComplete },
			{ "RequestJobOverviewReady", &USBZGameStateMachine::execRequestJobOverviewReady },
			{ "RequestMatchmaking", &USBZGameStateMachine::execRequestMatchmaking },
			{ "RequestMissionEnd", &USBZGameStateMachine::execRequestMissionEnd },
			{ "RequestP2PHost", &USBZGameStateMachine::execRequestP2PHost },
			{ "RequestPlatformJoin", &USBZGameStateMachine::execRequestPlatformJoin },
			{ "RequestReplay", &USBZGameStateMachine::execRequestReplay },
			{ "RequestRestart", &USBZGameStateMachine::execRequestRestart },
			{ "RequestReturnToIIS", &USBZGameStateMachine::execRequestReturnToIIS },
			{ "RequestReturnToLogin", &USBZGameStateMachine::execRequestReturnToLogin },
			{ "RequestReturnToMainMenu", &USBZGameStateMachine::execRequestReturnToMainMenu },
			{ "RequestSoloGame", &USBZGameStateMachine::execRequestSoloGame },
			{ "SetIsMatchmakingQuickMatch", &USBZGameStateMachine::execSetIsMatchmakingQuickMatch },
			{ "SetMatchmakingDifficulty", &USBZGameStateMachine::execSetMatchmakingDifficulty },
			{ "SetMatchmakingDifficultyIdx", &USBZGameStateMachine::execSetMatchmakingDifficultyIdx },
			{ "SetMatchmakingLevelIdx", &USBZGameStateMachine::execSetMatchmakingLevelIdx },
			{ "SetMatchMakingParameters", &USBZGameStateMachine::execSetMatchMakingParameters },
			{ "SetMatchmakingRandomSeed", &USBZGameStateMachine::execSetMatchmakingRandomSeed },
			{ "SetMatchmakingSecurityCompanies", &USBZGameStateMachine::execSetMatchmakingSecurityCompanies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics
	{
		struct SBZGameStateMachine_eventAddMatchmakingSecurityCompany_Parms
		{
			ESBZSecurityCompany InSecurityCompany;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSecurityCompany_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSecurityCompany;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany = { "InSecurityCompany", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventAddMatchmakingSecurityCompany_Parms, InSecurityCompany), Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "AddMatchmakingSecurityCompany", nullptr, nullptr, sizeof(SBZGameStateMachine_eventAddMatchmakingSecurityCompany_Parms), Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics
	{
		struct SBZGameStateMachine_eventCanRequestSoloGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventCanRequestSoloGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventCanRequestSoloGame_Parms), &Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "CanRequestSoloGame", nullptr, nullptr, sizeof(SBZGameStateMachine_eventCanRequestSoloGame_Parms), Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics
	{
		struct SBZGameStateMachine_eventDebugOnlineTravel_Parms
		{
			FString LevelUrl;
			bool bIsAbsolute;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelUrl;
		static void NewProp_bIsAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAbsolute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_LevelUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_LevelUrl = { "LevelUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventDebugOnlineTravel_Parms, LevelUrl), METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_LevelUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_LevelUrl_MetaData)) };
	void Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_bIsAbsolute_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventDebugOnlineTravel_Parms*)Obj)->bIsAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_bIsAbsolute = { "bIsAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventDebugOnlineTravel_Parms), &Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_bIsAbsolute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_LevelUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::NewProp_bIsAbsolute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "DebugOnlineTravel", nullptr, nullptr, sizeof(SBZGameStateMachine_eventDebugOnlineTravel_Parms), Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics
	{
		struct SBZGameStateMachine_eventGetMatchmakingDifficulty_Parms
		{
			ESBZDifficulty ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingDifficulty_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetMatchmakingDifficulty", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetMatchmakingDifficulty_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics
	{
		struct SBZGameStateMachine_eventGetMatchmakingDifficultyIdx_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingDifficultyIdx_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetMatchmakingDifficultyIdx", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetMatchmakingDifficultyIdx_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics
	{
		struct SBZGameStateMachine_eventGetMatchmakingLevelIdx_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingLevelIdx_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetMatchmakingLevelIdx", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetMatchmakingLevelIdx_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics
	{
		struct SBZGameStateMachine_eventGetMatchMakingParameters_Parms
		{
			FSBZOnlineMatchmakingParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchMakingParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetMatchMakingParameters", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetMatchMakingParameters_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics
	{
		struct SBZGameStateMachine_eventGetMatchmakingRandomSeed_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingRandomSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetMatchmakingRandomSeed", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetMatchmakingRandomSeed_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics
	{
		struct SBZGameStateMachine_eventGetMatchmakingSecuritCompaniesForHeist_Parms
		{
			UPD3HeistDataAsset* InHeist;
			ESBZDifficulty InDifficulty;
			TArray<ESBZSecurityCompany> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InHeist;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDifficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_InHeist = { "InHeist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingSecuritCompaniesForHeist_Parms, InHeist), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_InDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_InDifficulty = { "InDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingSecuritCompaniesForHeist_Parms, InDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingSecuritCompaniesForHeist_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_InHeist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_InDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_InDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetMatchmakingSecuritCompaniesForHeist", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetMatchmakingSecuritCompaniesForHeist_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics
	{
		struct SBZGameStateMachine_eventGetMatchmakingSecurityCompanies_Parms
		{
			TArray<ESBZSecurityCompany> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetMatchmakingSecurityCompanies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetMatchmakingSecurityCompanies", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetMatchmakingSecurityCompanies_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics
	{
		struct SBZGameStateMachine_eventGetSessionPhase_Parms
		{
			ESBZOnlineSessionPhase ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventGetSessionPhase_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "GetSessionPhase", nullptr, nullptr, sizeof(SBZGameStateMachine_eventGetSessionPhase_Parms), Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics
	{
		struct SBZGameStateMachine_eventHasStartedOutro_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventHasStartedOutro_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventHasStartedOutro_Parms), &Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "HasStartedOutro", nullptr, nullptr, sizeof(SBZGameStateMachine_eventHasStartedOutro_Parms), Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics
	{
		struct SBZGameStateMachine_eventIsMatchmakingInProgress_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventIsMatchmakingInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventIsMatchmakingInProgress_Parms), &Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "IsMatchmakingInProgress", nullptr, nullptr, sizeof(SBZGameStateMachine_eventIsMatchmakingInProgress_Parms), Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics
	{
		struct SBZGameStateMachine_eventIsMatchmakingQuickMatch_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventIsMatchmakingQuickMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventIsMatchmakingQuickMatch_Parms), &Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "IsMatchmakingQuickMatch", nullptr, nullptr, sizeof(SBZGameStateMachine_eventIsMatchmakingQuickMatch_Parms), Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics
	{
		struct SBZGameStateMachine_eventRemoveMatchmakingSecurityCompany_Parms
		{
			ESBZSecurityCompany InSecurityCompany;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSecurityCompany_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSecurityCompany;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany = { "InSecurityCompany", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRemoveMatchmakingSecurityCompany_Parms, InSecurityCompany), Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::NewProp_InSecurityCompany,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RemoveMatchmakingSecurityCompany", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRemoveMatchmakingSecurityCompany_Parms), Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestDefaultMatchmaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestDirectJoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestEndIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestEndOutroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics
	{
		struct SBZGameStateMachine_eventRequestGameError_Parms
		{
			ESBZGameMachineStateError Error;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestGameError_Parms, Error), Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestGameError", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestGameError_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestGameError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestGameError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestGameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestGoToLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics
	{
		struct SBZGameStateMachine_eventRequestJobOverviewAllReady_Parms
		{
			EBlackScreenTransitionType BlackScreenTransitionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlackScreenTransitionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlackScreenTransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::NewProp_BlackScreenTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::NewProp_BlackScreenTransitionType = { "BlackScreenTransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestJobOverviewAllReady_Parms, BlackScreenTransitionType), Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::NewProp_BlackScreenTransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::NewProp_BlackScreenTransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestJobOverviewAllReady", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestJobOverviewAllReady_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics
	{
		struct SBZGameStateMachine_eventRequestJobOverviewComplete_Parms
		{
			bool bIsClientReady;
		};
		static void NewProp_bIsClientReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClientReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::NewProp_bIsClientReady_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventRequestJobOverviewComplete_Parms*)Obj)->bIsClientReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::NewProp_bIsClientReady = { "bIsClientReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventRequestJobOverviewComplete_Parms), &Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::NewProp_bIsClientReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::NewProp_bIsClientReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestJobOverviewComplete", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestJobOverviewComplete_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics
	{
		struct SBZGameStateMachine_eventRequestJobOverviewReady_Parms
		{
			bool bSetClientReady;
		};
		static void NewProp_bSetClientReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetClientReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::NewProp_bSetClientReady_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventRequestJobOverviewReady_Parms*)Obj)->bSetClientReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::NewProp_bSetClientReady = { "bSetClientReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventRequestJobOverviewReady_Parms), &Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::NewProp_bSetClientReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::NewProp_bSetClientReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestJobOverviewReady", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestJobOverviewReady_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics
	{
		struct SBZGameStateMachine_eventRequestMatchmaking_Parms
		{
			FSBZOnlineMatchmakingParams MatchmakingParameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchmakingParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters = { "MatchmakingParameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestMatchmaking_Parms, MatchmakingParameters), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestMatchmaking", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestMatchmaking_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics
	{
		struct SBZGameStateMachine_eventRequestMissionEnd_Parms
		{
			FSBZEndMissionRequestData RequestData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::NewProp_RequestData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::NewProp_RequestData = { "RequestData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestMissionEnd_Parms, RequestData), Z_Construct_UScriptStruct_FSBZEndMissionRequestData, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::NewProp_RequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::NewProp_RequestData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::NewProp_RequestData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestMissionEnd", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestMissionEnd_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics
	{
		struct SBZGameStateMachine_eventRequestP2PHost_Parms
		{
			FSBZOnlineMatchmakingParams MatchmakingParameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchmakingParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters = { "MatchmakingParameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestP2PHost_Parms, MatchmakingParameters), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestP2PHost", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestP2PHost_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestPlatformJoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics
	{
		struct SBZGameStateMachine_eventRequestReplay_Parms
		{
			FSBZReplayInfo ReplayInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplayInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::NewProp_ReplayInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::NewProp_ReplayInfo = { "ReplayInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestReplay_Parms, ReplayInfo), Z_Construct_UScriptStruct_FSBZReplayInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::NewProp_ReplayInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::NewProp_ReplayInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::NewProp_ReplayInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestReplay", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestReplay_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestRestart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestRestart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestRestart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestRestart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics
	{
		struct SBZGameStateMachine_eventRequestReturnToIIS_Parms
		{
			ESBZReturnToIISReason Reason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestReturnToIIS_Parms, Reason), Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestReturnToIIS", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestReturnToIIS_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics
	{
		struct SBZGameStateMachine_eventRequestReturnToLogin_Parms
		{
			ESBZReturnToLoginReason Reason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestReturnToLogin_Parms, Reason), Z_Construct_UEnum_Starbreeze_ESBZReturnToLoginReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestReturnToLogin", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestReturnToLogin_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics
	{
		struct SBZGameStateMachine_eventRequestReturnToMainMenu_Parms
		{
			ESBZReturnToMainMenuReason Reason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestReturnToMainMenu_Parms, Reason), Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestReturnToMainMenu", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestReturnToMainMenu_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics
	{
		struct SBZGameStateMachine_eventRequestSoloGame_Parms
		{
			int32 LevelIdx;
			int32 DifficultyIdx;
			bool bSkipPreMatch;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DifficultyIdx;
		static void NewProp_bSkipPreMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipPreMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestSoloGame_Parms, LevelIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_DifficultyIdx = { "DifficultyIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventRequestSoloGame_Parms, DifficultyIdx), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventRequestSoloGame_Parms*)Obj)->bSkipPreMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch = { "bSkipPreMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventRequestSoloGame_Parms), &Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_DifficultyIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "RequestSoloGame", nullptr, nullptr, sizeof(SBZGameStateMachine_eventRequestSoloGame_Parms), Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics
	{
		struct SBZGameStateMachine_eventSetIsMatchmakingQuickMatch_Parms
		{
			bool bInIsQuickMatch;
		};
		static void NewProp_bInIsQuickMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsQuickMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::NewProp_bInIsQuickMatch_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventSetIsMatchmakingQuickMatch_Parms*)Obj)->bInIsQuickMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::NewProp_bInIsQuickMatch = { "bInIsQuickMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventSetIsMatchmakingQuickMatch_Parms), &Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::NewProp_bInIsQuickMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::NewProp_bInIsQuickMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "SetIsMatchmakingQuickMatch", nullptr, nullptr, sizeof(SBZGameStateMachine_eventSetIsMatchmakingQuickMatch_Parms), Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics
	{
		struct SBZGameStateMachine_eventSetMatchmakingDifficulty_Parms
		{
			ESBZDifficulty InDifficulty;
			bool bIsSaved;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDifficulty;
		static void NewProp_bIsSaved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSaved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty = { "InDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventSetMatchmakingDifficulty_Parms, InDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_bIsSaved_SetBit(void* Obj)
	{
		((SBZGameStateMachine_eventSetMatchmakingDifficulty_Parms*)Obj)->bIsSaved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_bIsSaved = { "bIsSaved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachine_eventSetMatchmakingDifficulty_Parms), &Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_bIsSaved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::NewProp_bIsSaved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "SetMatchmakingDifficulty", nullptr, nullptr, sizeof(SBZGameStateMachine_eventSetMatchmakingDifficulty_Parms), Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics
	{
		struct SBZGameStateMachine_eventSetMatchmakingDifficultyIdx_Parms
		{
			uint8 InDifficultyIdx;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficultyIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::NewProp_InDifficultyIdx = { "InDifficultyIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventSetMatchmakingDifficultyIdx_Parms, InDifficultyIdx), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::NewProp_InDifficultyIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "SetMatchmakingDifficultyIdx", nullptr, nullptr, sizeof(SBZGameStateMachine_eventSetMatchmakingDifficultyIdx_Parms), Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics
	{
		struct SBZGameStateMachine_eventSetMatchmakingLevelIdx_Parms
		{
			int32 InLevelIdx;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLevelIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::NewProp_InLevelIdx = { "InLevelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventSetMatchmakingLevelIdx_Parms, InLevelIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::NewProp_InLevelIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "SetMatchmakingLevelIdx", nullptr, nullptr, sizeof(SBZGameStateMachine_eventSetMatchmakingLevelIdx_Parms), Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics
	{
		struct SBZGameStateMachine_eventSetMatchMakingParameters_Parms
		{
			FSBZOnlineMatchmakingParams InMatchmakingParameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMatchmakingParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMatchmakingParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::NewProp_InMatchmakingParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::NewProp_InMatchmakingParameters = { "InMatchmakingParameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventSetMatchMakingParameters_Parms, InMatchmakingParameters), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::NewProp_InMatchmakingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::NewProp_InMatchmakingParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::NewProp_InMatchmakingParameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "SetMatchMakingParameters", nullptr, nullptr, sizeof(SBZGameStateMachine_eventSetMatchMakingParameters_Parms), Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics
	{
		struct SBZGameStateMachine_eventSetMatchmakingRandomSeed_Parms
		{
			int32 InRandomSeed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InRandomSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::NewProp_InRandomSeed = { "InRandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventSetMatchmakingRandomSeed_Parms, InRandomSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::NewProp_InRandomSeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "SetMatchmakingRandomSeed", nullptr, nullptr, sizeof(SBZGameStateMachine_eventSetMatchmakingRandomSeed_Parms), Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics
	{
		struct SBZGameStateMachine_eventSetMatchmakingSecurityCompanies_Parms
		{
			TArray<ESBZSecurityCompany> InSecurityCompanies;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSecurityCompanies_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSecurityCompanies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSecurityCompanies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InSecurityCompanies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies_Inner = { "InSecurityCompanies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies = { "InSecurityCompanies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachine_eventSetMatchmakingSecurityCompanies_Parms, InSecurityCompanies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::NewProp_InSecurityCompanies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachine, nullptr, "SetMatchmakingSecurityCompanies", nullptr, nullptr, sizeof(SBZGameStateMachine_eventSetMatchmakingSecurityCompanies_Parms), Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameStateMachine_NoRegister()
	{
		return USBZGameStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineEnteredGameStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineEnteredGameStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineEnteredMatchmaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineEnteredMatchmaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineExitedMatchmaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineExitedMatchmaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineEnteredLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineEnteredLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineExitedLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineExitedLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJobOverviewReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJobOverviewReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJobOverviewComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJobOverviewComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerPressedReadyRecieved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerPressedReadyRecieved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerReadyRecieved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerReadyRecieved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetPlayerReadyTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetPlayerReadyTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerReadyStatusUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerReadyStatusUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerPressedRestartLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerPressedRestartLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSendToServerPlayerToReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendToServerPlayerToReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecurityCompaniesChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecurityCompaniesChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameStateMachine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameStateMachine_AddMatchmakingSecurityCompany, "AddMatchmakingSecurityCompany" }, // 4103893984
		{ &Z_Construct_UFunction_USBZGameStateMachine_CanRequestSoloGame, "CanRequestSoloGame" }, // 2710047938
		{ &Z_Construct_UFunction_USBZGameStateMachine_DebugOnlineTravel, "DebugOnlineTravel" }, // 1666201133
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficulty, "GetMatchmakingDifficulty" }, // 1047320460
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingDifficultyIdx, "GetMatchmakingDifficultyIdx" }, // 2027457236
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingLevelIdx, "GetMatchmakingLevelIdx" }, // 3505363535
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetMatchMakingParameters, "GetMatchMakingParameters" }, // 270907101
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingRandomSeed, "GetMatchmakingRandomSeed" }, // 2240768380
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecuritCompaniesForHeist, "GetMatchmakingSecuritCompaniesForHeist" }, // 4263302749
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetMatchmakingSecurityCompanies, "GetMatchmakingSecurityCompanies" }, // 2923980013
		{ &Z_Construct_UFunction_USBZGameStateMachine_GetSessionPhase, "GetSessionPhase" }, // 2896324470
		{ &Z_Construct_UFunction_USBZGameStateMachine_HasStartedOutro, "HasStartedOutro" }, // 2696513424
		{ &Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingInProgress, "IsMatchmakingInProgress" }, // 1898099146
		{ &Z_Construct_UFunction_USBZGameStateMachine_IsMatchmakingQuickMatch, "IsMatchmakingQuickMatch" }, // 422436773
		{ &Z_Construct_UFunction_USBZGameStateMachine_RemoveMatchmakingSecurityCompany, "RemoveMatchmakingSecurityCompany" }, // 631352142
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestDefaultMatchmaking, "RequestDefaultMatchmaking" }, // 1100768209
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestDirectJoin, "RequestDirectJoin" }, // 808697509
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestEndIntroSequence, "RequestEndIntroSequence" }, // 621967299
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestEndOutroSequence, "RequestEndOutroSequence" }, // 1717893332
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestGameError, "RequestGameError" }, // 2948001299
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestGameStart, "RequestGameStart" }, // 1328348159
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestGoToLobby, "RequestGoToLobby" }, // 2498962080
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewAllReady, "RequestJobOverviewAllReady" }, // 110501832
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewComplete, "RequestJobOverviewComplete" }, // 3649738103
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestJobOverviewReady, "RequestJobOverviewReady" }, // 1060794152
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestMatchmaking, "RequestMatchmaking" }, // 1236471909
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestMissionEnd, "RequestMissionEnd" }, // 2780803321
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestP2PHost, "RequestP2PHost" }, // 1560864494
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestPlatformJoin, "RequestPlatformJoin" }, // 3362522918
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestReplay, "RequestReplay" }, // 2938318769
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestRestart, "RequestRestart" }, // 2827296958
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToIIS, "RequestReturnToIIS" }, // 2816240471
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToLogin, "RequestReturnToLogin" }, // 3699146046
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestReturnToMainMenu, "RequestReturnToMainMenu" }, // 4091344275
		{ &Z_Construct_UFunction_USBZGameStateMachine_RequestSoloGame, "RequestSoloGame" }, // 3192486033
		{ &Z_Construct_UFunction_USBZGameStateMachine_SetIsMatchmakingQuickMatch, "SetIsMatchmakingQuickMatch" }, // 1047396248
		{ &Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficulty, "SetMatchmakingDifficulty" }, // 127401297
		{ &Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingDifficultyIdx, "SetMatchmakingDifficultyIdx" }, // 406025395
		{ &Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingLevelIdx, "SetMatchmakingLevelIdx" }, // 2440824788
		{ &Z_Construct_UFunction_USBZGameStateMachine_SetMatchMakingParameters, "SetMatchMakingParameters" }, // 879412019
		{ &Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingRandomSeed, "SetMatchmakingRandomSeed" }, // 1541122980
		{ &Z_Construct_UFunction_USBZGameStateMachine_SetMatchmakingSecurityCompanies, "SetMatchmakingSecurityCompanies" }, // 2745985091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameStateMachine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredGameStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredGameStart = { "OnStateMachineEnteredGameStart", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnStateMachineEnteredGameStart), Z_Construct_UDelegateFunction_Starbreeze_OnStateMachineEnteredStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredGameStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredGameStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredMatchmaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredMatchmaking = { "OnStateMachineEnteredMatchmaking", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnStateMachineEnteredMatchmaking), Z_Construct_UDelegateFunction_Starbreeze_OnStateMachineEnteredStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredMatchmaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredMatchmaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedMatchmaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedMatchmaking = { "OnStateMachineExitedMatchmaking", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnStateMachineExitedMatchmaking), Z_Construct_UDelegateFunction_Starbreeze_OnStateMachineExitedStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedMatchmaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedMatchmaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredLobby = { "OnStateMachineEnteredLobby", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnStateMachineEnteredLobby), Z_Construct_UDelegateFunction_Starbreeze_OnStateMachineEnteredStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedLobby = { "OnStateMachineExitedLobby", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnStateMachineExitedLobby), Z_Construct_UDelegateFunction_Starbreeze_OnStateMachineExitedStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewReady = { "OnJobOverviewReady", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnJobOverviewReady), Z_Construct_UDelegateFunction_Starbreeze_OnGameStateUIEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewComplete = { "OnJobOverviewComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnJobOverviewComplete), Z_Construct_UDelegateFunction_Starbreeze_OnJobOverviewUIEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedReadyRecieved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedReadyRecieved = { "OnPlayerPressedReadyRecieved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnPlayerPressedReadyRecieved), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerPressedReadyEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedReadyRecieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedReadyRecieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyRecieved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyRecieved = { "OnPlayerReadyRecieved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnPlayerReadyRecieved), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyRecieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyRecieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSetPlayerReadyTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSetPlayerReadyTimeout = { "OnSetPlayerReadyTimeout", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnSetPlayerReadyTimeout), Z_Construct_UDelegateFunction_Starbreeze_SBZSetPlayerReadyTimeout__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSetPlayerReadyTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSetPlayerReadyTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyStatusUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyStatusUpdate = { "OnPlayerReadyStatusUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnPlayerReadyStatusUpdate), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyStatusUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyStatusUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedRestartLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedRestartLevel = { "OnPlayerPressedRestartLevel", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnPlayerPressedRestartLevel), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerPressedRestartLevelEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedRestartLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedRestartLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSendToServerPlayerToReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSendToServerPlayerToReady = { "OnSendToServerPlayerToReady", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnSendToServerPlayerToReady), Z_Construct_UDelegateFunction_Starbreeze_OnSendToServerPlayerToReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSendToServerPlayerToReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSendToServerPlayerToReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSecurityCompaniesChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSecurityCompaniesChanged = { "OnSecurityCompaniesChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, OnSecurityCompaniesChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSecurityCompaniesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSecurityCompaniesChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_StateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachine" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachine, StateMachine), Z_Construct_UClass_USBZCommonStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_StateMachine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredGameStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredMatchmaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedMatchmaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineEnteredLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnStateMachineExitedLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnJobOverviewComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedReadyRecieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyRecieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSetPlayerReadyTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerReadyStatusUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnPlayerPressedRestartLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSendToServerPlayerToReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_OnSecurityCompaniesChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachine_Statics::NewProp_StateMachine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameStateMachine_Statics::ClassParams = {
		&USBZGameStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameStateMachine, 448932367);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameStateMachine>()
	{
		return USBZGameStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameStateMachine(Z_Construct_UClass_USBZGameStateMachine, &USBZGameStateMachine::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
