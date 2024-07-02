// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketStoreItemButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketStoreItemButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIData();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlackMarketStoreItemButton::execGetItemCost)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Price);
		P_GET_ENUM_REF(ESBZCurrencyCode,Z_Param_Out_Currency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemCost(Z_Param_Out_Price,(ESBZCurrencyCode&)(Z_Param_Out_Currency));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketStoreItemButton::execGetItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=P_THIS->GetItemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketStoreItemButton::execGetItemID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetItemID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketStoreItemButton::execInitializeStoreData)
	{
		P_GET_STRUCT_REF(FSBZStoreItemUIData,Z_Param_Out_InStoreItemUIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStoreData(Z_Param_Out_InStoreItemUIData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketStoreItemButton::execIsTransactionInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTransactionInProgress();
		P_NATIVE_END;
	}
	static FName NAME_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized = FName(TEXT("OnPlayerStoreItemDataIntialized"));
	void USBZBlackMarketStoreItemButton::OnPlayerStoreItemDataIntialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized),NULL);
	}
	void USBZBlackMarketStoreItemButton::StaticRegisterNativesUSBZBlackMarketStoreItemButton()
	{
		UClass* Class = USBZBlackMarketStoreItemButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemCost", &USBZBlackMarketStoreItemButton::execGetItemCost },
			{ "GetItemData", &USBZBlackMarketStoreItemButton::execGetItemData },
			{ "GetItemID", &USBZBlackMarketStoreItemButton::execGetItemID },
			{ "InitializeStoreData", &USBZBlackMarketStoreItemButton::execInitializeStoreData },
			{ "IsTransactionInProgress", &USBZBlackMarketStoreItemButton::execIsTransactionInProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics
	{
		struct SBZBlackMarketStoreItemButton_eventGetItemCost_Parms
		{
			int32 Price;
			ESBZCurrencyCode Currency;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Currency_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketStoreItemButton_eventGetItemCost_Parms, Price), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::NewProp_Currency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketStoreItemButton_eventGetItemCost_Parms, Currency), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::NewProp_Currency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreItemButton, nullptr, "GetItemCost", nullptr, nullptr, sizeof(SBZBlackMarketStoreItemButton_eventGetItemCost_Parms), Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics
	{
		struct SBZBlackMarketStoreItemButton_eventGetItemData_Parms
		{
			USBZInventoryBaseData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketStoreItemButton_eventGetItemData_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreItemButton, nullptr, "GetItemData", nullptr, nullptr, sizeof(SBZBlackMarketStoreItemButton_eventGetItemData_Parms), Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics
	{
		struct SBZBlackMarketStoreItemButton_eventGetItemID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketStoreItemButton_eventGetItemID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreItemButton, nullptr, "GetItemID", nullptr, nullptr, sizeof(SBZBlackMarketStoreItemButton_eventGetItemID_Parms), Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics
	{
		struct SBZBlackMarketStoreItemButton_eventInitializeStoreData_Parms
		{
			FSBZStoreItemUIData InStoreItemUIData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStoreItemUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStoreItemUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::NewProp_InStoreItemUIData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::NewProp_InStoreItemUIData = { "InStoreItemUIData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketStoreItemButton_eventInitializeStoreData_Parms, InStoreItemUIData), Z_Construct_UScriptStruct_FSBZStoreItemUIData, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::NewProp_InStoreItemUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::NewProp_InStoreItemUIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::NewProp_InStoreItemUIData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreItemButton, nullptr, "InitializeStoreData", nullptr, nullptr, sizeof(SBZBlackMarketStoreItemButton_eventInitializeStoreData_Parms), Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics
	{
		struct SBZBlackMarketStoreItemButton_eventIsTransactionInProgress_Parms
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
	void Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBlackMarketStoreItemButton_eventIsTransactionInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketStoreItemButton_eventIsTransactionInProgress_Parms), &Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreItemButton, nullptr, "IsTransactionInProgress", nullptr, nullptr, sizeof(SBZBlackMarketStoreItemButton_eventIsTransactionInProgress_Parms), Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreItemButton, nullptr, "OnPlayerStoreItemDataIntialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister()
	{
		return USBZBlackMarketStoreItemButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItemUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoreItemUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemCost, "GetItemCost" }, // 3630781528
		{ &Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemData, "GetItemData" }, // 2317345141
		{ &Z_Construct_UFunction_USBZBlackMarketStoreItemButton_GetItemID, "GetItemID" }, // 1478399678
		{ &Z_Construct_UFunction_USBZBlackMarketStoreItemButton_InitializeStoreData, "InitializeStoreData" }, // 2574634512
		{ &Z_Construct_UFunction_USBZBlackMarketStoreItemButton_IsTransactionInProgress, "IsTransactionInProgress" }, // 3121848094
		{ &Z_Construct_UFunction_USBZBlackMarketStoreItemButton_OnPlayerStoreItemDataIntialized, "OnPlayerStoreItemDataIntialized" }, // 1292628685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketStoreItemButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::NewProp_StoreItemUIData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketStoreItemButton" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::NewProp_StoreItemUIData = { "StoreItemUIData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketStoreItemButton, StoreItemUIData), Z_Construct_UScriptStruct_FSBZStoreItemUIData, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::NewProp_StoreItemUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::NewProp_StoreItemUIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::NewProp_StoreItemUIData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketStoreItemButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::ClassParams = {
		&USBZBlackMarketStoreItemButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketStoreItemButton, 3386927412);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketStoreItemButton>()
	{
		return USBZBlackMarketStoreItemButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketStoreItemButton(Z_Construct_UClass_USBZBlackMarketStoreItemButton, &USBZBlackMarketStoreItemButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketStoreItemButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketStoreItemButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
