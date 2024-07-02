// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZParty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZParty() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZParty_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZParty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSessionParams();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyHost_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZParty::execCancelPartyRestore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelPartyRestore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execGetPartyData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPartyData*)Z_Param__Result=P_THIS->GetPartyData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execHandleGameStateEnter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateEnter(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execHandleGameStateLeft)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateLeft(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execHandleLostConnectionToPartyHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToPartyHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execHostPartyComplete)
	{
		P_GET_ENUM_REF(ESBZOnlineCode,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostPartyComplete((ESBZOnlineCode&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execHostPartySession)
	{
		P_GET_STRUCT_REF(FSBZOnlineSessionParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostPartySession(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execJoinPartyComplete)
	{
		P_GET_ENUM_REF(ESBZOnlineCode,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinPartyComplete((ESBZOnlineCode&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParty::execUpdatePartyState)
	{
		P_GET_STRUCT_REF(FSBZPartyData,Z_Param_Out_InPartyState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePartyState(Z_Param_Out_InPartyState);
		P_NATIVE_END;
	}
	void USBZParty::StaticRegisterNativesUSBZParty()
	{
		UClass* Class = USBZParty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelPartyRestore", &USBZParty::execCancelPartyRestore },
			{ "GetPartyData", &USBZParty::execGetPartyData },
			{ "HandleGameStateEnter", &USBZParty::execHandleGameStateEnter },
			{ "HandleGameStateLeft", &USBZParty::execHandleGameStateLeft },
			{ "HandleLostConnectionToPartyHost", &USBZParty::execHandleLostConnectionToPartyHost },
			{ "HostPartyComplete", &USBZParty::execHostPartyComplete },
			{ "HostPartySession", &USBZParty::execHostPartySession },
			{ "JoinPartyComplete", &USBZParty::execJoinPartyComplete },
			{ "UpdatePartyState", &USBZParty::execUpdatePartyState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZParty_CancelPartyRestore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_CancelPartyRestore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_CancelPartyRestore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "CancelPartyRestore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_CancelPartyRestore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_CancelPartyRestore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_CancelPartyRestore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_CancelPartyRestore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_GetPartyData_Statics
	{
		struct SBZParty_eventGetPartyData_Parms
		{
			FSBZPartyData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParty_GetPartyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParty_eventGetPartyData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPartyData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParty_GetPartyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_GetPartyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_GetPartyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_GetPartyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "GetPartyData", nullptr, nullptr, sizeof(SBZParty_eventGetPartyData_Parms), Z_Construct_UFunction_USBZParty_GetPartyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_GetPartyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_GetPartyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_GetPartyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_GetPartyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_GetPartyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics
	{
		struct SBZParty_eventHandleGameStateEnter_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParty_eventHandleGameStateEnter_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "HandleGameStateEnter", nullptr, nullptr, sizeof(SBZParty_eventHandleGameStateEnter_Parms), Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_HandleGameStateEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_HandleGameStateEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics
	{
		struct SBZParty_eventHandleGameStateLeft_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParty_eventHandleGameStateLeft_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "HandleGameStateLeft", nullptr, nullptr, sizeof(SBZParty_eventHandleGameStateLeft_Parms), Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_HandleGameStateLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_HandleGameStateLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "HandleLostConnectionToPartyHost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics
	{
		struct SBZParty_eventHostPartyComplete_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParty_eventHostPartyComplete_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "HostPartyComplete", nullptr, nullptr, sizeof(SBZParty_eventHostPartyComplete_Parms), Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_HostPartyComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_HostPartyComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_HostPartySession_Statics
	{
		struct SBZParty_eventHostPartySession_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_HostPartySession_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParty_HostPartySession_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParty_eventHostPartySession_Parms, Params), Z_Construct_UScriptStruct_FSBZOnlineSessionParams, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_HostPartySession_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HostPartySession_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParty_HostPartySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_HostPartySession_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_HostPartySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_HostPartySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "HostPartySession", nullptr, nullptr, sizeof(SBZParty_eventHostPartySession_Parms), Z_Construct_UFunction_USBZParty_HostPartySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HostPartySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_HostPartySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_HostPartySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_HostPartySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_HostPartySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics
	{
		struct SBZParty_eventJoinPartyComplete_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParty_eventJoinPartyComplete_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "JoinPartyComplete", nullptr, nullptr, sizeof(SBZParty_eventJoinPartyComplete_Parms), Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_JoinPartyComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_JoinPartyComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics
	{
		struct SBZParty_eventUpdatePartyState_Parms
		{
			FSBZPartyData InPartyState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPartyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPartyState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::NewProp_InPartyState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::NewProp_InPartyState = { "InPartyState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParty_eventUpdatePartyState_Parms, InPartyState), Z_Construct_UScriptStruct_FSBZPartyData, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::NewProp_InPartyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::NewProp_InPartyState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::NewProp_InPartyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParty, nullptr, "UpdatePartyState", nullptr, nullptr, sizeof(SBZParty_eventUpdatePartyState_Parms), Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParty_UpdatePartyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParty_UpdatePartyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZParty_NoRegister()
	{
		return USBZParty::StaticClass();
	}
	struct Z_Construct_UClass_USBZParty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPartyHostEnteredMatchmaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventPartyHostEnteredMatchmaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPartyHostEnteredLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventPartyHostEnteredLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPartyHostEnteredMainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventPartyHostEnteredMainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyRestoreTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartyRestoreTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZParty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZParty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZParty_CancelPartyRestore, "CancelPartyRestore" }, // 544181873
		{ &Z_Construct_UFunction_USBZParty_GetPartyData, "GetPartyData" }, // 1892224168
		{ &Z_Construct_UFunction_USBZParty_HandleGameStateEnter, "HandleGameStateEnter" }, // 3734872905
		{ &Z_Construct_UFunction_USBZParty_HandleGameStateLeft, "HandleGameStateLeft" }, // 2796705512
		{ &Z_Construct_UFunction_USBZParty_HandleLostConnectionToPartyHost, "HandleLostConnectionToPartyHost" }, // 2174934154
		{ &Z_Construct_UFunction_USBZParty_HostPartyComplete, "HostPartyComplete" }, // 750641715
		{ &Z_Construct_UFunction_USBZParty_HostPartySession, "HostPartySession" }, // 2761599387
		{ &Z_Construct_UFunction_USBZParty_JoinPartyComplete, "JoinPartyComplete" }, // 3963261023
		{ &Z_Construct_UFunction_USBZParty_UpdatePartyState, "UpdatePartyState" }, // 321058095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZParty.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMatchmaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMatchmaking = { "EventPartyHostEnteredMatchmaking", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, EventPartyHostEnteredMatchmaking), Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMatchmaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMatchmaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredLobby = { "EventPartyHostEnteredLobby", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, EventPartyHostEnteredLobby), Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMainMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMainMenu = { "EventPartyHostEnteredMainMenu", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, EventPartyHostEnteredMainMenu), Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_PartyClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_PartyClient = { "PartyClient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, PartyClient), Z_Construct_UClass_USBZPartyClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_PartyClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_PartyClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_PartyHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_PartyHost = { "PartyHost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, PartyHost), Z_Construct_UClass_USBZPartyHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_PartyHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_PartyHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, State), Z_Construct_UScriptStruct_FSBZPartyData, METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_DefaultPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_DefaultPort = { "DefaultPort", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, DefaultPort), METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_DefaultPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_DefaultPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParty_Statics::NewProp_PartyRestoreTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZParty" },
		{ "ModuleRelativePath", "Public/SBZParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZParty_Statics::NewProp_PartyRestoreTimeout = { "PartyRestoreTimeout", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZParty, PartyRestoreTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::NewProp_PartyRestoreTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::NewProp_PartyRestoreTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMatchmaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_EventPartyHostEnteredMainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_PartyClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_PartyHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_DefaultPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZParty_Statics::NewProp_PartyRestoreTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZParty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZParty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZParty_Statics::ClassParams = {
		&USBZParty::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZParty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::PropPointers),
		0,
		0x009002AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZParty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZParty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZParty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZParty, 2654409788);
	template<> STARBREEZE_API UClass* StaticClass<USBZParty>()
	{
		return USBZParty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZParty(Z_Construct_UClass_USBZParty, &USBZParty::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZParty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZParty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
