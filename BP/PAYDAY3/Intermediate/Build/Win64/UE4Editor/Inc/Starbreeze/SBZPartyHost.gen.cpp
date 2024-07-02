// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyHost() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyHost_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyHost();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPartyHostUpdatedDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMemberInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZPartyHost::execBroadcastPartyLeftLobby)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastPartyLeftLobby(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyHost::execBroadcastPartyTravelled)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastPartyTravelled(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyHost::execFirePartyUpdated)
	{
		P_GET_OBJECT(APlayerState,Z_Param_ChangedPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FirePartyUpdated(Z_Param_ChangedPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyHost::execHandlePartyLeaveLobbyTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePartyLeaveLobbyTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyHost::execHandlePartyTravelTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePartyTravelTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyHost::execNotifyClientConnectedToLobby)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PartyMemberNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientConnectedToLobby(Z_Param_Out_PartyMemberNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyHost::execNotifyClientFailedConnectionToLobby)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PartyMemberNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientFailedConnectionToLobby(Z_Param_Out_PartyMemberNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyHost::execNotifyClientLeftLobby)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PartyMemberId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientLeftLobby(Z_Param_Out_PartyMemberId);
		P_NATIVE_END;
	}
	void USBZPartyHost::StaticRegisterNativesUSBZPartyHost()
	{
		UClass* Class = USBZPartyHost::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastPartyLeftLobby", &USBZPartyHost::execBroadcastPartyLeftLobby },
			{ "BroadcastPartyTravelled", &USBZPartyHost::execBroadcastPartyTravelled },
			{ "FirePartyUpdated", &USBZPartyHost::execFirePartyUpdated },
			{ "HandlePartyLeaveLobbyTimeout", &USBZPartyHost::execHandlePartyLeaveLobbyTimeout },
			{ "HandlePartyTravelTimeout", &USBZPartyHost::execHandlePartyTravelTimeout },
			{ "NotifyClientConnectedToLobby", &USBZPartyHost::execNotifyClientConnectedToLobby },
			{ "NotifyClientFailedConnectionToLobby", &USBZPartyHost::execNotifyClientFailedConnectionToLobby },
			{ "NotifyClientLeftLobby", &USBZPartyHost::execNotifyClientLeftLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics
	{
		struct SBZPartyHost_eventBroadcastPartyLeftLobby_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyHost_eventBroadcastPartyLeftLobby_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "BroadcastPartyLeftLobby", nullptr, nullptr, sizeof(SBZPartyHost_eventBroadcastPartyLeftLobby_Parms), Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics
	{
		struct SBZPartyHost_eventBroadcastPartyTravelled_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyHost_eventBroadcastPartyTravelled_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "BroadcastPartyTravelled", nullptr, nullptr, sizeof(SBZPartyHost_eventBroadcastPartyTravelled_Parms), Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics
	{
		struct SBZPartyHost_eventFirePartyUpdated_Parms
		{
			APlayerState* ChangedPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChangedPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::NewProp_ChangedPlayerState = { "ChangedPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyHost_eventFirePartyUpdated_Parms, ChangedPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::NewProp_ChangedPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "FirePartyUpdated", nullptr, nullptr, sizeof(SBZPartyHost_eventFirePartyUpdated_Parms), Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "HandlePartyLeaveLobbyTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "HandlePartyTravelTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics
	{
		struct SBZPartyHost_eventNotifyClientConnectedToLobby_Parms
		{
			FUniqueNetIdRepl PartyMemberNetId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMemberNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyMemberNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::NewProp_PartyMemberNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::NewProp_PartyMemberNetId = { "PartyMemberNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyHost_eventNotifyClientConnectedToLobby_Parms, PartyMemberNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::NewProp_PartyMemberNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::NewProp_PartyMemberNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::NewProp_PartyMemberNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "NotifyClientConnectedToLobby", nullptr, nullptr, sizeof(SBZPartyHost_eventNotifyClientConnectedToLobby_Parms), Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics
	{
		struct SBZPartyHost_eventNotifyClientFailedConnectionToLobby_Parms
		{
			FUniqueNetIdRepl PartyMemberNetId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMemberNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyMemberNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::NewProp_PartyMemberNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::NewProp_PartyMemberNetId = { "PartyMemberNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyHost_eventNotifyClientFailedConnectionToLobby_Parms, PartyMemberNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::NewProp_PartyMemberNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::NewProp_PartyMemberNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::NewProp_PartyMemberNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "NotifyClientFailedConnectionToLobby", nullptr, nullptr, sizeof(SBZPartyHost_eventNotifyClientFailedConnectionToLobby_Parms), Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics
	{
		struct SBZPartyHost_eventNotifyClientLeftLobby_Parms
		{
			FUniqueNetIdRepl PartyMemberId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMemberId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyMemberId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::NewProp_PartyMemberId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::NewProp_PartyMemberId = { "PartyMemberId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyHost_eventNotifyClientLeftLobby_Parms, PartyMemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::NewProp_PartyMemberId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::NewProp_PartyMemberId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::NewProp_PartyMemberId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyHost, nullptr, "NotifyClientLeftLobby", nullptr, nullptr, sizeof(SBZPartyHost_eventNotifyClientLeftLobby_Parms), Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPartyHost_NoRegister()
	{
		return USBZPartyHost::StaticClass();
	}
	struct Z_Construct_UClass_USBZPartyHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPartyJoined_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyJoined;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPartyUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyUpdated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyTravelTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartyTravelTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyDisconnectTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartyDisconnectTimeout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TravellingMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravellingMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TravellingMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelTimeoutTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TravelTimeoutTimer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeavingMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeavingMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeavingMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveLobbyTimeoutTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaveLobbyTimeoutTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPartyHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPartyHost_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPartyHost_BroadcastPartyLeftLobby, "BroadcastPartyLeftLobby" }, // 3931198135
		{ &Z_Construct_UFunction_USBZPartyHost_BroadcastPartyTravelled, "BroadcastPartyTravelled" }, // 281683224
		{ &Z_Construct_UFunction_USBZPartyHost_FirePartyUpdated, "FirePartyUpdated" }, // 4154753129
		{ &Z_Construct_UFunction_USBZPartyHost_HandlePartyLeaveLobbyTimeout, "HandlePartyLeaveLobbyTimeout" }, // 1749605391
		{ &Z_Construct_UFunction_USBZPartyHost_HandlePartyTravelTimeout, "HandlePartyTravelTimeout" }, // 1062776664
		{ &Z_Construct_UFunction_USBZPartyHost_NotifyClientConnectedToLobby, "NotifyClientConnectedToLobby" }, // 2179708904
		{ &Z_Construct_UFunction_USBZPartyHost_NotifyClientFailedConnectionToLobby, "NotifyClientFailedConnectionToLobby" }, // 1034544350
		{ &Z_Construct_UFunction_USBZPartyHost_NotifyClientLeftLobby, "NotifyClientLeftLobby" }, // 3058608007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPartyHost.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyJoined_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyJoined = { "OnPartyJoined", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, OnPartyJoined), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyJoined_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyJoined_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyUpdated = { "OnPartyUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, OnPartyUpdated), Z_Construct_UDelegateFunction_Starbreeze_OnPartyHostUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyUpdated_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyMembers_Inner = { "PartyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPartyMemberInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, PartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyTravelTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyTravelTimeout = { "PartyTravelTimeout", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, PartyTravelTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyTravelTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyTravelTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyDisconnectTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyDisconnectTimeout = { "PartyDisconnectTimeout", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, PartyDisconnectTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyDisconnectTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyDisconnectTimeout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravellingMembers_Inner = { "TravellingMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravellingMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravellingMembers = { "TravellingMembers", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, TravellingMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravellingMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravellingMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravelTimeoutTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravelTimeoutTimer = { "TravelTimeoutTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, TravelTimeoutTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravelTimeoutTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravelTimeoutTimer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeavingMembers_Inner = { "LeavingMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeavingMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeavingMembers = { "LeavingMembers", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, LeavingMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeavingMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeavingMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeaveLobbyTimeoutTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyHost" },
		{ "ModuleRelativePath", "Public/SBZPartyHost.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeaveLobbyTimeoutTimer = { "LeaveLobbyTimeoutTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyHost, LeaveLobbyTimeoutTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeaveLobbyTimeoutTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeaveLobbyTimeoutTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPartyHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyJoined,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_OnPartyUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyTravelTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_PartyDisconnectTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravellingMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravellingMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_TravelTimeoutTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeavingMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeavingMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyHost_Statics::NewProp_LeaveLobbyTimeoutTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPartyHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPartyHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPartyHost_Statics::ClassParams = {
		&USBZPartyHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPartyHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_USBZPartyHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPartyHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPartyHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPartyHost, 2797534341);
	template<> STARBREEZE_API UClass* StaticClass<USBZPartyHost>()
	{
		return USBZPartyHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPartyHost(Z_Construct_UClass_USBZPartyHost, &USBZPartyHost::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPartyHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPartyHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
