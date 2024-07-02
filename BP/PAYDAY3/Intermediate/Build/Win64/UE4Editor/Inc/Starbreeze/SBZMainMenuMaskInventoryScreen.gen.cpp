// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuMaskInventoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuMaskInventoryScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuMaskInventoryScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execCanDiscardMaskInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaskIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDiscardMaskInSlot(Z_Param_InMaskIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execDiscardItemDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_DiscardItemResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardItemDone(ESBZMetaRequestResult(Z_Param_DiscardItemResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execNativeMaskSlotButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InFocusedButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeMaskSlotButtonFocusedChanged(Z_Param_InFocusedButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execNativeOnBuySlotsButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnBuySlotsButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execNativeOnDefaultSet)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnDefaultSet(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execNativeOnMaskDefaultButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnMaskDefaultButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execNativeOnMaskSlotButtonAltSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnMaskSlotButtonAltSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execNativeOnMaskSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnMaskSlotButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execOnBuySlotItemCompleted)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuySlotItemCompleted(ESBZMetaRequestResult(Z_Param_Result),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execOnDiscardMaskPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDiscardMaskPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execOnShowBuySlotPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowBuySlotPopUpClosed(Z_Param_InActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execRefreshWidgetVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWidgetVisuals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuMaskInventoryScreen::execTryDiscardMaskInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaskIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryDiscardMaskInSlot(Z_Param_InMaskIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged = FName(TEXT("MaskSlotButtonFocusedChanged"));
	void USBZMainMenuMaskInventoryScreen::MaskSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused)
	{
		SBZMainMenuMaskInventoryScreen_eventMaskSlotButtonFocusedChanged_Parms Parms;
		Parms.InFocusedButton=InFocusedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed = FName(TEXT("OnEditButtonPressed"));
	void USBZMainMenuMaskInventoryScreen::OnEditButtonPressed(int32 MaskSlotIndex)
	{
		SBZMainMenuMaskInventoryScreen_eventOnEditButtonPressed_Parms Parms;
		Parms.MaskSlotIndex=MaskSlotIndex;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed),&Parms);
	}
	static FName NAME_USBZMainMenuMaskInventoryScreen_OnItemDiscarded = FName(TEXT("OnItemDiscarded"));
	void USBZMainMenuMaskInventoryScreen::OnItemDiscarded(bool bWasSuccessful)
	{
		SBZMainMenuMaskInventoryScreen_eventOnItemDiscarded_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMaskInventoryScreen_OnItemDiscarded),&Parms);
	}
	static FName NAME_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged = FName(TEXT("OnSlotPriceChanged"));
	void USBZMainMenuMaskInventoryScreen::OnSlotPriceChanged(FSBZInventorySlotStoreItem const& Item)
	{
		SBZMainMenuMaskInventoryScreen_eventOnSlotPriceChanged_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged),&Parms);
	}
	static FName NAME_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete = FName(TEXT("OnSlotPurchaseComplete"));
	void USBZMainMenuMaskInventoryScreen::OnSlotPurchaseComplete(bool bWasSuccessful)
	{
		SBZMainMenuMaskInventoryScreen_eventOnSlotPurchaseComplete_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete),&Parms);
	}
	static FName NAME_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot = FName(TEXT("OnTryBuyMaskSlot"));
	void USBZMainMenuMaskInventoryScreen::OnTryBuyMaskSlot()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot),NULL);
	}
	void USBZMainMenuMaskInventoryScreen::StaticRegisterNativesUSBZMainMenuMaskInventoryScreen()
	{
		UClass* Class = USBZMainMenuMaskInventoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDiscardMaskInSlot", &USBZMainMenuMaskInventoryScreen::execCanDiscardMaskInSlot },
			{ "DiscardItemDone", &USBZMainMenuMaskInventoryScreen::execDiscardItemDone },
			{ "NativeMaskSlotButtonFocusedChanged", &USBZMainMenuMaskInventoryScreen::execNativeMaskSlotButtonFocusedChanged },
			{ "NativeOnBuySlotsButtonSelected", &USBZMainMenuMaskInventoryScreen::execNativeOnBuySlotsButtonSelected },
			{ "NativeOnDefaultSet", &USBZMainMenuMaskInventoryScreen::execNativeOnDefaultSet },
			{ "NativeOnMaskDefaultButtonSelected", &USBZMainMenuMaskInventoryScreen::execNativeOnMaskDefaultButtonSelected },
			{ "NativeOnMaskSlotButtonAltSelected", &USBZMainMenuMaskInventoryScreen::execNativeOnMaskSlotButtonAltSelected },
			{ "NativeOnMaskSlotButtonSelected", &USBZMainMenuMaskInventoryScreen::execNativeOnMaskSlotButtonSelected },
			{ "OnBuySlotItemCompleted", &USBZMainMenuMaskInventoryScreen::execOnBuySlotItemCompleted },
			{ "OnDiscardMaskPopUpClosed", &USBZMainMenuMaskInventoryScreen::execOnDiscardMaskPopUpClosed },
			{ "OnShowBuySlotPopUpClosed", &USBZMainMenuMaskInventoryScreen::execOnShowBuySlotPopUpClosed },
			{ "RefreshWidgetVisuals", &USBZMainMenuMaskInventoryScreen::execRefreshWidgetVisuals },
			{ "TryDiscardMaskInSlot", &USBZMainMenuMaskInventoryScreen::execTryDiscardMaskInSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventCanDiscardMaskInSlot_Parms
		{
			int32 InMaskIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaskIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::NewProp_InMaskIndex = { "InMaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventCanDiscardMaskInSlot_Parms, InMaskIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuMaskInventoryScreen_eventCanDiscardMaskInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuMaskInventoryScreen_eventCanDiscardMaskInSlot_Parms), &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::NewProp_InMaskIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "CanDiscardMaskInSlot", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventCanDiscardMaskInSlot_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventDiscardItemDone_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult = { "DiscardItemResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventDiscardItemDone_Parms, DiscardItemResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventDiscardItemDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "DiscardItemDone", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventDiscardItemDone_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventMaskSlotButtonFocusedChanged_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuMaskInventoryScreen_eventMaskSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuMaskInventoryScreen_eventMaskSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "MaskSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventMaskSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventNativeMaskSlotButtonFocusedChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventNativeMaskSlotButtonFocusedChanged_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuMaskInventoryScreen_eventNativeMaskSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuMaskInventoryScreen_eventNativeMaskSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "NativeMaskSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventNativeMaskSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "NativeOnBuySlotsButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventNativeOnDefaultSet_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventNativeOnDefaultSet_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "NativeOnDefaultSet", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventNativeOnDefaultSet_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventNativeOnMaskDefaultButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventNativeOnMaskDefaultButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "NativeOnMaskDefaultButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventNativeOnMaskDefaultButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventNativeOnMaskSlotButtonAltSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventNativeOnMaskSlotButtonAltSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "NativeOnMaskSlotButtonAltSelected", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventNativeOnMaskSlotButtonAltSelected_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventNativeOnMaskSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventNativeOnMaskSlotButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "NativeOnMaskSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventNativeOnMaskSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventOnBuySlotItemCompleted_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventOnBuySlotItemCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventOnBuySlotItemCompleted_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnBuySlotItemCompleted", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventOnBuySlotItemCompleted_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventOnDiscardMaskPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventOnDiscardMaskPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnDiscardMaskPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventOnDiscardMaskPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::NewProp_MaskSlotIndex = { "MaskSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventOnEditButtonPressed_Parms, MaskSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::NewProp_MaskSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnEditButtonPressed", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventOnEditButtonPressed_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZMainMenuMaskInventoryScreen_eventOnItemDiscarded_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuMaskInventoryScreen_eventOnItemDiscarded_Parms), &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnItemDiscarded", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventOnItemDiscarded_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms, InActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnShowBuySlotPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventOnSlotPriceChanged_Parms, Item), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnSlotPriceChanged", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventOnSlotPriceChanged_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZMainMenuMaskInventoryScreen_eventOnSlotPurchaseComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuMaskInventoryScreen_eventOnSlotPurchaseComplete_Parms), &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnSlotPurchaseComplete", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventOnSlotPurchaseComplete_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "OnTryBuyMaskSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "RefreshWidgetVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics
	{
		struct SBZMainMenuMaskInventoryScreen_eventTryDiscardMaskInSlot_Parms
		{
			int32 InMaskIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaskIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::NewProp_InMaskIndex = { "InMaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMaskInventoryScreen_eventTryDiscardMaskInSlot_Parms, InMaskIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::NewProp_InMaskIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, nullptr, "TryDiscardMaskInSlot", nullptr, nullptr, sizeof(SBZMainMenuMaskInventoryScreen_eventTryDiscardMaskInSlot_Parms), Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_NoRegister()
	{
		return USBZMainMenuMaskInventoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskSlotButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MaskSlotButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_MaskSlotButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_MaskSlotButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_BuySlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_BuySlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_DefaultMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_DefaultMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardMaskPopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DiscardMaskPopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardMaskPopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DiscardMaskPopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardMaskPopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardMaskPopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardMaskPopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardMaskPopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizableMaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizableMaskData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskMould_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskMould;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveMaskSlotButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveMaskSlotButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskIndexToDiscard_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskIndexToDiscard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardMaskPopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscardMaskPopUpBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskSlotButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskSlotButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskSlotButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaskSlotButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackInventoryBaseScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_CanDiscardMaskInSlot, "CanDiscardMaskInSlot" }, // 2418114281
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_DiscardItemDone, "DiscardItemDone" }, // 475141072
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_MaskSlotButtonFocusedChanged, "MaskSlotButtonFocusedChanged" }, // 930459495
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeMaskSlotButtonFocusedChanged, "NativeMaskSlotButtonFocusedChanged" }, // 2368194179
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnBuySlotsButtonSelected, "NativeOnBuySlotsButtonSelected" }, // 415278830
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnDefaultSet, "NativeOnDefaultSet" }, // 3688976688
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskDefaultButtonSelected, "NativeOnMaskDefaultButtonSelected" }, // 1664376788
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonAltSelected, "NativeOnMaskSlotButtonAltSelected" }, // 3282677003
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_NativeOnMaskSlotButtonSelected, "NativeOnMaskSlotButtonSelected" }, // 364380804
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnBuySlotItemCompleted, "OnBuySlotItemCompleted" }, // 1177926971
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnDiscardMaskPopUpClosed, "OnDiscardMaskPopUpClosed" }, // 1828409471
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnEditButtonPressed, "OnEditButtonPressed" }, // 2269194122
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnItemDiscarded, "OnItemDiscarded" }, // 2899934662
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnShowBuySlotPopUpClosed, "OnShowBuySlotPopUpClosed" }, // 2070161183
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPriceChanged, "OnSlotPriceChanged" }, // 886735437
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnSlotPurchaseComplete, "OnSlotPurchaseComplete" }, // 2823020126
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_OnTryBuyMaskSlot, "OnTryBuyMaskSlot" }, // 789914664
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_RefreshWidgetVisuals, "RefreshWidgetVisuals" }, // 1186288911
		{ &Z_Construct_UFunction_USBZMainMenuMaskInventoryScreen_TryDiscardMaskInSlot, "TryDiscardMaskInSlot" }, // 4280483610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuMaskInventoryScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonClass = { "MaskSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskSlotButtonClass), Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Panel_MaskSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Panel_MaskSlotButtons = { "Panel_MaskSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, Panel_MaskSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Panel_MaskSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Panel_MaskSlotButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_BuySlots = { "Button_BuySlots", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, Button_BuySlots), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_DefaultMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_DefaultMask = { "Button_DefaultMask", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, Button_DefaultMask), Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_DefaultMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_DefaultMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBodyWidgetClass = { "DiscardMaskPopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpBodyWidgetClass), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpHeader = { "DiscardMaskPopUpHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpAcceptAction = { "DiscardMaskPopUpAcceptAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpCancelAction = { "DiscardMaskPopUpCancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_CustomizableMaskData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_CustomizableMaskData = { "CustomizableMaskData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, CustomizableMaskData), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_CustomizableMaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_CustomizableMaskData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskMould_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskMould = { "MaskMould", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskMould), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskMould_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskMould_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_ActiveMaskSlotButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_ActiveMaskSlotButton = { "ActiveMaskSlotButton", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, ActiveMaskSlotButton), Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_ActiveMaskSlotButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_ActiveMaskSlotButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskIndexToDiscard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskIndexToDiscard = { "MaskIndexToDiscard", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskIndexToDiscard), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskIndexToDiscard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskIndexToDiscard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBody = { "DiscardMaskPopUpBody", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpBody), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_Inner = { "MaskSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool = { "MaskSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_SlotItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_SlotItem = { "SlotItem", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, SlotItem), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_SlotItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_SlotItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Panel_MaskSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_BuySlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_Button_DefaultMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_CustomizableMaskData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskMould,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_ActiveMaskSlotButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskIndexToDiscard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_DiscardMaskPopUpBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_MaskSlotButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::NewProp_SlotItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuMaskInventoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::ClassParams = {
		&USBZMainMenuMaskInventoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuMaskInventoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuMaskInventoryScreen, 1969714631);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuMaskInventoryScreen>()
	{
		return USBZMainMenuMaskInventoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuMaskInventoryScreen(Z_Construct_UClass_USBZMainMenuMaskInventoryScreen, &USBZMainMenuMaskInventoryScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuMaskInventoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuMaskInventoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
