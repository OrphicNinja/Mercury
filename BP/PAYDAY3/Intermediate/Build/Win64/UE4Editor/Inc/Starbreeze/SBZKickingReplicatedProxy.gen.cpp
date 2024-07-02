// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKickingReplicatedProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKickingReplicatedProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZKickingReplicatedProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZKickingReplicatedProxy();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZKickingMode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZKickingError();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKickingInfo();
// End Cross Module References
	DEFINE_FUNCTION(ASBZKickingReplicatedProxy::execInitiateKicking)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerIdToKick);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerProposingKick);
		P_GET_ENUM(ESBZKickingMode,Z_Param_ModeKick);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->InitiateKicking_Validate(Z_Param_PlayerIdToKick,Z_Param_PlayerProposingKick,ESBZKickingMode(Z_Param_ModeKick)))
		{
			RPC_ValidateFailed(TEXT("InitiateKicking_Validate"));
			return;
		}
		P_THIS->InitiateKicking_Implementation(Z_Param_PlayerIdToKick,Z_Param_PlayerProposingKick,ESBZKickingMode(Z_Param_ModeKick));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKickingReplicatedProxy::execKickFailed)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerProposed);
		P_GET_ENUM(ESBZKickingError,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->KickFailed_Validate(Z_Param_PlayerProposed,ESBZKickingError(Z_Param_ErrorCode)))
		{
			RPC_ValidateFailed(TEXT("KickFailed_Validate"));
			return;
		}
		P_THIS->KickFailed_Implementation(Z_Param_PlayerProposed,ESBZKickingError(Z_Param_ErrorCode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKickingReplicatedProxy::execKickPlayerFinal)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerIdToKick);
		P_GET_ENUM(ESBZKickingMode,Z_Param_ModeKick);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->KickPlayerFinal_Validate(Z_Param_PlayerIdToKick,ESBZKickingMode(Z_Param_ModeKick)))
		{
			RPC_ValidateFailed(TEXT("KickPlayerFinal_Validate"));
			return;
		}
		P_THIS->KickPlayerFinal_Implementation(Z_Param_PlayerIdToKick,ESBZKickingMode(Z_Param_ModeKick));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKickingReplicatedProxy::execMulticastReceiveKickingInfo)
	{
		P_GET_STRUCT(FSBZKickingInfo,Z_Param_NewKickingInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MulticastReceiveKickingInfo_Validate(Z_Param_NewKickingInfo))
		{
			RPC_ValidateFailed(TEXT("MulticastReceiveKickingInfo_Validate"));
			return;
		}
		P_THIS->MulticastReceiveKickingInfo_Implementation(Z_Param_NewKickingInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKickingReplicatedProxy::execOnKicked)
	{
		P_GET_STRUCT(FSBZKickingInfo,Z_Param_NewKickingInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->OnKicked_Validate(Z_Param_NewKickingInfo))
		{
			RPC_ValidateFailed(TEXT("OnKicked_Validate"));
			return;
		}
		P_THIS->OnKicked_Implementation(Z_Param_NewKickingInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKickingReplicatedProxy::execServerSendKickingInfo)
	{
		P_GET_STRUCT(FSBZKickingInfo,Z_Param_NewKickingInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendKickingInfo_Validate(Z_Param_NewKickingInfo))
		{
			RPC_ValidateFailed(TEXT("ServerSendKickingInfo_Validate"));
			return;
		}
		P_THIS->ServerSendKickingInfo_Implementation(Z_Param_NewKickingInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKickingReplicatedProxy::execVoteToKick)
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
	static FName NAME_ASBZKickingReplicatedProxy_InitiateKicking = FName(TEXT("InitiateKicking"));
	void ASBZKickingReplicatedProxy::InitiateKicking(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick)
	{
		SBZKickingReplicatedProxy_eventInitiateKicking_Parms Parms;
		Parms.PlayerIdToKick=PlayerIdToKick;
		Parms.PlayerProposingKick=PlayerProposingKick;
		Parms.ModeKick=ModeKick;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKickingReplicatedProxy_InitiateKicking),&Parms);
	}
	static FName NAME_ASBZKickingReplicatedProxy_KickFailed = FName(TEXT("KickFailed"));
	void ASBZKickingReplicatedProxy::KickFailed(FUniqueNetIdRepl PlayerProposed, ESBZKickingError ErrorCode)
	{
		SBZKickingReplicatedProxy_eventKickFailed_Parms Parms;
		Parms.PlayerProposed=PlayerProposed;
		Parms.ErrorCode=ErrorCode;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKickingReplicatedProxy_KickFailed),&Parms);
	}
	static FName NAME_ASBZKickingReplicatedProxy_KickPlayerFinal = FName(TEXT("KickPlayerFinal"));
	void ASBZKickingReplicatedProxy::KickPlayerFinal(FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick)
	{
		SBZKickingReplicatedProxy_eventKickPlayerFinal_Parms Parms;
		Parms.PlayerIdToKick=PlayerIdToKick;
		Parms.ModeKick=ModeKick;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKickingReplicatedProxy_KickPlayerFinal),&Parms);
	}
	static FName NAME_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo = FName(TEXT("MulticastReceiveKickingInfo"));
	void ASBZKickingReplicatedProxy::MulticastReceiveKickingInfo(FSBZKickingInfo const& NewKickingInfo)
	{
		SBZKickingReplicatedProxy_eventMulticastReceiveKickingInfo_Parms Parms;
		Parms.NewKickingInfo=NewKickingInfo;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo),&Parms);
	}
	static FName NAME_ASBZKickingReplicatedProxy_OnKicked = FName(TEXT("OnKicked"));
	void ASBZKickingReplicatedProxy::OnKicked(FSBZKickingInfo NewKickingInfo)
	{
		SBZKickingReplicatedProxy_eventOnKicked_Parms Parms;
		Parms.NewKickingInfo=NewKickingInfo;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKickingReplicatedProxy_OnKicked),&Parms);
	}
	static FName NAME_ASBZKickingReplicatedProxy_ServerSendKickingInfo = FName(TEXT("ServerSendKickingInfo"));
	void ASBZKickingReplicatedProxy::ServerSendKickingInfo(FSBZKickingInfo NewKickingInfo)
	{
		SBZKickingReplicatedProxy_eventServerSendKickingInfo_Parms Parms;
		Parms.NewKickingInfo=NewKickingInfo;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKickingReplicatedProxy_ServerSendKickingInfo),&Parms);
	}
	static FName NAME_ASBZKickingReplicatedProxy_VoteToKick = FName(TEXT("VoteToKick"));
	void ASBZKickingReplicatedProxy::VoteToKick(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick)
	{
		SBZKickingReplicatedProxy_eventVoteToKick_Parms Parms;
		Parms.PlayerIdToKick=PlayerIdToKick;
		Parms.PlayerProposingKick=PlayerProposingKick;
		Parms.ModeKick=ModeKick;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKickingReplicatedProxy_VoteToKick),&Parms);
	}
	void ASBZKickingReplicatedProxy::StaticRegisterNativesASBZKickingReplicatedProxy()
	{
		UClass* Class = ASBZKickingReplicatedProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitiateKicking", &ASBZKickingReplicatedProxy::execInitiateKicking },
			{ "KickFailed", &ASBZKickingReplicatedProxy::execKickFailed },
			{ "KickPlayerFinal", &ASBZKickingReplicatedProxy::execKickPlayerFinal },
			{ "MulticastReceiveKickingInfo", &ASBZKickingReplicatedProxy::execMulticastReceiveKickingInfo },
			{ "OnKicked", &ASBZKickingReplicatedProxy::execOnKicked },
			{ "ServerSendKickingInfo", &ASBZKickingReplicatedProxy::execServerSendKickingInfo },
			{ "VoteToKick", &ASBZKickingReplicatedProxy::execVoteToKick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_PlayerIdToKick = { "PlayerIdToKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventInitiateKicking_Parms, PlayerIdToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_PlayerProposingKick = { "PlayerProposingKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventInitiateKicking_Parms, PlayerProposingKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_ModeKick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_ModeKick = { "ModeKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventInitiateKicking_Parms, ModeKick), Z_Construct_UEnum_Starbreeze_ESBZKickingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_PlayerIdToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_PlayerProposingKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_ModeKick_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::NewProp_ModeKick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKickingReplicatedProxy, nullptr, "InitiateKicking", nullptr, nullptr, sizeof(SBZKickingReplicatedProxy_eventInitiateKicking_Parms), Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerProposed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorCode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::NewProp_PlayerProposed = { "PlayerProposed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventKickFailed_Parms, PlayerProposed), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventKickFailed_Parms, ErrorCode), Z_Construct_UEnum_Starbreeze_ESBZKickingError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::NewProp_PlayerProposed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::NewProp_ErrorCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKickingReplicatedProxy, nullptr, "KickFailed", nullptr, nullptr, sizeof(SBZKickingReplicatedProxy_eventKickFailed_Parms), Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerIdToKick;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeKick_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeKick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::NewProp_PlayerIdToKick = { "PlayerIdToKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventKickPlayerFinal_Parms, PlayerIdToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::NewProp_ModeKick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::NewProp_ModeKick = { "ModeKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventKickPlayerFinal_Parms, ModeKick), Z_Construct_UEnum_Starbreeze_ESBZKickingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::NewProp_PlayerIdToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::NewProp_ModeKick_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::NewProp_ModeKick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKickingReplicatedProxy, nullptr, "KickPlayerFinal", nullptr, nullptr, sizeof(SBZKickingReplicatedProxy_eventKickPlayerFinal_Parms), Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewKickingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKickingInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::NewProp_NewKickingInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::NewProp_NewKickingInfo = { "NewKickingInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventMulticastReceiveKickingInfo_Parms, NewKickingInfo), Z_Construct_UScriptStruct_FSBZKickingInfo, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::NewProp_NewKickingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::NewProp_NewKickingInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::NewProp_NewKickingInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKickingReplicatedProxy, nullptr, "MulticastReceiveKickingInfo", nullptr, nullptr, sizeof(SBZKickingReplicatedProxy_eventMulticastReceiveKickingInfo_Parms), Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKickingInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::NewProp_NewKickingInfo = { "NewKickingInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventOnKicked_Parms, NewKickingInfo), Z_Construct_UScriptStruct_FSBZKickingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::NewProp_NewKickingInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKickingReplicatedProxy, nullptr, "OnKicked", nullptr, nullptr, sizeof(SBZKickingReplicatedProxy_eventOnKicked_Parms), Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKickingInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::NewProp_NewKickingInfo = { "NewKickingInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventServerSendKickingInfo_Parms, NewKickingInfo), Z_Construct_UScriptStruct_FSBZKickingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::NewProp_NewKickingInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKickingReplicatedProxy, nullptr, "ServerSendKickingInfo", nullptr, nullptr, sizeof(SBZKickingReplicatedProxy_eventServerSendKickingInfo_Parms), Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_PlayerIdToKick = { "PlayerIdToKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventVoteToKick_Parms, PlayerIdToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_PlayerProposingKick = { "PlayerProposingKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventVoteToKick_Parms, PlayerProposingKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_ModeKick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_ModeKick = { "ModeKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingReplicatedProxy_eventVoteToKick_Parms, ModeKick), Z_Construct_UEnum_Starbreeze_ESBZKickingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_PlayerIdToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_PlayerProposingKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_ModeKick_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::NewProp_ModeKick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKickingReplicatedProxy, nullptr, "VoteToKick", nullptr, nullptr, sizeof(SBZKickingReplicatedProxy_eventVoteToKick_Parms), Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZKickingReplicatedProxy_NoRegister()
	{
		return ASBZKickingReplicatedProxy::StaticClass();
	}
	struct Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZKickingReplicatedProxy_InitiateKicking, "InitiateKicking" }, // 1749251986
		{ &Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickFailed, "KickFailed" }, // 3514962168
		{ &Z_Construct_UFunction_ASBZKickingReplicatedProxy_KickPlayerFinal, "KickPlayerFinal" }, // 1523035637
		{ &Z_Construct_UFunction_ASBZKickingReplicatedProxy_MulticastReceiveKickingInfo, "MulticastReceiveKickingInfo" }, // 2492274760
		{ &Z_Construct_UFunction_ASBZKickingReplicatedProxy_OnKicked, "OnKicked" }, // 1727075267
		{ &Z_Construct_UFunction_ASBZKickingReplicatedProxy_ServerSendKickingInfo, "ServerSendKickingInfo" }, // 222734397
		{ &Z_Construct_UFunction_ASBZKickingReplicatedProxy_VoteToKick, "VoteToKick" }, // 2144669635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZKickingReplicatedProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZKickingReplicatedProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZKickingReplicatedProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::ClassParams = {
		&ASBZKickingReplicatedProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZKickingReplicatedProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZKickingReplicatedProxy, 4272629971);
	template<> STARBREEZE_API UClass* StaticClass<ASBZKickingReplicatedProxy>()
	{
		return ASBZKickingReplicatedProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZKickingReplicatedProxy(Z_Construct_UClass_ASBZKickingReplicatedProxy, &ASBZKickingReplicatedProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZKickingReplicatedProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZKickingReplicatedProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
