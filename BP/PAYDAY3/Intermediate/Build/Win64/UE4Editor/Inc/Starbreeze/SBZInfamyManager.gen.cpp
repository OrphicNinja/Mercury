// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamyManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyManager();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInfamyXPChangedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnRenownLevelChangedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZInfamyManager::execClientGetCurrentExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClientGetCurrentExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execClientGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClientGetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execClientGetCurrentRenownLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClientGetCurrentRenownLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execClientGetPreMatchExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClientGetPreMatchExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execClientGetPreviousExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClientGetPreviousExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execClientGetProgressInfo)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutProgressTowardsNextLevelUp);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutPointsRequiredForNextLevelUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientGetProgressInfo(Z_Param_Out_OutProgressTowardsNextLevelUp,Z_Param_Out_OutPointsRequiredForNextLevelUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execGetExperienceForLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetExperienceForLevel(Z_Param_InLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execGetInfamyManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInfamyManager**)Z_Param__Result=USBZInfamyManager::GetInfamyManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execGetLevelForExperience)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevelForExperience(Z_Param_InExperience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execGetMaxLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyManager::execHandleOnStateMachineStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnStateMachineStateEntered(Z_Param_StateName);
		P_NATIVE_END;
	}
	void USBZInfamyManager::StaticRegisterNativesUSBZInfamyManager()
	{
		UClass* Class = USBZInfamyManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientGetCurrentExperience", &USBZInfamyManager::execClientGetCurrentExperience },
			{ "ClientGetCurrentLevel", &USBZInfamyManager::execClientGetCurrentLevel },
			{ "ClientGetCurrentRenownLevel", &USBZInfamyManager::execClientGetCurrentRenownLevel },
			{ "ClientGetPreMatchExperience", &USBZInfamyManager::execClientGetPreMatchExperience },
			{ "ClientGetPreviousExperience", &USBZInfamyManager::execClientGetPreviousExperience },
			{ "ClientGetProgressInfo", &USBZInfamyManager::execClientGetProgressInfo },
			{ "GetExperienceForLevel", &USBZInfamyManager::execGetExperienceForLevel },
			{ "GetInfamyManager", &USBZInfamyManager::execGetInfamyManager },
			{ "GetLevelForExperience", &USBZInfamyManager::execGetLevelForExperience },
			{ "GetMaxLevel", &USBZInfamyManager::execGetMaxLevel },
			{ "HandleOnStateMachineStateEntered", &USBZInfamyManager::execHandleOnStateMachineStateEntered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics
	{
		struct SBZInfamyManager_eventClientGetCurrentExperience_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventClientGetCurrentExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "ClientGetCurrentExperience", nullptr, nullptr, sizeof(SBZInfamyManager_eventClientGetCurrentExperience_Parms), Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics
	{
		struct SBZInfamyManager_eventClientGetCurrentLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventClientGetCurrentLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "ClientGetCurrentLevel", nullptr, nullptr, sizeof(SBZInfamyManager_eventClientGetCurrentLevel_Parms), Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics
	{
		struct SBZInfamyManager_eventClientGetCurrentRenownLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventClientGetCurrentRenownLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "ClientGetCurrentRenownLevel", nullptr, nullptr, sizeof(SBZInfamyManager_eventClientGetCurrentRenownLevel_Parms), Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics
	{
		struct SBZInfamyManager_eventClientGetPreMatchExperience_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventClientGetPreMatchExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "ClientGetPreMatchExperience", nullptr, nullptr, sizeof(SBZInfamyManager_eventClientGetPreMatchExperience_Parms), Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics
	{
		struct SBZInfamyManager_eventClientGetPreviousExperience_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventClientGetPreviousExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "ClientGetPreviousExperience", nullptr, nullptr, sizeof(SBZInfamyManager_eventClientGetPreviousExperience_Parms), Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics
	{
		struct SBZInfamyManager_eventClientGetProgressInfo_Parms
		{
			int32 OutProgressTowardsNextLevelUp;
			int32 OutPointsRequiredForNextLevelUp;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutProgressTowardsNextLevelUp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutPointsRequiredForNextLevelUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::NewProp_OutProgressTowardsNextLevelUp = { "OutProgressTowardsNextLevelUp", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventClientGetProgressInfo_Parms, OutProgressTowardsNextLevelUp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::NewProp_OutPointsRequiredForNextLevelUp = { "OutPointsRequiredForNextLevelUp", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventClientGetProgressInfo_Parms, OutPointsRequiredForNextLevelUp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::NewProp_OutProgressTowardsNextLevelUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::NewProp_OutPointsRequiredForNextLevelUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "ClientGetProgressInfo", nullptr, nullptr, sizeof(SBZInfamyManager_eventClientGetProgressInfo_Parms), Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics
	{
		struct SBZInfamyManager_eventGetExperienceForLevel_Parms
		{
			int32 InLevel;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::NewProp_InLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventGetExperienceForLevel_Parms, InLevel), METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::NewProp_InLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::NewProp_InLevel_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventGetExperienceForLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::NewProp_InLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "GetExperienceForLevel", nullptr, nullptr, sizeof(SBZInfamyManager_eventGetExperienceForLevel_Parms), Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics
	{
		struct SBZInfamyManager_eventGetInfamyManager_Parms
		{
			const UObject* WorldContextObject;
			USBZInfamyManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventGetInfamyManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventGetInfamyManager_Parms, ReturnValue), Z_Construct_UClass_USBZInfamyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "GetInfamyManager", nullptr, nullptr, sizeof(SBZInfamyManager_eventGetInfamyManager_Parms), Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics
	{
		struct SBZInfamyManager_eventGetLevelForExperience_Parms
		{
			int32 InExperience;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InExperience;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::NewProp_InExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::NewProp_InExperience = { "InExperience", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventGetLevelForExperience_Parms, InExperience), METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::NewProp_InExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::NewProp_InExperience_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventGetLevelForExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::NewProp_InExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "GetLevelForExperience", nullptr, nullptr, sizeof(SBZInfamyManager_eventGetLevelForExperience_Parms), Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics
	{
		struct SBZInfamyManager_eventGetMaxLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventGetMaxLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "GetMaxLevel", nullptr, nullptr, sizeof(SBZInfamyManager_eventGetMaxLevel_Parms), Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics
	{
		struct SBZInfamyManager_eventHandleOnStateMachineStateEntered_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyManager_eventHandleOnStateMachineStateEntered_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyManager, nullptr, "HandleOnStateMachineStateEntered", nullptr, nullptr, sizeof(SBZInfamyManager_eventHandleOnStateMachineStateEntered_Parms), Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInfamyManager_NoRegister()
	{
		return USBZInfamyManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZInfamyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInfamyXPChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInfamyXPChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRenownLevelChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRenownLevelChangedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInfamyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatisticsManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInfamyManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentExperience, "ClientGetCurrentExperience" }, // 3720687220
		{ &Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentLevel, "ClientGetCurrentLevel" }, // 2592258694
		{ &Z_Construct_UFunction_USBZInfamyManager_ClientGetCurrentRenownLevel, "ClientGetCurrentRenownLevel" }, // 3174604871
		{ &Z_Construct_UFunction_USBZInfamyManager_ClientGetPreMatchExperience, "ClientGetPreMatchExperience" }, // 2926947234
		{ &Z_Construct_UFunction_USBZInfamyManager_ClientGetPreviousExperience, "ClientGetPreviousExperience" }, // 2394722527
		{ &Z_Construct_UFunction_USBZInfamyManager_ClientGetProgressInfo, "ClientGetProgressInfo" }, // 1623597746
		{ &Z_Construct_UFunction_USBZInfamyManager_GetExperienceForLevel, "GetExperienceForLevel" }, // 565341799
		{ &Z_Construct_UFunction_USBZInfamyManager_GetInfamyManager, "GetInfamyManager" }, // 1109115822
		{ &Z_Construct_UFunction_USBZInfamyManager_GetLevelForExperience, "GetLevelForExperience" }, // 1101599480
		{ &Z_Construct_UFunction_USBZInfamyManager_GetMaxLevel, "GetMaxLevel" }, // 179612356
		{ &Z_Construct_UFunction_USBZInfamyManager_HandleOnStateMachineStateEntered, "HandleOnStateMachineStateEntered" }, // 849194326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInfamyManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnInfamyXPChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyManager" },
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnInfamyXPChangedDelegate = { "OnInfamyXPChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInfamyManager, OnInfamyXPChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInfamyXPChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnInfamyXPChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnInfamyXPChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnRenownLevelChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyManager" },
		{ "ModuleRelativePath", "Public/SBZInfamyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnRenownLevelChangedDelegate = { "OnRenownLevelChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInfamyManager, OnRenownLevelChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnRenownLevelChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnRenownLevelChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnRenownLevelChangedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInfamyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnInfamyXPChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyManager_Statics::NewProp_OnRenownLevelChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInfamyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInfamyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInfamyManager_Statics::ClassParams = {
		&USBZInfamyManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInfamyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInfamyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInfamyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInfamyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInfamyManager, 3630455814);
	template<> STARBREEZE_API UClass* StaticClass<USBZInfamyManager>()
	{
		return USBZInfamyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInfamyManager(Z_Construct_UClass_USBZInfamyManager, &USBZInfamyManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInfamyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInfamyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
