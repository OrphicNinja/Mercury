// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketPaydayStoreScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketPaydayStoreScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlackMarketPaydayStoreScreen::execOnBuyRealMoneyItemPurchaseCompleted)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyRealMoneyItemPurchaseCompleted(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketPaydayStoreScreen::execOnRealMoneyItemButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRealMoneyItemButtonSelected(Z_Param_InButton);
		P_NATIVE_END;
	}
	static FName NAME_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized = FName(TEXT("OnRealMoneyItemsInitialized"));
	void USBZBlackMarketPaydayStoreScreen::OnRealMoneyItemsInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized),NULL);
	}
	static FName NAME_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed = FName(TEXT("OnRealMoneyPurchaseWindowClosed"));
	void USBZBlackMarketPaydayStoreScreen::OnRealMoneyPurchaseWindowClosed(bool IsSuccess)
	{
		SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyPurchaseWindowClosed_Parms Parms;
		Parms.IsSuccess=IsSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed),&Parms);
	}
	static FName NAME_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused = FName(TEXT("OnVendorItemButtonFocused"));
	void USBZBlackMarketPaydayStoreScreen::OnVendorItemButtonFocused(USBZMenuButton* InButton, bool bIsFocused)
	{
		SBZBlackMarketPaydayStoreScreen_eventOnVendorItemButtonFocused_Parms Parms;
		Parms.InButton=InButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused),&Parms);
	}
	void USBZBlackMarketPaydayStoreScreen::StaticRegisterNativesUSBZBlackMarketPaydayStoreScreen()
	{
		UClass* Class = USBZBlackMarketPaydayStoreScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBuyRealMoneyItemPurchaseCompleted", &USBZBlackMarketPaydayStoreScreen::execOnBuyRealMoneyItemPurchaseCompleted },
			{ "OnRealMoneyItemButtonSelected", &USBZBlackMarketPaydayStoreScreen::execOnRealMoneyItemButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics
	{
		struct SBZBlackMarketPaydayStoreScreen_eventOnBuyRealMoneyItemPurchaseCompleted_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketPaydayStoreScreen_eventOnBuyRealMoneyItemPurchaseCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen, nullptr, "OnBuyRealMoneyItemPurchaseCompleted", nullptr, nullptr, sizeof(SBZBlackMarketPaydayStoreScreen_eventOnBuyRealMoneyItemPurchaseCompleted_Parms), Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics
	{
		struct SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyItemButtonSelected_Parms
		{
			USBZMenuButton* InButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyItemButtonSelected_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::NewProp_InButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::NewProp_InButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen, nullptr, "OnRealMoneyItemButtonSelected", nullptr, nullptr, sizeof(SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyItemButtonSelected_Parms), Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen, nullptr, "OnRealMoneyItemsInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics
	{
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyPurchaseWindowClosed_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyPurchaseWindowClosed_Parms), &Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::NewProp_IsSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen, nullptr, "OnRealMoneyPurchaseWindowClosed", nullptr, nullptr, sizeof(SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyPurchaseWindowClosed_Parms), Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketPaydayStoreScreen_eventOnVendorItemButtonFocused_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZBlackMarketPaydayStoreScreen_eventOnVendorItemButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketPaydayStoreScreen_eventOnVendorItemButtonFocused_Parms), &Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen, nullptr, "OnVendorItemButtonFocused", nullptr, nullptr, sizeof(SBZBlackMarketPaydayStoreScreen_eventOnVendorItemButtonFocused_Parms), Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_NoRegister()
	{
		return USBZBlackMarketPaydayStoreScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ItemList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealMoneyStoreItemButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RealMoneyStoreItemButtonClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaydayCreditStoreItems_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaydayCreditStoreItems_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaydayCreditStoreItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PaydayCreditStoreItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnBuyRealMoneyItemPurchaseCompleted, "OnBuyRealMoneyItemPurchaseCompleted" }, // 2039032706
		{ &Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemButtonSelected, "OnRealMoneyItemButtonSelected" }, // 1720383970
		{ &Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyItemsInitialized, "OnRealMoneyItemsInitialized" }, // 1507966766
		{ &Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnRealMoneyPurchaseWindowClosed, "OnRealMoneyPurchaseWindowClosed" }, // 2353001241
		{ &Z_Construct_UFunction_USBZBlackMarketPaydayStoreScreen_OnVendorItemButtonFocused, "OnVendorItemButtonFocused" }, // 3691132772
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketPaydayStoreScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_Panel_ItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketPaydayStoreScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_Panel_ItemList = { "Panel_ItemList", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketPaydayStoreScreen, Panel_ItemList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_Panel_ItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_Panel_ItemList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_RealMoneyStoreItemButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketPaydayStoreScreen" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_RealMoneyStoreItemButtonClass = { "RealMoneyStoreItemButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketPaydayStoreScreen, RealMoneyStoreItemButtonClass), Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_RealMoneyStoreItemButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_RealMoneyStoreItemButtonClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems_ValueProp = { "PaydayCreditStoreItems", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems_Key_KeyProp = { "PaydayCreditStoreItems_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketPaydayStoreScreen" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketPaydayStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems = { "PaydayCreditStoreItems", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketPaydayStoreScreen, PaydayCreditStoreItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_Panel_ItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_RealMoneyStoreItemButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::NewProp_PaydayCreditStoreItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketPaydayStoreScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::ClassParams = {
		&USBZBlackMarketPaydayStoreScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketPaydayStoreScreen, 4096058762);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketPaydayStoreScreen>()
	{
		return USBZBlackMarketPaydayStoreScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketPaydayStoreScreen(Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen, &USBZBlackMarketPaydayStoreScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketPaydayStoreScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketPaydayStoreScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
