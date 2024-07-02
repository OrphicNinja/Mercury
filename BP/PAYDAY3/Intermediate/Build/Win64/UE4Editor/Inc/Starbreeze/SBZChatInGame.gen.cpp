// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChatInGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChatInGame() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZChatInGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZChatInGame();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerChatEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCallEvent();
// End Cross Module References
	DEFINE_FUNCTION(ASBZChatInGame::execClientSubscribeToChatMessages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSubscribeToChatMessages_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatInGame::execMulticastCallMessageReceived)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_GET_PROPERTY(FByteProperty,Z_Param_CallIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastCallMessageReceived_Implementation(Z_Param_PlayerState,Z_Param_CallIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatInGame::execMulticastChatMessageReceived)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerId);
		P_GET_STRUCT(FSBZPlayerChatEvent,Z_Param_PlayerChatEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastChatMessageReceived_Implementation(Z_Param_PlayerId,Z_Param_PlayerChatEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatInGame::execSendCallMessageToServer)
	{
		P_GET_STRUCT_REF(FSBZPlayerCallEvent,Z_Param_Out_CallEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCallMessageToServer(Z_Param_Out_CallEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatInGame::execSendChatMessageToServer)
	{
		P_GET_STRUCT_REF(FSBZPlayerChatEvent,Z_Param_Out_ChatEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendChatMessageToServer(Z_Param_Out_ChatEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatInGame::execServerCallMessageReceived)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_GET_PROPERTY(FByteProperty,Z_Param_CallIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCallMessageReceived_Implementation(Z_Param_PlayerState,Z_Param_CallIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatInGame::execServerChatMessageReceived)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerId);
		P_GET_STRUCT(FSBZPlayerChatEvent,Z_Param_PlayerChatEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerChatMessageReceived_Implementation(Z_Param_PlayerId,Z_Param_PlayerChatEvent);
		P_NATIVE_END;
	}
	static FName NAME_ASBZChatInGame_ClientSubscribeToChatMessages = FName(TEXT("ClientSubscribeToChatMessages"));
	void ASBZChatInGame::ClientSubscribeToChatMessages()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatInGame_ClientSubscribeToChatMessages),NULL);
	}
	static FName NAME_ASBZChatInGame_MulticastCallMessageReceived = FName(TEXT("MulticastCallMessageReceived"));
	void ASBZChatInGame::MulticastCallMessageReceived(APlayerState* PlayerState, uint8 CallIndex)
	{
		SBZChatInGame_eventMulticastCallMessageReceived_Parms Parms;
		Parms.PlayerState=PlayerState;
		Parms.CallIndex=CallIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatInGame_MulticastCallMessageReceived),&Parms);
	}
	static FName NAME_ASBZChatInGame_MulticastChatMessageReceived = FName(TEXT("MulticastChatMessageReceived"));
	void ASBZChatInGame::MulticastChatMessageReceived(int32 PlayerId, FSBZPlayerChatEvent const& PlayerChatEvent)
	{
		SBZChatInGame_eventMulticastChatMessageReceived_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.PlayerChatEvent=PlayerChatEvent;
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatInGame_MulticastChatMessageReceived),&Parms);
	}
	static FName NAME_ASBZChatInGame_ServerCallMessageReceived = FName(TEXT("ServerCallMessageReceived"));
	void ASBZChatInGame::ServerCallMessageReceived(APlayerState* PlayerState, uint8 CallIndex)
	{
		SBZChatInGame_eventServerCallMessageReceived_Parms Parms;
		Parms.PlayerState=PlayerState;
		Parms.CallIndex=CallIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatInGame_ServerCallMessageReceived),&Parms);
	}
	static FName NAME_ASBZChatInGame_ServerChatMessageReceived = FName(TEXT("ServerChatMessageReceived"));
	void ASBZChatInGame::ServerChatMessageReceived(int32 PlayerId, FSBZPlayerChatEvent const& PlayerChatEvent)
	{
		SBZChatInGame_eventServerChatMessageReceived_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.PlayerChatEvent=PlayerChatEvent;
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatInGame_ServerChatMessageReceived),&Parms);
	}
	void ASBZChatInGame::StaticRegisterNativesASBZChatInGame()
	{
		UClass* Class = ASBZChatInGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientSubscribeToChatMessages", &ASBZChatInGame::execClientSubscribeToChatMessages },
			{ "MulticastCallMessageReceived", &ASBZChatInGame::execMulticastCallMessageReceived },
			{ "MulticastChatMessageReceived", &ASBZChatInGame::execMulticastChatMessageReceived },
			{ "SendCallMessageToServer", &ASBZChatInGame::execSendCallMessageToServer },
			{ "SendChatMessageToServer", &ASBZChatInGame::execSendChatMessageToServer },
			{ "ServerCallMessageReceived", &ASBZChatInGame::execServerCallMessageReceived },
			{ "ServerChatMessageReceived", &ASBZChatInGame::execServerChatMessageReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatInGame, nullptr, "ClientSubscribeToChatMessages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventMulticastCallMessageReceived_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::NewProp_CallIndex = { "CallIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventMulticastCallMessageReceived_Parms, CallIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::NewProp_CallIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatInGame, nullptr, "MulticastCallMessageReceived", nullptr, nullptr, sizeof(SBZChatInGame_eventMulticastCallMessageReceived_Parms), Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerChatEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerChatEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventMulticastChatMessageReceived_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::NewProp_PlayerChatEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::NewProp_PlayerChatEvent = { "PlayerChatEvent", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventMulticastChatMessageReceived_Parms, PlayerChatEvent), Z_Construct_UScriptStruct_FSBZPlayerChatEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::NewProp_PlayerChatEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::NewProp_PlayerChatEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::NewProp_PlayerChatEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatInGame, nullptr, "MulticastChatMessageReceived", nullptr, nullptr, sizeof(SBZChatInGame_eventMulticastChatMessageReceived_Parms), Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics
	{
		struct SBZChatInGame_eventSendCallMessageToServer_Parms
		{
			FSBZPlayerCallEvent CallEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CallEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::NewProp_CallEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::NewProp_CallEventData = { "CallEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventSendCallMessageToServer_Parms, CallEventData), Z_Construct_UScriptStruct_FSBZPlayerCallEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::NewProp_CallEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::NewProp_CallEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::NewProp_CallEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatInGame, nullptr, "SendCallMessageToServer", nullptr, nullptr, sizeof(SBZChatInGame_eventSendCallMessageToServer_Parms), Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics
	{
		struct SBZChatInGame_eventSendChatMessageToServer_Parms
		{
			FSBZPlayerChatEvent ChatEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventSendChatMessageToServer_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZPlayerChatEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatInGame, nullptr, "SendChatMessageToServer", nullptr, nullptr, sizeof(SBZChatInGame_eventSendChatMessageToServer_Parms), Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventServerCallMessageReceived_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::NewProp_CallIndex = { "CallIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventServerCallMessageReceived_Parms, CallIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::NewProp_CallIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatInGame, nullptr, "ServerCallMessageReceived", nullptr, nullptr, sizeof(SBZChatInGame_eventServerCallMessageReceived_Parms), Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerChatEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerChatEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventServerChatMessageReceived_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::NewProp_PlayerChatEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::NewProp_PlayerChatEvent = { "PlayerChatEvent", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatInGame_eventServerChatMessageReceived_Parms, PlayerChatEvent), Z_Construct_UScriptStruct_FSBZPlayerChatEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::NewProp_PlayerChatEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::NewProp_PlayerChatEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::NewProp_PlayerChatEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatInGame, nullptr, "ServerChatMessageReceived", nullptr, nullptr, sizeof(SBZChatInGame_eventServerChatMessageReceived_Parms), Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZChatInGame_NoRegister()
	{
		return ASBZChatInGame::StaticClass();
	}
	struct Z_Construct_UClass_ASBZChatInGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZChatInGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZChatInGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZChatInGame_ClientSubscribeToChatMessages, "ClientSubscribeToChatMessages" }, // 2255668842
		{ &Z_Construct_UFunction_ASBZChatInGame_MulticastCallMessageReceived, "MulticastCallMessageReceived" }, // 2271083811
		{ &Z_Construct_UFunction_ASBZChatInGame_MulticastChatMessageReceived, "MulticastChatMessageReceived" }, // 1616288544
		{ &Z_Construct_UFunction_ASBZChatInGame_SendCallMessageToServer, "SendCallMessageToServer" }, // 3345109391
		{ &Z_Construct_UFunction_ASBZChatInGame_SendChatMessageToServer, "SendChatMessageToServer" }, // 2347977752
		{ &Z_Construct_UFunction_ASBZChatInGame_ServerCallMessageReceived, "ServerCallMessageReceived" }, // 2467336498
		{ &Z_Construct_UFunction_ASBZChatInGame_ServerChatMessageReceived, "ServerChatMessageReceived" }, // 2865603309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZChatInGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZChatInGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChatInGame.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZChatInGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZChatInGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZChatInGame_Statics::ClassParams = {
		&ASBZChatInGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZChatInGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZChatInGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZChatInGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZChatInGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZChatInGame, 268188172);
	template<> STARBREEZE_API UClass* StaticClass<ASBZChatInGame>()
	{
		return ASBZChatInGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZChatInGame(Z_Construct_UClass_ASBZChatInGame, &ASBZChatInGame::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZChatInGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZChatInGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
