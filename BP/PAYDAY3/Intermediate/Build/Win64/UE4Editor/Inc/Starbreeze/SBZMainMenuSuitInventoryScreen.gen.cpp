// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuSuitInventoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuSuitInventoryScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitInventoryScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execCanDiscardSuitInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToDiscard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDiscardSuitInSlot(Z_Param_IndexToDiscard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execDiscardItemDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_DiscardItemResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardItemDone(ESBZMetaRequestResult(Z_Param_DiscardItemResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execNativeOnBuySlotsButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnBuySlotsButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execNativeOnDefaultSet)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnDefaultSet(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execNativeOnSuitDefaultButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnSuitDefaultButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execNativeOnSuitSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnSuitSlotButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execNativeSuitSlotButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InFocusedButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeSuitSlotButtonFocusedChanged(Z_Param_InFocusedButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execOnBuySlotItemCompleted)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuySlotItemCompleted(ESBZMetaRequestResult(Z_Param_Result),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execOnDiscardSuitPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDiscardSuitPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execOnShowBuySlotPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowBuySlotPopUpClosed(Z_Param_InActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execRefreshWidgetVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWidgetVisuals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitInventoryScreen::execTryDiscardSuitInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSuitIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryDiscardSuitInSlot(Z_Param_InSuitIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuSuitInventoryScreen_OnItemDiscarded = FName(TEXT("OnItemDiscarded"));
	void USBZMainMenuSuitInventoryScreen::OnItemDiscarded(bool bWasSuccessful)
	{
		SBZMainMenuSuitInventoryScreen_eventOnItemDiscarded_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuSuitInventoryScreen_OnItemDiscarded),&Parms);
	}
	static FName NAME_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged = FName(TEXT("OnSlotPriceChanged"));
	void USBZMainMenuSuitInventoryScreen::OnSlotPriceChanged(FSBZInventorySlotStoreItem const& Item)
	{
		SBZMainMenuSuitInventoryScreen_eventOnSlotPriceChanged_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged),&Parms);
	}
	static FName NAME_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete = FName(TEXT("OnSlotPurchaseComplete"));
	void USBZMainMenuSuitInventoryScreen::OnSlotPurchaseComplete(bool bWasSuccessful)
	{
		SBZMainMenuSuitInventoryScreen_eventOnSlotPurchaseComplete_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete),&Parms);
	}
	static FName NAME_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot = FName(TEXT("OnTryBuySuitSlot"));
	void USBZMainMenuSuitInventoryScreen::OnTryBuySuitSlot()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot),NULL);
	}
	static FName NAME_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged = FName(TEXT("SuitSlotButtonFocusedChanged"));
	void USBZMainMenuSuitInventoryScreen::SuitSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused)
	{
		SBZMainMenuSuitInventoryScreen_eventSuitSlotButtonFocusedChanged_Parms Parms;
		Parms.InFocusedButton=InFocusedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged),&Parms);
	}
	void USBZMainMenuSuitInventoryScreen::StaticRegisterNativesUSBZMainMenuSuitInventoryScreen()
	{
		UClass* Class = USBZMainMenuSuitInventoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDiscardSuitInSlot", &USBZMainMenuSuitInventoryScreen::execCanDiscardSuitInSlot },
			{ "DiscardItemDone", &USBZMainMenuSuitInventoryScreen::execDiscardItemDone },
			{ "NativeOnBuySlotsButtonSelected", &USBZMainMenuSuitInventoryScreen::execNativeOnBuySlotsButtonSelected },
			{ "NativeOnDefaultSet", &USBZMainMenuSuitInventoryScreen::execNativeOnDefaultSet },
			{ "NativeOnSuitDefaultButtonSelected", &USBZMainMenuSuitInventoryScreen::execNativeOnSuitDefaultButtonSelected },
			{ "NativeOnSuitSlotButtonSelected", &USBZMainMenuSuitInventoryScreen::execNativeOnSuitSlotButtonSelected },
			{ "NativeSuitSlotButtonFocusedChanged", &USBZMainMenuSuitInventoryScreen::execNativeSuitSlotButtonFocusedChanged },
			{ "OnBuySlotItemCompleted", &USBZMainMenuSuitInventoryScreen::execOnBuySlotItemCompleted },
			{ "OnDiscardSuitPopUpClosed", &USBZMainMenuSuitInventoryScreen::execOnDiscardSuitPopUpClosed },
			{ "OnShowBuySlotPopUpClosed", &USBZMainMenuSuitInventoryScreen::execOnShowBuySlotPopUpClosed },
			{ "RefreshWidgetVisuals", &USBZMainMenuSuitInventoryScreen::execRefreshWidgetVisuals },
			{ "TryDiscardSuitInSlot", &USBZMainMenuSuitInventoryScreen::execTryDiscardSuitInSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventCanDiscardSuitInSlot_Parms
		{
			int32 IndexToDiscard;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexToDiscard;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::NewProp_IndexToDiscard = { "IndexToDiscard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventCanDiscardSuitInSlot_Parms, IndexToDiscard), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuSuitInventoryScreen_eventCanDiscardSuitInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuSuitInventoryScreen_eventCanDiscardSuitInSlot_Parms), &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::NewProp_IndexToDiscard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "CanDiscardSuitInSlot", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventCanDiscardSuitInSlot_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventDiscardItemDone_Parms
		{
			ESBZMetaRequestResult DiscardItemResult;
			FGuid ItemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DiscardItemResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DiscardItemResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult = { "DiscardItemResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventDiscardItemDone_Parms, DiscardItemResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventDiscardItemDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "DiscardItemDone", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventDiscardItemDone_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms
		{
			USBZMenuButton* InSelectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "NativeOnBuySlotsButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventNativeOnDefaultSet_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventNativeOnDefaultSet_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "NativeOnDefaultSet", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventNativeOnDefaultSet_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventNativeOnSuitDefaultButtonSelected_Parms
		{
			USBZMenuButton* InSelectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventNativeOnSuitDefaultButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "NativeOnSuitDefaultButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventNativeOnSuitDefaultButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventNativeOnSuitSlotButtonSelected_Parms
		{
			USBZMenuButton* InSelectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventNativeOnSuitSlotButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "NativeOnSuitSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventNativeOnSuitSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventNativeSuitSlotButtonFocusedChanged_Parms
		{
			USBZMenuButton* InFocusedButton;
			bool bIsFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFocusedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFocusedButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventNativeSuitSlotButtonFocusedChanged_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuSuitInventoryScreen_eventNativeSuitSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuSuitInventoryScreen_eventNativeSuitSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "NativeSuitSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventNativeSuitSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventOnBuySlotItemCompleted_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventOnBuySlotItemCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventOnBuySlotItemCompleted_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "OnBuySlotItemCompleted", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventOnBuySlotItemCompleted_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventOnDiscardSuitPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventOnDiscardSuitPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "OnDiscardSuitPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventOnDiscardSuitPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZMainMenuSuitInventoryScreen_eventOnItemDiscarded_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuSuitInventoryScreen_eventOnItemDiscarded_Parms), &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "OnItemDiscarded", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventOnItemDiscarded_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms
		{
			FName InActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms, InActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "OnShowBuySlotPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventOnSlotPriceChanged_Parms, Item), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "OnSlotPriceChanged", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventOnSlotPriceChanged_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZMainMenuSuitInventoryScreen_eventOnSlotPurchaseComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuSuitInventoryScreen_eventOnSlotPurchaseComplete_Parms), &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "OnSlotPurchaseComplete", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventOnSlotPurchaseComplete_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "OnTryBuySuitSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "RefreshWidgetVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFocusedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFocusedButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventSuitSlotButtonFocusedChanged_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuSuitInventoryScreen_eventSuitSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuSuitInventoryScreen_eventSuitSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "SuitSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventSuitSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics
	{
		struct SBZMainMenuSuitInventoryScreen_eventTryDiscardSuitInSlot_Parms
		{
			int32 InSuitIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSuitIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::NewProp_InSuitIndex = { "InSuitIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitInventoryScreen_eventTryDiscardSuitInSlot_Parms, InSuitIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::NewProp_InSuitIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, nullptr, "TryDiscardSuitInSlot", nullptr, nullptr, sizeof(SBZMainMenuSuitInventoryScreen_eventTryDiscardSuitInSlot_Parms), Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_NoRegister()
	{
		return USBZMainMenuSuitInventoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlotButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SuitSlotButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_SuitSlotButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_SuitSlotButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_BuySlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_BuySlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_DefaultSuit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_DefaultSuit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardSuitPopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DiscardSuitPopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardSuitPopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DiscardSuitPopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardSuitPopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardSuitPopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardSuitPopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardSuitPopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitIndexToDiscard_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuitIndexToDiscard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardSuitPopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscardSuitPopUpBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSuitSlotButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveSuitSlotButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlotButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitSlotButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlotButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuitSlotButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackInventoryBaseScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_CanDiscardSuitInSlot, "CanDiscardSuitInSlot" }, // 2543327472
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_DiscardItemDone, "DiscardItemDone" }, // 3676559766
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnBuySlotsButtonSelected, "NativeOnBuySlotsButtonSelected" }, // 3088156409
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnDefaultSet, "NativeOnDefaultSet" }, // 3045646698
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitDefaultButtonSelected, "NativeOnSuitDefaultButtonSelected" }, // 4130684763
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeOnSuitSlotButtonSelected, "NativeOnSuitSlotButtonSelected" }, // 133994527
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_NativeSuitSlotButtonFocusedChanged, "NativeSuitSlotButtonFocusedChanged" }, // 4126579873
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnBuySlotItemCompleted, "OnBuySlotItemCompleted" }, // 1055962621
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnDiscardSuitPopUpClosed, "OnDiscardSuitPopUpClosed" }, // 309134334
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnItemDiscarded, "OnItemDiscarded" }, // 2022943859
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnShowBuySlotPopUpClosed, "OnShowBuySlotPopUpClosed" }, // 1022856899
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPriceChanged, "OnSlotPriceChanged" }, // 2055240416
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnSlotPurchaseComplete, "OnSlotPurchaseComplete" }, // 4023082429
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_OnTryBuySuitSlot, "OnTryBuySuitSlot" }, // 3191439379
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_RefreshWidgetVisuals, "RefreshWidgetVisuals" }, // 1135878908
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_SuitSlotButtonFocusedChanged, "SuitSlotButtonFocusedChanged" }, // 2862487684
		{ &Z_Construct_UFunction_USBZMainMenuSuitInventoryScreen_TryDiscardSuitInSlot, "TryDiscardSuitInSlot" }, // 2863089727
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuSuitInventoryScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonClass = { "SuitSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SuitSlotButtonClass), Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Panel_SuitSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Panel_SuitSlotButtons = { "Panel_SuitSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, Panel_SuitSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Panel_SuitSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Panel_SuitSlotButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_BuySlots = { "Button_BuySlots", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, Button_BuySlots), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_DefaultSuit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_DefaultSuit = { "Button_DefaultSuit", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, Button_DefaultSuit), Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_DefaultSuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_DefaultSuit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBodyWidgetClass = { "DiscardSuitPopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpBodyWidgetClass), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpHeader = { "DiscardSuitPopUpHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpAcceptAction = { "DiscardSuitPopUpAcceptAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpCancelAction = { "DiscardSuitPopUpCancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitIndexToDiscard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitIndexToDiscard = { "SuitIndexToDiscard", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SuitIndexToDiscard), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitIndexToDiscard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitIndexToDiscard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBody = { "DiscardSuitPopUpBody", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpBody), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_ActiveSuitSlotButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_ActiveSuitSlotButton = { "ActiveSuitSlotButton", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, ActiveSuitSlotButton), Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_ActiveSuitSlotButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_ActiveSuitSlotButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_Inner = { "SuitSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool = { "SuitSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SuitSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SlotItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SlotItem = { "SlotItem", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SlotItem), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SlotItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SlotItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Panel_SuitSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_BuySlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_Button_DefaultSuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitIndexToDiscard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_DiscardSuitPopUpBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_ActiveSuitSlotButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SuitSlotButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::NewProp_SlotItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuSuitInventoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::ClassParams = {
		&USBZMainMenuSuitInventoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuSuitInventoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuSuitInventoryScreen, 3236248422);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuSuitInventoryScreen>()
	{
		return USBZMainMenuSuitInventoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuSuitInventoryScreen(Z_Construct_UClass_USBZMainMenuSuitInventoryScreen, &USBZMainMenuSuitInventoryScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuSuitInventoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuSuitInventoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
