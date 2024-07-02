// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressStat();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRecommendedChallenges();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnCompletedChallengeRequestDoneDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnCompletedAchievementRequestDoneDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnDailyChallengesUpdatedDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeLocalizationOverrides_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStatData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChallengeConversion();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FUserChallengeRecord();
// End Cross Module References
	DEFINE_FUNCTION(USBZChallengeManager::execGetChallengeDescriptionText)
	{
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_Challenge);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetChallengeDescriptionText(Z_Param_Out_Challenge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetChallengeManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZChallengeManager**)Z_Param__Result=USBZChallengeManager::GetChallengeManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetChallengeNameText)
	{
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_Challenge);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetChallengeNameText(Z_Param_Out_Challenge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetChallengeStatDescriptionText)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZChallengeProgressStat,Z_Param_Out_ChallengeStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetChallengeStatDescriptionText(Z_Param_WorldContextObject,Z_Param_Out_ChallengeStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetChallengeStatNameText)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZChallengeProgressStat,Z_Param_Out_ChallengeStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetChallengeStatNameText(Z_Param_WorldContextObject,Z_Param_Out_ChallengeStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetChallengeStatObjectiveText)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_Challenge);
		P_GET_STRUCT_REF(FSBZChallengeProgressStat,Z_Param_Out_ChallengeStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetChallengeStatObjectiveText(Z_Param_WorldContextObject,Z_Param_Out_Challenge,Z_Param_Out_ChallengeStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetCompletedChallengesDuringMission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZChallengeData>*)Z_Param__Result=P_THIS->GetCompletedChallengesDuringMission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetDailyChallengesArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZChallengeData>*)Z_Param__Result=P_THIS->GetDailyChallengesArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetRecommendedChallenges)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenName);
		P_GET_STRUCT_REF(FSBZRecommendedChallenges,Z_Param_Out_RecommendedChallengesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRecommendedChallenges(Z_Param_ScreenName,Z_Param_Out_RecommendedChallengesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetRerollAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRerollAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execGetStatProgress)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InStatID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStatProgress(Z_Param_Out_InStatID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execHandleOnStateMachineStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnStateMachineStateEntered(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execHandlePlatformUserChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlatformUserChanged(Z_Param_OldUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execRefreshChallengeRecordCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshChallengeRecordCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeManager::execRefreshDailySlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshDailySlot(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	void USBZChallengeManager::StaticRegisterNativesUSBZChallengeManager()
	{
		UClass* Class = USBZChallengeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChallengeDescriptionText", &USBZChallengeManager::execGetChallengeDescriptionText },
			{ "GetChallengeManager", &USBZChallengeManager::execGetChallengeManager },
			{ "GetChallengeNameText", &USBZChallengeManager::execGetChallengeNameText },
			{ "GetChallengeStatDescriptionText", &USBZChallengeManager::execGetChallengeStatDescriptionText },
			{ "GetChallengeStatNameText", &USBZChallengeManager::execGetChallengeStatNameText },
			{ "GetChallengeStatObjectiveText", &USBZChallengeManager::execGetChallengeStatObjectiveText },
			{ "GetCompletedChallengesDuringMission", &USBZChallengeManager::execGetCompletedChallengesDuringMission },
			{ "GetDailyChallengesArray", &USBZChallengeManager::execGetDailyChallengesArray },
			{ "GetRecommendedChallenges", &USBZChallengeManager::execGetRecommendedChallenges },
			{ "GetRerollAvailable", &USBZChallengeManager::execGetRerollAvailable },
			{ "GetStatProgress", &USBZChallengeManager::execGetStatProgress },
			{ "HandleOnStateMachineStateEntered", &USBZChallengeManager::execHandleOnStateMachineStateEntered },
			{ "HandlePlatformUserChanged", &USBZChallengeManager::execHandlePlatformUserChanged },
			{ "RefreshChallengeRecordCache", &USBZChallengeManager::execRefreshChallengeRecordCache },
			{ "RefreshDailySlot", &USBZChallengeManager::execRefreshDailySlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics
	{
		struct SBZChallengeManager_eventGetChallengeDescriptionText_Parms
		{
			FSBZChallengeData Challenge;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Challenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Challenge;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::NewProp_Challenge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::NewProp_Challenge = { "Challenge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeDescriptionText_Parms, Challenge), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::NewProp_Challenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::NewProp_Challenge_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeDescriptionText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::NewProp_Challenge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetChallengeDescriptionText", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetChallengeDescriptionText_Parms), Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics
	{
		struct SBZChallengeManager_eventGetChallengeManager_Parms
		{
			const UObject* WorldContextObject;
			USBZChallengeManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeManager_Parms, ReturnValue), Z_Construct_UClass_USBZChallengeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetChallengeManager", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetChallengeManager_Parms), Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics
	{
		struct SBZChallengeManager_eventGetChallengeNameText_Parms
		{
			FSBZChallengeData Challenge;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Challenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Challenge;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::NewProp_Challenge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::NewProp_Challenge = { "Challenge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeNameText_Parms, Challenge), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::NewProp_Challenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::NewProp_Challenge_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeNameText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::NewProp_Challenge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetChallengeNameText", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetChallengeNameText_Parms), Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics
	{
		struct SBZChallengeManager_eventGetChallengeStatDescriptionText_Parms
		{
			const UObject* WorldContextObject;
			FSBZChallengeProgressStat ChallengeStat;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeStat;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatDescriptionText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_ChallengeStat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_ChallengeStat = { "ChallengeStat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatDescriptionText_Parms, ChallengeStat), Z_Construct_UScriptStruct_FSBZChallengeProgressStat, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_ChallengeStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_ChallengeStat_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatDescriptionText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_ChallengeStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetChallengeStatDescriptionText", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetChallengeStatDescriptionText_Parms), Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics
	{
		struct SBZChallengeManager_eventGetChallengeStatNameText_Parms
		{
			const UObject* WorldContextObject;
			FSBZChallengeProgressStat ChallengeStat;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeStat;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatNameText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_ChallengeStat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_ChallengeStat = { "ChallengeStat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatNameText_Parms, ChallengeStat), Z_Construct_UScriptStruct_FSBZChallengeProgressStat, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_ChallengeStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_ChallengeStat_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatNameText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_ChallengeStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetChallengeStatNameText", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetChallengeStatNameText_Parms), Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics
	{
		struct SBZChallengeManager_eventGetChallengeStatObjectiveText_Parms
		{
			const UObject* WorldContextObject;
			FSBZChallengeData Challenge;
			FSBZChallengeProgressStat ChallengeStat;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Challenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Challenge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeStat;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatObjectiveText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_Challenge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_Challenge = { "Challenge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatObjectiveText_Parms, Challenge), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_Challenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_Challenge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_ChallengeStat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_ChallengeStat = { "ChallengeStat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatObjectiveText_Parms, ChallengeStat), Z_Construct_UScriptStruct_FSBZChallengeProgressStat, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_ChallengeStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_ChallengeStat_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetChallengeStatObjectiveText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_Challenge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_ChallengeStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetChallengeStatObjectiveText", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetChallengeStatObjectiveText_Parms), Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics
	{
		struct SBZChallengeManager_eventGetCompletedChallengesDuringMission_Parms
		{
			TArray<FSBZChallengeData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetCompletedChallengesDuringMission_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetCompletedChallengesDuringMission", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetCompletedChallengesDuringMission_Parms), Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics
	{
		struct SBZChallengeManager_eventGetDailyChallengesArray_Parms
		{
			TArray<FSBZChallengeData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetDailyChallengesArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetDailyChallengesArray", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetDailyChallengesArray_Parms), Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics
	{
		struct SBZChallengeManager_eventGetRecommendedChallenges_Parms
		{
			FString ScreenName;
			FSBZRecommendedChallenges RecommendedChallengesOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecommendedChallengesOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ScreenName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ScreenName = { "ScreenName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetRecommendedChallenges_Parms, ScreenName), METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ScreenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ScreenName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_RecommendedChallengesOut = { "RecommendedChallengesOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetRecommendedChallenges_Parms, RecommendedChallengesOut), Z_Construct_UScriptStruct_FSBZRecommendedChallenges, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZChallengeManager_eventGetRecommendedChallenges_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZChallengeManager_eventGetRecommendedChallenges_Parms), &Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ScreenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_RecommendedChallengesOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetRecommendedChallenges", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetRecommendedChallenges_Parms), Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics
	{
		struct SBZChallengeManager_eventGetRerollAvailable_Parms
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
	void Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZChallengeManager_eventGetRerollAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZChallengeManager_eventGetRerollAvailable_Parms), &Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetRerollAvailable", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetRerollAvailable_Parms), Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics
	{
		struct SBZChallengeManager_eventGetStatProgress_Parms
		{
			FName InStatID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStatID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InStatID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::NewProp_InStatID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::NewProp_InStatID = { "InStatID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetStatProgress_Parms, InStatID), METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::NewProp_InStatID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::NewProp_InStatID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventGetStatProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::NewProp_InStatID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "GetStatProgress", nullptr, nullptr, sizeof(SBZChallengeManager_eventGetStatProgress_Parms), Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_GetStatProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_GetStatProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics
	{
		struct SBZChallengeManager_eventHandleOnStateMachineStateEntered_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventHandleOnStateMachineStateEntered_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "HandleOnStateMachineStateEntered", nullptr, nullptr, sizeof(SBZChallengeManager_eventHandleOnStateMachineStateEntered_Parms), Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics
	{
		struct SBZChallengeManager_eventHandlePlatformUserChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex = { "OldUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventHandlePlatformUserChanged_Parms, OldUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "HandlePlatformUserChanged", nullptr, nullptr, sizeof(SBZChallengeManager_eventHandlePlatformUserChanged_Parms), Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "RefreshChallengeRecordCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics
	{
		struct SBZChallengeManager_eventRefreshDailySlot_Parms
		{
			int32 SlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeManager_eventRefreshDailySlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeManager, nullptr, "RefreshDailySlot", nullptr, nullptr, sizeof(SBZChallengeManager_eventRefreshDailySlot_Parms), Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZChallengeManager_NoRegister()
	{
		return USBZChallengeManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZChallengeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompletedChallenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedChallenge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompletedAchievement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedAchievement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDailyChallengesUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDailyChallengesUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalizationOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyPointRewardStatID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InfamyPointRewardStatID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChallengesStringTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengesStringTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengesStringTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChallengesStatsStringTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengesStatsStringTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengesStatsStringTables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChallengeMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AchievementMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AchievementMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StatMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompletedChallenges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompletedChallenges;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChallengeConversionMap_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChallengeConversionMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeConversionMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeConversionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChallengeConversionMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompletedAchievementsAtStartup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedAchievementsAtStartup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompletedAchievementsAtStartup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeRecordCaches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeRecordCaches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeRecordCaches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChallengeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZChallengeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZChallengeManager_GetChallengeDescriptionText, "GetChallengeDescriptionText" }, // 1112257477
		{ &Z_Construct_UFunction_USBZChallengeManager_GetChallengeManager, "GetChallengeManager" }, // 292912486
		{ &Z_Construct_UFunction_USBZChallengeManager_GetChallengeNameText, "GetChallengeNameText" }, // 2138221908
		{ &Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatDescriptionText, "GetChallengeStatDescriptionText" }, // 516526815
		{ &Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatNameText, "GetChallengeStatNameText" }, // 4095619671
		{ &Z_Construct_UFunction_USBZChallengeManager_GetChallengeStatObjectiveText, "GetChallengeStatObjectiveText" }, // 3449486697
		{ &Z_Construct_UFunction_USBZChallengeManager_GetCompletedChallengesDuringMission, "GetCompletedChallengesDuringMission" }, // 359289422
		{ &Z_Construct_UFunction_USBZChallengeManager_GetDailyChallengesArray, "GetDailyChallengesArray" }, // 999679939
		{ &Z_Construct_UFunction_USBZChallengeManager_GetRecommendedChallenges, "GetRecommendedChallenges" }, // 1786882134
		{ &Z_Construct_UFunction_USBZChallengeManager_GetRerollAvailable, "GetRerollAvailable" }, // 1137628464
		{ &Z_Construct_UFunction_USBZChallengeManager_GetStatProgress, "GetStatProgress" }, // 2775097365
		{ &Z_Construct_UFunction_USBZChallengeManager_HandleOnStateMachineStateEntered, "HandleOnStateMachineStateEntered" }, // 544043342
		{ &Z_Construct_UFunction_USBZChallengeManager_HandlePlatformUserChanged, "HandlePlatformUserChanged" }, // 1241691108
		{ &Z_Construct_UFunction_USBZChallengeManager_RefreshChallengeRecordCache, "RefreshChallengeRecordCache" }, // 2671829563
		{ &Z_Construct_UFunction_USBZChallengeManager_RefreshDailySlot, "RefreshDailySlot" }, // 2439306749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChallengeManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedChallenge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedChallenge = { "OnCompletedChallenge", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, OnCompletedChallenge), Z_Construct_UDelegateFunction_Starbreeze_SBZOnCompletedChallengeRequestDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedChallenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedChallenge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedAchievement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedAchievement = { "OnCompletedAchievement", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, OnCompletedAchievement), Z_Construct_UDelegateFunction_Starbreeze_SBZOnCompletedAchievementRequestDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedAchievement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnDailyChallengesUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnDailyChallengesUpdated = { "OnDailyChallengesUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, OnDailyChallengesUpdated), Z_Construct_UDelegateFunction_Starbreeze_SBZOnDailyChallengesUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnDailyChallengesUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnDailyChallengesUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_LocalizationOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_LocalizationOverrides = { "LocalizationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, LocalizationOverrides), Z_Construct_UClass_USBZChallengeLocalizationOverrides_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_LocalizationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_LocalizationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_InfamyPointRewardStatID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_InfamyPointRewardStatID = { "InfamyPointRewardStatID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, InfamyPointRewardStatID), METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_InfamyPointRewardStatID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_InfamyPointRewardStatID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStringTables_Inner = { "ChallengesStringTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStringTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStringTables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStringTables = { "ChallengesStringTables", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, ChallengesStringTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStringTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStringTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStatsStringTables_Inner = { "ChallengesStatsStringTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStringTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStatsStringTables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStatsStringTables = { "ChallengesStatsStringTables", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, ChallengesStatsStringTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStatsStringTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStatsStringTables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap_ValueProp = { "ChallengeMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap_Key_KeyProp = { "ChallengeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap = { "ChallengeMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, ChallengeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap_ValueProp = { "AchievementMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap_Key_KeyProp = { "AchievementMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap = { "AchievementMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, AchievementMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap_ValueProp = { "StatMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZStatData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap_Key_KeyProp = { "StatMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap = { "StatMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, StatMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedChallenges_Inner = { "CompletedChallenges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedChallenges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedChallenges = { "CompletedChallenges", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, CompletedChallenges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedChallenges_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_ValueProp = { "ChallengeConversionMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_Starbreeze_ESBZChallengeConversion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_Key_KeyProp = { "ChallengeConversionMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap = { "ChallengeConversionMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, ChallengeConversionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedAchievementsAtStartup_Inner = { "CompletedAchievementsAtStartup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedAchievementsAtStartup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedAchievementsAtStartup = { "CompletedAchievementsAtStartup", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, CompletedAchievementsAtStartup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedAchievementsAtStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedAchievementsAtStartup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeRecordCaches_Inner = { "ChallengeRecordCaches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserChallengeRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeRecordCaches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeRecordCaches = { "ChallengeRecordCaches", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeManager, ChallengeRecordCaches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeRecordCaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeRecordCaches_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZChallengeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedChallenge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnCompletedAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_OnDailyChallengesUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_LocalizationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_InfamyPointRewardStatID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStringTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStringTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStatsStringTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengesStatsStringTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_AchievementMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_StatMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedChallenges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedChallenges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeConversionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedAchievementsAtStartup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_CompletedAchievementsAtStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeRecordCaches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeManager_Statics::NewProp_ChallengeRecordCaches,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChallengeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChallengeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChallengeManager_Statics::ClassParams = {
		&USBZChallengeManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZChallengeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChallengeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChallengeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChallengeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChallengeManager, 2462016806);
	template<> STARBREEZE_API UClass* StaticClass<USBZChallengeManager>()
	{
		return USBZChallengeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChallengeManager(Z_Construct_UClass_USBZChallengeManager, &USBZChallengeManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChallengeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChallengeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
