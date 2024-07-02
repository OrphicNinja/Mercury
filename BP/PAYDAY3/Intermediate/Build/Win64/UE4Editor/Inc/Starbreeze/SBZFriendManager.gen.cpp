// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFriendManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFriendManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFriendManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFriendManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFriendListEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent();
// End Cross Module References
	DEFINE_FUNCTION(USBZFriendManager::execGetAccelByteFriendEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetAccelByteFriendEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execGetBlockedPlayerEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetBlockedPlayerEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execGetFriendManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZFriendManager**)Z_Param__Result=USBZFriendManager::GetFriendManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execGetIncomingFriendRequests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetIncomingFriendRequests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execGetOfflineFriendEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetOfflineFriendEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execGetOutgoingFriendRequests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetOutgoingFriendRequests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execGetPlatformFriendEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetPlatformFriendEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execGetUserSearchEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FSBZFriendListEntry>*)Z_Param__Result=P_THIS->GetUserSearchEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execHandleStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateEntered(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execHandleUIStackChanged)
	{
		P_GET_STRUCT(FSBZUIStackChangedEvent,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleUIStackChanged(Z_Param_Event);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execIsCrossplayAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrossplayAllowed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execIsPlayingOnSamePlatform)
	{
		P_GET_STRUCT_REF(FSBZFriendListEntry,Z_Param_Out_FriendEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingOnSamePlatform(Z_Param_Out_FriendEntry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execOnBlockedPlayerChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockedPlayerChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execOnBlockPlayerComplete)
	{
		P_GET_UBOOL(Z_Param_bResult);
		P_GET_STRUCT(FSBZFriendListEntry,Z_Param_PlayerEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockPlayerComplete(Z_Param_bResult,Z_Param_PlayerEntry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execOnPlatformUserInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlatformUserInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFriendManager::execOnUnblockPlayerComplete)
	{
		P_GET_UBOOL(Z_Param_bResult);
		P_GET_STRUCT(FSBZFriendListEntry,Z_Param_PlayerEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnblockPlayerComplete(Z_Param_bResult,Z_Param_PlayerEntry);
		P_NATIVE_END;
	}
	void USBZFriendManager::StaticRegisterNativesUSBZFriendManager()
	{
		UClass* Class = USBZFriendManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccelByteFriendEntries", &USBZFriendManager::execGetAccelByteFriendEntries },
			{ "GetBlockedPlayerEntries", &USBZFriendManager::execGetBlockedPlayerEntries },
			{ "GetFriendManager", &USBZFriendManager::execGetFriendManager },
			{ "GetIncomingFriendRequests", &USBZFriendManager::execGetIncomingFriendRequests },
			{ "GetOfflineFriendEntries", &USBZFriendManager::execGetOfflineFriendEntries },
			{ "GetOutgoingFriendRequests", &USBZFriendManager::execGetOutgoingFriendRequests },
			{ "GetPlatformFriendEntries", &USBZFriendManager::execGetPlatformFriendEntries },
			{ "GetUserSearchEntries", &USBZFriendManager::execGetUserSearchEntries },
			{ "HandleStateEntered", &USBZFriendManager::execHandleStateEntered },
			{ "HandleUIStackChanged", &USBZFriendManager::execHandleUIStackChanged },
			{ "IsCrossplayAllowed", &USBZFriendManager::execIsCrossplayAllowed },
			{ "IsPlayingOnSamePlatform", &USBZFriendManager::execIsPlayingOnSamePlatform },
			{ "OnBlockedPlayerChanged", &USBZFriendManager::execOnBlockedPlayerChanged },
			{ "OnBlockPlayerComplete", &USBZFriendManager::execOnBlockPlayerComplete },
			{ "OnPlatformUserInitialized", &USBZFriendManager::execOnPlatformUserInitialized },
			{ "OnUnblockPlayerComplete", &USBZFriendManager::execOnUnblockPlayerComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics
	{
		struct SBZFriendManager_eventGetAccelByteFriendEntries_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetAccelByteFriendEntries_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetAccelByteFriendEntries", nullptr, nullptr, sizeof(SBZFriendManager_eventGetAccelByteFriendEntries_Parms), Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics
	{
		struct SBZFriendManager_eventGetBlockedPlayerEntries_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetBlockedPlayerEntries_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetBlockedPlayerEntries", nullptr, nullptr, sizeof(SBZFriendManager_eventGetBlockedPlayerEntries_Parms), Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics
	{
		struct SBZFriendManager_eventGetFriendManager_Parms
		{
			const UObject* WorldContextObject;
			USBZFriendManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetFriendManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetFriendManager_Parms, ReturnValue), Z_Construct_UClass_USBZFriendManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetFriendManager", nullptr, nullptr, sizeof(SBZFriendManager_eventGetFriendManager_Parms), Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetFriendManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetFriendManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics
	{
		struct SBZFriendManager_eventGetIncomingFriendRequests_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetIncomingFriendRequests_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetIncomingFriendRequests", nullptr, nullptr, sizeof(SBZFriendManager_eventGetIncomingFriendRequests_Parms), Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics
	{
		struct SBZFriendManager_eventGetOfflineFriendEntries_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetOfflineFriendEntries_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetOfflineFriendEntries", nullptr, nullptr, sizeof(SBZFriendManager_eventGetOfflineFriendEntries_Parms), Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics
	{
		struct SBZFriendManager_eventGetOutgoingFriendRequests_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetOutgoingFriendRequests_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetOutgoingFriendRequests", nullptr, nullptr, sizeof(SBZFriendManager_eventGetOutgoingFriendRequests_Parms), Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics
	{
		struct SBZFriendManager_eventGetPlatformFriendEntries_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetPlatformFriendEntries_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetPlatformFriendEntries", nullptr, nullptr, sizeof(SBZFriendManager_eventGetPlatformFriendEntries_Parms), Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics
	{
		struct SBZFriendManager_eventGetUserSearchEntries_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventGetUserSearchEntries_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "GetUserSearchEntries", nullptr, nullptr, sizeof(SBZFriendManager_eventGetUserSearchEntries_Parms), Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics
	{
		struct SBZFriendManager_eventHandleStateEntered_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventHandleStateEntered_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "HandleStateEntered", nullptr, nullptr, sizeof(SBZFriendManager_eventHandleStateEntered_Parms), Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_HandleStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_HandleStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics
	{
		struct SBZFriendManager_eventHandleUIStackChanged_Parms
		{
			FSBZUIStackChangedEvent Event;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventHandleUIStackChanged_Parms, Event), Z_Construct_UScriptStruct_FSBZUIStackChangedEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "HandleUIStackChanged", nullptr, nullptr, sizeof(SBZFriendManager_eventHandleUIStackChanged_Parms), Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics
	{
		struct SBZFriendManager_eventIsCrossplayAllowed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZFriendManager_eventIsCrossplayAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFriendManager_eventIsCrossplayAllowed_Parms), &Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "IsCrossplayAllowed", nullptr, nullptr, sizeof(SBZFriendManager_eventIsCrossplayAllowed_Parms), Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics
	{
		struct SBZFriendManager_eventIsPlayingOnSamePlatform_Parms
		{
			FSBZFriendListEntry FriendEntry;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendEntry;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_FriendEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_FriendEntry = { "FriendEntry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventIsPlayingOnSamePlatform_Parms, FriendEntry), Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_FriendEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_FriendEntry_MetaData)) };
	void Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZFriendManager_eventIsPlayingOnSamePlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFriendManager_eventIsPlayingOnSamePlatform_Parms), &Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_FriendEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "IsPlayingOnSamePlatform", nullptr, nullptr, sizeof(SBZFriendManager_eventIsPlayingOnSamePlatform_Parms), Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "OnBlockedPlayerChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics
	{
		struct SBZFriendManager_eventOnBlockPlayerComplete_Parms
		{
			bool bResult;
			FSBZFriendListEntry PlayerEntry;
		};
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SBZFriendManager_eventOnBlockPlayerComplete_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFriendManager_eventOnBlockPlayerComplete_Parms), &Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::NewProp_PlayerEntry = { "PlayerEntry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventOnBlockPlayerComplete_Parms, PlayerEntry), Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::NewProp_bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::NewProp_PlayerEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "OnBlockPlayerComplete", nullptr, nullptr, sizeof(SBZFriendManager_eventOnBlockPlayerComplete_Parms), Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "OnPlatformUserInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics
	{
		struct SBZFriendManager_eventOnUnblockPlayerComplete_Parms
		{
			bool bResult;
			FSBZFriendListEntry PlayerEntry;
		};
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SBZFriendManager_eventOnUnblockPlayerComplete_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFriendManager_eventOnUnblockPlayerComplete_Parms), &Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::NewProp_PlayerEntry = { "PlayerEntry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFriendManager_eventOnUnblockPlayerComplete_Parms, PlayerEntry), Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::NewProp_bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::NewProp_PlayerEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFriendManager, nullptr, "OnUnblockPlayerComplete", nullptr, nullptr, sizeof(SBZFriendManager_eventOnUnblockPlayerComplete_Parms), Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZFriendManager_NoRegister()
	{
		return USBZFriendManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZFriendManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFriendManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZFriendManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZFriendManager_GetAccelByteFriendEntries, "GetAccelByteFriendEntries" }, // 3351886711
		{ &Z_Construct_UFunction_USBZFriendManager_GetBlockedPlayerEntries, "GetBlockedPlayerEntries" }, // 712092661
		{ &Z_Construct_UFunction_USBZFriendManager_GetFriendManager, "GetFriendManager" }, // 1197454806
		{ &Z_Construct_UFunction_USBZFriendManager_GetIncomingFriendRequests, "GetIncomingFriendRequests" }, // 1904909218
		{ &Z_Construct_UFunction_USBZFriendManager_GetOfflineFriendEntries, "GetOfflineFriendEntries" }, // 1969970927
		{ &Z_Construct_UFunction_USBZFriendManager_GetOutgoingFriendRequests, "GetOutgoingFriendRequests" }, // 1494421603
		{ &Z_Construct_UFunction_USBZFriendManager_GetPlatformFriendEntries, "GetPlatformFriendEntries" }, // 3923028004
		{ &Z_Construct_UFunction_USBZFriendManager_GetUserSearchEntries, "GetUserSearchEntries" }, // 1540418546
		{ &Z_Construct_UFunction_USBZFriendManager_HandleStateEntered, "HandleStateEntered" }, // 2285489385
		{ &Z_Construct_UFunction_USBZFriendManager_HandleUIStackChanged, "HandleUIStackChanged" }, // 1234026960
		{ &Z_Construct_UFunction_USBZFriendManager_IsCrossplayAllowed, "IsCrossplayAllowed" }, // 1651849070
		{ &Z_Construct_UFunction_USBZFriendManager_IsPlayingOnSamePlatform, "IsPlayingOnSamePlatform" }, // 3898616788
		{ &Z_Construct_UFunction_USBZFriendManager_OnBlockedPlayerChanged, "OnBlockedPlayerChanged" }, // 1378520132
		{ &Z_Construct_UFunction_USBZFriendManager_OnBlockPlayerComplete, "OnBlockPlayerComplete" }, // 196973566
		{ &Z_Construct_UFunction_USBZFriendManager_OnPlatformUserInitialized, "OnPlatformUserInitialized" }, // 1309066355
		{ &Z_Construct_UFunction_USBZFriendManager_OnUnblockPlayerComplete, "OnUnblockPlayerComplete" }, // 2915812416
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFriendManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFriendManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFriendManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFriendManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFriendManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFriendManager_Statics::ClassParams = {
		&USBZFriendManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZFriendManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFriendManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFriendManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFriendManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFriendManager, 2528088616);
	template<> STARBREEZE_API UClass* StaticClass<USBZFriendManager>()
	{
		return USBZFriendManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFriendManager(Z_Construct_UClass_USBZFriendManager, &USBZFriendManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFriendManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFriendManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
