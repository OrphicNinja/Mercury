// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnalyticsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnalyticsManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnalyticsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnalyticsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyManager_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType();
	SBZANALYTICS_API UClass* Z_Construct_UClass_USBZAnalyticsProvider_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAnalyticsManager::execSendChallengeCompleted)
	{
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_ChallengeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendChallengeCompleted(Z_Param_Out_ChallengeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAnalyticsManager::execSendCheaterDetected)
	{
		P_GET_ENUM(ESBZCheaterPolicyType,Z_Param_AntiCheatAction);
		P_GET_UBOOL(Z_Param_bIsCheatActionSuccessful);
		P_GET_PROPERTY(FStrProperty,Z_Param_CheatTypeString);
		P_GET_PROPERTY(FStrProperty,Z_Param_AdditionalInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCheaterDetected(ESBZCheaterPolicyType(Z_Param_AntiCheatAction),Z_Param_bIsCheatActionSuccessful,Z_Param_CheatTypeString,Z_Param_AdditionalInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAnalyticsManager::execSendInfamyChanged)
	{
		P_GET_OBJECT(USBZInfamyManager,Z_Param_InfamyManager);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewInfamyExperience);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreviousInfamyExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendInfamyChanged(Z_Param_InfamyManager,Z_Param_NewInfamyExperience,Z_Param_PreviousInfamyExperience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAnalyticsManager::execSendNotOwningHeistDetected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteUserId);
		P_GET_ENUM(ESBZNotOwningHeistPolicyType,Z_Param_NotOwningHeistAction);
		P_GET_UBOOL(Z_Param_bIsActionSuccessful);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_PROPERTY(FStrProperty,Z_Param_AdditionalInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendNotOwningHeistDetected(Z_Param_AccelByteUserId,ESBZNotOwningHeistPolicyType(Z_Param_NotOwningHeistAction),Z_Param_bIsActionSuccessful,Z_Param_Description,Z_Param_AdditionalInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAnalyticsManager::execSendStayAsPartySelected)
	{
		P_GET_UBOOL(Z_Param_bIsPartyLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendStayAsPartySelected(Z_Param_bIsPartyLeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAnalyticsManager::execSendSyncDLC)
	{
		P_GET_UBOOL(Z_Param_bIsSyncDLCSuccessful);
		P_GET_PROPERTY(FStrProperty,Z_Param_SyncDLCFailureMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSyncDLC(Z_Param_bIsSyncDLCSuccessful,Z_Param_SyncDLCFailureMessage);
		P_NATIVE_END;
	}
	void USBZAnalyticsManager::StaticRegisterNativesUSBZAnalyticsManager()
	{
		UClass* Class = USBZAnalyticsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendChallengeCompleted", &USBZAnalyticsManager::execSendChallengeCompleted },
			{ "SendCheaterDetected", &USBZAnalyticsManager::execSendCheaterDetected },
			{ "SendInfamyChanged", &USBZAnalyticsManager::execSendInfamyChanged },
			{ "SendNotOwningHeistDetected", &USBZAnalyticsManager::execSendNotOwningHeistDetected },
			{ "SendStayAsPartySelected", &USBZAnalyticsManager::execSendStayAsPartySelected },
			{ "SendSyncDLC", &USBZAnalyticsManager::execSendSyncDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics
	{
		struct SBZAnalyticsManager_eventSendChallengeCompleted_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::NewProp_ChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::NewProp_ChallengeData = { "ChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendChallengeCompleted_Parms, ChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::NewProp_ChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::NewProp_ChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::NewProp_ChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAnalyticsManager, nullptr, "SendChallengeCompleted", nullptr, nullptr, sizeof(SBZAnalyticsManager_eventSendChallengeCompleted_Parms), Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics
	{
		struct SBZAnalyticsManager_eventSendCheaterDetected_Parms
		{
			ESBZCheaterPolicyType AntiCheatAction;
			bool bIsCheatActionSuccessful;
			FString CheatTypeString;
			FString AdditionalInformation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AntiCheatAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCheatAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AntiCheatAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheatActionSuccessful_MetaData[];
#endif
		static void NewProp_bIsCheatActionSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheatActionSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatTypeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheatTypeString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AntiCheatAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AntiCheatAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AntiCheatAction = { "AntiCheatAction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendCheaterDetected_Parms, AntiCheatAction), Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AntiCheatAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AntiCheatAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_bIsCheatActionSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_bIsCheatActionSuccessful_SetBit(void* Obj)
	{
		((SBZAnalyticsManager_eventSendCheaterDetected_Parms*)Obj)->bIsCheatActionSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_bIsCheatActionSuccessful = { "bIsCheatActionSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAnalyticsManager_eventSendCheaterDetected_Parms), &Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_bIsCheatActionSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_bIsCheatActionSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_bIsCheatActionSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_CheatTypeString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_CheatTypeString = { "CheatTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendCheaterDetected_Parms, CheatTypeString), METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_CheatTypeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_CheatTypeString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AdditionalInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AdditionalInformation = { "AdditionalInformation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendCheaterDetected_Parms, AdditionalInformation), METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AdditionalInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AdditionalInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AntiCheatAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AntiCheatAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_bIsCheatActionSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_CheatTypeString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::NewProp_AdditionalInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAnalyticsManager, nullptr, "SendCheaterDetected", nullptr, nullptr, sizeof(SBZAnalyticsManager_eventSendCheaterDetected_Parms), Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics
	{
		struct SBZAnalyticsManager_eventSendInfamyChanged_Parms
		{
			USBZInfamyManager* InfamyManager;
			int32 NewInfamyExperience;
			int32 PreviousInfamyExperience;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfamyManager;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewInfamyExperience;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousInfamyExperience;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::NewProp_InfamyManager = { "InfamyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendInfamyChanged_Parms, InfamyManager), Z_Construct_UClass_USBZInfamyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::NewProp_NewInfamyExperience = { "NewInfamyExperience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendInfamyChanged_Parms, NewInfamyExperience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::NewProp_PreviousInfamyExperience = { "PreviousInfamyExperience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendInfamyChanged_Parms, PreviousInfamyExperience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::NewProp_InfamyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::NewProp_NewInfamyExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::NewProp_PreviousInfamyExperience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAnalyticsManager, nullptr, "SendInfamyChanged", nullptr, nullptr, sizeof(SBZAnalyticsManager_eventSendInfamyChanged_Parms), Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics
	{
		struct SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms
		{
			FString AccelByteUserId;
			ESBZNotOwningHeistPolicyType NotOwningHeistAction;
			bool bIsActionSuccessful;
			FString Description;
			FString AdditionalInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotOwningHeistAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotOwningHeistAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NotOwningHeistAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActionSuccessful_MetaData[];
#endif
		static void NewProp_bIsActionSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActionSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AccelByteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AccelByteUserId = { "AccelByteUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms, AccelByteUserId), METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AccelByteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AccelByteUserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_NotOwningHeistAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_NotOwningHeistAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_NotOwningHeistAction = { "NotOwningHeistAction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms, NotOwningHeistAction), Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_NotOwningHeistAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_NotOwningHeistAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_bIsActionSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_bIsActionSuccessful_SetBit(void* Obj)
	{
		((SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms*)Obj)->bIsActionSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_bIsActionSuccessful = { "bIsActionSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms), &Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_bIsActionSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_bIsActionSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_bIsActionSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AdditionalInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AdditionalInformation = { "AdditionalInformation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms, AdditionalInformation), METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AdditionalInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AdditionalInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AccelByteUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_NotOwningHeistAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_NotOwningHeistAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_bIsActionSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::NewProp_AdditionalInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAnalyticsManager, nullptr, "SendNotOwningHeistDetected", nullptr, nullptr, sizeof(SBZAnalyticsManager_eventSendNotOwningHeistDetected_Parms), Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics
	{
		struct SBZAnalyticsManager_eventSendStayAsPartySelected_Parms
		{
			bool bIsPartyLeader;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPartyLeader_MetaData[];
#endif
		static void NewProp_bIsPartyLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartyLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::NewProp_bIsPartyLeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::NewProp_bIsPartyLeader_SetBit(void* Obj)
	{
		((SBZAnalyticsManager_eventSendStayAsPartySelected_Parms*)Obj)->bIsPartyLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::NewProp_bIsPartyLeader = { "bIsPartyLeader", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAnalyticsManager_eventSendStayAsPartySelected_Parms), &Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::NewProp_bIsPartyLeader_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::NewProp_bIsPartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::NewProp_bIsPartyLeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::NewProp_bIsPartyLeader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAnalyticsManager, nullptr, "SendStayAsPartySelected", nullptr, nullptr, sizeof(SBZAnalyticsManager_eventSendStayAsPartySelected_Parms), Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics
	{
		struct SBZAnalyticsManager_eventSendSyncDLC_Parms
		{
			bool bIsSyncDLCSuccessful;
			FString SyncDLCFailureMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSyncDLCSuccessful_MetaData[];
#endif
		static void NewProp_bIsSyncDLCSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSyncDLCSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncDLCFailureMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SyncDLCFailureMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_bIsSyncDLCSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_bIsSyncDLCSuccessful_SetBit(void* Obj)
	{
		((SBZAnalyticsManager_eventSendSyncDLC_Parms*)Obj)->bIsSyncDLCSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_bIsSyncDLCSuccessful = { "bIsSyncDLCSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAnalyticsManager_eventSendSyncDLC_Parms), &Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_bIsSyncDLCSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_bIsSyncDLCSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_bIsSyncDLCSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_SyncDLCFailureMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_SyncDLCFailureMessage = { "SyncDLCFailureMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnalyticsManager_eventSendSyncDLC_Parms, SyncDLCFailureMessage), METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_SyncDLCFailureMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_SyncDLCFailureMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_bIsSyncDLCSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::NewProp_SyncDLCFailureMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAnalyticsManager, nullptr, "SendSyncDLC", nullptr, nullptr, sizeof(SBZAnalyticsManager_eventSendSyncDLC_Parms), Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAnalyticsManager_NoRegister()
	{
		return USBZAnalyticsManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZAnalyticsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnalyticsProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLaunchedTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameLaunchedTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastScreenUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastScreenUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeartbeatWorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeartbeatWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAnalyticsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAnalyticsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAnalyticsManager_SendChallengeCompleted, "SendChallengeCompleted" }, // 70925846
		{ &Z_Construct_UFunction_USBZAnalyticsManager_SendCheaterDetected, "SendCheaterDetected" }, // 2291551363
		{ &Z_Construct_UFunction_USBZAnalyticsManager_SendInfamyChanged, "SendInfamyChanged" }, // 2037057103
		{ &Z_Construct_UFunction_USBZAnalyticsManager_SendNotOwningHeistDetected, "SendNotOwningHeistDetected" }, // 272760290
		{ &Z_Construct_UFunction_USBZAnalyticsManager_SendStayAsPartySelected, "SendStayAsPartySelected" }, // 2693887632
		{ &Z_Construct_UFunction_USBZAnalyticsManager_SendSyncDLC, "SendSyncDLC" }, // 1698348327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnalyticsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAnalyticsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_AnalyticsProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnalyticsManager" },
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_AnalyticsProvider = { "AnalyticsProvider", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnalyticsManager, AnalyticsProvider), Z_Construct_UClass_USBZAnalyticsProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_AnalyticsProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_AnalyticsProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_GameLaunchedTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnalyticsManager" },
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_GameLaunchedTimestamp = { "GameLaunchedTimestamp", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnalyticsManager, GameLaunchedTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_GameLaunchedTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_GameLaunchedTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_LastScreenUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnalyticsManager" },
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_LastScreenUpdate = { "LastScreenUpdate", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnalyticsManager, LastScreenUpdate), METADATA_PARAMS(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_LastScreenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_LastScreenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_HeartbeatWorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnalyticsManager" },
		{ "ModuleRelativePath", "Public/SBZAnalyticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_HeartbeatWorldContextObject = { "HeartbeatWorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnalyticsManager, HeartbeatWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_HeartbeatWorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_HeartbeatWorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAnalyticsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_AnalyticsProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_GameLaunchedTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_LastScreenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnalyticsManager_Statics::NewProp_HeartbeatWorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAnalyticsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAnalyticsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAnalyticsManager_Statics::ClassParams = {
		&USBZAnalyticsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAnalyticsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnalyticsManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAnalyticsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnalyticsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAnalyticsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAnalyticsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAnalyticsManager, 4106648413);
	template<> STARBREEZE_API UClass* StaticClass<USBZAnalyticsManager>()
	{
		return USBZAnalyticsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAnalyticsManager(Z_Construct_UClass_USBZAnalyticsManager, &USBZAnalyticsManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAnalyticsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAnalyticsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
