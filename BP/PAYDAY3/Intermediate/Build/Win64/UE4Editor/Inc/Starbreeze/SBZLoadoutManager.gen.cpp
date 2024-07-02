// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadoutManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadoutManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnActiveLoadoutIndexChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPlayerLoadoutConfigChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZLoadoutManager::execGetActiveLoadoutIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveLoadoutIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutManager::execGetLoadoutManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLoadoutManager**)Z_Param__Result=USBZLoadoutManager::GetLoadoutManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutManager::execGetLoadoutName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLoadoutName(Z_Param_LoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutManager::execGetPlayerLoadouts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZPlayerLoadoutConfig>*)Z_Param__Result=P_THIS->GetPlayerLoadouts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutManager::execSendLoadoutName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_LoadoutName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendLoadoutName(Z_Param_LoadoutIndex,Z_Param_LoadoutName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutManager::execSetActiveLoadoutIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActiveLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZMetaRequestResult*)Z_Param__Result=P_THIS->SetActiveLoadoutIndex(Z_Param_ActiveLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutManager::execSetLoadoutAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_InLoadoutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutAtIndex(Z_Param_LoadoutIndex,Z_Param_Out_InLoadoutConfig);
		P_NATIVE_END;
	}
	void USBZLoadoutManager::StaticRegisterNativesUSBZLoadoutManager()
	{
		UClass* Class = USBZLoadoutManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveLoadoutIndex", &USBZLoadoutManager::execGetActiveLoadoutIndex },
			{ "GetLoadoutManager", &USBZLoadoutManager::execGetLoadoutManager },
			{ "GetLoadoutName", &USBZLoadoutManager::execGetLoadoutName },
			{ "GetPlayerLoadouts", &USBZLoadoutManager::execGetPlayerLoadouts },
			{ "SendLoadoutName", &USBZLoadoutManager::execSendLoadoutName },
			{ "SetActiveLoadoutIndex", &USBZLoadoutManager::execSetActiveLoadoutIndex },
			{ "SetLoadoutAtIndex", &USBZLoadoutManager::execSetLoadoutAtIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics
	{
		struct SBZLoadoutManager_eventGetActiveLoadoutIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventGetActiveLoadoutIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutManager, nullptr, "GetActiveLoadoutIndex", nullptr, nullptr, sizeof(SBZLoadoutManager_eventGetActiveLoadoutIndex_Parms), Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics
	{
		struct SBZLoadoutManager_eventGetLoadoutManager_Parms
		{
			const UObject* WorldContextObject;
			USBZLoadoutManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventGetLoadoutManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventGetLoadoutManager_Parms, ReturnValue), Z_Construct_UClass_USBZLoadoutManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutManager, nullptr, "GetLoadoutManager", nullptr, nullptr, sizeof(SBZLoadoutManager_eventGetLoadoutManager_Parms), Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics
	{
		struct SBZLoadoutManager_eventGetLoadoutName_Parms
		{
			int32 LoadoutIndex;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::NewProp_LoadoutIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventGetLoadoutName_Parms, LoadoutIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::NewProp_LoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::NewProp_LoadoutIndex_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventGetLoadoutName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutManager, nullptr, "GetLoadoutName", nullptr, nullptr, sizeof(SBZLoadoutManager_eventGetLoadoutName_Parms), Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics
	{
		struct SBZLoadoutManager_eventGetPlayerLoadouts_Parms
		{
			TArray<FSBZPlayerLoadoutConfig> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventGetPlayerLoadouts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutManager, nullptr, "GetPlayerLoadouts", nullptr, nullptr, sizeof(SBZLoadoutManager_eventGetPlayerLoadouts_Parms), Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics
	{
		struct SBZLoadoutManager_eventSendLoadoutName_Parms
		{
			int32 LoadoutIndex;
			FString LoadoutName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventSendLoadoutName_Parms, LoadoutIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutName = { "LoadoutName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventSendLoadoutName_Parms, LoadoutName), METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::NewProp_LoadoutName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutManager, nullptr, "SendLoadoutName", nullptr, nullptr, sizeof(SBZLoadoutManager_eventSendLoadoutName_Parms), Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics
	{
		struct SBZLoadoutManager_eventSetActiveLoadoutIndex_Parms
		{
			int32 ActiveLoadoutIndex;
			ESBZMetaRequestResult ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveLoadoutIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::NewProp_ActiveLoadoutIndex = { "ActiveLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventSetActiveLoadoutIndex_Parms, ActiveLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventSetActiveLoadoutIndex_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::NewProp_ActiveLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutManager, nullptr, "SetActiveLoadoutIndex", nullptr, nullptr, sizeof(SBZLoadoutManager_eventSetActiveLoadoutIndex_Parms), Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics
	{
		struct SBZLoadoutManager_eventSetLoadoutAtIndex_Parms
		{
			int32 LoadoutIndex;
			FSBZPlayerLoadoutConfig InLoadoutConfig;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoadoutConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLoadoutConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventSetLoadoutAtIndex_Parms, LoadoutIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::NewProp_InLoadoutConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::NewProp_InLoadoutConfig = { "InLoadoutConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutManager_eventSetLoadoutAtIndex_Parms, InLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::NewProp_InLoadoutConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::NewProp_InLoadoutConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::NewProp_InLoadoutConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutManager, nullptr, "SetLoadoutAtIndex", nullptr, nullptr, sizeof(SBZLoadoutManager_eventSetLoadoutAtIndex_Parms), Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoadoutManager_NoRegister()
	{
		return USBZLoadoutManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadoutManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveLoadoutIndexChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveLoadoutIndexChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLocalPlayerLoadoutChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocalPlayerLoadoutChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadoutManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoadoutManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoadoutManager_GetActiveLoadoutIndex, "GetActiveLoadoutIndex" }, // 1402920019
		{ &Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutManager, "GetLoadoutManager" }, // 636560141
		{ &Z_Construct_UFunction_USBZLoadoutManager_GetLoadoutName, "GetLoadoutName" }, // 1058523582
		{ &Z_Construct_UFunction_USBZLoadoutManager_GetPlayerLoadouts, "GetPlayerLoadouts" }, // 3610735147
		{ &Z_Construct_UFunction_USBZLoadoutManager_SendLoadoutName, "SendLoadoutName" }, // 4181899132
		{ &Z_Construct_UFunction_USBZLoadoutManager_SetActiveLoadoutIndex, "SetActiveLoadoutIndex" }, // 2214571214
		{ &Z_Construct_UFunction_USBZLoadoutManager_SetLoadoutAtIndex, "SetLoadoutAtIndex" }, // 1408614554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadoutManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnActiveLoadoutIndexChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutManager" },
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnActiveLoadoutIndexChanged = { "OnActiveLoadoutIndexChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoadoutManager, OnActiveLoadoutIndexChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnActiveLoadoutIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnActiveLoadoutIndexChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnActiveLoadoutIndexChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnLocalPlayerLoadoutChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutManager" },
		{ "ModuleRelativePath", "Public/SBZLoadoutManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnLocalPlayerLoadoutChanged = { "OnLocalPlayerLoadoutChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoadoutManager, OnLocalPlayerLoadoutChanged), Z_Construct_UDelegateFunction_Starbreeze_OnPlayerLoadoutConfigChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnLocalPlayerLoadoutChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnLocalPlayerLoadoutChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoadoutManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnActiveLoadoutIndexChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutManager_Statics::NewProp_OnLocalPlayerLoadoutChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadoutManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadoutManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadoutManager_Statics::ClassParams = {
		&USBZLoadoutManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLoadoutManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadoutManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadoutManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadoutManager, 1359966209);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadoutManager>()
	{
		return USBZLoadoutManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadoutManager(Z_Construct_UClass_USBZLoadoutManager, &USBZLoadoutManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadoutManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadoutManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
