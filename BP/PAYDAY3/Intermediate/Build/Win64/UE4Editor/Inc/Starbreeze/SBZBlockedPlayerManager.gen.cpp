// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlockedPlayerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlockedPlayerManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockedPlayerManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockedPlayerManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFriendListEntry();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlockedPlayerManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZBlockedPlayerManager**)Z_Param__Result=USBZBlockedPlayerManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlockedPlayerManager::execGetBlockedPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetBlockedPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlockedPlayerManager::execIsPlayerBlocked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerBlocked(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlockedPlayerManager::execOnBlockedPlayersUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockedPlayersUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlockedPlayerManager::execOnPlatformUserInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlatformUserInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlockedPlayerManager::execXsxBlockListChangeTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->XsxBlockListChangeTimer();
		P_NATIVE_END;
	}
	void USBZBlockedPlayerManager::StaticRegisterNativesUSBZBlockedPlayerManager()
	{
		UClass* Class = USBZBlockedPlayerManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZBlockedPlayerManager::execGet },
			{ "GetBlockedPlayers", &USBZBlockedPlayerManager::execGetBlockedPlayers },
			{ "IsPlayerBlocked", &USBZBlockedPlayerManager::execIsPlayerBlocked },
			{ "OnBlockedPlayersUpdated", &USBZBlockedPlayerManager::execOnBlockedPlayersUpdated },
			{ "OnPlatformUserInitialized", &USBZBlockedPlayerManager::execOnPlatformUserInitialized },
			{ "XsxBlockListChangeTimer", &USBZBlockedPlayerManager::execXsxBlockListChangeTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics
	{
		struct SBZBlockedPlayerManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZBlockedPlayerManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlockedPlayerManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlockedPlayerManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZBlockedPlayerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlockedPlayerManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZBlockedPlayerManager_eventGet_Parms), Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlockedPlayerManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlockedPlayerManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics
	{
		struct SBZBlockedPlayerManager_eventGetBlockedPlayers_Parms
		{
			TMap<FString,FSBZFriendListEntry> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlockedPlayerManager_eventGetBlockedPlayers_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlockedPlayerManager, nullptr, "GetBlockedPlayers", nullptr, nullptr, sizeof(SBZBlockedPlayerManager_eventGetBlockedPlayers_Parms), Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics
	{
		struct SBZBlockedPlayerManager_eventIsPlayerBlocked_Parms
		{
			FString PlayerId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlockedPlayerManager_eventIsPlayerBlocked_Parms, PlayerId), METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_PlayerId_MetaData)) };
	void Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBlockedPlayerManager_eventIsPlayerBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlockedPlayerManager_eventIsPlayerBlocked_Parms), &Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlockedPlayerManager, nullptr, "IsPlayerBlocked", nullptr, nullptr, sizeof(SBZBlockedPlayerManager_eventIsPlayerBlocked_Parms), Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlockedPlayerManager, nullptr, "OnBlockedPlayersUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlockedPlayerManager, nullptr, "OnPlatformUserInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlockedPlayerManager, nullptr, "XsxBlockListChangeTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlockedPlayerManager_NoRegister()
	{
		return USBZBlockedPlayerManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlockedPlayerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformsBlockedPlayersInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformsBlockedPlayersInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlockedPlayerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlockedPlayerManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlockedPlayerManager_Get, "Get" }, // 2010286340
		{ &Z_Construct_UFunction_USBZBlockedPlayerManager_GetBlockedPlayers, "GetBlockedPlayers" }, // 2330813843
		{ &Z_Construct_UFunction_USBZBlockedPlayerManager_IsPlayerBlocked, "IsPlayerBlocked" }, // 2508910210
		{ &Z_Construct_UFunction_USBZBlockedPlayerManager_OnBlockedPlayersUpdated, "OnBlockedPlayersUpdated" }, // 1787460260
		{ &Z_Construct_UFunction_USBZBlockedPlayerManager_OnPlatformUserInitialized, "OnPlatformUserInitialized" }, // 4150089843
		{ &Z_Construct_UFunction_USBZBlockedPlayerManager_XsxBlockListChangeTimer, "XsxBlockListChangeTimer" }, // 829435041
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlockedPlayerManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlockedPlayerManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlockedPlayerManager_Statics::NewProp_PlatformsBlockedPlayersInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlockedPlayerManager" },
		{ "ModuleRelativePath", "Public/SBZBlockedPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlockedPlayerManager_Statics::NewProp_PlatformsBlockedPlayersInfo = { "PlatformsBlockedPlayersInfo", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlockedPlayerManager, PlatformsBlockedPlayersInfo), Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo, METADATA_PARAMS(Z_Construct_UClass_USBZBlockedPlayerManager_Statics::NewProp_PlatformsBlockedPlayersInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlockedPlayerManager_Statics::NewProp_PlatformsBlockedPlayersInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlockedPlayerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlockedPlayerManager_Statics::NewProp_PlatformsBlockedPlayersInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlockedPlayerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlockedPlayerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlockedPlayerManager_Statics::ClassParams = {
		&USBZBlockedPlayerManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlockedPlayerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlockedPlayerManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlockedPlayerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlockedPlayerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlockedPlayerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlockedPlayerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlockedPlayerManager, 3971576739);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlockedPlayerManager>()
	{
		return USBZBlockedPlayerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlockedPlayerManager(Z_Construct_UClass_USBZBlockedPlayerManager, &USBZBlockedPlayerManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlockedPlayerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlockedPlayerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
