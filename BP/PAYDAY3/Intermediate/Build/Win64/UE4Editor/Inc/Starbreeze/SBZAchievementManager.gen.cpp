// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAchievementManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAchievementManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAchievementManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAchievementManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
// End Cross Module References
	DEFINE_FUNCTION(USBZAchievementManager::execCompleteAchievement)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AchievementId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteAchievement(Z_Param_Out_AchievementId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAchievementManager::execCompleteAchievements)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_AchievementIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteAchievements(Z_Param_Out_AchievementIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAchievementManager::execGetAchievementManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAchievementManager**)Z_Param__Result=USBZAchievementManager::GetAchievementManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAchievementManager::execHandlePlatformUserChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlatformUserChanged(Z_Param_OldUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAchievementManager::execOnChallengeCompleted)
	{
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_ChallengeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChallengeCompleted(Z_Param_Out_ChallengeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAchievementManager::execOnInitializedChallengeRecordsCacheDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitializedChallengeRecordsCacheDone();
		P_NATIVE_END;
	}
	void USBZAchievementManager::StaticRegisterNativesUSBZAchievementManager()
	{
		UClass* Class = USBZAchievementManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteAchievement", &USBZAchievementManager::execCompleteAchievement },
			{ "CompleteAchievements", &USBZAchievementManager::execCompleteAchievements },
			{ "GetAchievementManager", &USBZAchievementManager::execGetAchievementManager },
			{ "HandlePlatformUserChanged", &USBZAchievementManager::execHandlePlatformUserChanged },
			{ "OnChallengeCompleted", &USBZAchievementManager::execOnChallengeCompleted },
			{ "OnInitializedChallengeRecordsCacheDone", &USBZAchievementManager::execOnInitializedChallengeRecordsCacheDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics
	{
		struct SBZAchievementManager_eventCompleteAchievement_Parms
		{
			FName AchievementId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::NewProp_AchievementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAchievementManager_eventCompleteAchievement_Parms, AchievementId), METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::NewProp_AchievementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::NewProp_AchievementId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::NewProp_AchievementId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAchievementManager, nullptr, "CompleteAchievement", nullptr, nullptr, sizeof(SBZAchievementManager_eventCompleteAchievement_Parms), Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics
	{
		struct SBZAchievementManager_eventCompleteAchievements_Parms
		{
			TArray<FName> AchievementIds;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AchievementIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::NewProp_AchievementIds_Inner = { "AchievementIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::NewProp_AchievementIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::NewProp_AchievementIds = { "AchievementIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAchievementManager_eventCompleteAchievements_Parms, AchievementIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::NewProp_AchievementIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::NewProp_AchievementIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::NewProp_AchievementIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::NewProp_AchievementIds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAchievementManager, nullptr, "CompleteAchievements", nullptr, nullptr, sizeof(SBZAchievementManager_eventCompleteAchievements_Parms), Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics
	{
		struct SBZAchievementManager_eventGetAchievementManager_Parms
		{
			const UObject* WorldContextObject;
			USBZAchievementManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAchievementManager_eventGetAchievementManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAchievementManager_eventGetAchievementManager_Parms, ReturnValue), Z_Construct_UClass_USBZAchievementManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAchievementManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAchievementManager, nullptr, "GetAchievementManager", nullptr, nullptr, sizeof(SBZAchievementManager_eventGetAchievementManager_Parms), Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics
	{
		struct SBZAchievementManager_eventHandlePlatformUserChanged_Parms
		{
			int32 OldUserIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldUserIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex = { "OldUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAchievementManager_eventHandlePlatformUserChanged_Parms, OldUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAchievementManager, nullptr, "HandlePlatformUserChanged", nullptr, nullptr, sizeof(SBZAchievementManager_eventHandlePlatformUserChanged_Parms), Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics
	{
		struct SBZAchievementManager_eventOnChallengeCompleted_Parms
		{
			FSBZChallengeData ChallengeData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::NewProp_ChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::NewProp_ChallengeData = { "ChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAchievementManager_eventOnChallengeCompleted_Parms, ChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::NewProp_ChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::NewProp_ChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::NewProp_ChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAchievementManager, nullptr, "OnChallengeCompleted", nullptr, nullptr, sizeof(SBZAchievementManager_eventOnChallengeCompleted_Parms), Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAchievementManager, nullptr, "OnInitializedChallengeRecordsCacheDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAchievementManager_NoRegister()
	{
		return USBZAchievementManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZAchievementManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAchievementManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAchievementManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAchievementManager_CompleteAchievement, "CompleteAchievement" }, // 4111540580
		{ &Z_Construct_UFunction_USBZAchievementManager_CompleteAchievements, "CompleteAchievements" }, // 1896175151
		{ &Z_Construct_UFunction_USBZAchievementManager_GetAchievementManager, "GetAchievementManager" }, // 3954387168
		{ &Z_Construct_UFunction_USBZAchievementManager_HandlePlatformUserChanged, "HandlePlatformUserChanged" }, // 1827382374
		{ &Z_Construct_UFunction_USBZAchievementManager_OnChallengeCompleted, "OnChallengeCompleted" }, // 839177808
		{ &Z_Construct_UFunction_USBZAchievementManager_OnInitializedChallengeRecordsCacheDone, "OnInitializedChallengeRecordsCacheDone" }, // 3578417140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAchievementManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAchievementManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAchievementManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAchievementManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAchievementManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAchievementManager_Statics::ClassParams = {
		&USBZAchievementManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAchievementManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAchievementManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAchievementManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAchievementManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAchievementManager, 1055702113);
	template<> STARBREEZE_API UClass* StaticClass<USBZAchievementManager>()
	{
		return USBZAchievementManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAchievementManager(Z_Construct_UClass_USBZAchievementManager, &USBZAchievementManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAchievementManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAchievementManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
