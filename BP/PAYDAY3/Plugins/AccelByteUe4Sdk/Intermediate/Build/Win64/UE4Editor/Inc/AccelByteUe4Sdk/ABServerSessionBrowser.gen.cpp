// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerSessionBrowser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerSessionBrowser() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerSessionBrowser_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerSessionBrowser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserCreateRequest();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserRecentPlayerGetResultResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserAddPlayerResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserUpdateRequest();
// End Cross Module References
	DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionPrivate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
		P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSpectator);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_OtherSettings);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSessionPrivate(Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionPublic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
		P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_OtherSettings);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSessionPublic(Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionTypeSpecificByStruct)
	{
		P_GET_STRUCT(FAccelByteModelsSessionBrowserCreateRequest,Z_Param_CreateSessionRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSessionTypeSpecificByStruct(Z_Param_CreateSessionRequest,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByEnum)
	{
		P_GET_ENUM(EAccelByteSessionType,Z_Param_SessionType);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
		P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSpectator);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_OtherSettings);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSessionTypeSpecifiedByEnum(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionTypeString);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
		P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSpectator);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_OtherSettings);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSessionTypeSpecifiedByString(Z_Param_SessionTypeString,Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeEnum)
	{
		P_GET_ENUM(EAccelByteSessionType,Z_Param_SessionType);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameSessionsByTypeEnum(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeEnumAndMatchExist)
	{
		P_GET_ENUM(EAccelByteSessionType,Z_Param_SessionType);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchExist);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameSessionsByTypeEnumAndMatchExist(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,Z_Param_MatchExist,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionTypeString);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameSessionsByTypeString(Z_Param_SessionTypeString,Z_Param_GameMode,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeStringAndMatchExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionTypeString);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchExist);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameSessionsByTypeStringAndMatchExist(Z_Param_SessionTypeString,Z_Param_GameMode,Z_Param_MatchExist,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execGetRecentPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRecentPlayer(Z_Param_UserId,FDServerSessionBrowserRecentPlayerGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execJoinSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinSession(Z_Param_SessionId,Z_Param_Password,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execRegisterPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToAdd);
		P_GET_UBOOL(Z_Param_AsSpectator);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterPlayer(Z_Param_SessionId,Z_Param_PlayerToAdd,Z_Param_AsSpectator,FDServerSessionBrowserAddPlayerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execRemoveGameSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGameSession(Z_Param_SessionId,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execUnregisterPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToRemove);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterPlayer(Z_Param_SessionId,Z_Param_PlayerToRemove,FDServerSessionBrowserAddPlayerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execUpdateGameSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPlayerCount);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGameSession(Z_Param_SessionId,Z_Param_MaxPlayer,Z_Param_CurrentPlayerCount,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerSessionBrowser::execUpdateGameSessionByStruct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_STRUCT_REF(FAccelByteModelsSessionBrowserUpdateRequest,Z_Param_Out_UpdateSessionRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGameSessionByStruct(Z_Param_SessionId,Z_Param_Out_UpdateSessionRequest,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABServerSessionBrowser::StaticRegisterNativesUABServerSessionBrowser()
	{
		UClass* Class = UABServerSessionBrowser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSessionPrivate", &UABServerSessionBrowser::execCreateGameSessionPrivate },
			{ "CreateGameSessionPublic", &UABServerSessionBrowser::execCreateGameSessionPublic },
			{ "CreateGameSessionTypeSpecificByStruct", &UABServerSessionBrowser::execCreateGameSessionTypeSpecificByStruct },
			{ "CreateGameSessionTypeSpecifiedByEnum", &UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByEnum },
			{ "CreateGameSessionTypeSpecifiedByString", &UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByString },
			{ "GetGameSessionsByTypeEnum", &UABServerSessionBrowser::execGetGameSessionsByTypeEnum },
			{ "GetGameSessionsByTypeEnumAndMatchExist", &UABServerSessionBrowser::execGetGameSessionsByTypeEnumAndMatchExist },
			{ "GetGameSessionsByTypeString", &UABServerSessionBrowser::execGetGameSessionsByTypeString },
			{ "GetGameSessionsByTypeStringAndMatchExist", &UABServerSessionBrowser::execGetGameSessionsByTypeStringAndMatchExist },
			{ "GetRecentPlayer", &UABServerSessionBrowser::execGetRecentPlayer },
			{ "JoinSession", &UABServerSessionBrowser::execJoinSession },
			{ "RegisterPlayer", &UABServerSessionBrowser::execRegisterPlayer },
			{ "RemoveGameSession", &UABServerSessionBrowser::execRemoveGameSession },
			{ "UnregisterPlayer", &UABServerSessionBrowser::execUnregisterPlayer },
			{ "UpdateGameSession", &UABServerSessionBrowser::execUpdateGameSession },
			{ "UpdateGameSessionByStruct", &UABServerSessionBrowser::execUpdateGameSessionByStruct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics
	{
		struct ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms
		{
			FString GameMode;
			FString GameMapName;
			FString GameVersion;
			int32 BotCount;
			int32 MaxPlayer;
			int32 MaxSpectator;
			FString Password;
			FJsonObjectWrapper OtherSettings;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, GameMapName), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, GameVersion), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, BotCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, MaxPlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, MaxSpectator), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_BotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OtherSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionPrivate", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics
	{
		struct ABServerSessionBrowser_eventCreateGameSessionPublic_Parms
		{
			FString GameMode;
			FString GameMapName;
			FString GameVersion;
			int32 BotCount;
			int32 MaxPlayer;
			FJsonObjectWrapper OtherSettings;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, GameMapName), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, GameVersion), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, BotCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, MaxPlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_BotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_MaxPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OtherSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionPublic", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics
	{
		struct ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms
		{
			FAccelByteModelsSessionBrowserCreateRequest CreateSessionRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreateSessionRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_CreateSessionRequest = { "CreateSessionRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, CreateSessionRequest), Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserCreateRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_CreateSessionRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionTypeSpecificByStruct", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics
	{
		struct ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms
		{
			EAccelByteSessionType SessionType;
			FString GameMode;
			FString GameMapName;
			FString GameVersion;
			int32 BotCount;
			int32 MaxPlayer;
			int32 MaxSpectator;
			FString Password;
			FJsonObjectWrapper OtherSettings;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameMapName), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameVersion), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, BotCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, MaxPlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, MaxSpectator), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_BotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OtherSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionTypeSpecifiedByEnum", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics
	{
		struct ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms
		{
			FString SessionTypeString;
			FString GameMode;
			FString GameMapName;
			FString GameVersion;
			int32 BotCount;
			int32 MaxPlayer;
			int32 MaxSpectator;
			FString Password;
			FJsonObjectWrapper OtherSettings;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionTypeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionTypeString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, SessionTypeString), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameMapName), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameVersion), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, BotCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, MaxPlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, MaxSpectator), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_BotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OtherSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionTypeSpecifiedByString", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics
	{
		struct ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms
		{
			EAccelByteSessionType SessionType;
			FString GameMode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeEnum", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics
	{
		struct ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms
		{
			EAccelByteSessionType SessionType;
			FString GameMode;
			FString MatchExist;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchExist_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchExist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist = { "MatchExist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, MatchExist), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeEnumAndMatchExist", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics
	{
		struct ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms
		{
			FString SessionTypeString;
			FString GameMode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionTypeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionTypeString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, SessionTypeString), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeString", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics
	{
		struct ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms
		{
			FString SessionTypeString;
			FString GameMode;
			FString MatchExist;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionTypeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionTypeString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchExist_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchExist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, SessionTypeString), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, GameMode), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist = { "MatchExist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, MatchExist), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeStringAndMatchExist", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics
	{
		struct ABServerSessionBrowser_eventGetRecentPlayer_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserRecentPlayerGetResultResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetRecentPlayer", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventGetRecentPlayer_Parms), Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics
	{
		struct ABServerSessionBrowser_eventJoinSession_Parms
		{
			FString SessionId;
			FString Password;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "JoinSession", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventJoinSession_Parms), Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_JoinSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics
	{
		struct ABServerSessionBrowser_eventRegisterPlayer_Parms
		{
			FString SessionId;
			FString PlayerToAdd;
			bool AsSpectator;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerToAdd;
		static void NewProp_AsSpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd = { "PlayerToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, PlayerToAdd), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd_MetaData)) };
	void Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator_SetBit(void* Obj)
	{
		((ABServerSessionBrowser_eventRegisterPlayer_Parms*)Obj)->AsSpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator = { "AsSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABServerSessionBrowser_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserAddPlayerResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "RegisterPlayer", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventRegisterPlayer_Parms), Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics
	{
		struct ABServerSessionBrowser_eventRemoveGameSession_Parms
		{
			FString SessionId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRemoveGameSession_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRemoveGameSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRemoveGameSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "RemoveGameSession", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventRemoveGameSession_Parms), Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics
	{
		struct ABServerSessionBrowser_eventUnregisterPlayer_Parms
		{
			FString SessionId;
			FString PlayerToRemove;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerToRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove = { "PlayerToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, PlayerToRemove), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserAddPlayerResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "UnregisterPlayer", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventUnregisterPlayer_Parms), Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics
	{
		struct ABServerSessionBrowser_eventUpdateGameSession_Parms
		{
			FString SessionId;
			int32 MaxPlayer;
			int32 CurrentPlayerCount;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, MaxPlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_CurrentPlayerCount = { "CurrentPlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, CurrentPlayerCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_MaxPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_CurrentPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "UpdateGameSession", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventUpdateGameSession_Parms), Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics
	{
		struct ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms
		{
			FString SessionId;
			FAccelByteModelsSessionBrowserUpdateRequest UpdateSessionRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateSessionRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateSessionRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest = { "UpdateSessionRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, UpdateSessionRequest), Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserUpdateRequest, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "UpdateGameSessionByStruct", nullptr, nullptr, sizeof(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms), Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerSessionBrowser_NoRegister()
	{
		return UABServerSessionBrowser::StaticClass();
	}
	struct Z_Construct_UClass_UABServerSessionBrowser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerSessionBrowser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerSessionBrowser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate, "CreateGameSessionPrivate" }, // 4266543732
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic, "CreateGameSessionPublic" }, // 820532962
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct, "CreateGameSessionTypeSpecificByStruct" }, // 87172855
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum, "CreateGameSessionTypeSpecifiedByEnum" }, // 4049571908
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString, "CreateGameSessionTypeSpecifiedByString" }, // 1394033401
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum, "GetGameSessionsByTypeEnum" }, // 1262808465
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist, "GetGameSessionsByTypeEnumAndMatchExist" }, // 3126967385
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString, "GetGameSessionsByTypeString" }, // 18887182
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist, "GetGameSessionsByTypeStringAndMatchExist" }, // 2221957695
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer, "GetRecentPlayer" }, // 2223833782
		{ &Z_Construct_UFunction_UABServerSessionBrowser_JoinSession, "JoinSession" }, // 2305515283
		{ &Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer, "RegisterPlayer" }, // 2408802079
		{ &Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession, "RemoveGameSession" }, // 1636378646
		{ &Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer, "UnregisterPlayer" }, // 4140402305
		{ &Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession, "UpdateGameSession" }, // 1110126880
		{ &Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct, "UpdateGameSessionByStruct" }, // 2665304228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerSessionBrowser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerSessionBrowser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerSessionBrowser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerSessionBrowser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerSessionBrowser_Statics::ClassParams = {
		&UABServerSessionBrowser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABServerSessionBrowser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerSessionBrowser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerSessionBrowser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerSessionBrowser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerSessionBrowser, 1613375404);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerSessionBrowser>()
	{
		return UABServerSessionBrowser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerSessionBrowser(Z_Construct_UClass_UABServerSessionBrowser, &UABServerSessionBrowser::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerSessionBrowser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerSessionBrowser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
