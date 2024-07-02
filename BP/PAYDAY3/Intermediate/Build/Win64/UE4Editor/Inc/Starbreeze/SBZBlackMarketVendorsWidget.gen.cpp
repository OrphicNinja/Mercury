// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketVendorsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketVendorsWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketVendorsWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketVendorsWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketCategoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIData();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalNavBar_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActionControlReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceActionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketVendorButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIPopupData();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execGetFirstCategoryWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZBlackMarketCategoryWidget**)Z_Param__Result=P_THIS->GetFirstCategoryWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execGoToNextVendor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToNextVendor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execGoToPreviousVendor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToPreviousVendor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execNativeOnVendorButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnVendorButtonSelected(Z_Param_InButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execOnBuyItemCompleted)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyItemCompleted(ESBZMetaRequestResult(Z_Param_Result),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execOnBuyRealMoneyItemCompleted)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyRealMoneyItemCompleted(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execOnPurchaseItemPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPurchaseItemPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execOnRefreshCurrentVendor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRefreshCurrentVendor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execOnVendorItemButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVendorItemButtonSelected(Z_Param_InButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execSendPurchaseAttemptEvent)
	{
		P_GET_UBOOL(Z_Param_bIsAcceptPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPurchaseAttemptEvent(Z_Param_bIsAcceptPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execTryBuyItem)
	{
		P_GET_STRUCT(FSBZStoreItemUIData,Z_Param_StoreItemUIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryBuyItem(Z_Param_StoreItemUIData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorsWidget::execUpdateActiveVendor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewActiveVendorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveVendor(Z_Param_NewActiveVendorIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged = FName(TEXT("OnTransactionProgressChanged"));
	void USBZBlackMarketVendorsWidget::OnTransactionProgressChanged(bool bInIsTransactionInProgress, bool bIsTransactionSuccessful)
	{
		SBZBlackMarketVendorsWidget_eventOnTransactionProgressChanged_Parms Parms;
		Parms.bInIsTransactionInProgress=bInIsTransactionInProgress ? true : false;
		Parms.bIsTransactionSuccessful=bIsTransactionSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged),&Parms);
	}
	static FName NAME_USBZBlackMarketVendorsWidget_OnVendorButtonFocused = FName(TEXT("OnVendorButtonFocused"));
	void USBZBlackMarketVendorsWidget::OnVendorButtonFocused(USBZMenuButton* InButton, bool bIsFocused)
	{
		SBZBlackMarketVendorsWidget_eventOnVendorButtonFocused_Parms Parms;
		Parms.InButton=InButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketVendorsWidget_OnVendorButtonFocused),&Parms);
	}
	static FName NAME_USBZBlackMarketVendorsWidget_OnVendorChanged = FName(TEXT("OnVendorChanged"));
	void USBZBlackMarketVendorsWidget::OnVendorChanged(FSBZBlackMarketUIVendorData const& NewVendor)
	{
		SBZBlackMarketVendorsWidget_eventOnVendorChanged_Parms Parms;
		Parms.NewVendor=NewVendor;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketVendorsWidget_OnVendorChanged),&Parms);
	}
	static FName NAME_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused = FName(TEXT("OnVendorItemButtonFocused"));
	void USBZBlackMarketVendorsWidget::OnVendorItemButtonFocused(USBZMenuButton* InButton, bool bIsFocused)
	{
		SBZBlackMarketVendorsWidget_eventOnVendorItemButtonFocused_Parms Parms;
		Parms.InButton=InButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused),&Parms);
	}
	static FName NAME_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete = FName(TEXT("OnVendorItemTransactionComplete"));
	void USBZBlackMarketVendorsWidget::OnVendorItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData)
	{
		SBZBlackMarketVendorsWidget_eventOnVendorItemTransactionComplete_Parms Parms;
		Parms.MetaResult=MetaResult;
		Parms.InventoryItemData=InventoryItemData;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete),&Parms);
	}
	void USBZBlackMarketVendorsWidget::StaticRegisterNativesUSBZBlackMarketVendorsWidget()
	{
		UClass* Class = USBZBlackMarketVendorsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstCategoryWidget", &USBZBlackMarketVendorsWidget::execGetFirstCategoryWidget },
			{ "GoToNextVendor", &USBZBlackMarketVendorsWidget::execGoToNextVendor },
			{ "GoToPreviousVendor", &USBZBlackMarketVendorsWidget::execGoToPreviousVendor },
			{ "NativeOnVendorButtonSelected", &USBZBlackMarketVendorsWidget::execNativeOnVendorButtonSelected },
			{ "OnBuyItemCompleted", &USBZBlackMarketVendorsWidget::execOnBuyItemCompleted },
			{ "OnBuyRealMoneyItemCompleted", &USBZBlackMarketVendorsWidget::execOnBuyRealMoneyItemCompleted },
			{ "OnPurchaseItemPopUpClosed", &USBZBlackMarketVendorsWidget::execOnPurchaseItemPopUpClosed },
			{ "OnRefreshCurrentVendor", &USBZBlackMarketVendorsWidget::execOnRefreshCurrentVendor },
			{ "OnVendorItemButtonSelected", &USBZBlackMarketVendorsWidget::execOnVendorItemButtonSelected },
			{ "SendPurchaseAttemptEvent", &USBZBlackMarketVendorsWidget::execSendPurchaseAttemptEvent },
			{ "TryBuyItem", &USBZBlackMarketVendorsWidget::execTryBuyItem },
			{ "UpdateActiveVendor", &USBZBlackMarketVendorsWidget::execUpdateActiveVendor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventGetFirstCategoryWidget_Parms
		{
			USBZBlackMarketCategoryWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventGetFirstCategoryWidget_Parms, ReturnValue), Z_Construct_UClass_USBZBlackMarketCategoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "GetFirstCategoryWidget", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventGetFirstCategoryWidget_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "GoToNextVendor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "GoToPreviousVendor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventNativeOnVendorButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventNativeOnVendorButtonSelected_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::NewProp_InButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::NewProp_InButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "NativeOnVendorButtonSelected", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventNativeOnVendorButtonSelected_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventOnBuyItemCompleted_Parms
		{
			ESBZMetaRequestResult Result;
			FGuid ItemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnBuyItemCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnBuyItemCompleted_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnBuyItemCompleted", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnBuyItemCompleted_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventOnBuyRealMoneyItemCompleted_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnBuyRealMoneyItemCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnBuyRealMoneyItemCompleted", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnBuyRealMoneyItemCompleted_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventOnPurchaseItemPopUpClosed_Parms
		{
			FName ClosingActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClosingActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnPurchaseItemPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnPurchaseItemPopUpClosed", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnPurchaseItemPopUpClosed_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnRefreshCurrentVendor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics
	{
		static void NewProp_bInIsTransactionInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsTransactionInProgress;
		static void NewProp_bIsTransactionSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTransactionSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bInIsTransactionInProgress_SetBit(void* Obj)
	{
		((SBZBlackMarketVendorsWidget_eventOnTransactionProgressChanged_Parms*)Obj)->bInIsTransactionInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bInIsTransactionInProgress = { "bInIsTransactionInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketVendorsWidget_eventOnTransactionProgressChanged_Parms), &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bInIsTransactionInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bIsTransactionSuccessful_SetBit(void* Obj)
	{
		((SBZBlackMarketVendorsWidget_eventOnTransactionProgressChanged_Parms*)Obj)->bIsTransactionSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bIsTransactionSuccessful = { "bIsTransactionSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketVendorsWidget_eventOnTransactionProgressChanged_Parms), &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bIsTransactionSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bInIsTransactionInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::NewProp_bIsTransactionSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnTransactionProgressChanged", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnTransactionProgressChanged_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnVendorButtonFocused_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZBlackMarketVendorsWidget_eventOnVendorButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketVendorsWidget_eventOnVendorButtonFocused_Parms), &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnVendorButtonFocused", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnVendorButtonFocused_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewVendor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVendor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::NewProp_NewVendor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::NewProp_NewVendor = { "NewVendor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnVendorChanged_Parms, NewVendor), Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::NewProp_NewVendor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::NewProp_NewVendor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::NewProp_NewVendor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnVendorChanged", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnVendorChanged_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnVendorItemButtonFocused_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZBlackMarketVendorsWidget_eventOnVendorItemButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketVendorsWidget_eventOnVendorItemButtonFocused_Parms), &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnVendorItemButtonFocused", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnVendorItemButtonFocused_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventOnVendorItemButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnVendorItemButtonSelected_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::NewProp_InButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::NewProp_InButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnVendorItemButtonSelected", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnVendorItemButtonSelected_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MetaResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MetaResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_MetaResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_MetaResult = { "MetaResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnVendorItemTransactionComplete_Parms, MetaResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_InventoryItemData = { "InventoryItemData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventOnVendorItemTransactionComplete_Parms, InventoryItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_MetaResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_MetaResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::NewProp_InventoryItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "OnVendorItemTransactionComplete", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventOnVendorItemTransactionComplete_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventSendPurchaseAttemptEvent_Parms
		{
			bool bIsAcceptPressed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAcceptPressed_MetaData[];
#endif
		static void NewProp_bIsAcceptPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAcceptPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_SetBit(void* Obj)
	{
		((SBZBlackMarketVendorsWidget_eventSendPurchaseAttemptEvent_Parms*)Obj)->bIsAcceptPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed = { "bIsAcceptPressed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketVendorsWidget_eventSendPurchaseAttemptEvent_Parms), &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "SendPurchaseAttemptEvent", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventSendPurchaseAttemptEvent_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventTryBuyItem_Parms
		{
			FSBZStoreItemUIData StoreItemUIData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoreItemUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::NewProp_StoreItemUIData = { "StoreItemUIData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventTryBuyItem_Parms, StoreItemUIData), Z_Construct_UScriptStruct_FSBZStoreItemUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::NewProp_StoreItemUIData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "TryBuyItem", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventTryBuyItem_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics
	{
		struct SBZBlackMarketVendorsWidget_eventUpdateActiveVendor_Parms
		{
			int32 NewActiveVendorIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewActiveVendorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::NewProp_NewActiveVendorIndex = { "NewActiveVendorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorsWidget_eventUpdateActiveVendor_Parms, NewActiveVendorIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::NewProp_NewActiveVendorIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorsWidget, nullptr, "UpdateActiveVendor", nullptr, nullptr, sizeof(SBZBlackMarketVendorsWidget_eventUpdateActiveVendor_Parms), Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketVendorsWidget_NoRegister()
	{
		return USBZBlackMarketVendorsWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_CategoriesList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_CategoriesList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Navbar_Vendors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Navbar_Vendors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CategoryButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItemButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StoreItemButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoldStoreItemButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GoldStoreItemButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaydayStoreControlsReferenceAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaydayStoreControlsReferenceAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsRefActionWidget_PaydayStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlsRefActionWidget_PaydayStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VendorButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTransactionInProgress_MetaData[];
#endif
		static void NewProp_bIsTransactionInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTransactionInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveVendorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveVendorIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VendorsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VendorsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseTargetButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseTargetButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseSlotUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseSlotUIData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItemButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreItemButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItemButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StoreItemButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoldStoreItemButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoldStoreItemButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoldStoreItemButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoldStoreItemButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PurchaseItemPopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemSlotPopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PurchaseItemSlotPopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PurchaseItemPopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseItemPopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseItemPopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseItemPopUpBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GetFirstCategoryWidget, "GetFirstCategoryWidget" }, // 3893231773
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToNextVendor, "GoToNextVendor" }, // 3199525090
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_GoToPreviousVendor, "GoToPreviousVendor" }, // 3685083515
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_NativeOnVendorButtonSelected, "NativeOnVendorButtonSelected" }, // 3419577671
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyItemCompleted, "OnBuyItemCompleted" }, // 383758411
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnBuyRealMoneyItemCompleted, "OnBuyRealMoneyItemCompleted" }, // 211065894
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnPurchaseItemPopUpClosed, "OnPurchaseItemPopUpClosed" }, // 56511061
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnRefreshCurrentVendor, "OnRefreshCurrentVendor" }, // 1937125663
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnTransactionProgressChanged, "OnTransactionProgressChanged" }, // 1595539400
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorButtonFocused, "OnVendorButtonFocused" }, // 2589848409
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorChanged, "OnVendorChanged" }, // 961419925
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonFocused, "OnVendorItemButtonFocused" }, // 391945604
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemButtonSelected, "OnVendorItemButtonSelected" }, // 4252600434
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_OnVendorItemTransactionComplete, "OnVendorItemTransactionComplete" }, // 3178901846
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_SendPurchaseAttemptEvent, "SendPurchaseAttemptEvent" }, // 4181437337
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_TryBuyItem, "TryBuyItem" }, // 414302256
		{ &Z_Construct_UFunction_USBZBlackMarketVendorsWidget_UpdateActiveVendor, "UpdateActiveVendor" }, // 1001074114
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketVendorsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Panel_CategoriesList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Panel_CategoriesList = { "Panel_CategoriesList", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, Panel_CategoriesList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Panel_CategoriesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Panel_CategoriesList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Navbar_Vendors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Navbar_Vendors = { "Navbar_Vendors", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, Navbar_Vendors), Z_Construct_UClass_USBZLocalNavBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Navbar_Vendors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Navbar_Vendors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_CategoryButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_CategoryButtonClass = { "CategoryButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, CategoryButtonClass), Z_Construct_UClass_USBZBlackMarketCategoryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_CategoryButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_CategoryButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonClass = { "StoreItemButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, StoreItemButtonClass), Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonClass = { "GoldStoreItemButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, GoldStoreItemButtonClass), Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PaydayStoreControlsReferenceAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PaydayStoreControlsReferenceAction = { "PaydayStoreControlsReferenceAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PaydayStoreControlsReferenceAction), Z_Construct_UScriptStruct_FSBZActionControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PaydayStoreControlsReferenceAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PaydayStoreControlsReferenceAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ControlsRefActionWidget_PaydayStore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ControlsRefActionWidget_PaydayStore = { "ControlsRefActionWidget_PaydayStore", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, ControlsRefActionWidget_PaydayStore), Z_Construct_UClass_USBZControlsReferenceActionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ControlsRefActionWidget_PaydayStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ControlsRefActionWidget_PaydayStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorButtonClass = { "VendorButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, VendorButtonClass), Z_Construct_UClass_USBZBlackMarketVendorButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_bIsTransactionInProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_bIsTransactionInProgress_SetBit(void* Obj)
	{
		((USBZBlackMarketVendorsWidget*)Obj)->bIsTransactionInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_bIsTransactionInProgress = { "bIsTransactionInProgress", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBlackMarketVendorsWidget), &Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_bIsTransactionInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_bIsTransactionInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_bIsTransactionInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ActiveVendorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ActiveVendorIndex = { "ActiveVendorIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, ActiveVendorIndex), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ActiveVendorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ActiveVendorIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorsData_Inner = { "VendorsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorsData = { "VendorsData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, VendorsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseTargetButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseTargetButton = { "PurchaseTargetButton", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseTargetButton), Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseTargetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseTargetButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseSlotUIData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseSlotUIData = { "PurchaseSlotUIData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseSlotUIData), Z_Construct_UScriptStruct_FSBZStoreItemUIData, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseSlotUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseSlotUIData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_Inner = { "StoreItemButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool = { "StoreItemButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, StoreItemButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_Inner = { "GoldStoreItemButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool = { "GoldStoreItemButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, GoldStoreItemButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass = { "PurchaseItemPopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpBodyWidgetClass), Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemSlotPopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemSlotPopUpBodyWidgetClass = { "PurchaseItemSlotPopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemSlotPopUpBodyWidgetClass), Z_Construct_UClass_USBZWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemSlotPopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemSlotPopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpHeader = { "PurchaseItemPopUpHeader", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpAcceptAction = { "PurchaseItemPopUpAcceptAction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpCancelAction = { "PurchaseItemPopUpCancelAction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PopUpData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PopUpData = { "PopUpData", nullptr, (EPropertyFlags)0x0040008000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PopUpData), Z_Construct_UScriptStruct_FSBZUIPopupData, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PopUpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PopUpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBody = { "PurchaseItemPopUpBody", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpBody), Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Panel_CategoriesList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_Navbar_Vendors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_CategoryButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PaydayStoreControlsReferenceAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ControlsRefActionWidget_PaydayStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_bIsTransactionInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_ActiveVendorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_VendorsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseTargetButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseSlotUIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_StoreItemButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_GoldStoreItemButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemSlotPopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PopUpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::NewProp_PurchaseItemPopUpBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketVendorsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::ClassParams = {
		&USBZBlackMarketVendorsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketVendorsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketVendorsWidget, 1817248866);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketVendorsWidget>()
	{
		return USBZBlackMarketVendorsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketVendorsWidget(Z_Construct_UClass_USBZBlackMarketVendorsWidget, &USBZBlackMarketVendorsWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketVendorsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketVendorsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
