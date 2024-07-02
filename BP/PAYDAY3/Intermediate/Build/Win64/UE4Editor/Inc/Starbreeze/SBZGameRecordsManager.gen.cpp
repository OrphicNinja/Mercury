// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameRecordsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameRecordsManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameRecordsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameRecordsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDifficultyConfiguration();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNewsFeedList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaEventType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTitleData();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameRecordsManager::execCacheDifficultyConfiguration)
	{
		P_GET_TARRAY_REF(FSBZDifficultyConfiguration,Z_Param_Out_InConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CacheDifficultyConfiguration(Z_Param_Out_InConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execCacheNewsFeed)
	{
		P_GET_STRUCT_REF(FSBZNewsFeedList,Z_Param_Out_inNewsFeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CacheNewsFeed(Z_Param_Out_inNewsFeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGameRecordsManager**)Z_Param__Result=USBZGameRecordsManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execGetDifficultyConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZDifficultyConfiguration>*)Z_Param__Result=P_THIS->GetDifficultyConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execGetMatchmakingAndHostingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZMatchmakingAndHostingData*)Z_Param__Result=P_THIS->GetMatchmakingAndHostingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execGetMetaEventsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZMetaEventData>*)Z_Param__Result=P_THIS->GetMetaEventsData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execGetMetaEventsDataRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESBZMetaEventType>*)Z_Param__Result=P_THIS->GetMetaEventsDataRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execGetNewsFeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZNewsFeedList*)Z_Param__Result=P_THIS->GetNewsFeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameRecordsManager::execGetTitleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZTitleData*)Z_Param__Result=P_THIS->GetTitleData();
		P_NATIVE_END;
	}
	void USBZGameRecordsManager::StaticRegisterNativesUSBZGameRecordsManager()
	{
		UClass* Class = USBZGameRecordsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CacheDifficultyConfiguration", &USBZGameRecordsManager::execCacheDifficultyConfiguration },
			{ "CacheNewsFeed", &USBZGameRecordsManager::execCacheNewsFeed },
			{ "Get", &USBZGameRecordsManager::execGet },
			{ "GetDifficultyConfiguration", &USBZGameRecordsManager::execGetDifficultyConfiguration },
			{ "GetMatchmakingAndHostingData", &USBZGameRecordsManager::execGetMatchmakingAndHostingData },
			{ "GetMetaEventsData", &USBZGameRecordsManager::execGetMetaEventsData },
			{ "GetMetaEventsDataRunning", &USBZGameRecordsManager::execGetMetaEventsDataRunning },
			{ "GetNewsFeed", &USBZGameRecordsManager::execGetNewsFeed },
			{ "GetTitleData", &USBZGameRecordsManager::execGetTitleData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics
	{
		struct SBZGameRecordsManager_eventCacheDifficultyConfiguration_Parms
		{
			TArray<FSBZDifficultyConfiguration> InConfiguration;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConfiguration_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InConfiguration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::NewProp_InConfiguration_Inner = { "InConfiguration", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDifficultyConfiguration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::NewProp_InConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::NewProp_InConfiguration = { "InConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventCacheDifficultyConfiguration_Parms, InConfiguration), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::NewProp_InConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::NewProp_InConfiguration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::NewProp_InConfiguration_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::NewProp_InConfiguration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "CacheDifficultyConfiguration", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventCacheDifficultyConfiguration_Parms), Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics
	{
		struct SBZGameRecordsManager_eventCacheNewsFeed_Parms
		{
			FSBZNewsFeedList inNewsFeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inNewsFeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inNewsFeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::NewProp_inNewsFeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::NewProp_inNewsFeed = { "inNewsFeed", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventCacheNewsFeed_Parms, inNewsFeed), Z_Construct_UScriptStruct_FSBZNewsFeedList, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::NewProp_inNewsFeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::NewProp_inNewsFeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::NewProp_inNewsFeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "CacheNewsFeed", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventCacheNewsFeed_Parms), Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics
	{
		struct SBZGameRecordsManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZGameRecordsManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZGameRecordsManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventGet_Parms), Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics
	{
		struct SBZGameRecordsManager_eventGetDifficultyConfiguration_Parms
		{
			TArray<FSBZDifficultyConfiguration> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDifficultyConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGetDifficultyConfiguration_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "GetDifficultyConfiguration", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventGetDifficultyConfiguration_Parms), Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics
	{
		struct SBZGameRecordsManager_eventGetMatchmakingAndHostingData_Parms
		{
			FSBZMatchmakingAndHostingData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGetMatchmakingAndHostingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "GetMatchmakingAndHostingData", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventGetMatchmakingAndHostingData_Parms), Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics
	{
		struct SBZGameRecordsManager_eventGetMetaEventsData_Parms
		{
			TArray<FSBZMetaEventData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMetaEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGetMetaEventsData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "GetMetaEventsData", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventGetMetaEventsData_Parms), Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics
	{
		struct SBZGameRecordsManager_eventGetMetaEventsDataRunning_Parms
		{
			TArray<ESBZMetaEventType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZMetaEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGetMetaEventsDataRunning_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "GetMetaEventsDataRunning", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventGetMetaEventsDataRunning_Parms), Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics
	{
		struct SBZGameRecordsManager_eventGetNewsFeed_Parms
		{
			FSBZNewsFeedList ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGetNewsFeed_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZNewsFeedList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "GetNewsFeed", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventGetNewsFeed_Parms), Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics
	{
		struct SBZGameRecordsManager_eventGetTitleData_Parms
		{
			FSBZTitleData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameRecordsManager_eventGetTitleData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZTitleData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameRecordsManager, nullptr, "GetTitleData", nullptr, nullptr, sizeof(SBZGameRecordsManager_eventGetTitleData_Parms), Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameRecordsManager_NoRegister()
	{
		return USBZGameRecordsManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameRecordsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameRecordsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameRecordsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameRecordsManager_CacheDifficultyConfiguration, "CacheDifficultyConfiguration" }, // 2657197049
		{ &Z_Construct_UFunction_USBZGameRecordsManager_CacheNewsFeed, "CacheNewsFeed" }, // 2168342204
		{ &Z_Construct_UFunction_USBZGameRecordsManager_Get, "Get" }, // 3798116707
		{ &Z_Construct_UFunction_USBZGameRecordsManager_GetDifficultyConfiguration, "GetDifficultyConfiguration" }, // 1825455074
		{ &Z_Construct_UFunction_USBZGameRecordsManager_GetMatchmakingAndHostingData, "GetMatchmakingAndHostingData" }, // 391655760
		{ &Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsData, "GetMetaEventsData" }, // 1353417091
		{ &Z_Construct_UFunction_USBZGameRecordsManager_GetMetaEventsDataRunning, "GetMetaEventsDataRunning" }, // 820661815
		{ &Z_Construct_UFunction_USBZGameRecordsManager_GetNewsFeed, "GetNewsFeed" }, // 2448208752
		{ &Z_Construct_UFunction_USBZGameRecordsManager_GetTitleData, "GetTitleData" }, // 4152665718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameRecordsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameRecordsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameRecordsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameRecordsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameRecordsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameRecordsManager_Statics::ClassParams = {
		&USBZGameRecordsManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameRecordsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameRecordsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameRecordsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameRecordsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameRecordsManager, 2878320197);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameRecordsManager>()
	{
		return USBZGameRecordsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameRecordsManager(Z_Construct_UClass_USBZGameRecordsManager, &USBZGameRecordsManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameRecordsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameRecordsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
