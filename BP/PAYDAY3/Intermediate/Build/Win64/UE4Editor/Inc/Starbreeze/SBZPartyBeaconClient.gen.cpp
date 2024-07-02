// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyBeaconClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPartyBeaconClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPartyBeaconClient();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconClient();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMemberInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyData();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execClientLoginAck)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InNetId);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientLoginAck_Implementation(Z_Param_InNetId,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execConnectToLobby)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLobbyNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToLobby_Implementation(Z_Param_InLobbyNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execLeaveLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeaveLobby_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execOnRep_PartyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PartyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execServerLogin)
	{
		P_GET_STRUCT(FSBZPartyMemberInfo,Z_Param_Client);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerLogin_Validate(Z_Param_Client))
		{
			RPC_ValidateFailed(TEXT("ServerLogin_Validate"));
			return;
		}
		P_THIS->ServerLogin_Implementation(Z_Param_Client);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execServerNotifyFailedToJoinLobby)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_ClientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyFailedToJoinLobby_Validate(Z_Param_ClientId))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyFailedToJoinLobby_Validate"));
			return;
		}
		P_THIS->ServerNotifyFailedToJoinLobby_Implementation(Z_Param_ClientId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execServerNotifyJoinedLobby)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_ClientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyJoinedLobby_Validate(Z_Param_ClientId))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyJoinedLobby_Validate"));
			return;
		}
		P_THIS->ServerNotifyJoinedLobby_Implementation(Z_Param_ClientId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPartyBeaconClient::execServerNotifyLeftLobby)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_ClientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyLeftLobby_Validate(Z_Param_ClientId))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyLeftLobby_Validate"));
			return;
		}
		P_THIS->ServerNotifyLeftLobby_Implementation(Z_Param_ClientId);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPartyBeaconClient_ClientLoginAck = FName(TEXT("ClientLoginAck"));
	void ASBZPartyBeaconClient::ClientLoginAck(FUniqueNetIdRepl const& InNetId, bool bWasSuccessful)
	{
		SBZPartyBeaconClient_eventClientLoginAck_Parms Parms;
		Parms.InNetId=InNetId;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPartyBeaconClient_ClientLoginAck),&Parms);
	}
	static FName NAME_ASBZPartyBeaconClient_ConnectToLobby = FName(TEXT("ConnectToLobby"));
	void ASBZPartyBeaconClient::ConnectToLobby(const FString& InLobbyNetId)
	{
		SBZPartyBeaconClient_eventConnectToLobby_Parms Parms;
		Parms.InLobbyNetId=InLobbyNetId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPartyBeaconClient_ConnectToLobby),&Parms);
	}
	static FName NAME_ASBZPartyBeaconClient_LeaveLobby = FName(TEXT("LeaveLobby"));
	void ASBZPartyBeaconClient::LeaveLobby()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPartyBeaconClient_LeaveLobby),NULL);
	}
	static FName NAME_ASBZPartyBeaconClient_ServerLogin = FName(TEXT("ServerLogin"));
	void ASBZPartyBeaconClient::ServerLogin(FSBZPartyMemberInfo const& Client)
	{
		SBZPartyBeaconClient_eventServerLogin_Parms Parms;
		Parms.Client=Client;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPartyBeaconClient_ServerLogin),&Parms);
	}
	static FName NAME_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby = FName(TEXT("ServerNotifyFailedToJoinLobby"));
	void ASBZPartyBeaconClient::ServerNotifyFailedToJoinLobby(FUniqueNetIdRepl const& ClientId)
	{
		SBZPartyBeaconClient_eventServerNotifyFailedToJoinLobby_Parms Parms;
		Parms.ClientId=ClientId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby),&Parms);
	}
	static FName NAME_ASBZPartyBeaconClient_ServerNotifyJoinedLobby = FName(TEXT("ServerNotifyJoinedLobby"));
	void ASBZPartyBeaconClient::ServerNotifyJoinedLobby(FUniqueNetIdRepl const& ClientId)
	{
		SBZPartyBeaconClient_eventServerNotifyJoinedLobby_Parms Parms;
		Parms.ClientId=ClientId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPartyBeaconClient_ServerNotifyJoinedLobby),&Parms);
	}
	static FName NAME_ASBZPartyBeaconClient_ServerNotifyLeftLobby = FName(TEXT("ServerNotifyLeftLobby"));
	void ASBZPartyBeaconClient::ServerNotifyLeftLobby(FUniqueNetIdRepl const& ClientId)
	{
		SBZPartyBeaconClient_eventServerNotifyLeftLobby_Parms Parms;
		Parms.ClientId=ClientId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPartyBeaconClient_ServerNotifyLeftLobby),&Parms);
	}
	void ASBZPartyBeaconClient::StaticRegisterNativesASBZPartyBeaconClient()
	{
		UClass* Class = ASBZPartyBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientLoginAck", &ASBZPartyBeaconClient::execClientLoginAck },
			{ "ConnectToLobby", &ASBZPartyBeaconClient::execConnectToLobby },
			{ "LeaveLobby", &ASBZPartyBeaconClient::execLeaveLobby },
			{ "OnRep_PartyState", &ASBZPartyBeaconClient::execOnRep_PartyState },
			{ "ServerLogin", &ASBZPartyBeaconClient::execServerLogin },
			{ "ServerNotifyFailedToJoinLobby", &ASBZPartyBeaconClient::execServerNotifyFailedToJoinLobby },
			{ "ServerNotifyJoinedLobby", &ASBZPartyBeaconClient::execServerNotifyJoinedLobby },
			{ "ServerNotifyLeftLobby", &ASBZPartyBeaconClient::execServerNotifyLeftLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNetId;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_InNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_InNetId = { "InNetId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyBeaconClient_eventClientLoginAck_Parms, InNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_InNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_InNetId_MetaData)) };
	void Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZPartyBeaconClient_eventClientLoginAck_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPartyBeaconClient_eventClientLoginAck_Parms), &Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_InNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "ClientLoginAck", nullptr, nullptr, sizeof(SBZPartyBeaconClient_eventClientLoginAck_Parms), Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLobbyNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLobbyNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::NewProp_InLobbyNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::NewProp_InLobbyNetId = { "InLobbyNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyBeaconClient_eventConnectToLobby_Parms, InLobbyNetId), METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::NewProp_InLobbyNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::NewProp_InLobbyNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::NewProp_InLobbyNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "ConnectToLobby", nullptr, nullptr, sizeof(SBZPartyBeaconClient_eventConnectToLobby_Parms), Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "LeaveLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "OnRep_PartyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Client_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Client;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::NewProp_Client_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyBeaconClient_eventServerLogin_Parms, Client), Z_Construct_UScriptStruct_FSBZPartyMemberInfo, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::NewProp_Client_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::NewProp_Client_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::NewProp_Client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "ServerLogin", nullptr, nullptr, sizeof(SBZPartyBeaconClient_eventServerLogin_Parms), Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyBeaconClient_eventServerNotifyFailedToJoinLobby_Parms, ClientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "ServerNotifyFailedToJoinLobby", nullptr, nullptr, sizeof(SBZPartyBeaconClient_eventServerNotifyFailedToJoinLobby_Parms), Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyBeaconClient_eventServerNotifyJoinedLobby_Parms, ClientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "ServerNotifyJoinedLobby", nullptr, nullptr, sizeof(SBZPartyBeaconClient_eventServerNotifyJoinedLobby_Parms), Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyBeaconClient_eventServerNotifyLeftLobby_Parms, ClientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPartyBeaconClient, nullptr, "ServerNotifyLeftLobby", nullptr, nullptr, sizeof(SBZPartyBeaconClient_eventServerNotifyLeftLobby_Parms), Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPartyBeaconClient_NoRegister()
	{
		return ASBZPartyBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPartyBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPartyBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPartyBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_ClientLoginAck, "ClientLoginAck" }, // 2816281026
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_ConnectToLobby, "ConnectToLobby" }, // 529918422
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_LeaveLobby, "LeaveLobby" }, // 3084676483
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_OnRep_PartyState, "OnRep_PartyState" }, // 2133999425
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_ServerLogin, "ServerLogin" }, // 3808972423
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyFailedToJoinLobby, "ServerNotifyFailedToJoinLobby" }, // 84765485
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyJoinedLobby, "ServerNotifyJoinedLobby" }, // 1719544828
		{ &Z_Construct_UFunction_ASBZPartyBeaconClient_ServerNotifyLeftLobby, "ServerNotifyLeftLobby" }, // 2415581883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPartyBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPartyBeaconClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPartyBeaconClient_Statics::NewProp_PartyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyBeaconClient" },
		{ "ModuleRelativePath", "Public/SBZPartyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPartyBeaconClient_Statics::NewProp_PartyState = { "PartyState", "OnRep_PartyState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPartyBeaconClient, PartyState), Z_Construct_UScriptStruct_FSBZPartyData, METADATA_PARAMS(Z_Construct_UClass_ASBZPartyBeaconClient_Statics::NewProp_PartyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPartyBeaconClient_Statics::NewProp_PartyState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPartyBeaconClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPartyBeaconClient_Statics::NewProp_PartyState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPartyBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPartyBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPartyBeaconClient_Statics::ClassParams = {
		&ASBZPartyBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPartyBeaconClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPartyBeaconClient_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPartyBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPartyBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPartyBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPartyBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPartyBeaconClient, 431319604);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPartyBeaconClient>()
	{
		return ASBZPartyBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPartyBeaconClient(Z_Construct_UClass_ASBZPartyBeaconClient, &ASBZPartyBeaconClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPartyBeaconClient"), false, nullptr, nullptr, nullptr);

	void ASBZPartyBeaconClient::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PartyState(TEXT("PartyState"));

		const bool bIsValid = true
			&& Name_PartyState == ClassReps[(int32)ENetFields_Private::PartyState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPartyBeaconClient"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPartyBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
