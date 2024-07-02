// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZJobOverviewSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZJobOverviewSync() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZJobOverviewSync_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZJobOverviewSync();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray();
// End Cross Module References
	DEFINE_FUNCTION(ASBZJobOverviewSync::execClientMoveToBlackScreen)
	{
		P_GET_ENUM(EBlackScreenTransitionType,Z_Param_BlackScreenTransitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientMoveToBlackScreen(EBlackScreenTransitionType(Z_Param_BlackScreenTransitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execClientMoveToBlackScreenReceived)
	{
		P_GET_ENUM(EBlackScreenTransitionType,Z_Param_BlackScreenTransitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientMoveToBlackScreenReceived_Implementation(EBlackScreenTransitionType(Z_Param_BlackScreenTransitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execClientMoveToBlackScreenSinglePlayer)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_GET_ENUM(EBlackScreenTransitionType,Z_Param_BlackScreenTransitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientMoveToBlackScreenSinglePlayer(Z_Param_Out_PlayerId,EBlackScreenTransitionType(Z_Param_BlackScreenTransitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execClientMoveToBlackScreenSinglePlayerReceived)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_ENUM(EBlackScreenTransitionType,Z_Param_BlackScreenTransitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientMoveToBlackScreenSinglePlayerReceived_Implementation(Z_Param_PlayerId,EBlackScreenTransitionType(Z_Param_BlackScreenTransitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execClientWaitsForReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientWaitsForReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execClientWaitsForReadyReceived)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientWaitsForReadyReceived_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execNotifyActionPhaseReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyActionPhaseReady_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ReadyTimeoutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientCurrentReadyTimeoutTime(Z_Param_ReadyTimeoutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTimeReceived)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ReadyTimeoutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientCurrentReadyTimeoutTimeReceived_Implementation(Z_Param_ReadyTimeoutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTimeSinglePlayer)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ReadyTimeoutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientCurrentReadyTimeoutTimeSinglePlayer(Z_Param_Out_PlayerId,Z_Param_ReadyTimeoutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ReadyTimeoutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Implementation(Z_Param_PlayerId,Z_Param_ReadyTimeoutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execNotifyClientMissionEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientMissionEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execNotifyClientProceedToActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientProceedToActionPhase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execSendPlayerJobOverviewReady)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerJobOverviewReady(Z_Param_Out_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execSendServerPlayerReadyToEnterActionPhase)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendServerPlayerReadyToEnterActionPhase(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execServerPlayerReadyToEnterActionPhaseReceived)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayerReadyToEnterActionPhaseReceived_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execServerSetPlayerJobOverviewReady)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPlayerJobOverviewReady_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execUpdateReadyClientStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateReadyClientStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZJobOverviewSync::execUpdateReadyClientStatusReceived)
	{
		P_GET_STRUCT(FSBZPlayersReadyStatusStateArray,Z_Param_PlayersReadyStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateReadyClientStatusReceived_Implementation(Z_Param_PlayersReadyStatus);
		P_NATIVE_END;
	}
	static FName NAME_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived = FName(TEXT("ClientMoveToBlackScreenReceived"));
	void ASBZJobOverviewSync::ClientMoveToBlackScreenReceived(EBlackScreenTransitionType BlackScreenTransitionType)
	{
		SBZJobOverviewSync_eventClientMoveToBlackScreenReceived_Parms Parms;
		Parms.BlackScreenTransitionType=BlackScreenTransitionType;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived),&Parms);
	}
	static FName NAME_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived = FName(TEXT("ClientMoveToBlackScreenSinglePlayerReceived"));
	void ASBZJobOverviewSync::ClientMoveToBlackScreenSinglePlayerReceived(FUniqueNetIdRepl const& PlayerId, EBlackScreenTransitionType BlackScreenTransitionType)
	{
		SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayerReceived_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.BlackScreenTransitionType=BlackScreenTransitionType;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived),&Parms);
	}
	static FName NAME_ASBZJobOverviewSync_ClientWaitsForReadyReceived = FName(TEXT("ClientWaitsForReadyReceived"));
	void ASBZJobOverviewSync::ClientWaitsForReadyReceived(FUniqueNetIdRepl const& PlayerId)
	{
		SBZJobOverviewSync_eventClientWaitsForReadyReceived_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_ClientWaitsForReadyReceived),&Parms);
	}
	static FName NAME_ASBZJobOverviewSync_NotifyActionPhaseReady = FName(TEXT("NotifyActionPhaseReady"));
	void ASBZJobOverviewSync::NotifyActionPhaseReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_NotifyActionPhaseReady),NULL);
	}
	static FName NAME_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived = FName(TEXT("NotifyClientCurrentReadyTimeoutTimeReceived"));
	void ASBZJobOverviewSync::NotifyClientCurrentReadyTimeoutTimeReceived(int32 ReadyTimeoutTime)
	{
		SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeReceived_Parms Parms;
		Parms.ReadyTimeoutTime=ReadyTimeoutTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived),&Parms);
	}
	static FName NAME_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived = FName(TEXT("NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived"));
	void ASBZJobOverviewSync::NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived(FUniqueNetIdRepl const& PlayerId, int32 ReadyTimeoutTime)
	{
		SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.ReadyTimeoutTime=ReadyTimeoutTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived),&Parms);
	}
	static FName NAME_ASBZJobOverviewSync_NotifyClientMissionEnd = FName(TEXT("NotifyClientMissionEnd"));
	void ASBZJobOverviewSync::NotifyClientMissionEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_NotifyClientMissionEnd),NULL);
	}
	static FName NAME_ASBZJobOverviewSync_NotifyClientProceedToActionPhase = FName(TEXT("NotifyClientProceedToActionPhase"));
	void ASBZJobOverviewSync::NotifyClientProceedToActionPhase()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_NotifyClientProceedToActionPhase),NULL);
	}
	static FName NAME_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived = FName(TEXT("ServerPlayerReadyToEnterActionPhaseReceived"));
	void ASBZJobOverviewSync::ServerPlayerReadyToEnterActionPhaseReceived(FUniqueNetIdRepl const& PlayerId)
	{
		SBZJobOverviewSync_eventServerPlayerReadyToEnterActionPhaseReceived_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived),&Parms);
	}
	static FName NAME_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady = FName(TEXT("ServerSetPlayerJobOverviewReady"));
	void ASBZJobOverviewSync::ServerSetPlayerJobOverviewReady(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZJobOverviewSync_eventServerSetPlayerJobOverviewReady_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady),&Parms);
	}
	static FName NAME_ASBZJobOverviewSync_UpdateReadyClientStatusReceived = FName(TEXT("UpdateReadyClientStatusReceived"));
	void ASBZJobOverviewSync::UpdateReadyClientStatusReceived(FSBZPlayersReadyStatusStateArray const& PlayersReadyStatus)
	{
		SBZJobOverviewSync_eventUpdateReadyClientStatusReceived_Parms Parms;
		Parms.PlayersReadyStatus=PlayersReadyStatus;
		ProcessEvent(FindFunctionChecked(NAME_ASBZJobOverviewSync_UpdateReadyClientStatusReceived),&Parms);
	}
	void ASBZJobOverviewSync::StaticRegisterNativesASBZJobOverviewSync()
	{
		UClass* Class = ASBZJobOverviewSync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientMoveToBlackScreen", &ASBZJobOverviewSync::execClientMoveToBlackScreen },
			{ "ClientMoveToBlackScreenReceived", &ASBZJobOverviewSync::execClientMoveToBlackScreenReceived },
			{ "ClientMoveToBlackScreenSinglePlayer", &ASBZJobOverviewSync::execClientMoveToBlackScreenSinglePlayer },
			{ "ClientMoveToBlackScreenSinglePlayerReceived", &ASBZJobOverviewSync::execClientMoveToBlackScreenSinglePlayerReceived },
			{ "ClientWaitsForReady", &ASBZJobOverviewSync::execClientWaitsForReady },
			{ "ClientWaitsForReadyReceived", &ASBZJobOverviewSync::execClientWaitsForReadyReceived },
			{ "NotifyActionPhaseReady", &ASBZJobOverviewSync::execNotifyActionPhaseReady },
			{ "NotifyClientCurrentReadyTimeoutTime", &ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTime },
			{ "NotifyClientCurrentReadyTimeoutTimeReceived", &ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTimeReceived },
			{ "NotifyClientCurrentReadyTimeoutTimeSinglePlayer", &ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTimeSinglePlayer },
			{ "NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived", &ASBZJobOverviewSync::execNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived },
			{ "NotifyClientMissionEnd", &ASBZJobOverviewSync::execNotifyClientMissionEnd },
			{ "NotifyClientProceedToActionPhase", &ASBZJobOverviewSync::execNotifyClientProceedToActionPhase },
			{ "SendPlayerJobOverviewReady", &ASBZJobOverviewSync::execSendPlayerJobOverviewReady },
			{ "SendServerPlayerReadyToEnterActionPhase", &ASBZJobOverviewSync::execSendServerPlayerReadyToEnterActionPhase },
			{ "ServerPlayerReadyToEnterActionPhaseReceived", &ASBZJobOverviewSync::execServerPlayerReadyToEnterActionPhaseReceived },
			{ "ServerSetPlayerJobOverviewReady", &ASBZJobOverviewSync::execServerSetPlayerJobOverviewReady },
			{ "UpdateReadyClientStatus", &ASBZJobOverviewSync::execUpdateReadyClientStatus },
			{ "UpdateReadyClientStatusReceived", &ASBZJobOverviewSync::execUpdateReadyClientStatusReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics
	{
		struct SBZJobOverviewSync_eventClientMoveToBlackScreen_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::NewProp_BlackScreenTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::NewProp_BlackScreenTransitionType = { "BlackScreenTransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventClientMoveToBlackScreen_Parms, BlackScreenTransitionType), Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::NewProp_BlackScreenTransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::NewProp_BlackScreenTransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ClientMoveToBlackScreen", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventClientMoveToBlackScreen_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlackScreenTransitionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlackScreenTransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::NewProp_BlackScreenTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::NewProp_BlackScreenTransitionType = { "BlackScreenTransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventClientMoveToBlackScreenReceived_Parms, BlackScreenTransitionType), Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::NewProp_BlackScreenTransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::NewProp_BlackScreenTransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ClientMoveToBlackScreenReceived", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventClientMoveToBlackScreenReceived_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics
	{
		struct SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayer_Parms
		{
			FUniqueNetIdRepl PlayerId;
			EBlackScreenTransitionType BlackScreenTransitionType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlackScreenTransitionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlackScreenTransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_BlackScreenTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_BlackScreenTransitionType = { "BlackScreenTransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayer_Parms, BlackScreenTransitionType), Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_BlackScreenTransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::NewProp_BlackScreenTransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ClientMoveToBlackScreenSinglePlayer", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayer_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlackScreenTransitionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlackScreenTransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayerReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_BlackScreenTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_BlackScreenTransitionType = { "BlackScreenTransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayerReceived_Parms, BlackScreenTransitionType), Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_BlackScreenTransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::NewProp_BlackScreenTransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ClientMoveToBlackScreenSinglePlayerReceived", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayerReceived_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ClientWaitsForReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventClientWaitsForReadyReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ClientWaitsForReadyReceived", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventClientWaitsForReadyReceived_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "NotifyActionPhaseReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics
	{
		struct SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTime_Parms
		{
			int32 ReadyTimeoutTime;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReadyTimeoutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::NewProp_ReadyTimeoutTime = { "ReadyTimeoutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTime_Parms, ReadyTimeoutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::NewProp_ReadyTimeoutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "NotifyClientCurrentReadyTimeoutTime", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTime_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReadyTimeoutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::NewProp_ReadyTimeoutTime = { "ReadyTimeoutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeReceived_Parms, ReadyTimeoutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::NewProp_ReadyTimeoutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "NotifyClientCurrentReadyTimeoutTimeReceived", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeReceived_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics
	{
		struct SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayer_Parms
		{
			FUniqueNetIdRepl PlayerId;
			int32 ReadyTimeoutTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReadyTimeoutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::NewProp_ReadyTimeoutTime = { "ReadyTimeoutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayer_Parms, ReadyTimeoutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::NewProp_ReadyTimeoutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "NotifyClientCurrentReadyTimeoutTimeSinglePlayer", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayer_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReadyTimeoutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::NewProp_ReadyTimeoutTime = { "ReadyTimeoutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Parms, ReadyTimeoutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::NewProp_ReadyTimeoutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "NotifyClientMissionEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "NotifyClientProceedToActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics
	{
		struct SBZJobOverviewSync_eventSendPlayerJobOverviewReady_Parms
		{
			FUniqueNetIdRepl InPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventSendPlayerJobOverviewReady_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "SendPlayerJobOverviewReady", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventSendPlayerJobOverviewReady_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics
	{
		struct SBZJobOverviewSync_eventSendServerPlayerReadyToEnterActionPhase_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventSendServerPlayerReadyToEnterActionPhase_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "SendServerPlayerReadyToEnterActionPhase", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventSendServerPlayerReadyToEnterActionPhase_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventServerPlayerReadyToEnterActionPhaseReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ServerPlayerReadyToEnterActionPhaseReceived", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventServerPlayerReadyToEnterActionPhaseReceived_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventServerSetPlayerJobOverviewReady_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "ServerSetPlayerJobOverviewReady", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventServerSetPlayerJobOverviewReady_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "UpdateReadyClientStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersReadyStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayersReadyStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::NewProp_PlayersReadyStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::NewProp_PlayersReadyStatus = { "PlayersReadyStatus", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewSync_eventUpdateReadyClientStatusReceived_Parms, PlayersReadyStatus), Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::NewProp_PlayersReadyStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::NewProp_PlayersReadyStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::NewProp_PlayersReadyStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZJobOverviewSync, nullptr, "UpdateReadyClientStatusReceived", nullptr, nullptr, sizeof(SBZJobOverviewSync_eventUpdateReadyClientStatusReceived_Parms), Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZJobOverviewSync_NoRegister()
	{
		return ASBZJobOverviewSync::StaticClass();
	}
	struct Z_Construct_UClass_ASBZJobOverviewSync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZJobOverviewSync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZJobOverviewSync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreen, "ClientMoveToBlackScreen" }, // 2916573595
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenReceived, "ClientMoveToBlackScreenReceived" }, // 416951787
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayer, "ClientMoveToBlackScreenSinglePlayer" }, // 4152719398
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ClientMoveToBlackScreenSinglePlayerReceived, "ClientMoveToBlackScreenSinglePlayerReceived" }, // 708089586
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReady, "ClientWaitsForReady" }, // 3380460082
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ClientWaitsForReadyReceived, "ClientWaitsForReadyReceived" }, // 431598463
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_NotifyActionPhaseReady, "NotifyActionPhaseReady" }, // 3273431019
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTime, "NotifyClientCurrentReadyTimeoutTime" }, // 2051509608
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeReceived, "NotifyClientCurrentReadyTimeoutTimeReceived" }, // 1187014617
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayer, "NotifyClientCurrentReadyTimeoutTimeSinglePlayer" }, // 2425685704
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived, "NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived" }, // 3740657783
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientMissionEnd, "NotifyClientMissionEnd" }, // 2592072962
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_NotifyClientProceedToActionPhase, "NotifyClientProceedToActionPhase" }, // 1179361010
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_SendPlayerJobOverviewReady, "SendPlayerJobOverviewReady" }, // 2940675706
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_SendServerPlayerReadyToEnterActionPhase, "SendServerPlayerReadyToEnterActionPhase" }, // 1829118040
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ServerPlayerReadyToEnterActionPhaseReceived, "ServerPlayerReadyToEnterActionPhaseReceived" }, // 3120415189
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_ServerSetPlayerJobOverviewReady, "ServerSetPlayerJobOverviewReady" }, // 1143837050
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatus, "UpdateReadyClientStatus" }, // 1336005947
		{ &Z_Construct_UFunction_ASBZJobOverviewSync_UpdateReadyClientStatusReceived, "UpdateReadyClientStatusReceived" }, // 3924466944
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZJobOverviewSync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZJobOverviewSync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZJobOverviewSync.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZJobOverviewSync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZJobOverviewSync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZJobOverviewSync_Statics::ClassParams = {
		&ASBZJobOverviewSync::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZJobOverviewSync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZJobOverviewSync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZJobOverviewSync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZJobOverviewSync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZJobOverviewSync, 1010980994);
	template<> STARBREEZE_API UClass* StaticClass<ASBZJobOverviewSync>()
	{
		return ASBZJobOverviewSync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZJobOverviewSync(Z_Construct_UClass_ASBZJobOverviewSync, &ASBZJobOverviewSync::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZJobOverviewSync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZJobOverviewSync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
