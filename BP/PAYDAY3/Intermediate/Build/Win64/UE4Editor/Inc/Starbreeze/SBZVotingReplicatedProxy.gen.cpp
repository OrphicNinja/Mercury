// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVotingReplicatedProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVotingReplicatedProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZVotingReplicatedProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZVotingReplicatedProxy();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVotingAnswer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVotingType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastClearCurrentVote)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastClearCurrentVote_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastExecuteAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastExecuteAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastReceiveChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReceiveChatMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastReceiveClientDisconnected)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReceiveClientDisconnected_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastReceiveLocalizedChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FormatTableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FormatLocaleKey);
		P_GET_TARRAY(FString,Z_Param_ExportedArgsNames);
		P_GET_TARRAY(FString,Z_Param_ExportedArgsStrings);
		P_GET_TARRAY(FString,Z_Param_ArgsToLocalizeNames);
		P_GET_TARRAY(FString,Z_Param_ArgsToLocalizeTableIds);
		P_GET_TARRAY(FString,Z_Param_ArgsToLocalizeLocaleKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReceiveLocalizedChatMessage_Implementation(Z_Param_FormatTableId,Z_Param_FormatLocaleKey,Z_Param_ExportedArgsNames,Z_Param_ExportedArgsStrings,Z_Param_ArgsToLocalizeNames,Z_Param_ArgsToLocalizeTableIds,Z_Param_ArgsToLocalizeLocaleKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastReceiveVoteAnswer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_ENUM(ESBZVotingAnswer,Z_Param_VotingAnswer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReceiveVoteAnswer_Implementation(Z_Param_PlayerId,ESBZVotingAnswer(Z_Param_VotingAnswer));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastReceiveVoteInitiate)
	{
		P_GET_ENUM(ESBZVotingType,Z_Param_VoteType);
		P_GET_TARRAY(FString,Z_Param_VoteInitArgs);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerInitiated);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerTargeted);
		P_GET_STRUCT(FDateTime,Z_Param_TimeStarted);
		P_GET_TARRAY(FUniqueNetIdRepl,Z_Param_PlayersPending);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReceiveVoteInitiate_Implementation(ESBZVotingType(Z_Param_VoteType),Z_Param_VoteInitArgs,Z_Param_PlayerInitiated,Z_Param_PlayerTargeted,Z_Param_TimeStarted,Z_Param_PlayersPending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execMulticastReceiveVoteRecall)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReceiveVoteRecall_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execServer_NotifyClientDisconnected)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_NotifyClientDisconnected_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execServer_NotifySendVoteAnswer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_ENUM(ESBZVotingAnswer,Z_Param_VotingAnswer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_NotifySendVoteAnswer_Implementation(Z_Param_PlayerId,ESBZVotingAnswer(Z_Param_VotingAnswer));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execServer_NotifySendVoteInitiate)
	{
		P_GET_ENUM(ESBZVotingType,Z_Param_VoteType);
		P_GET_TARRAY(FString,Z_Param_VoteInitArgs);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerInitiated);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerTargeted);
		P_GET_UBOOL(Z_Param_bVotePositive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_NotifySendVoteInitiate_Implementation(ESBZVotingType(Z_Param_VoteType),Z_Param_VoteInitArgs,Z_Param_PlayerInitiated,Z_Param_PlayerTargeted,Z_Param_bVotePositive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVotingReplicatedProxy::execServer_NotifySendVoteRecall)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_NotifySendVoteRecall_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastClearCurrentVote = FName(TEXT("MulticastClearCurrentVote"));
	void ASBZVotingReplicatedProxy::MulticastClearCurrentVote()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastClearCurrentVote),NULL);
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastExecuteAction = FName(TEXT("MulticastExecuteAction"));
	void ASBZVotingReplicatedProxy::MulticastExecuteAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastExecuteAction),NULL);
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage = FName(TEXT("MulticastReceiveChatMessage"));
	void ASBZVotingReplicatedProxy::MulticastReceiveChatMessage(const FString& Message)
	{
		SBZVotingReplicatedProxy_eventMulticastReceiveChatMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected = FName(TEXT("MulticastReceiveClientDisconnected"));
	void ASBZVotingReplicatedProxy::MulticastReceiveClientDisconnected(FUniqueNetIdRepl PlayerId)
	{
		SBZVotingReplicatedProxy_eventMulticastReceiveClientDisconnected_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage = FName(TEXT("MulticastReceiveLocalizedChatMessage"));
	void ASBZVotingReplicatedProxy::MulticastReceiveLocalizedChatMessage(const FString& FormatTableId, const FString& FormatLocaleKey, TArray<FString> const& ExportedArgsNames, TArray<FString> const& ExportedArgsStrings, TArray<FString> const& ArgsToLocalizeNames, TArray<FString> const& ArgsToLocalizeTableIds, TArray<FString> const& ArgsToLocalizeLocaleKeys)
	{
		SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms Parms;
		Parms.FormatTableId=FormatTableId;
		Parms.FormatLocaleKey=FormatLocaleKey;
		Parms.ExportedArgsNames=ExportedArgsNames;
		Parms.ExportedArgsStrings=ExportedArgsStrings;
		Parms.ArgsToLocalizeNames=ArgsToLocalizeNames;
		Parms.ArgsToLocalizeTableIds=ArgsToLocalizeTableIds;
		Parms.ArgsToLocalizeLocaleKeys=ArgsToLocalizeLocaleKeys;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer = FName(TEXT("MulticastReceiveVoteAnswer"));
	void ASBZVotingReplicatedProxy::MulticastReceiveVoteAnswer(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer)
	{
		SBZVotingReplicatedProxy_eventMulticastReceiveVoteAnswer_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.VotingAnswer=VotingAnswer;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate = FName(TEXT("MulticastReceiveVoteInitiate"));
	void ASBZVotingReplicatedProxy::MulticastReceiveVoteInitiate(ESBZVotingType VoteType, TArray<FString> const& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FUniqueNetIdRepl PlayerTargeted, FDateTime TimeStarted, TArray<FUniqueNetIdRepl> const& PlayersPending)
	{
		SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms Parms;
		Parms.VoteType=VoteType;
		Parms.VoteInitArgs=VoteInitArgs;
		Parms.PlayerInitiated=PlayerInitiated;
		Parms.PlayerTargeted=PlayerTargeted;
		Parms.TimeStarted=TimeStarted;
		Parms.PlayersPending=PlayersPending;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall = FName(TEXT("MulticastReceiveVoteRecall"));
	void ASBZVotingReplicatedProxy::MulticastReceiveVoteRecall(FUniqueNetIdRepl PlayerId)
	{
		SBZVotingReplicatedProxy_eventMulticastReceiveVoteRecall_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected = FName(TEXT("Server_NotifyClientDisconnected"));
	void ASBZVotingReplicatedProxy::Server_NotifyClientDisconnected(FUniqueNetIdRepl PlayerId)
	{
		SBZVotingReplicatedProxy_eventServer_NotifyClientDisconnected_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer = FName(TEXT("Server_NotifySendVoteAnswer"));
	void ASBZVotingReplicatedProxy::Server_NotifySendVoteAnswer(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer)
	{
		SBZVotingReplicatedProxy_eventServer_NotifySendVoteAnswer_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.VotingAnswer=VotingAnswer;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate = FName(TEXT("Server_NotifySendVoteInitiate"));
	void ASBZVotingReplicatedProxy::Server_NotifySendVoteInitiate(ESBZVotingType VoteType, TArray<FString> const& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FUniqueNetIdRepl PlayerTargeted, bool bVotePositive)
	{
		SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms Parms;
		Parms.VoteType=VoteType;
		Parms.VoteInitArgs=VoteInitArgs;
		Parms.PlayerInitiated=PlayerInitiated;
		Parms.PlayerTargeted=PlayerTargeted;
		Parms.bVotePositive=bVotePositive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate),&Parms);
	}
	static FName NAME_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall = FName(TEXT("Server_NotifySendVoteRecall"));
	void ASBZVotingReplicatedProxy::Server_NotifySendVoteRecall(FUniqueNetIdRepl PlayerId)
	{
		SBZVotingReplicatedProxy_eventServer_NotifySendVoteRecall_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall),&Parms);
	}
	void ASBZVotingReplicatedProxy::StaticRegisterNativesASBZVotingReplicatedProxy()
	{
		UClass* Class = ASBZVotingReplicatedProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastClearCurrentVote", &ASBZVotingReplicatedProxy::execMulticastClearCurrentVote },
			{ "MulticastExecuteAction", &ASBZVotingReplicatedProxy::execMulticastExecuteAction },
			{ "MulticastReceiveChatMessage", &ASBZVotingReplicatedProxy::execMulticastReceiveChatMessage },
			{ "MulticastReceiveClientDisconnected", &ASBZVotingReplicatedProxy::execMulticastReceiveClientDisconnected },
			{ "MulticastReceiveLocalizedChatMessage", &ASBZVotingReplicatedProxy::execMulticastReceiveLocalizedChatMessage },
			{ "MulticastReceiveVoteAnswer", &ASBZVotingReplicatedProxy::execMulticastReceiveVoteAnswer },
			{ "MulticastReceiveVoteInitiate", &ASBZVotingReplicatedProxy::execMulticastReceiveVoteInitiate },
			{ "MulticastReceiveVoteRecall", &ASBZVotingReplicatedProxy::execMulticastReceiveVoteRecall },
			{ "Server_NotifyClientDisconnected", &ASBZVotingReplicatedProxy::execServer_NotifyClientDisconnected },
			{ "Server_NotifySendVoteAnswer", &ASBZVotingReplicatedProxy::execServer_NotifySendVoteAnswer },
			{ "Server_NotifySendVoteInitiate", &ASBZVotingReplicatedProxy::execServer_NotifySendVoteInitiate },
			{ "Server_NotifySendVoteRecall", &ASBZVotingReplicatedProxy::execServer_NotifySendVoteRecall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastClearCurrentVote", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastExecuteAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveChatMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastReceiveChatMessage", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventMulticastReceiveChatMessage_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveClientDisconnected_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastReceiveClientDisconnected", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventMulticastReceiveClientDisconnected_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatTableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatTableId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatLocaleKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatLocaleKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExportedArgsNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportedArgsNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExportedArgsNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExportedArgsStrings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportedArgsStrings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExportedArgsStrings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArgsToLocalizeNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgsToLocalizeNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArgsToLocalizeNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArgsToLocalizeTableIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgsToLocalizeTableIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArgsToLocalizeTableIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArgsToLocalizeLocaleKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgsToLocalizeLocaleKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArgsToLocalizeLocaleKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatTableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatTableId = { "FormatTableId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms, FormatTableId), METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatTableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatTableId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatLocaleKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatLocaleKey = { "FormatLocaleKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms, FormatLocaleKey), METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatLocaleKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatLocaleKey_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsNames_Inner = { "ExportedArgsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsNames = { "ExportedArgsNames", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms, ExportedArgsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsStrings_Inner = { "ExportedArgsStrings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsStrings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsStrings = { "ExportedArgsStrings", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms, ExportedArgsStrings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsStrings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeNames_Inner = { "ArgsToLocalizeNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeNames = { "ArgsToLocalizeNames", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms, ArgsToLocalizeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeTableIds_Inner = { "ArgsToLocalizeTableIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeTableIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeTableIds = { "ArgsToLocalizeTableIds", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms, ArgsToLocalizeTableIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeTableIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeTableIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeLocaleKeys_Inner = { "ArgsToLocalizeLocaleKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeLocaleKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeLocaleKeys = { "ArgsToLocalizeLocaleKeys", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms, ArgsToLocalizeLocaleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeLocaleKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeLocaleKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatTableId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_FormatLocaleKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsStrings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ExportedArgsStrings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeTableIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeTableIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeLocaleKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::NewProp_ArgsToLocalizeLocaleKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastReceiveLocalizedChatMessage", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VotingAnswer_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VotingAnswer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteAnswer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::NewProp_VotingAnswer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::NewProp_VotingAnswer = { "VotingAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteAnswer_Parms, VotingAnswer), Z_Construct_UEnum_Starbreeze_ESBZVotingAnswer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::NewProp_VotingAnswer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::NewProp_VotingAnswer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastReceiveVoteAnswer", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventMulticastReceiveVoteAnswer_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoteType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoteType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VoteInitArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoteInitArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoteInitArgs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInitiated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerTargeted;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeStarted;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayersPending_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersPending_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayersPending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteType = { "VoteType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms, VoteType), Z_Construct_UEnum_Starbreeze_ESBZVotingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteInitArgs_Inner = { "VoteInitArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteInitArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteInitArgs = { "VoteInitArgs", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms, VoteInitArgs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteInitArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteInitArgs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayerInitiated = { "PlayerInitiated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms, PlayerInitiated), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayerTargeted = { "PlayerTargeted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms, PlayerTargeted), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms, TimeStarted), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayersPending_Inner = { "PlayersPending", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayersPending_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayersPending = { "PlayersPending", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms, PlayersPending), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayersPending_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayersPending_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteInitArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_VoteInitArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayerInitiated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayerTargeted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_TimeStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayersPending_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::NewProp_PlayersPending,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastReceiveVoteInitiate", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventMulticastReceiveVoteRecall_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "MulticastReceiveVoteRecall", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventMulticastReceiveVoteRecall_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifyClientDisconnected_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "Server_NotifyClientDisconnected", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventServer_NotifyClientDisconnected_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VotingAnswer_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VotingAnswer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifySendVoteAnswer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::NewProp_VotingAnswer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::NewProp_VotingAnswer = { "VotingAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifySendVoteAnswer_Parms, VotingAnswer), Z_Construct_UEnum_Starbreeze_ESBZVotingAnswer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::NewProp_VotingAnswer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::NewProp_VotingAnswer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "Server_NotifySendVoteAnswer", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventServer_NotifySendVoteAnswer_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoteType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoteType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VoteInitArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoteInitArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoteInitArgs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInitiated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerTargeted;
		static void NewProp_bVotePositive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVotePositive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteType = { "VoteType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms, VoteType), Z_Construct_UEnum_Starbreeze_ESBZVotingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteInitArgs_Inner = { "VoteInitArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteInitArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteInitArgs = { "VoteInitArgs", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms, VoteInitArgs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteInitArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteInitArgs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_PlayerInitiated = { "PlayerInitiated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms, PlayerInitiated), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_PlayerTargeted = { "PlayerTargeted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms, PlayerTargeted), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_bVotePositive_SetBit(void* Obj)
	{
		((SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms*)Obj)->bVotePositive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_bVotePositive = { "bVotePositive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms), &Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_bVotePositive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteInitArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_VoteInitArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_PlayerInitiated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_PlayerTargeted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::NewProp_bVotePositive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "Server_NotifySendVoteInitiate", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingReplicatedProxy_eventServer_NotifySendVoteRecall_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVotingReplicatedProxy, nullptr, "Server_NotifySendVoteRecall", nullptr, nullptr, sizeof(SBZVotingReplicatedProxy_eventServer_NotifySendVoteRecall_Parms), Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZVotingReplicatedProxy_NoRegister()
	{
		return ASBZVotingReplicatedProxy::StaticClass();
	}
	struct Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDummy_MetaData[];
#endif
		static void NewProp_bDummy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDummy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastClearCurrentVote, "MulticastClearCurrentVote" }, // 2044535762
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastExecuteAction, "MulticastExecuteAction" }, // 3787007328
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveChatMessage, "MulticastReceiveChatMessage" }, // 423842465
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveClientDisconnected, "MulticastReceiveClientDisconnected" }, // 3496427694
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveLocalizedChatMessage, "MulticastReceiveLocalizedChatMessage" }, // 1781342508
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteAnswer, "MulticastReceiveVoteAnswer" }, // 3421645717
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteInitiate, "MulticastReceiveVoteInitiate" }, // 1763630445
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_MulticastReceiveVoteRecall, "MulticastReceiveVoteRecall" }, // 1205496334
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifyClientDisconnected, "Server_NotifyClientDisconnected" }, // 3589337004
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteAnswer, "Server_NotifySendVoteAnswer" }, // 3913498523
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteInitiate, "Server_NotifySendVoteInitiate" }, // 2614231965
		{ &Z_Construct_UFunction_ASBZVotingReplicatedProxy_Server_NotifySendVoteRecall, "Server_NotifySendVoteRecall" }, // 3574754740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZVotingReplicatedProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::NewProp_bDummy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVotingReplicatedProxy" },
		{ "ModuleRelativePath", "Public/SBZVotingReplicatedProxy.h" },
	};
#endif
	void Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::NewProp_bDummy_SetBit(void* Obj)
	{
		((ASBZVotingReplicatedProxy*)Obj)->bDummy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::NewProp_bDummy = { "bDummy", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZVotingReplicatedProxy), &Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::NewProp_bDummy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::NewProp_bDummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::NewProp_bDummy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::NewProp_bDummy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZVotingReplicatedProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::ClassParams = {
		&ASBZVotingReplicatedProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZVotingReplicatedProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZVotingReplicatedProxy, 3409961968);
	template<> STARBREEZE_API UClass* StaticClass<ASBZVotingReplicatedProxy>()
	{
		return ASBZVotingReplicatedProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZVotingReplicatedProxy(Z_Construct_UClass_ASBZVotingReplicatedProxy, &ASBZVotingReplicatedProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZVotingReplicatedProxy"), false, nullptr, nullptr, nullptr);

	void ASBZVotingReplicatedProxy::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bDummy(TEXT("bDummy"));

		const bool bIsValid = true
			&& Name_bDummy == ClassReps[(int32)ENetFields_Private::bDummy].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZVotingReplicatedProxy"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZVotingReplicatedProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
