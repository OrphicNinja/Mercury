// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLobbyRemoteState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLobbyRemoteState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyRemoteState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyRemoteState();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLobbyRemoteState::execBroadcastRemotePlayerAcceptedMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastRemotePlayerAcceptedMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyRemoteState::execBroadcastWaitGameTimerStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastWaitGameTimerStarted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyRemoteState::execHandleGameStateChanged)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateChanged(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyRemoteState::execOnRep_LobbyInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LobbyInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyRemoteState::execOnRep_LobbyTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LobbyTimeout();
		P_NATIVE_END;
	}
	static FName NAME_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch = FName(TEXT("BroadcastRemotePlayerAcceptedMatch"));
	void ASBZLobbyRemoteState::BroadcastRemotePlayerAcceptedMatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch),NULL);
	}
	static FName NAME_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted = FName(TEXT("BroadcastWaitGameTimerStarted"));
	void ASBZLobbyRemoteState::BroadcastWaitGameTimerStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted),NULL);
	}
	void ASBZLobbyRemoteState::StaticRegisterNativesASBZLobbyRemoteState()
	{
		UClass* Class = ASBZLobbyRemoteState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastRemotePlayerAcceptedMatch", &ASBZLobbyRemoteState::execBroadcastRemotePlayerAcceptedMatch },
			{ "BroadcastWaitGameTimerStarted", &ASBZLobbyRemoteState::execBroadcastWaitGameTimerStarted },
			{ "HandleGameStateChanged", &ASBZLobbyRemoteState::execHandleGameStateChanged },
			{ "OnRep_LobbyInfo", &ASBZLobbyRemoteState::execOnRep_LobbyInfo },
			{ "OnRep_LobbyTimeout", &ASBZLobbyRemoteState::execOnRep_LobbyTimeout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyRemoteState, nullptr, "BroadcastRemotePlayerAcceptedMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyRemoteState, nullptr, "BroadcastWaitGameTimerStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics
	{
		struct SBZLobbyRemoteState_eventHandleGameStateChanged_Parms
		{
			FName NewState;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyRemoteState_eventHandleGameStateChanged_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyRemoteState, nullptr, "HandleGameStateChanged", nullptr, nullptr, sizeof(SBZLobbyRemoteState_eventHandleGameStateChanged_Parms), Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyRemoteState, nullptr, "OnRep_LobbyInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyRemoteState, nullptr, "OnRep_LobbyTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLobbyRemoteState_NoRegister()
	{
		return ASBZLobbyRemoteState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLobbyRemoteState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotReservationTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlotReservationTimeout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayersJoinInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersJoinInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayersJoinInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayersInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayersInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyTravelTimeoutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LobbyTravelTimeoutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInfoChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CharacterInfoChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LobbyTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLobbyRemoteState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLobbyRemoteState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastRemotePlayerAcceptedMatch, "BroadcastRemotePlayerAcceptedMatch" }, // 2670689060
		{ &Z_Construct_UFunction_ASBZLobbyRemoteState_BroadcastWaitGameTimerStarted, "BroadcastWaitGameTimerStarted" }, // 3189831079
		{ &Z_Construct_UFunction_ASBZLobbyRemoteState_HandleGameStateChanged, "HandleGameStateChanged" }, // 3020832172
		{ &Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyInfo, "OnRep_LobbyInfo" }, // 3019850539
		{ &Z_Construct_UFunction_ASBZLobbyRemoteState_OnRep_LobbyTimeout, "OnRep_LobbyTimeout" }, // 2634795620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyRemoteState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZLobbyRemoteState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_SlotReservationTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyRemoteState" },
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_SlotReservationTimeout = { "SlotReservationTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyRemoteState, SlotReservationTimeout), METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_SlotReservationTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_SlotReservationTimeout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersJoinInfo_Inner = { "PlayersJoinInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersJoinInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyRemoteState" },
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersJoinInfo = { "PlayersJoinInfo", "OnRep_LobbyInfo", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyRemoteState, PlayersJoinInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersJoinInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersJoinInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersInfo_Inner = { "PlayersInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyRemoteState" },
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersInfo = { "PlayersInfo", "OnRep_LobbyInfo", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyRemoteState, PlayersInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTravelTimeoutTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyRemoteState" },
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTravelTimeoutTime = { "LobbyTravelTimeoutTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyRemoteState, LobbyTravelTimeoutTime), METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTravelTimeoutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTravelTimeoutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_CharacterInfoChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyRemoteState" },
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_CharacterInfoChanged = { "CharacterInfoChanged", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyRemoteState, CharacterInfoChanged), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_CharacterInfoChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_CharacterInfoChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyRemoteState" },
		{ "ModuleRelativePath", "Public/SBZLobbyRemoteState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTimeout = { "LobbyTimeout", "OnRep_LobbyTimeout", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyRemoteState, LobbyTimeout), METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLobbyRemoteState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_SlotReservationTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersJoinInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersJoinInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_PlayersInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTravelTimeoutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_CharacterInfoChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyRemoteState_Statics::NewProp_LobbyTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLobbyRemoteState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLobbyRemoteState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLobbyRemoteState_Statics::ClassParams = {
		&ASBZLobbyRemoteState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLobbyRemoteState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyRemoteState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLobbyRemoteState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLobbyRemoteState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLobbyRemoteState, 4231126065);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLobbyRemoteState>()
	{
		return ASBZLobbyRemoteState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLobbyRemoteState(Z_Construct_UClass_ASBZLobbyRemoteState, &ASBZLobbyRemoteState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLobbyRemoteState"), false, nullptr, nullptr, nullptr);

	void ASBZLobbyRemoteState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayersJoinInfo(TEXT("PlayersJoinInfo"));
		static const FName Name_PlayersInfo(TEXT("PlayersInfo"));
		static const FName Name_LobbyTimeout(TEXT("LobbyTimeout"));

		const bool bIsValid = true
			&& Name_PlayersJoinInfo == ClassReps[(int32)ENetFields_Private::PlayersJoinInfo].Property->GetFName()
			&& Name_PlayersInfo == ClassReps[(int32)ENetFields_Private::PlayersInfo].Property->GetFName()
			&& Name_LobbyTimeout == ClassReps[(int32)ENetFields_Private::LobbyTimeout].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZLobbyRemoteState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLobbyRemoteState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
