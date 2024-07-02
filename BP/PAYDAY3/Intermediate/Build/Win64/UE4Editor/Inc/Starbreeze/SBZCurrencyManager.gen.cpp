// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCurrencyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCurrencyManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCurrencyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCurrencyManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGetCurrencyRequestQueue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCurrencyManager::execAddCurrency)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_SBZPlayerState);
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCurrency(Z_Param_SBZPlayerState,ESBZCurrencyCode(Z_Param_Type),Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCurrencyManager::execCanAfford)
	{
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Cost);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAfford(ESBZCurrencyCode(Z_Param_Type),Z_Param_Cost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCurrencyManager::execGetCurrencyManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCurrencyManager**)Z_Param__Result=USBZCurrencyManager::GetCurrencyManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCurrencyManager::execGetCurrentAmount)
	{
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmount(ESBZCurrencyCode(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCurrencyManager::execSetCurrency)
	{
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Cost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrency(ESBZCurrencyCode(Z_Param_Type),Z_Param_Cost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCurrencyManager::execSubtractCurrency)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_SBZPlayerState);
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubtractCurrency(Z_Param_SBZPlayerState,ESBZCurrencyCode(Z_Param_Type),Z_Param_Amount);
		P_NATIVE_END;
	}
	void USBZCurrencyManager::StaticRegisterNativesUSBZCurrencyManager()
	{
		UClass* Class = USBZCurrencyManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCurrency", &USBZCurrencyManager::execAddCurrency },
			{ "CanAfford", &USBZCurrencyManager::execCanAfford },
			{ "GetCurrencyManager", &USBZCurrencyManager::execGetCurrencyManager },
			{ "GetCurrentAmount", &USBZCurrencyManager::execGetCurrentAmount },
			{ "SetCurrency", &USBZCurrencyManager::execSetCurrency },
			{ "SubtractCurrency", &USBZCurrencyManager::execSubtractCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics
	{
		struct SBZCurrencyManager_eventAddCurrency_Parms
		{
			ASBZPlayerState* SBZPlayerState;
			ESBZCurrencyCode Type;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_SBZPlayerState = { "SBZPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventAddCurrency_Parms, SBZPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventAddCurrency_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventAddCurrency_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_SBZPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyManager, nullptr, "AddCurrency", nullptr, nullptr, sizeof(SBZCurrencyManager_eventAddCurrency_Parms), Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyManager_AddCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyManager_AddCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics
	{
		struct SBZCurrencyManager_eventCanAfford_Parms
		{
			ESBZCurrencyCode Type;
			int32 Cost;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventCanAfford_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventCanAfford_Parms, Cost), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCurrencyManager_eventCanAfford_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCurrencyManager_eventCanAfford_Parms), &Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyManager, nullptr, "CanAfford", nullptr, nullptr, sizeof(SBZCurrencyManager_eventCanAfford_Parms), Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyManager_CanAfford()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyManager_CanAfford_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics
	{
		struct SBZCurrencyManager_eventGetCurrencyManager_Parms
		{
			const UObject* WorldContextObject;
			USBZCurrencyManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventGetCurrencyManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventGetCurrencyManager_Parms, ReturnValue), Z_Construct_UClass_USBZCurrencyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyManager, nullptr, "GetCurrencyManager", nullptr, nullptr, sizeof(SBZCurrencyManager_eventGetCurrencyManager_Parms), Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics
	{
		struct SBZCurrencyManager_eventGetCurrentAmount_Parms
		{
			ESBZCurrencyCode Type;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventGetCurrentAmount_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventGetCurrentAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyManager, nullptr, "GetCurrentAmount", nullptr, nullptr, sizeof(SBZCurrencyManager_eventGetCurrentAmount_Parms), Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics
	{
		struct SBZCurrencyManager_eventSetCurrency_Parms
		{
			ESBZCurrencyCode Type;
			int32 Cost;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventSetCurrency_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventSetCurrency_Parms, Cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::NewProp_Cost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyManager, nullptr, "SetCurrency", nullptr, nullptr, sizeof(SBZCurrencyManager_eventSetCurrency_Parms), Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyManager_SetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyManager_SetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics
	{
		struct SBZCurrencyManager_eventSubtractCurrency_Parms
		{
			ASBZPlayerState* SBZPlayerState;
			ESBZCurrencyCode Type;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_SBZPlayerState = { "SBZPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventSubtractCurrency_Parms, SBZPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventSubtractCurrency_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyManager_eventSubtractCurrency_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_SBZPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyManager, nullptr, "SubtractCurrency", nullptr, nullptr, sizeof(SBZCurrencyManager_eventSubtractCurrency_Parms), Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCurrencyManager_NoRegister()
	{
		return USBZCurrencyManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZCurrencyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCurrencyBalance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerCurrencyBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetCurrencyRequestQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GetCurrencyRequestQueue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCurrencyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCurrencyManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCurrencyManager_AddCurrency, "AddCurrency" }, // 238267123
		{ &Z_Construct_UFunction_USBZCurrencyManager_CanAfford, "CanAfford" }, // 3522722373
		{ &Z_Construct_UFunction_USBZCurrencyManager_GetCurrencyManager, "GetCurrencyManager" }, // 4076621373
		{ &Z_Construct_UFunction_USBZCurrencyManager_GetCurrentAmount, "GetCurrentAmount" }, // 1472283725
		{ &Z_Construct_UFunction_USBZCurrencyManager_SetCurrency, "SetCurrency" }, // 1669257864
		{ &Z_Construct_UFunction_USBZCurrencyManager_SubtractCurrency, "SubtractCurrency" }, // 2709204938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCurrencyManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_PlayerCurrencyBalance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCurrencyManager" },
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_PlayerCurrencyBalance = { "PlayerCurrencyBalance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCurrencyManager, PlayerCurrencyBalance), Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData, METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_PlayerCurrencyBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_PlayerCurrencyBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_GetCurrencyRequestQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCurrencyManager" },
		{ "ModuleRelativePath", "Public/SBZCurrencyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_GetCurrencyRequestQueue = { "GetCurrencyRequestQueue", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCurrencyManager, GetCurrencyRequestQueue), Z_Construct_UClass_USBZGetCurrencyRequestQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_GetCurrencyRequestQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_GetCurrencyRequestQueue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCurrencyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_PlayerCurrencyBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyManager_Statics::NewProp_GetCurrencyRequestQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCurrencyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCurrencyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCurrencyManager_Statics::ClassParams = {
		&USBZCurrencyManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCurrencyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCurrencyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCurrencyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCurrencyManager, 1507796591);
	template<> STARBREEZE_API UClass* StaticClass<USBZCurrencyManager>()
	{
		return USBZCurrencyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCurrencyManager(Z_Construct_UClass_USBZCurrencyManager, &USBZCurrencyManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCurrencyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCurrencyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
