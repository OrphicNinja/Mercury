// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZClientStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZClientStateMachine() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachine();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCommonStateMachine();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLoginFieldInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionRequestData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayInfo();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToLoginReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZClientStateMachine::execApplyPreplanningAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPreplanningAsset(Z_Param_ItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execCanRequestSoloGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRequestSoloGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execGetCurrentStateNameString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentStateNameString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execGetSessionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZOnlineSessionPhase*)Z_Param__Result=P_THIS->GetSessionPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execHasStartedOutro)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStartedOutro();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execIsMatchmakingInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchmakingInProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execisPreMatchAsyncLoadingDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isPreMatchAsyncLoadingDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execOnPartyHostEnteredLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyHostEnteredLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execOnPartyHostEnteredMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyHostEnteredMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execOnPartyHostEnteredMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyHostEnteredMatchmaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execOnPopUpClosedIsNotPartyLeader)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpClosedIsNotPartyLeader(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execOnUserSwitchDuringInvite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserSwitchDuringInvite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRemoveAppliedPreplanningAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAppliedPreplanningAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestCreateAccount)
	{
		P_GET_STRUCT_REF(FSBZRegistrationFieldInfo,Z_Param_Out_RegistrationFieldInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestCreateAccount(Z_Param_Out_RegistrationFieldInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestDefaultMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestDefaultMatchmaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestDirectJoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestDirectJoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestEndIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEndIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestEndOutroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEndOutroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestGoToLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGoToLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestLogin)
	{
		P_GET_STRUCT_REF(FSBZLoginFieldInfo,Z_Param_Out_LoginFieldInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLogin(Z_Param_Out_LoginFieldInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestLoginWithDeviceID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLoginWithDeviceID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestMatchmaking)
	{
		P_GET_STRUCT_REF(FSBZOnlineMatchmakingParams,Z_Param_Out_MatchmakingParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestMatchmaking(Z_Param_Out_MatchmakingParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestMissionEnd)
	{
		P_GET_STRUCT_REF(FSBZEndMissionRequestData,Z_Param_Out_RequestData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestMissionEnd(Z_Param_Out_RequestData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestP2PHost)
	{
		P_GET_STRUCT_REF(FSBZOnlineMatchmakingParams,Z_Param_Out_MatchmakingParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestP2PHost(Z_Param_Out_MatchmakingParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestPlatformJoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPlatformJoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestReplay)
	{
		P_GET_STRUCT_REF(FSBZReplayInfo,Z_Param_Out_ReplayInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReplay(Z_Param_Out_ReplayInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRestart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestReturnToIIS)
	{
		P_GET_ENUM(ESBZReturnToIISReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReturnToIIS(ESBZReturnToIISReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestReturnToLogin)
	{
		P_GET_ENUM(ESBZReturnToLoginReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReturnToLogin(ESBZReturnToLoginReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestReturnToMainMenu)
	{
		P_GET_ENUM(ESBZReturnToMainMenuReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReturnToMainMenu(ESBZReturnToMainMenuReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestSoloGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LevelIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_DifficultyIdx);
		P_GET_UBOOL(Z_Param_bSkipPreMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSoloGame(Z_Param_LevelIdx,Z_Param_DifficultyIdx,Z_Param_bSkipPreMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestSteamLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSteamLogin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZClientStateMachine::execRequestTravelToServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestTravelToServer();
		P_NATIVE_END;
	}
	void USBZClientStateMachine::StaticRegisterNativesUSBZClientStateMachine()
	{
		UClass* Class = USBZClientStateMachine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyPreplanningAsset", &USBZClientStateMachine::execApplyPreplanningAsset },
			{ "CanRequestSoloGame", &USBZClientStateMachine::execCanRequestSoloGame },
			{ "GetCurrentStateNameString", &USBZClientStateMachine::execGetCurrentStateNameString },
			{ "GetSessionPhase", &USBZClientStateMachine::execGetSessionPhase },
			{ "HasStartedOutro", &USBZClientStateMachine::execHasStartedOutro },
			{ "IsMatchmakingInProgress", &USBZClientStateMachine::execIsMatchmakingInProgress },
			{ "isPreMatchAsyncLoadingDone", &USBZClientStateMachine::execisPreMatchAsyncLoadingDone },
			{ "OnPartyHostEnteredLobby", &USBZClientStateMachine::execOnPartyHostEnteredLobby },
			{ "OnPartyHostEnteredMainMenu", &USBZClientStateMachine::execOnPartyHostEnteredMainMenu },
			{ "OnPartyHostEnteredMatchmaking", &USBZClientStateMachine::execOnPartyHostEnteredMatchmaking },
			{ "OnPopUpClosedIsNotPartyLeader", &USBZClientStateMachine::execOnPopUpClosedIsNotPartyLeader },
			{ "OnUserSwitchDuringInvite", &USBZClientStateMachine::execOnUserSwitchDuringInvite },
			{ "RemoveAppliedPreplanningAsset", &USBZClientStateMachine::execRemoveAppliedPreplanningAsset },
			{ "RequestCreateAccount", &USBZClientStateMachine::execRequestCreateAccount },
			{ "RequestDefaultMatchmaking", &USBZClientStateMachine::execRequestDefaultMatchmaking },
			{ "RequestDirectJoin", &USBZClientStateMachine::execRequestDirectJoin },
			{ "RequestEndIntroSequence", &USBZClientStateMachine::execRequestEndIntroSequence },
			{ "RequestEndOutroSequence", &USBZClientStateMachine::execRequestEndOutroSequence },
			{ "RequestGameStart", &USBZClientStateMachine::execRequestGameStart },
			{ "RequestGoToLobby", &USBZClientStateMachine::execRequestGoToLobby },
			{ "RequestLogin", &USBZClientStateMachine::execRequestLogin },
			{ "RequestLoginWithDeviceID", &USBZClientStateMachine::execRequestLoginWithDeviceID },
			{ "RequestMatchmaking", &USBZClientStateMachine::execRequestMatchmaking },
			{ "RequestMissionEnd", &USBZClientStateMachine::execRequestMissionEnd },
			{ "RequestP2PHost", &USBZClientStateMachine::execRequestP2PHost },
			{ "RequestPlatformJoin", &USBZClientStateMachine::execRequestPlatformJoin },
			{ "RequestReplay", &USBZClientStateMachine::execRequestReplay },
			{ "RequestRestart", &USBZClientStateMachine::execRequestRestart },
			{ "RequestReturnToIIS", &USBZClientStateMachine::execRequestReturnToIIS },
			{ "RequestReturnToLogin", &USBZClientStateMachine::execRequestReturnToLogin },
			{ "RequestReturnToMainMenu", &USBZClientStateMachine::execRequestReturnToMainMenu },
			{ "RequestSoloGame", &USBZClientStateMachine::execRequestSoloGame },
			{ "RequestSteamLogin", &USBZClientStateMachine::execRequestSteamLogin },
			{ "RequestTravelToServer", &USBZClientStateMachine::execRequestTravelToServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics
	{
		struct SBZClientStateMachine_eventApplyPreplanningAsset_Parms
		{
			FString ItemSku;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::NewProp_ItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventApplyPreplanningAsset_Parms, ItemSku), METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::NewProp_ItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::NewProp_ItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "ApplyPreplanningAsset", nullptr, nullptr, sizeof(SBZClientStateMachine_eventApplyPreplanningAsset_Parms), Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics
	{
		struct SBZClientStateMachine_eventCanRequestSoloGame_Parms
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
	void Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZClientStateMachine_eventCanRequestSoloGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZClientStateMachine_eventCanRequestSoloGame_Parms), &Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "CanRequestSoloGame", nullptr, nullptr, sizeof(SBZClientStateMachine_eventCanRequestSoloGame_Parms), Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics
	{
		struct SBZClientStateMachine_eventGetCurrentStateNameString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventGetCurrentStateNameString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "GetCurrentStateNameString", nullptr, nullptr, sizeof(SBZClientStateMachine_eventGetCurrentStateNameString_Parms), Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics
	{
		struct SBZClientStateMachine_eventGetSessionPhase_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventGetSessionPhase_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "GetSessionPhase", nullptr, nullptr, sizeof(SBZClientStateMachine_eventGetSessionPhase_Parms), Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics
	{
		struct SBZClientStateMachine_eventHasStartedOutro_Parms
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
	void Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZClientStateMachine_eventHasStartedOutro_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZClientStateMachine_eventHasStartedOutro_Parms), &Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "HasStartedOutro", nullptr, nullptr, sizeof(SBZClientStateMachine_eventHasStartedOutro_Parms), Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics
	{
		struct SBZClientStateMachine_eventIsMatchmakingInProgress_Parms
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
	void Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZClientStateMachine_eventIsMatchmakingInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZClientStateMachine_eventIsMatchmakingInProgress_Parms), &Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "IsMatchmakingInProgress", nullptr, nullptr, sizeof(SBZClientStateMachine_eventIsMatchmakingInProgress_Parms), Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics
	{
		struct SBZClientStateMachine_eventisPreMatchAsyncLoadingDone_Parms
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
	void Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZClientStateMachine_eventisPreMatchAsyncLoadingDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZClientStateMachine_eventisPreMatchAsyncLoadingDone_Parms), &Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "isPreMatchAsyncLoadingDone", nullptr, nullptr, sizeof(SBZClientStateMachine_eventisPreMatchAsyncLoadingDone_Parms), Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "OnPartyHostEnteredLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "OnPartyHostEnteredMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "OnPartyHostEnteredMatchmaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics
	{
		struct SBZClientStateMachine_eventOnPopUpClosedIsNotPartyLeader_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventOnPopUpClosedIsNotPartyLeader_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "OnPopUpClosedIsNotPartyLeader", nullptr, nullptr, sizeof(SBZClientStateMachine_eventOnPopUpClosedIsNotPartyLeader_Parms), Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "OnUserSwitchDuringInvite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RemoveAppliedPreplanningAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics
	{
		struct SBZClientStateMachine_eventRequestCreateAccount_Parms
		{
			FSBZRegistrationFieldInfo RegistrationFieldInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistrationFieldInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegistrationFieldInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo = { "RegistrationFieldInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestCreateAccount_Parms, RegistrationFieldInfo), Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestCreateAccount", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestCreateAccount_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestDefaultMatchmaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestDirectJoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestEndIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestEndOutroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestGameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestGoToLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics
	{
		struct SBZClientStateMachine_eventRequestLogin_Parms
		{
			FSBZLoginFieldInfo LoginFieldInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginFieldInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoginFieldInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::NewProp_LoginFieldInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::NewProp_LoginFieldInfo = { "LoginFieldInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestLogin_Parms, LoginFieldInfo), Z_Construct_UScriptStruct_FSBZLoginFieldInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::NewProp_LoginFieldInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::NewProp_LoginFieldInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::NewProp_LoginFieldInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestLogin", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestLogin_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestLoginWithDeviceID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics
	{
		struct SBZClientStateMachine_eventRequestMatchmaking_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters = { "MatchmakingParameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestMatchmaking_Parms, MatchmakingParameters), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::NewProp_MatchmakingParameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestMatchmaking", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestMatchmaking_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics
	{
		struct SBZClientStateMachine_eventRequestMissionEnd_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::NewProp_RequestData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::NewProp_RequestData = { "RequestData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestMissionEnd_Parms, RequestData), Z_Construct_UScriptStruct_FSBZEndMissionRequestData, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::NewProp_RequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::NewProp_RequestData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::NewProp_RequestData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestMissionEnd", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestMissionEnd_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics
	{
		struct SBZClientStateMachine_eventRequestP2PHost_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters = { "MatchmakingParameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestP2PHost_Parms, MatchmakingParameters), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::NewProp_MatchmakingParameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestP2PHost", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestP2PHost_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestPlatformJoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics
	{
		struct SBZClientStateMachine_eventRequestReplay_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::NewProp_ReplayInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::NewProp_ReplayInfo = { "ReplayInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestReplay_Parms, ReplayInfo), Z_Construct_UScriptStruct_FSBZReplayInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::NewProp_ReplayInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::NewProp_ReplayInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::NewProp_ReplayInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestReplay", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestReplay_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestRestart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestRestart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestRestart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestRestart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics
	{
		struct SBZClientStateMachine_eventRequestReturnToIIS_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestReturnToIIS_Parms, Reason), Z_Construct_UEnum_Starbreeze_ESBZReturnToIISReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestReturnToIIS", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestReturnToIIS_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics
	{
		struct SBZClientStateMachine_eventRequestReturnToLogin_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestReturnToLogin_Parms, Reason), Z_Construct_UEnum_Starbreeze_ESBZReturnToLoginReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestReturnToLogin", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestReturnToLogin_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics
	{
		struct SBZClientStateMachine_eventRequestReturnToMainMenu_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestReturnToMainMenu_Parms, Reason), Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestReturnToMainMenu", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestReturnToMainMenu_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics
	{
		struct SBZClientStateMachine_eventRequestSoloGame_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestSoloGame_Parms, LevelIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_DifficultyIdx = { "DifficultyIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachine_eventRequestSoloGame_Parms, DifficultyIdx), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch_SetBit(void* Obj)
	{
		((SBZClientStateMachine_eventRequestSoloGame_Parms*)Obj)->bSkipPreMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch = { "bSkipPreMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZClientStateMachine_eventRequestSoloGame_Parms), &Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_DifficultyIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::NewProp_bSkipPreMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestSoloGame", nullptr, nullptr, sizeof(SBZClientStateMachine_eventRequestSoloGame_Parms), Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestSteamLogin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachine, nullptr, "RequestTravelToServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZClientStateMachine_NoRegister()
	{
		return USBZClientStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_USBZClientStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateEnums_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateEnums_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateEnums_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StateEnums;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZClientStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCommonStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZClientStateMachine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZClientStateMachine_ApplyPreplanningAsset, "ApplyPreplanningAsset" }, // 1809410898
		{ &Z_Construct_UFunction_USBZClientStateMachine_CanRequestSoloGame, "CanRequestSoloGame" }, // 3220888339
		{ &Z_Construct_UFunction_USBZClientStateMachine_GetCurrentStateNameString, "GetCurrentStateNameString" }, // 1888467169
		{ &Z_Construct_UFunction_USBZClientStateMachine_GetSessionPhase, "GetSessionPhase" }, // 3403107859
		{ &Z_Construct_UFunction_USBZClientStateMachine_HasStartedOutro, "HasStartedOutro" }, // 865858518
		{ &Z_Construct_UFunction_USBZClientStateMachine_IsMatchmakingInProgress, "IsMatchmakingInProgress" }, // 2560248890
		{ &Z_Construct_UFunction_USBZClientStateMachine_isPreMatchAsyncLoadingDone, "isPreMatchAsyncLoadingDone" }, // 2539969337
		{ &Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredLobby, "OnPartyHostEnteredLobby" }, // 250636884
		{ &Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMainMenu, "OnPartyHostEnteredMainMenu" }, // 2109008324
		{ &Z_Construct_UFunction_USBZClientStateMachine_OnPartyHostEnteredMatchmaking, "OnPartyHostEnteredMatchmaking" }, // 138407703
		{ &Z_Construct_UFunction_USBZClientStateMachine_OnPopUpClosedIsNotPartyLeader, "OnPopUpClosedIsNotPartyLeader" }, // 3289745726
		{ &Z_Construct_UFunction_USBZClientStateMachine_OnUserSwitchDuringInvite, "OnUserSwitchDuringInvite" }, // 1152059036
		{ &Z_Construct_UFunction_USBZClientStateMachine_RemoveAppliedPreplanningAsset, "RemoveAppliedPreplanningAsset" }, // 1546981902
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestCreateAccount, "RequestCreateAccount" }, // 3854863973
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestDefaultMatchmaking, "RequestDefaultMatchmaking" }, // 527739118
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestDirectJoin, "RequestDirectJoin" }, // 865806602
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestEndIntroSequence, "RequestEndIntroSequence" }, // 3551874183
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestEndOutroSequence, "RequestEndOutroSequence" }, // 1510338453
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestGameStart, "RequestGameStart" }, // 2163788593
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestGoToLobby, "RequestGoToLobby" }, // 3285662443
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestLogin, "RequestLogin" }, // 3667918699
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestLoginWithDeviceID, "RequestLoginWithDeviceID" }, // 1788610916
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestMatchmaking, "RequestMatchmaking" }, // 1046680431
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestMissionEnd, "RequestMissionEnd" }, // 1465314669
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestP2PHost, "RequestP2PHost" }, // 3987485109
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestPlatformJoin, "RequestPlatformJoin" }, // 2756253482
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestReplay, "RequestReplay" }, // 3256929291
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestRestart, "RequestRestart" }, // 1392558973
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToIIS, "RequestReturnToIIS" }, // 1767517752
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToLogin, "RequestReturnToLogin" }, // 2925797610
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestReturnToMainMenu, "RequestReturnToMainMenu" }, // 1365448756
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestSoloGame, "RequestSoloGame" }, // 2843111524
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestSteamLogin, "RequestSteamLogin" }, // 1979592952
		{ &Z_Construct_UFunction_USBZClientStateMachine_RequestTravelToServer, "RequestTravelToServer" }, // 3306522363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClientStateMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZClientStateMachine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums_ValueProp = { "StateEnums", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums_Key_KeyProp = { "StateEnums_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClientStateMachine" },
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums = { "StateEnums", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZClientStateMachine, StateEnums), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_LoadingScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClientStateMachine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZClientStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_LoadingScreen = { "LoadingScreen", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZClientStateMachine, LoadingScreen), Z_Construct_UClass_USBZLoadingScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_LoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_LoadingScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZClientStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_StateEnums,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClientStateMachine_Statics::NewProp_LoadingScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZClientStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZClientStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZClientStateMachine_Statics::ClassParams = {
		&USBZClientStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZClientStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZClientStateMachine_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZClientStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClientStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZClientStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZClientStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZClientStateMachine, 3893004169);
	template<> STARBREEZE_API UClass* StaticClass<USBZClientStateMachine>()
	{
		return USBZClientStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZClientStateMachine(Z_Construct_UClass_USBZClientStateMachine, &USBZClientStateMachine::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZClientStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZClientStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
