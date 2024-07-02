// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction();
	ENGINE_API UClass* Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAgentManager::execClientInitializedRPC)
	{
		P_GET_PROPERTY(FUInt64Property,Z_Param_ClientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientInitializedRPC_Validate(Z_Param_ClientId))
		{
			RPC_ValidateFailed(TEXT("ClientInitializedRPC_Validate"));
			return;
		}
		P_THIS->ClientInitializedRPC_Implementation(Z_Param_ClientId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAgentManager::execClientReliableRPC)
	{
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReliableRPC_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAgentManager::execClientUnreliableRPC)
	{
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUnreliableRPC_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAgentManager::execHandleNavDataRegistered)
	{
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleNavDataRegistered(Z_Param_NavData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAgentManager::execHandshakeReplyRPC)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Challenge);
		P_GET_PROPERTY(FUInt64Property,Z_Param_PrivateId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandshakeReplyRPC_Implementation(Z_Param_Challenge,Z_Param_PrivateId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAgentManager::execHandshakeRPC)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Challenge);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->HandshakeRPC_Validate(Z_Param_Challenge))
		{
			RPC_ValidateFailed(TEXT("HandshakeRPC_Validate"));
			return;
		}
		P_THIS->HandshakeRPC_Implementation(Z_Param_Challenge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAgentManager::execServerReliableRPC)
	{
		P_GET_PROPERTY(FUInt64Property,Z_Param_ClientId);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReliableRPC_Validate(Z_Param_ClientId,Z_Param_Data))
		{
			RPC_ValidateFailed(TEXT("ServerReliableRPC_Validate"));
			return;
		}
		P_THIS->ServerReliableRPC_Implementation(Z_Param_ClientId,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAgentManager::execServerUnreliableRPC)
	{
		P_GET_PROPERTY(FUInt64Property,Z_Param_ClientId);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUnreliableRPC_Validate(Z_Param_ClientId,Z_Param_Data))
		{
			RPC_ValidateFailed(TEXT("ServerUnreliableRPC_Validate"));
			return;
		}
		P_THIS->ServerUnreliableRPC_Implementation(Z_Param_ClientId,Z_Param_Data);
		P_NATIVE_END;
	}
	static FName NAME_USBZAgentManager_ClientInitializedRPC = FName(TEXT("ClientInitializedRPC"));
	void USBZAgentManager::ClientInitializedRPC(uint64 ClientId)
	{
		SBZAgentManager_eventClientInitializedRPC_Parms Parms;
		Parms.ClientId=ClientId;
		ProcessEvent(FindFunctionChecked(NAME_USBZAgentManager_ClientInitializedRPC),&Parms);
	}
	static FName NAME_USBZAgentManager_ClientReliableRPC = FName(TEXT("ClientReliableRPC"));
	void USBZAgentManager::ClientReliableRPC(TArray<uint8> const& Data)
	{
		SBZAgentManager_eventClientReliableRPC_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_USBZAgentManager_ClientReliableRPC),&Parms);
	}
	static FName NAME_USBZAgentManager_ClientUnreliableRPC = FName(TEXT("ClientUnreliableRPC"));
	void USBZAgentManager::ClientUnreliableRPC(TArray<uint8> const& Data)
	{
		SBZAgentManager_eventClientUnreliableRPC_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_USBZAgentManager_ClientUnreliableRPC),&Parms);
	}
	static FName NAME_USBZAgentManager_HandshakeReplyRPC = FName(TEXT("HandshakeReplyRPC"));
	void USBZAgentManager::HandshakeReplyRPC(const FString& Challenge, uint64 PrivateId)
	{
		SBZAgentManager_eventHandshakeReplyRPC_Parms Parms;
		Parms.Challenge=Challenge;
		Parms.PrivateId=PrivateId;
		ProcessEvent(FindFunctionChecked(NAME_USBZAgentManager_HandshakeReplyRPC),&Parms);
	}
	static FName NAME_USBZAgentManager_HandshakeRPC = FName(TEXT("HandshakeRPC"));
	void USBZAgentManager::HandshakeRPC(const FString& Challenge)
	{
		SBZAgentManager_eventHandshakeRPC_Parms Parms;
		Parms.Challenge=Challenge;
		ProcessEvent(FindFunctionChecked(NAME_USBZAgentManager_HandshakeRPC),&Parms);
	}
	static FName NAME_USBZAgentManager_ServerReliableRPC = FName(TEXT("ServerReliableRPC"));
	void USBZAgentManager::ServerReliableRPC(uint64 ClientId, TArray<uint8> const& Data)
	{
		SBZAgentManager_eventServerReliableRPC_Parms Parms;
		Parms.ClientId=ClientId;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_USBZAgentManager_ServerReliableRPC),&Parms);
	}
	static FName NAME_USBZAgentManager_ServerUnreliableRPC = FName(TEXT("ServerUnreliableRPC"));
	void USBZAgentManager::ServerUnreliableRPC(uint64 ClientId, TArray<uint8> const& Data)
	{
		SBZAgentManager_eventServerUnreliableRPC_Parms Parms;
		Parms.ClientId=ClientId;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_USBZAgentManager_ServerUnreliableRPC),&Parms);
	}
	void USBZAgentManager::StaticRegisterNativesUSBZAgentManager()
	{
		UClass* Class = USBZAgentManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientInitializedRPC", &USBZAgentManager::execClientInitializedRPC },
			{ "ClientReliableRPC", &USBZAgentManager::execClientReliableRPC },
			{ "ClientUnreliableRPC", &USBZAgentManager::execClientUnreliableRPC },
			{ "HandleNavDataRegistered", &USBZAgentManager::execHandleNavDataRegistered },
			{ "HandshakeReplyRPC", &USBZAgentManager::execHandshakeReplyRPC },
			{ "HandshakeRPC", &USBZAgentManager::execHandshakeRPC },
			{ "ServerReliableRPC", &USBZAgentManager::execServerReliableRPC },
			{ "ServerUnreliableRPC", &USBZAgentManager::execServerUnreliableRPC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics
	{
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_ClientId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventClientInitializedRPC_Parms, ClientId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::NewProp_ClientId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "ClientInitializedRPC", nullptr, nullptr, sizeof(SBZAgentManager_eventClientInitializedRPC_Parms), Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventClientReliableRPC_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "ClientReliableRPC", nullptr, nullptr, sizeof(SBZAgentManager_eventClientReliableRPC_Parms), Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventClientUnreliableRPC_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "ClientUnreliableRPC", nullptr, nullptr, sizeof(SBZAgentManager_eventClientUnreliableRPC_Parms), Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics
	{
		struct SBZAgentManager_eventHandleNavDataRegistered_Parms
		{
			ANavigationData* NavData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventHandleNavDataRegistered_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::NewProp_NavData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "HandleNavDataRegistered", nullptr, nullptr, sizeof(SBZAgentManager_eventHandleNavDataRegistered_Parms), Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Challenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Challenge;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_PrivateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::NewProp_Challenge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::NewProp_Challenge = { "Challenge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventHandshakeReplyRPC_Parms, Challenge), METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::NewProp_Challenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::NewProp_Challenge_MetaData)) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::NewProp_PrivateId = { "PrivateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventHandshakeReplyRPC_Parms, PrivateId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::NewProp_Challenge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::NewProp_PrivateId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "HandshakeReplyRPC", nullptr, nullptr, sizeof(SBZAgentManager_eventHandshakeReplyRPC_Parms), Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Challenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Challenge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::NewProp_Challenge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::NewProp_Challenge = { "Challenge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventHandshakeRPC_Parms, Challenge), METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::NewProp_Challenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::NewProp_Challenge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::NewProp_Challenge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "HandshakeRPC", nullptr, nullptr, sizeof(SBZAgentManager_eventHandshakeRPC_Parms), Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_HandshakeRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_HandshakeRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics
	{
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_ClientId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventServerReliableRPC_Parms, ClientId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventServerReliableRPC_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "ServerReliableRPC", nullptr, nullptr, sizeof(SBZAgentManager_eventServerReliableRPC_Parms), Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics
	{
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_ClientId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventServerUnreliableRPC_Parms, ClientId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentManager_eventServerUnreliableRPC_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentManager, nullptr, "ServerUnreliableRPC", nullptr, nullptr, sizeof(SBZAgentManager_eventServerUnreliableRPC_Parms), Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAgentManager_NoRegister()
	{
		return USBZAgentManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZAgentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostPhysicsTickFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostPhysicsTickFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAgentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAgentManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAgentManager_ClientInitializedRPC, "ClientInitializedRPC" }, // 1873587983
		{ &Z_Construct_UFunction_USBZAgentManager_ClientReliableRPC, "ClientReliableRPC" }, // 2519562682
		{ &Z_Construct_UFunction_USBZAgentManager_ClientUnreliableRPC, "ClientUnreliableRPC" }, // 2110117518
		{ &Z_Construct_UFunction_USBZAgentManager_HandleNavDataRegistered, "HandleNavDataRegistered" }, // 1342005819
		{ &Z_Construct_UFunction_USBZAgentManager_HandshakeReplyRPC, "HandshakeReplyRPC" }, // 843272198
		{ &Z_Construct_UFunction_USBZAgentManager_HandshakeRPC, "HandshakeRPC" }, // 3594422377
		{ &Z_Construct_UFunction_USBZAgentManager_ServerReliableRPC, "ServerReliableRPC" }, // 340938139
		{ &Z_Construct_UFunction_USBZAgentManager_ServerUnreliableRPC, "ServerUnreliableRPC" }, // 3856605113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAgentManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentManager_Statics::NewProp_PostPhysicsTickFunction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentManager" },
		{ "ModuleRelativePath", "Public/SBZAgentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgentManager_Statics::NewProp_PostPhysicsTickFunction = { "PostPhysicsTickFunction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentManager, PostPhysicsTickFunction), Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction, METADATA_PARAMS(Z_Construct_UClass_USBZAgentManager_Statics::NewProp_PostPhysicsTickFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentManager_Statics::NewProp_PostPhysicsTickFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAgentManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentManager_Statics::NewProp_PostPhysicsTickFunction,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZAgentManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister, (int32)VTABLE_OFFSET(USBZAgentManager, INavEdgeProviderInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAgentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAgentManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAgentManager_Statics::ClassParams = {
		&USBZAgentManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAgentManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAgentManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAgentManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAgentManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAgentManager, 901185539);
	template<> STARBREEZE_API UClass* StaticClass<USBZAgentManager>()
	{
		return USBZAgentManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAgentManager(Z_Construct_UClass_USBZAgentManager, &USBZAgentManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAgentManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAgentManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
