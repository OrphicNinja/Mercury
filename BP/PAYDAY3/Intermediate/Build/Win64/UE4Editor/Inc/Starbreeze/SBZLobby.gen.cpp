// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLobby() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobby_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobby();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSessionParams();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobbyLocalState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyBeaconClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyBeaconHost_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBeaconActionPhaseClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBeaconActionPhaseHost_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLobby::execHandleLostConnectionToHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobby::execHostLobby)
	{
		P_GET_STRUCT_REF(FSBZOnlineSessionParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostLobby(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobby::execHostLobbyComplete)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostLobbyComplete(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobby::execHostMigrationSession)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HostId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostMigrationSession(Z_Param_HostId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobby::execInitLobbyHostComplete)
	{
		P_GET_ENUM_REF(ESBZOnlineCode,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitLobbyHostComplete((ESBZOnlineCode&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobby::execJoinLobbyComplete)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinLobbyComplete(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	void USBZLobby::StaticRegisterNativesUSBZLobby()
	{
		UClass* Class = USBZLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleLostConnectionToHost", &USBZLobby::execHandleLostConnectionToHost },
			{ "HostLobby", &USBZLobby::execHostLobby },
			{ "HostLobbyComplete", &USBZLobby::execHostLobbyComplete },
			{ "HostMigrationSession", &USBZLobby::execHostMigrationSession },
			{ "InitLobbyHostComplete", &USBZLobby::execInitLobbyHostComplete },
			{ "JoinLobbyComplete", &USBZLobby::execJoinLobbyComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobby, nullptr, "HandleLostConnectionToHost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobby_HostLobby_Statics
	{
		struct SBZLobby_eventHostLobby_Parms
		{
			FSBZOnlineSessionParams Params;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_HostLobby_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLobby_HostLobby_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobby_eventHostLobby_Parms, Params), Z_Construct_UScriptStruct_FSBZOnlineSessionParams, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_HostLobby_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HostLobby_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobby_HostLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_HostLobby_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_HostLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobby_HostLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobby, nullptr, "HostLobby", nullptr, nullptr, sizeof(SBZLobby_eventHostLobby_Parms), Z_Construct_UFunction_USBZLobby_HostLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HostLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_HostLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HostLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobby_HostLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobby_HostLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics
	{
		struct SBZLobby_eventHostLobbyComplete_Parms
		{
			ESBZOnlineCode Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobby_eventHostLobbyComplete_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobby, nullptr, "HostLobbyComplete", nullptr, nullptr, sizeof(SBZLobby_eventHostLobbyComplete_Parms), Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobby_HostLobbyComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobby_HostLobbyComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics
	{
		struct SBZLobby_eventHostMigrationSession_Parms
		{
			int32 HostId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HostId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::NewProp_HostId = { "HostId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobby_eventHostMigrationSession_Parms, HostId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::NewProp_HostId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobby, nullptr, "HostMigrationSession", nullptr, nullptr, sizeof(SBZLobby_eventHostMigrationSession_Parms), Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobby_HostMigrationSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobby_HostMigrationSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics
	{
		struct SBZLobby_eventInitLobbyHostComplete_Parms
		{
			ESBZOnlineCode Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobby_eventInitLobbyHostComplete_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobby, nullptr, "InitLobbyHostComplete", nullptr, nullptr, sizeof(SBZLobby_eventInitLobbyHostComplete_Parms), Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics
	{
		struct SBZLobby_eventJoinLobbyComplete_Parms
		{
			ESBZOnlineCode Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobby_eventJoinLobbyComplete_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobby, nullptr, "JoinLobbyComplete", nullptr, nullptr, sizeof(SBZLobby_eventJoinLobbyComplete_Parms), Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobby_JoinLobbyComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobby_JoinLobbyComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLobby_NoRegister()
	{
		return USBZLobby::StaticClass();
	}
	struct Z_Construct_UClass_USBZLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyOnlineBeacon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyOnlineBeacon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconActionPhaseClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeaconActionPhaseClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconActionPhaseHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeaconActionPhaseHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPhaseOnlineBeacon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionPhaseOnlineBeacon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLobby_HandleLostConnectionToHost, "HandleLostConnectionToHost" }, // 2519241651
		{ &Z_Construct_UFunction_USBZLobby_HostLobby, "HostLobby" }, // 132985339
		{ &Z_Construct_UFunction_USBZLobby_HostLobbyComplete, "HostLobbyComplete" }, // 3064506791
		{ &Z_Construct_UFunction_USBZLobby_HostMigrationSession, "HostMigrationSession" }, // 1245593130
		{ &Z_Construct_UFunction_USBZLobby_InitLobbyHostComplete, "InitLobbyHostComplete" }, // 3129465463
		{ &Z_Construct_UFunction_USBZLobby_JoinLobbyComplete, "JoinLobbyComplete" }, // 3853448366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_LocalState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_LocalState = { "LocalState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, LocalState), Z_Construct_UClass_USBZLobbyLocalState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_LocalState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_LocalState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_DefaultPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_DefaultPort = { "DefaultPort", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, DefaultPort), METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_DefaultPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_DefaultPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyClient = { "LobbyClient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, LobbyClient), Z_Construct_UClass_ASBZLobbyBeaconClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyHost = { "LobbyHost", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, LobbyHost), Z_Construct_UClass_ASBZLobbyBeaconHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyOnlineBeacon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyOnlineBeacon = { "LobbyOnlineBeacon", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, LobbyOnlineBeacon), Z_Construct_UClass_AOnlineBeaconHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyOnlineBeacon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyOnlineBeacon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseClient = { "BeaconActionPhaseClient", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, BeaconActionPhaseClient), Z_Construct_UClass_ASBZBeaconActionPhaseClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseHost = { "BeaconActionPhaseHost", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, BeaconActionPhaseHost), Z_Construct_UClass_ASBZBeaconActionPhaseHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobby_Statics::NewProp_ActionPhaseOnlineBeacon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobby" },
		{ "ModuleRelativePath", "Public/SBZLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLobby_Statics::NewProp_ActionPhaseOnlineBeacon = { "ActionPhaseOnlineBeacon", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobby, ActionPhaseOnlineBeacon), Z_Construct_UClass_AOnlineBeaconHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::NewProp_ActionPhaseOnlineBeacon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::NewProp_ActionPhaseOnlineBeacon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_LocalState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_DefaultPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_LobbyOnlineBeacon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_BeaconActionPhaseHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobby_Statics::NewProp_ActionPhaseOnlineBeacon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLobby_Statics::ClassParams = {
		&USBZLobby::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::PropPointers),
		0,
		0x001002AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLobby, 3913780773);
	template<> STARBREEZE_API UClass* StaticClass<USBZLobby>()
	{
		return USBZLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLobby(Z_Construct_UClass_USBZLobby, &USBZLobby::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
