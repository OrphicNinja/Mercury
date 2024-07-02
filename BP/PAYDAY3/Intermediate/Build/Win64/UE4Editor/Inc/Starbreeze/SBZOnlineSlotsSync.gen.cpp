// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSlotsSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSlotsSync() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineSlotsSync_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineSlotsSync();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSlotData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSession_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execOnAddPlayerState)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddPlayerState(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execOnGameModeInitialized)
	{
		P_GET_OBJECT(AGameModeBase,Z_Param_GameMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameModeInitialized(Z_Param_GameMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execOnRemovePlayerState)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemovePlayerState(Z_Param_Out_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execOnRep_SlotsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SlotsData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execSyncSlotsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncSlotsData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execUniqueIdUpdated)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UniqueIdUpdated(Z_Param_InPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execUpdateInfamyLevel)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInfamyLevel(Z_Param_InPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execUpdatePlatform)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlatform(Z_Param_InPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZOnlineSlotsSync::execUpdatePlayerName)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerName(Z_Param_InPlayerState);
		P_NATIVE_END;
	}
	void ASBZOnlineSlotsSync::StaticRegisterNativesASBZOnlineSlotsSync()
	{
		UClass* Class = ASBZOnlineSlotsSync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAddPlayerState", &ASBZOnlineSlotsSync::execOnAddPlayerState },
			{ "OnGameModeInitialized", &ASBZOnlineSlotsSync::execOnGameModeInitialized },
			{ "OnRemovePlayerState", &ASBZOnlineSlotsSync::execOnRemovePlayerState },
			{ "OnRep_SlotsData", &ASBZOnlineSlotsSync::execOnRep_SlotsData },
			{ "SyncSlotsData", &ASBZOnlineSlotsSync::execSyncSlotsData },
			{ "UniqueIdUpdated", &ASBZOnlineSlotsSync::execUniqueIdUpdated },
			{ "UpdateInfamyLevel", &ASBZOnlineSlotsSync::execUpdateInfamyLevel },
			{ "UpdatePlatform", &ASBZOnlineSlotsSync::execUpdatePlatform },
			{ "UpdatePlayerName", &ASBZOnlineSlotsSync::execUpdatePlayerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics
	{
		struct SBZOnlineSlotsSync_eventOnAddPlayerState_Parms
		{
			APlayerState* PlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsSync_eventOnAddPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "OnAddPlayerState", nullptr, nullptr, sizeof(SBZOnlineSlotsSync_eventOnAddPlayerState_Parms), Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics
	{
		struct SBZOnlineSlotsSync_eventOnGameModeInitialized_Parms
		{
			AGameModeBase* GameMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsSync_eventOnGameModeInitialized_Parms, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::NewProp_GameMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "OnGameModeInitialized", nullptr, nullptr, sizeof(SBZOnlineSlotsSync_eventOnGameModeInitialized_Parms), Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics
	{
		struct SBZOnlineSlotsSync_eventOnRemovePlayerState_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsSync_eventOnRemovePlayerState_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "OnRemovePlayerState", nullptr, nullptr, sizeof(SBZOnlineSlotsSync_eventOnRemovePlayerState_Parms), Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "OnRep_SlotsData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "SyncSlotsData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics
	{
		struct SBZOnlineSlotsSync_eventUniqueIdUpdated_Parms
		{
			ASBZPlayerState* InPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsSync_eventUniqueIdUpdated_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::NewProp_InPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "UniqueIdUpdated", nullptr, nullptr, sizeof(SBZOnlineSlotsSync_eventUniqueIdUpdated_Parms), Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics
	{
		struct SBZOnlineSlotsSync_eventUpdateInfamyLevel_Parms
		{
			ASBZPlayerState* InPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsSync_eventUpdateInfamyLevel_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::NewProp_InPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "UpdateInfamyLevel", nullptr, nullptr, sizeof(SBZOnlineSlotsSync_eventUpdateInfamyLevel_Parms), Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics
	{
		struct SBZOnlineSlotsSync_eventUpdatePlatform_Parms
		{
			ASBZPlayerState* InPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsSync_eventUpdatePlatform_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::NewProp_InPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "UpdatePlatform", nullptr, nullptr, sizeof(SBZOnlineSlotsSync_eventUpdatePlatform_Parms), Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics
	{
		struct SBZOnlineSlotsSync_eventUpdatePlayerName_Parms
		{
			ASBZPlayerState* InPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsSync_eventUpdatePlayerName_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::NewProp_InPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZOnlineSlotsSync, nullptr, "UpdatePlayerName", nullptr, nullptr, sizeof(SBZOnlineSlotsSync_eventUpdatePlayerName_Parms), Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZOnlineSlotsSync_NoRegister()
	{
		return ASBZOnlineSlotsSync::StaticClass();
	}
	struct Z_Construct_UClass_ASBZOnlineSlotsSync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_OnAddPlayerState, "OnAddPlayerState" }, // 3913873013
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_OnGameModeInitialized, "OnGameModeInitialized" }, // 60119657
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRemovePlayerState, "OnRemovePlayerState" }, // 4274635561
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_OnRep_SlotsData, "OnRep_SlotsData" }, // 2740858446
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_SyncSlotsData, "SyncSlotsData" }, // 1215275428
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_UniqueIdUpdated, "UniqueIdUpdated" }, // 2522841992
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdateInfamyLevel, "UpdateInfamyLevel" }, // 3198432452
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlatform, "UpdatePlatform" }, // 983693213
		{ &Z_Construct_UFunction_ASBZOnlineSlotsSync_UpdatePlayerName, "UpdatePlayerName" }, // 3929884517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZOnlineSlotsSync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_SlotsData_Inner = { "SlotsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_SlotsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsSync" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_SlotsData = { "SlotsData", "OnRep_SlotsData", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZOnlineSlotsSync, SlotsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_SlotsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_SlotsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_OnlineSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsSync" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsSync.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_OnlineSession = { "OnlineSession", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZOnlineSlotsSync, OnlineSession), Z_Construct_UClass_USBZOnlineSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_OnlineSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_OnlineSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_SlotsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_SlotsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::NewProp_OnlineSession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZOnlineSlotsSync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::ClassParams = {
		&ASBZOnlineSlotsSync::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZOnlineSlotsSync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZOnlineSlotsSync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZOnlineSlotsSync, 2453797100);
	template<> STARBREEZE_API UClass* StaticClass<ASBZOnlineSlotsSync>()
	{
		return ASBZOnlineSlotsSync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZOnlineSlotsSync(Z_Construct_UClass_ASBZOnlineSlotsSync, &ASBZOnlineSlotsSync::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZOnlineSlotsSync"), false, nullptr, nullptr, nullptr);

	void ASBZOnlineSlotsSync::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SlotsData(TEXT("SlotsData"));

		const bool bIsValid = true
			&& Name_SlotsData == ClassReps[(int32)ENetFields_Private::SlotsData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZOnlineSlotsSync"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZOnlineSlotsSync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
