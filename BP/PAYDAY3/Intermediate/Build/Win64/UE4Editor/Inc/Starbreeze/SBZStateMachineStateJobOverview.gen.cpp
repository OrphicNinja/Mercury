// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateJobOverview.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateJobOverview() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateJobOverview_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateJobOverview();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execAutoReadyTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoReadyTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execClientDisconnected)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientDisconnected(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execDropInLobbyClient)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerIdm);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropInLobbyClient(Z_Param_Out_PlayerIdm,Z_Param_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execEnableReadyButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableReadyButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execEndIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execHandlePlayerStateAdded)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateAddedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateAdded(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execHandlePlayerStateRemoved)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateRemovedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateRemoved(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execIntroSequenceTimedOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntroSequenceTimedOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execMoveToActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToActionPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execNetworkDisconnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetworkDisconnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execOnAllPlayersReady)
	{
		P_GET_ENUM(EBlackScreenTransitionType,Z_Param_BlackScreenTransitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllPlayersReady(EBlackScreenTransitionType(Z_Param_BlackScreenTransitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execOnLocalPlayerStateReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocalPlayerStateReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execOnPlayerBeginPlayState)
	{
		P_GET_OBJECT(ASBZPlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerBeginPlayState(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execPlayerDisconnectedAtBeacon)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDisconnectedAtBeacon(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execPlayerReadyReceived)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerReadyReceived(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execPlayerStartTravel)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStartTravel(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execPlayerWaitForReady)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_WaitForReadyPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerWaitForReady(Z_Param_Out_WaitForReadyPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execRandomizedRoomLoadingComplete)
	{
		P_GET_OBJECT(ASBZLevelScriptActor,Z_Param_SubLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizedRoomLoadingComplete(Z_Param_SubLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execReadyPlayer)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadyPlayer(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execStartIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execUnregisterClient)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterClient(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverview::execWaitForRandomizedRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitForRandomizedRooms();
		P_NATIVE_END;
	}
	void USBZStateMachineStateJobOverview::StaticRegisterNativesUSBZStateMachineStateJobOverview()
	{
		UClass* Class = USBZStateMachineStateJobOverview::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoReadyTimeout", &USBZStateMachineStateJobOverview::execAutoReadyTimeout },
			{ "ClientDisconnected", &USBZStateMachineStateJobOverview::execClientDisconnected },
			{ "DropInLobbyClient", &USBZStateMachineStateJobOverview::execDropInLobbyClient },
			{ "EnableReadyButton", &USBZStateMachineStateJobOverview::execEnableReadyButton },
			{ "EndIntroSequence", &USBZStateMachineStateJobOverview::execEndIntroSequence },
			{ "HandlePlayerStateAdded", &USBZStateMachineStateJobOverview::execHandlePlayerStateAdded },
			{ "HandlePlayerStateRemoved", &USBZStateMachineStateJobOverview::execHandlePlayerStateRemoved },
			{ "IntroSequenceTimedOut", &USBZStateMachineStateJobOverview::execIntroSequenceTimedOut },
			{ "MoveToActionPhase", &USBZStateMachineStateJobOverview::execMoveToActionPhase },
			{ "NetworkDisconnected", &USBZStateMachineStateJobOverview::execNetworkDisconnected },
			{ "OnAllPlayersReady", &USBZStateMachineStateJobOverview::execOnAllPlayersReady },
			{ "OnLocalPlayerStateReady", &USBZStateMachineStateJobOverview::execOnLocalPlayerStateReady },
			{ "OnPlayerBeginPlayState", &USBZStateMachineStateJobOverview::execOnPlayerBeginPlayState },
			{ "PlayerDisconnectedAtBeacon", &USBZStateMachineStateJobOverview::execPlayerDisconnectedAtBeacon },
			{ "PlayerReadyReceived", &USBZStateMachineStateJobOverview::execPlayerReadyReceived },
			{ "PlayerStartTravel", &USBZStateMachineStateJobOverview::execPlayerStartTravel },
			{ "PlayerWaitForReady", &USBZStateMachineStateJobOverview::execPlayerWaitForReady },
			{ "RandomizedRoomLoadingComplete", &USBZStateMachineStateJobOverview::execRandomizedRoomLoadingComplete },
			{ "ReadyPlayer", &USBZStateMachineStateJobOverview::execReadyPlayer },
			{ "StartIntroSequence", &USBZStateMachineStateJobOverview::execStartIntroSequence },
			{ "UnregisterClient", &USBZStateMachineStateJobOverview::execUnregisterClient },
			{ "WaitForRandomizedRooms", &USBZStateMachineStateJobOverview::execWaitForRandomizedRooms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "AutoReadyTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics
	{
		struct SBZStateMachineStateJobOverview_eventClientDisconnected_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventClientDisconnected_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "ClientDisconnected", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventClientDisconnected_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics
	{
		struct SBZStateMachineStateJobOverview_eventDropInLobbyClient_Parms
		{
			FUniqueNetIdRepl PlayerIdm;
			FString DisplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIdm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerIdm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_PlayerIdm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_PlayerIdm = { "PlayerIdm", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventDropInLobbyClient_Parms, PlayerIdm), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_PlayerIdm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_PlayerIdm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventDropInLobbyClient_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_PlayerIdm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::NewProp_DisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "DropInLobbyClient", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventDropInLobbyClient_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "EnableReadyButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "EndIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics
	{
		struct SBZStateMachineStateJobOverview_eventHandlePlayerStateAdded_Parms
		{
			FSBZPlayerStateAddedEvent Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventHandlePlayerStateAdded_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "HandlePlayerStateAdded", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventHandlePlayerStateAdded_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics
	{
		struct SBZStateMachineStateJobOverview_eventHandlePlayerStateRemoved_Parms
		{
			FSBZPlayerStateRemovedEvent Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventHandlePlayerStateRemoved_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "HandlePlayerStateRemoved", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventHandlePlayerStateRemoved_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "IntroSequenceTimedOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "MoveToActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "NetworkDisconnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics
	{
		struct SBZStateMachineStateJobOverview_eventOnAllPlayersReady_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::NewProp_BlackScreenTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::NewProp_BlackScreenTransitionType = { "BlackScreenTransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventOnAllPlayersReady_Parms, BlackScreenTransitionType), Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::NewProp_BlackScreenTransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::NewProp_BlackScreenTransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "OnAllPlayersReady", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventOnAllPlayersReady_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "OnLocalPlayerStateReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics
	{
		struct SBZStateMachineStateJobOverview_eventOnPlayerBeginPlayState_Parms
		{
			ASBZPlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventOnPlayerBeginPlayState_Parms, PlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "OnPlayerBeginPlayState", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventOnPlayerBeginPlayState_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics
	{
		struct SBZStateMachineStateJobOverview_eventPlayerDisconnectedAtBeacon_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventPlayerDisconnectedAtBeacon_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "PlayerDisconnectedAtBeacon", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventPlayerDisconnectedAtBeacon_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics
	{
		struct SBZStateMachineStateJobOverview_eventPlayerReadyReceived_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventPlayerReadyReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "PlayerReadyReceived", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventPlayerReadyReceived_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics
	{
		struct SBZStateMachineStateJobOverview_eventPlayerStartTravel_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventPlayerStartTravel_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "PlayerStartTravel", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventPlayerStartTravel_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics
	{
		struct SBZStateMachineStateJobOverview_eventPlayerWaitForReady_Parms
		{
			FUniqueNetIdRepl WaitForReadyPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitForReadyPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaitForReadyPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId = { "WaitForReadyPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventPlayerWaitForReady_Parms, WaitForReadyPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "PlayerWaitForReady", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventPlayerWaitForReady_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics
	{
		struct SBZStateMachineStateJobOverview_eventRandomizedRoomLoadingComplete_Parms
		{
			ASBZLevelScriptActor* SubLevel;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::NewProp_SubLevel = { "SubLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventRandomizedRoomLoadingComplete_Parms, SubLevel), Z_Construct_UClass_ASBZLevelScriptActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::NewProp_SubLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "RandomizedRoomLoadingComplete", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventRandomizedRoomLoadingComplete_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics
	{
		struct SBZStateMachineStateJobOverview_eventReadyPlayer_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventReadyPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "ReadyPlayer", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventReadyPlayer_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "StartIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics
	{
		struct SBZStateMachineStateJobOverview_eventUnregisterClient_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverview_eventUnregisterClient_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "UnregisterClient", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverview_eventUnregisterClient_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverview, nullptr, "WaitForRandomizedRooms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateJobOverview_NoRegister()
	{
		return USBZStateMachineStateJobOverview::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobOverviewWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JobOverviewWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_AutoReadyTimeout, "AutoReadyTimeout" }, // 1552796489
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_ClientDisconnected, "ClientDisconnected" }, // 19919204
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_DropInLobbyClient, "DropInLobbyClient" }, // 659855943
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_EnableReadyButton, "EnableReadyButton" }, // 1681954553
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_EndIntroSequence, "EndIntroSequence" }, // 2234250367
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateAdded, "HandlePlayerStateAdded" }, // 197838014
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_HandlePlayerStateRemoved, "HandlePlayerStateRemoved" }, // 55311195
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_IntroSequenceTimedOut, "IntroSequenceTimedOut" }, // 3195178984
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_MoveToActionPhase, "MoveToActionPhase" }, // 4283566147
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_NetworkDisconnected, "NetworkDisconnected" }, // 388678042
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnAllPlayersReady, "OnAllPlayersReady" }, // 2887598690
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnLocalPlayerStateReady, "OnLocalPlayerStateReady" }, // 2727904212
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_OnPlayerBeginPlayState, "OnPlayerBeginPlayState" }, // 2522403168
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerDisconnectedAtBeacon, "PlayerDisconnectedAtBeacon" }, // 767568767
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerReadyReceived, "PlayerReadyReceived" }, // 1732227041
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerStartTravel, "PlayerStartTravel" }, // 258746802
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_PlayerWaitForReady, "PlayerWaitForReady" }, // 698137531
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_RandomizedRoomLoadingComplete, "RandomizedRoomLoadingComplete" }, // 577392472
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_ReadyPlayer, "ReadyPlayer" }, // 959868098
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_StartIntroSequence, "StartIntroSequence" }, // 3944585960
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_UnregisterClient, "UnregisterClient" }, // 641091824
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverview_WaitForRandomizedRooms, "WaitForRandomizedRooms" }, // 2828495107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateJobOverview.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::NewProp_JobOverviewWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateJobOverview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverview.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::NewProp_JobOverviewWidget = { "JobOverviewWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateJobOverview, JobOverviewWidget), Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::NewProp_JobOverviewWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::NewProp_JobOverviewWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::NewProp_JobOverviewWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateJobOverview>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::ClassParams = {
		&USBZStateMachineStateJobOverview::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateJobOverview()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateJobOverview, 1391360087);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateJobOverview>()
	{
		return USBZStateMachineStateJobOverview::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateJobOverview(Z_Construct_UClass_USBZStateMachineStateJobOverview, &USBZStateMachineStateJobOverview::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateJobOverview"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateJobOverview);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
