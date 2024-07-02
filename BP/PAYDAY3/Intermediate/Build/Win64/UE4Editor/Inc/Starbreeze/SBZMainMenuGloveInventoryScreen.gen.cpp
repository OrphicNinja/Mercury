// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuGloveInventoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuGloveInventoryScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuGloveInventoryScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execCanDiscardGloveInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToDiscard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDiscardGloveInSlot(Z_Param_IndexToDiscard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execDiscardItemDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_DiscardItemResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardItemDone(ESBZMetaRequestResult(Z_Param_DiscardItemResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execNativeGloveSlotButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InFocusedButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeGloveSlotButtonFocusedChanged(Z_Param_InFocusedButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execNativeOnBuySlotsButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnBuySlotsButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execNativeOnDefaultSet)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnDefaultSet(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execNativeOnGloveDefaultButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnGloveDefaultButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execNativeOnGloveSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnGloveSlotButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execOnBuySlotItemCompleted)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuySlotItemCompleted(ESBZMetaRequestResult(Z_Param_Result),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execOnDiscardGlovePopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDiscardGlovePopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execOnShowBuySlotPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowBuySlotPopUpClosed(Z_Param_InActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execRefreshWidgetVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWidgetVisuals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuGloveInventoryScreen::execTryDiscardGloveInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InGloveIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryDiscardGloveInSlot(Z_Param_InGloveIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged = FName(TEXT("GloveSlotButtonFocusedChanged"));
	void USBZMainMenuGloveInventoryScreen::GloveSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused)
	{
		SBZMainMenuGloveInventoryScreen_eventGloveSlotButtonFocusedChanged_Parms Parms;
		Parms.InFocusedButton=InFocusedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuGloveInventoryScreen_OnItemDiscarded = FName(TEXT("OnItemDiscarded"));
	void USBZMainMenuGloveInventoryScreen::OnItemDiscarded(bool bWasSuccessful)
	{
		SBZMainMenuGloveInventoryScreen_eventOnItemDiscarded_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuGloveInventoryScreen_OnItemDiscarded),&Parms);
	}
	static FName NAME_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged = FName(TEXT("OnSlotPriceChanged"));
	void USBZMainMenuGloveInventoryScreen::OnSlotPriceChanged(FSBZInventorySlotStoreItem const& Item)
	{
		SBZMainMenuGloveInventoryScreen_eventOnSlotPriceChanged_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged),&Parms);
	}
	static FName NAME_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete = FName(TEXT("OnSlotPurchaseComplete"));
	void USBZMainMenuGloveInventoryScreen::OnSlotPurchaseComplete(bool bWasSuccessful)
	{
		SBZMainMenuGloveInventoryScreen_eventOnSlotPurchaseComplete_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete),&Parms);
	}
	static FName NAME_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot = FName(TEXT("OnTryBuyGloveSlot"));
	void USBZMainMenuGloveInventoryScreen::OnTryBuyGloveSlot()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot),NULL);
	}
	void USBZMainMenuGloveInventoryScreen::StaticRegisterNativesUSBZMainMenuGloveInventoryScreen()
	{
		UClass* Class = USBZMainMenuGloveInventoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDiscardGloveInSlot", &USBZMainMenuGloveInventoryScreen::execCanDiscardGloveInSlot },
			{ "DiscardItemDone", &USBZMainMenuGloveInventoryScreen::execDiscardItemDone },
			{ "NativeGloveSlotButtonFocusedChanged", &USBZMainMenuGloveInventoryScreen::execNativeGloveSlotButtonFocusedChanged },
			{ "NativeOnBuySlotsButtonSelected", &USBZMainMenuGloveInventoryScreen::execNativeOnBuySlotsButtonSelected },
			{ "NativeOnDefaultSet", &USBZMainMenuGloveInventoryScreen::execNativeOnDefaultSet },
			{ "NativeOnGloveDefaultButtonSelected", &USBZMainMenuGloveInventoryScreen::execNativeOnGloveDefaultButtonSelected },
			{ "NativeOnGloveSlotButtonSelected", &USBZMainMenuGloveInventoryScreen::execNativeOnGloveSlotButtonSelected },
			{ "OnBuySlotItemCompleted", &USBZMainMenuGloveInventoryScreen::execOnBuySlotItemCompleted },
			{ "OnDiscardGlovePopUpClosed", &USBZMainMenuGloveInventoryScreen::execOnDiscardGlovePopUpClosed },
			{ "OnShowBuySlotPopUpClosed", &USBZMainMenuGloveInventoryScreen::execOnShowBuySlotPopUpClosed },
			{ "RefreshWidgetVisuals", &USBZMainMenuGloveInventoryScreen::execRefreshWidgetVisuals },
			{ "TryDiscardGloveInSlot", &USBZMainMenuGloveInventoryScreen::execTryDiscardGloveInSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventCanDiscardGloveInSlot_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::NewProp_IndexToDiscard = { "IndexToDiscard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventCanDiscardGloveInSlot_Parms, IndexToDiscard), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuGloveInventoryScreen_eventCanDiscardGloveInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuGloveInventoryScreen_eventCanDiscardGloveInSlot_Parms), &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::NewProp_IndexToDiscard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "CanDiscardGloveInSlot", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventCanDiscardGloveInSlot_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventDiscardItemDone_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult = { "DiscardItemResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventDiscardItemDone_Parms, DiscardItemResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventDiscardItemDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::NewProp_DiscardItemResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "DiscardItemDone", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventDiscardItemDone_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventGloveSlotButtonFocusedChanged_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuGloveInventoryScreen_eventGloveSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuGloveInventoryScreen_eventGloveSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "GloveSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventGloveSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventNativeGloveSlotButtonFocusedChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventNativeGloveSlotButtonFocusedChanged_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuGloveInventoryScreen_eventNativeGloveSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuGloveInventoryScreen_eventNativeGloveSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "NativeGloveSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventNativeGloveSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "NativeOnBuySlotsButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventNativeOnBuySlotsButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventNativeOnDefaultSet_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventNativeOnDefaultSet_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "NativeOnDefaultSet", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventNativeOnDefaultSet_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventNativeOnGloveDefaultButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventNativeOnGloveDefaultButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "NativeOnGloveDefaultButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventNativeOnGloveDefaultButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventNativeOnGloveSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventNativeOnGloveSlotButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "NativeOnGloveSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventNativeOnGloveSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventOnBuySlotItemCompleted_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventOnBuySlotItemCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventOnBuySlotItemCompleted_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "OnBuySlotItemCompleted", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventOnBuySlotItemCompleted_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventOnDiscardGlovePopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventOnDiscardGlovePopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "OnDiscardGlovePopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventOnDiscardGlovePopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZMainMenuGloveInventoryScreen_eventOnItemDiscarded_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuGloveInventoryScreen_eventOnItemDiscarded_Parms), &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "OnItemDiscarded", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventOnItemDiscarded_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms, InActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "OnShowBuySlotPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventOnSlotPriceChanged_Parms, Item), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "OnSlotPriceChanged", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventOnSlotPriceChanged_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZMainMenuGloveInventoryScreen_eventOnSlotPurchaseComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuGloveInventoryScreen_eventOnSlotPurchaseComplete_Parms), &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "OnSlotPurchaseComplete", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventOnSlotPurchaseComplete_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "OnTryBuyGloveSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "RefreshWidgetVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics
	{
		struct SBZMainMenuGloveInventoryScreen_eventTryDiscardGloveInSlot_Parms
		{
			int32 InGloveIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InGloveIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::NewProp_InGloveIndex = { "InGloveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuGloveInventoryScreen_eventTryDiscardGloveInSlot_Parms, InGloveIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::NewProp_InGloveIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, nullptr, "TryDiscardGloveInSlot", nullptr, nullptr, sizeof(SBZMainMenuGloveInventoryScreen_eventTryDiscardGloveInSlot_Parms), Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_NoRegister()
	{
		return USBZMainMenuGloveInventoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveSlotButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GloveSlotButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_GloveSlotButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_GloveSlotButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_BuySlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_BuySlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_DefaultGlove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_DefaultGlove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardGlovePopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DiscardGlovePopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardGlovePopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DiscardGlovePopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardGlovePopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardGlovePopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardGlovePopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardGlovePopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveIndexToDiscard_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GloveIndexToDiscard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardGlovePopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscardGlovePopUpBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveGloveSlotButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveGloveSlotButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveSlotButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveSlotButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveSlotButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GloveSlotButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackInventoryBaseScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_CanDiscardGloveInSlot, "CanDiscardGloveInSlot" }, // 1211692450
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_DiscardItemDone, "DiscardItemDone" }, // 639214527
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_GloveSlotButtonFocusedChanged, "GloveSlotButtonFocusedChanged" }, // 2568446701
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeGloveSlotButtonFocusedChanged, "NativeGloveSlotButtonFocusedChanged" }, // 2642135878
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnBuySlotsButtonSelected, "NativeOnBuySlotsButtonSelected" }, // 2558303170
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnDefaultSet, "NativeOnDefaultSet" }, // 2178874203
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveDefaultButtonSelected, "NativeOnGloveDefaultButtonSelected" }, // 3457575345
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_NativeOnGloveSlotButtonSelected, "NativeOnGloveSlotButtonSelected" }, // 4218706745
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnBuySlotItemCompleted, "OnBuySlotItemCompleted" }, // 451583935
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnDiscardGlovePopUpClosed, "OnDiscardGlovePopUpClosed" }, // 3338894881
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnItemDiscarded, "OnItemDiscarded" }, // 1740551031
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnShowBuySlotPopUpClosed, "OnShowBuySlotPopUpClosed" }, // 3722328007
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPriceChanged, "OnSlotPriceChanged" }, // 4276290671
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnSlotPurchaseComplete, "OnSlotPurchaseComplete" }, // 2875711255
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_OnTryBuyGloveSlot, "OnTryBuyGloveSlot" }, // 512569096
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_RefreshWidgetVisuals, "RefreshWidgetVisuals" }, // 837780248
		{ &Z_Construct_UFunction_USBZMainMenuGloveInventoryScreen_TryDiscardGloveInSlot, "TryDiscardGloveInSlot" }, // 179185992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuGloveInventoryScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonClass = { "GloveSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, GloveSlotButtonClass), Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Panel_GloveSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Panel_GloveSlotButtons = { "Panel_GloveSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, Panel_GloveSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Panel_GloveSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Panel_GloveSlotButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_BuySlots = { "Button_BuySlots", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, Button_BuySlots), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_BuySlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_DefaultGlove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_DefaultGlove = { "Button_DefaultGlove", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, Button_DefaultGlove), Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_DefaultGlove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_DefaultGlove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBodyWidgetClass = { "DiscardGlovePopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpBodyWidgetClass), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpHeader = { "DiscardGlovePopUpHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpAcceptAction = { "DiscardGlovePopUpAcceptAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpCancelAction = { "DiscardGlovePopUpCancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveIndexToDiscard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveIndexToDiscard = { "GloveIndexToDiscard", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, GloveIndexToDiscard), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveIndexToDiscard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveIndexToDiscard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBody = { "DiscardGlovePopUpBody", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpBody), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_ActiveGloveSlotButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_ActiveGloveSlotButton = { "ActiveGloveSlotButton", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, ActiveGloveSlotButton), Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_ActiveGloveSlotButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_ActiveGloveSlotButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_Inner = { "GloveSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool = { "GloveSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, GloveSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_SlotItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuGloveInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuGloveInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_SlotItem = { "SlotItem", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, SlotItem), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_SlotItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_SlotItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Panel_GloveSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_BuySlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_Button_DefaultGlove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveIndexToDiscard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_DiscardGlovePopUpBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_ActiveGloveSlotButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_GloveSlotButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::NewProp_SlotItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuGloveInventoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::ClassParams = {
		&USBZMainMenuGloveInventoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuGloveInventoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuGloveInventoryScreen, 3275456199);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuGloveInventoryScreen>()
	{
		return USBZMainMenuGloveInventoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuGloveInventoryScreen(Z_Construct_UClass_USBZMainMenuGloveInventoryScreen, &USBZMainMenuGloveInventoryScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuGloveInventoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuGloveInventoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
