// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineBeaconClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZKickingMode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZKickingError();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKickingInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChatMessage();
// End Cross Module References
	DEFINE_FUNCTION(ASBZOnlineBeaconClient::execHandleKicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->HandleKicked_Validate())
		{
			RPC_ValidateFailed(TEXT("HandleKicked_Validate"));
			return;
		}
		P_THIS->HandleKicked_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineBeaconClient::execInitiateKickRequest)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerIdToKick);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerProposingKick);
		P_GET_ENUM(ESBZKickingMode,Z_Param_ModeKick);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->InitiateKickRequest_Validate(Z_Param_PlayerIdToKick,Z_Param_PlayerProposingKick,ESBZKickingMode(Z_Param_ModeKick)))
		{
			RPC_ValidateFailed(TEXT("InitiateKickRequest_Validate"));
			return;
		}
		P_THIS->InitiateKickRequest_Implementation(Z_Param_PlayerIdToKick,Z_Param_PlayerProposingKick,ESBZKickingMode(Z_Param_ModeKick));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineBeaconClient::execKickFailed)
	{
		P_GET_ENUM(ESBZKickingError,Z_Param_KickingError);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->KickFailed_Validate(ESBZKickingError(Z_Param_KickingError)))
		{
			RPC_ValidateFailed(TEXT("KickFailed_Validate"));
			return;
		}
		P_THIS->KickFailed_Implementation(ESBZKickingError(Z_Param_KickingError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineBeaconClient::execKickingInProgress)
	{
		P_GET_STRUCT(FSBZKickingInfo,Z_Param_NewKickingInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->KickingInProgress_Validate(Z_Param_NewKickingInfo))
		{
			RPC_ValidateFailed(TEXT("KickingInProgress_Validate"));
			return;
		}
		P_THIS->KickingInProgress_Implementation(Z_Param_NewKickingInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineBeaconClient::execReceiveChatMessage)
	{
		P_GET_STRUCT(FSBZChatMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ReceiveChatMessage_Validate(Z_Param_Message))
		{
			RPC_ValidateFailed(TEXT("ReceiveChatMessage_Validate"));
			return;
		}
		P_THIS->ReceiveChatMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineBeaconClient::execSendChatMessage)
	{
		P_GET_STRUCT(FSBZChatMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SendChatMessage_Validate(Z_Param_Message))
		{
			RPC_ValidateFailed(TEXT("SendChatMessage_Validate"));
			return;
		}
		P_THIS->SendChatMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineBeaconClient::execVoteToKick)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerIdToKick);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerProposingKick);
		P_GET_ENUM(ESBZKickingMode,Z_Param_ModeKick);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->VoteToKick_Validate(Z_Param_PlayerIdToKick,Z_Param_PlayerProposingKick,ESBZKickingMode(Z_Param_ModeKick)))
		{
			RPC_ValidateFailed(TEXT("VoteToKick_Validate"));
			return;
		}
		P_THIS->VoteToKick_Implementation(Z_Param_PlayerIdToKick,Z_Param_PlayerProposingKick,ESBZKickingMode(Z_Param_ModeKick));
		P_NATIVE_END;
	}
	static FName NAME_ASBZOnlineBeaconClient_HandleKicked = FName(TEXT("HandleKicked"));
	void ASBZOnlineBeaconClient::HandleKicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZOnlineBeaconClient_HandleKicked),NULL);
	}
	static FName NAME_ASBZOnlineBeaconClient_InitiateKickRequest = FName(TEXT("InitiateKickRequest"));
	void ASBZOnlineBeaconClient::InitiateKickRequest(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick)
	{
		SBZOnlineBeaconClient_eventInitiateKickRequest_Parms Parms;
		Parms.PlayerIdToKick=PlayerIdToKick;
		Parms.PlayerProposingKick=PlayerProposingKick;
		Parms.ModeKick=ModeKick;
		ProcessEvent(FindFunctionChecked(NAME_ASBZOnlineBeaconClient_InitiateKickRequest),&Parms);
	}
	static FName NAME_ASBZOnlineBeaconClient_KickFailed = FName(TEXT("KickFailed"));
	void ASBZOnlineBeaconClient::KickFailed(ESBZKickingError KickingError)
	{
		SBZOnlineBeaconClient_eventKickFailed_Parms Parms;
		Parms.KickingError=KickingError;
		ProcessEvent(FindFunctionChecked(NAME_ASBZOnlineBeaconClient_KickFailed),&Parms);
	}
	static FName NAME_ASBZOnlineBeaconClient_KickingInProgress = FName(TEXT("KickingInProgress"));
	void ASBZOnlineBeaconClient::KickingInProgress(FSBZKickingInfo NewKickingInfo)
	{
		SBZOnlineBeaconClient_eventKickingInProgress_Parms Parms;
		Parms.NewKickingInfo=NewKickingInfo;
		ProcessEvent(FindFunctionChecked(NAME_ASBZOnlineBeaconClient_KickingInProgress),&Parms);
	}
	static FName NAME_ASBZOnlineBeaconClient_ReceiveChatMessage = FName(TEXT("ReceiveChatMessage"));
	void ASBZOnlineBeaconClient::ReceiveChatMessage(FSBZChatMessage const& Message)
	{
		SBZOnlineBeaconClient_eventReceiveChatMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASBZOnlineBeaconClient_ReceiveChatMessage),&Parms);
	}
	static FName NAME_ASBZOnlineBeaconClient_SendChatMessage = FName(TEXT("SendChatMessage"));
	void ASBZOnlineBeaconClient::SendChatMessage(FSBZChatMessage const& Message)
	{
		SBZOnlineBeaconClient_eventSendChatMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASBZOnlineBeaconClient_SendChatMessage),&Parms);
	}
	static FName NAME_ASBZOnlineBeaconClient_VoteToKick = FName(TEXT("VoteToKick"));
	void ASBZOnlineBeaconClient::VoteToKick(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick)
	{
		SBZOnlineBeaconClient_eventVoteToKick_Parms Parms;
		Parms.PlayerIdToKick=PlayerIdToKick;
		Parms.PlayerProposingKick=PlayerProposingKick;
		Parms.ModeKick=ModeKick;
		ProcessEvent(FindFunctionChecked(NAME_ASBZOnlineBeaconClient_VoteToKick),&Parms);
	}
	void ASBZOnlineBeaconClient::StaticRegisterNativesASBZOnlineBeaconClient()
	{
		UClass* Class = ASBZOnlineBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleKicked", &ASBZOnlineBeaconClient::execHandleKicked },
			{ "InitiateKickRequest", &ASBZOnlineBeaconClient::execInitiateKickRequest },
			{ "KickFailed", &ASBZOnlineBeaconClient::execKickFailed },
			{ "KickingInProgress", &ASBZOnlineBeaconClient::execKickingInProgress },
			{ "ReceiveChatMessage", &ASBZOnlineBeaconClient::execReceiveChatMessage },
			{ "SendChatMessage", &ASBZOnlineBeaconClient::execSendChatMessage },
			{ "VoteToKick", &ASBZOnlineBeaconClient::execVoteToKick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineBeaconClient, nullptr, "HandleKicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerIdToKick;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerProposingKick;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeKick_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeKick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_PlayerIdToKick = { "PlayerIdToKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventInitiateKickRequest_Parms, PlayerIdToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_PlayerProposingKick = { "PlayerProposingKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventInitiateKickRequest_Parms, PlayerProposingKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_ModeKick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_ModeKick = { "ModeKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventInitiateKickRequest_Parms, ModeKick), Z_Construct_UEnum_Starbreeze_ESBZKickingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_PlayerIdToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_PlayerProposingKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_ModeKick_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::NewProp_ModeKick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineBeaconClient, nullptr, "InitiateKickRequest", nullptr, nullptr, sizeof(SBZOnlineBeaconClient_eventInitiateKickRequest_Parms), Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KickingError_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KickingError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::NewProp_KickingError_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::NewProp_KickingError = { "KickingError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventKickFailed_Parms, KickingError), Z_Construct_UEnum_Starbreeze_ESBZKickingError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::NewProp_KickingError_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::NewProp_KickingError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineBeaconClient, nullptr, "KickFailed", nullptr, nullptr, sizeof(SBZOnlineBeaconClient_eventKickFailed_Parms), Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKickingInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::NewProp_NewKickingInfo = { "NewKickingInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventKickingInProgress_Parms, NewKickingInfo), Z_Construct_UScriptStruct_FSBZKickingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::NewProp_NewKickingInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineBeaconClient, nullptr, "KickingInProgress", nullptr, nullptr, sizeof(SBZOnlineBeaconClient_eventKickingInProgress_Parms), Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventReceiveChatMessage_Parms, Message), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineBeaconClient, nullptr, "ReceiveChatMessage", nullptr, nullptr, sizeof(SBZOnlineBeaconClient_eventReceiveChatMessage_Parms), Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventSendChatMessage_Parms, Message), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineBeaconClient, nullptr, "SendChatMessage", nullptr, nullptr, sizeof(SBZOnlineBeaconClient_eventSendChatMessage_Parms), Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerIdToKick;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerProposingKick;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeKick_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeKick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_PlayerIdToKick = { "PlayerIdToKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventVoteToKick_Parms, PlayerIdToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_PlayerProposingKick = { "PlayerProposingKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventVoteToKick_Parms, PlayerProposingKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_ModeKick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_ModeKick = { "ModeKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineBeaconClient_eventVoteToKick_Parms, ModeKick), Z_Construct_UEnum_Starbreeze_ESBZKickingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_PlayerIdToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_PlayerProposingKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_ModeKick_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::NewProp_ModeKick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineBeaconClient, nullptr, "VoteToKick", nullptr, nullptr, sizeof(SBZOnlineBeaconClient_eventVoteToKick_Parms), Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZOnlineBeaconClient_NoRegister()
	{
		return ASBZOnlineBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ASBZOnlineBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZOnlineBeaconClient_HandleKicked, "HandleKicked" }, // 837496480
		{ &Z_Construct_UFunction_ASBZOnlineBeaconClient_InitiateKickRequest, "InitiateKickRequest" }, // 1070626615
		{ &Z_Construct_UFunction_ASBZOnlineBeaconClient_KickFailed, "KickFailed" }, // 2467994627
		{ &Z_Construct_UFunction_ASBZOnlineBeaconClient_KickingInProgress, "KickingInProgress" }, // 3619184036
		{ &Z_Construct_UFunction_ASBZOnlineBeaconClient_ReceiveChatMessage, "ReceiveChatMessage" }, // 2431453817
		{ &Z_Construct_UFunction_ASBZOnlineBeaconClient_SendChatMessage, "SendChatMessage" }, // 2890417604
		{ &Z_Construct_UFunction_ASBZOnlineBeaconClient_VoteToKick, "VoteToKick" }, // 2047668897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineBeaconClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconClient.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZOnlineBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::ClassParams = {
		&ASBZOnlineBeaconClient::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZOnlineBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZOnlineBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZOnlineBeaconClient, 3929881947);
	template<> STARBREEZE_API UClass* StaticClass<ASBZOnlineBeaconClient>()
	{
		return ASBZOnlineBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZOnlineBeaconClient(Z_Construct_UClass_ASBZOnlineBeaconClient, &ASBZOnlineBeaconClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZOnlineBeaconClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZOnlineBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
