// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMemberInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyData();
// End Cross Module References
	DEFINE_FUNCTION(USBZPartyClient::execClientLoginAck)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InNetId);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientLoginAck_Implementation(Z_Param_InNetId,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyClient::execConnectToLobby)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLobbyNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToLobby_Implementation(Z_Param_InLobbyNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyClient::execLeaveLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeaveLobby_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyClient::execOnRep_PartyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PartyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyClient::execServerLogin)
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
	DEFINE_FUNCTION(USBZPartyClient::execServerNotifyFailedToJoinLobby)
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
	DEFINE_FUNCTION(USBZPartyClient::execServerNotifyJoinedLobby)
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
	DEFINE_FUNCTION(USBZPartyClient::execServerNotifyLeftLobby)
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
	static FName NAME_USBZPartyClient_ClientLoginAck = FName(TEXT("ClientLoginAck"));
	void USBZPartyClient::ClientLoginAck(FUniqueNetIdRepl const& InNetId, bool bWasSuccessful)
	{
		SBZPartyClient_eventClientLoginAck_Parms Parms;
		Parms.InNetId=InNetId;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZPartyClient_ClientLoginAck),&Parms);
	}
	static FName NAME_USBZPartyClient_ConnectToLobby = FName(TEXT("ConnectToLobby"));
	void USBZPartyClient::ConnectToLobby(const FString& InLobbyNetId)
	{
		SBZPartyClient_eventConnectToLobby_Parms Parms;
		Parms.InLobbyNetId=InLobbyNetId;
		ProcessEvent(FindFunctionChecked(NAME_USBZPartyClient_ConnectToLobby),&Parms);
	}
	static FName NAME_USBZPartyClient_LeaveLobby = FName(TEXT("LeaveLobby"));
	void USBZPartyClient::LeaveLobby()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPartyClient_LeaveLobby),NULL);
	}
	static FName NAME_USBZPartyClient_ServerLogin = FName(TEXT("ServerLogin"));
	void USBZPartyClient::ServerLogin(FSBZPartyMemberInfo const& Client)
	{
		SBZPartyClient_eventServerLogin_Parms Parms;
		Parms.Client=Client;
		ProcessEvent(FindFunctionChecked(NAME_USBZPartyClient_ServerLogin),&Parms);
	}
	static FName NAME_USBZPartyClient_ServerNotifyFailedToJoinLobby = FName(TEXT("ServerNotifyFailedToJoinLobby"));
	void USBZPartyClient::ServerNotifyFailedToJoinLobby(FUniqueNetIdRepl const& ClientId)
	{
		SBZPartyClient_eventServerNotifyFailedToJoinLobby_Parms Parms;
		Parms.ClientId=ClientId;
		ProcessEvent(FindFunctionChecked(NAME_USBZPartyClient_ServerNotifyFailedToJoinLobby),&Parms);
	}
	static FName NAME_USBZPartyClient_ServerNotifyJoinedLobby = FName(TEXT("ServerNotifyJoinedLobby"));
	void USBZPartyClient::ServerNotifyJoinedLobby(FUniqueNetIdRepl const& ClientId)
	{
		SBZPartyClient_eventServerNotifyJoinedLobby_Parms Parms;
		Parms.ClientId=ClientId;
		ProcessEvent(FindFunctionChecked(NAME_USBZPartyClient_ServerNotifyJoinedLobby),&Parms);
	}
	static FName NAME_USBZPartyClient_ServerNotifyLeftLobby = FName(TEXT("ServerNotifyLeftLobby"));
	void USBZPartyClient::ServerNotifyLeftLobby(FUniqueNetIdRepl const& ClientId)
	{
		SBZPartyClient_eventServerNotifyLeftLobby_Parms Parms;
		Parms.ClientId=ClientId;
		ProcessEvent(FindFunctionChecked(NAME_USBZPartyClient_ServerNotifyLeftLobby),&Parms);
	}
	void USBZPartyClient::StaticRegisterNativesUSBZPartyClient()
	{
		UClass* Class = USBZPartyClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientLoginAck", &USBZPartyClient::execClientLoginAck },
			{ "ConnectToLobby", &USBZPartyClient::execConnectToLobby },
			{ "LeaveLobby", &USBZPartyClient::execLeaveLobby },
			{ "OnRep_PartyState", &USBZPartyClient::execOnRep_PartyState },
			{ "ServerLogin", &USBZPartyClient::execServerLogin },
			{ "ServerNotifyFailedToJoinLobby", &USBZPartyClient::execServerNotifyFailedToJoinLobby },
			{ "ServerNotifyJoinedLobby", &USBZPartyClient::execServerNotifyJoinedLobby },
			{ "ServerNotifyLeftLobby", &USBZPartyClient::execServerNotifyLeftLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_InNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_InNetId = { "InNetId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyClient_eventClientLoginAck_Parms, InNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_InNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_InNetId_MetaData)) };
	void Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZPartyClient_eventClientLoginAck_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPartyClient_eventClientLoginAck_Parms), &Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_InNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "ClientLoginAck", nullptr, nullptr, sizeof(SBZPartyClient_eventClientLoginAck_Parms), Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_ClientLoginAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_ClientLoginAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::NewProp_InLobbyNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::NewProp_InLobbyNetId = { "InLobbyNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyClient_eventConnectToLobby_Parms, InLobbyNetId), METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::NewProp_InLobbyNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::NewProp_InLobbyNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::NewProp_InLobbyNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "ConnectToLobby", nullptr, nullptr, sizeof(SBZPartyClient_eventConnectToLobby_Parms), Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_ConnectToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_ConnectToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyClient_LeaveLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "LeaveLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "OnRep_PartyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::NewProp_Client_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyClient_eventServerLogin_Parms, Client), Z_Construct_UScriptStruct_FSBZPartyMemberInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::NewProp_Client_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::NewProp_Client_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::NewProp_Client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "ServerLogin", nullptr, nullptr, sizeof(SBZPartyClient_eventServerLogin_Parms), Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_ServerLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_ServerLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyClient_eventServerNotifyFailedToJoinLobby_Parms, ClientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::NewProp_ClientId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "ServerNotifyFailedToJoinLobby", nullptr, nullptr, sizeof(SBZPartyClient_eventServerNotifyFailedToJoinLobby_Parms), Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyClient_eventServerNotifyJoinedLobby_Parms, ClientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::NewProp_ClientId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "ServerNotifyJoinedLobby", nullptr, nullptr, sizeof(SBZPartyClient_eventServerNotifyJoinedLobby_Parms), Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyClient_eventServerNotifyLeftLobby_Parms, ClientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::NewProp_ClientId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyClient, nullptr, "ServerNotifyLeftLobby", nullptr, nullptr, sizeof(SBZPartyClient_eventServerNotifyLeftLobby_Parms), Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPartyClient_NoRegister()
	{
		return USBZPartyClient::StaticClass();
	}
	struct Z_Construct_UClass_USBZPartyClient_Statics
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
	UObject* (*const Z_Construct_UClass_USBZPartyClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPartyClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPartyClient_ClientLoginAck, "ClientLoginAck" }, // 159480556
		{ &Z_Construct_UFunction_USBZPartyClient_ConnectToLobby, "ConnectToLobby" }, // 3542059883
		{ &Z_Construct_UFunction_USBZPartyClient_LeaveLobby, "LeaveLobby" }, // 472779491
		{ &Z_Construct_UFunction_USBZPartyClient_OnRep_PartyState, "OnRep_PartyState" }, // 601970447
		{ &Z_Construct_UFunction_USBZPartyClient_ServerLogin, "ServerLogin" }, // 361873576
		{ &Z_Construct_UFunction_USBZPartyClient_ServerNotifyFailedToJoinLobby, "ServerNotifyFailedToJoinLobby" }, // 2154526895
		{ &Z_Construct_UFunction_USBZPartyClient_ServerNotifyJoinedLobby, "ServerNotifyJoinedLobby" }, // 2081343548
		{ &Z_Construct_UFunction_USBZPartyClient_ServerNotifyLeftLobby, "ServerNotifyLeftLobby" }, // 2036894160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPartyClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyClient_Statics::NewProp_PartyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyClient" },
		{ "ModuleRelativePath", "Public/SBZPartyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyClient_Statics::NewProp_PartyState = { "PartyState", "OnRep_PartyState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyClient, PartyState), Z_Construct_UScriptStruct_FSBZPartyData, METADATA_PARAMS(Z_Construct_UClass_USBZPartyClient_Statics::NewProp_PartyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyClient_Statics::NewProp_PartyState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPartyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyClient_Statics::NewProp_PartyState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPartyClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPartyClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPartyClient_Statics::ClassParams = {
		&USBZPartyClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPartyClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyClient_Statics::PropPointers),
		0,
		0x001002A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPartyClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPartyClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPartyClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPartyClient, 397895171);
	template<> STARBREEZE_API UClass* StaticClass<USBZPartyClient>()
	{
		return USBZPartyClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPartyClient(Z_Construct_UClass_USBZPartyClient, &USBZPartyClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPartyClient"), false, nullptr, nullptr, nullptr);

	void USBZPartyClient::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PartyState(TEXT("PartyState"));

		const bool bIsValid = true
			&& Name_PartyState == ClassReps[(int32)ENetFields_Private::PartyState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZPartyClient"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPartyClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
