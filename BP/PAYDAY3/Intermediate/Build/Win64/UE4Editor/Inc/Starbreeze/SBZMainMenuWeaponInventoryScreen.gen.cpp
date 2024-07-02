// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponInventoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponInventoryScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execCanDiscardWeaponIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDiscardWeaponIndex(Z_Param_InWeaponIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execDiscardItemDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_BuyItemResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardItemDone(ESBZMetaRequestResult(Z_Param_BuyItemResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execDisplayWeaponInventoryScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayWeaponInventoryScreen(Z_Param_InLoadoutIndex,ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execHandleProgressionSave)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProgressionSave(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execNativeOnWeaponSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnWeaponSlotButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execNativeOnWeaponSlotStoreItemTransactionComplete)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_MetaResult);
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InventoryItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnWeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult(Z_Param_MetaResult),Z_Param_InventoryItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execOnBuyWeaponSlotItemCompleted)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyWeaponSlotItemCompleted(ESBZMetaRequestResult(Z_Param_Result),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execOnDiscardWeaponPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDiscardWeaponPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execOnShowBuySlotPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowBuySlotPopUpClosed(Z_Param_InActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execTryBuyWeaponSlot)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryBuyWeaponSlot(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execTryDiscardWeaponInIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryDiscardWeaponInIndex(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execUpdateActiveWeaponSlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveWeaponSlotIndex(Z_Param_InNewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryScreen::execUpdateWeaponSlotButtons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponSlotButtons();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged = FName(TEXT("OnActiveWeaponChanged"));
	void USBZMainMenuWeaponInventoryScreen::OnActiveWeaponChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged),NULL);
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed = FName(TEXT("OnBuyWeaponSlotTransactionFailed"));
	void USBZMainMenuWeaponInventoryScreen::OnBuyWeaponSlotTransactionFailed(ESBZMetaRequestResult Result)
	{
		SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotTransactionFailed_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased = FName(TEXT("OnNewSlotPurchased"));
	void USBZMainMenuWeaponInventoryScreen::OnNewSlotPurchased()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased),NULL);
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot = FName(TEXT("OnTryBuyWeaponSlot"));
	void USBZMainMenuWeaponInventoryScreen::OnTryBuyWeaponSlot()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot),NULL);
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded = FName(TEXT("OnWeaponInSlotDiscarded"));
	void USBZMainMenuWeaponInventoryScreen::OnWeaponInSlotDiscarded(bool bIsWeaponDiscarded)
	{
		SBZMainMenuWeaponInventoryScreen_eventOnWeaponInSlotDiscarded_Parms Parms;
		Parms.bIsWeaponDiscarded=bIsWeaponDiscarded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed = FName(TEXT("OnWeaponSlotScreenDisplayed"));
	void USBZMainMenuWeaponInventoryScreen::OnWeaponSlotScreenDisplayed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed),NULL);
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged = FName(TEXT("WeaponSlotButtonFocusedChanged"));
	void USBZMainMenuWeaponInventoryScreen::WeaponSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused)
	{
		SBZMainMenuWeaponInventoryScreen_eventWeaponSlotButtonFocusedChanged_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete = FName(TEXT("WeaponSlotStoreItemTransactionComplete"));
	void USBZMainMenuWeaponInventoryScreen::WeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData)
	{
		SBZMainMenuWeaponInventoryScreen_eventWeaponSlotStoreItemTransactionComplete_Parms Parms;
		Parms.MetaResult=MetaResult;
		Parms.InventoryItemData=InventoryItemData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete),&Parms);
	}
	void USBZMainMenuWeaponInventoryScreen::StaticRegisterNativesUSBZMainMenuWeaponInventoryScreen()
	{
		UClass* Class = USBZMainMenuWeaponInventoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDiscardWeaponIndex", &USBZMainMenuWeaponInventoryScreen::execCanDiscardWeaponIndex },
			{ "DiscardItemDone", &USBZMainMenuWeaponInventoryScreen::execDiscardItemDone },
			{ "DisplayWeaponInventoryScreen", &USBZMainMenuWeaponInventoryScreen::execDisplayWeaponInventoryScreen },
			{ "HandleProgressionSave", &USBZMainMenuWeaponInventoryScreen::execHandleProgressionSave },
			{ "NativeOnWeaponSlotButtonSelected", &USBZMainMenuWeaponInventoryScreen::execNativeOnWeaponSlotButtonSelected },
			{ "NativeOnWeaponSlotStoreItemTransactionComplete", &USBZMainMenuWeaponInventoryScreen::execNativeOnWeaponSlotStoreItemTransactionComplete },
			{ "OnBuyWeaponSlotItemCompleted", &USBZMainMenuWeaponInventoryScreen::execOnBuyWeaponSlotItemCompleted },
			{ "OnDiscardWeaponPopUpClosed", &USBZMainMenuWeaponInventoryScreen::execOnDiscardWeaponPopUpClosed },
			{ "OnShowBuySlotPopUpClosed", &USBZMainMenuWeaponInventoryScreen::execOnShowBuySlotPopUpClosed },
			{ "TryBuyWeaponSlot", &USBZMainMenuWeaponInventoryScreen::execTryBuyWeaponSlot },
			{ "TryDiscardWeaponInIndex", &USBZMainMenuWeaponInventoryScreen::execTryDiscardWeaponInIndex },
			{ "UpdateActiveWeaponSlotIndex", &USBZMainMenuWeaponInventoryScreen::execUpdateActiveWeaponSlotIndex },
			{ "UpdateWeaponSlotButtons", &USBZMainMenuWeaponInventoryScreen::execUpdateWeaponSlotButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventCanDiscardWeaponIndex_Parms
		{
			int32 InWeaponIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::NewProp_InWeaponIndex = { "InWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventCanDiscardWeaponIndex_Parms, InWeaponIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryScreen_eventCanDiscardWeaponIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryScreen_eventCanDiscardWeaponIndex_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::NewProp_InWeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "CanDiscardWeaponIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventCanDiscardWeaponIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventDiscardItemDone_Parms
		{
			ESBZMetaRequestResult BuyItemResult;
			FGuid ItemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuyItemResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BuyItemResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::NewProp_BuyItemResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::NewProp_BuyItemResult = { "BuyItemResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventDiscardItemDone_Parms, BuyItemResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventDiscardItemDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::NewProp_BuyItemResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::NewProp_BuyItemResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "DiscardItemDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventDiscardItemDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventDisplayWeaponInventoryScreen_Parms
		{
			int32 InLoadoutIndex;
			ESBZEquippableLoadoutSlot InEquippableSlot;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLoadoutIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventDisplayWeaponInventoryScreen_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventDisplayWeaponInventoryScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryScreen_eventDisplayWeaponInventoryScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryScreen_eventDisplayWeaponInventoryScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_InLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "DisplayWeaponInventoryScreen", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventDisplayWeaponInventoryScreen_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventHandleProgressionSave_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventHandleProgressionSave_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "HandleProgressionSave", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventHandleProgressionSave_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventNativeOnWeaponSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventNativeOnWeaponSlotButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "NativeOnWeaponSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventNativeOnWeaponSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms
		{
			ESBZMetaRequestResult MetaResult;
			const USBZInventoryBaseData* InventoryItemData;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult = { "MetaResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms, MetaResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData = { "InventoryItemData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms, InventoryItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "NativeOnWeaponSlotStoreItemTransactionComplete", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnActiveWeaponChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotItemCompleted_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotItemCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotItemCompleted_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnBuyWeaponSlotItemCompleted", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotItemCompleted_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotTransactionFailed_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnBuyWeaponSlotTransactionFailed", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotTransactionFailed_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventOnDiscardWeaponPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventOnDiscardWeaponPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnDiscardWeaponPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventOnDiscardWeaponPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnNewSlotPurchased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms, InActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::NewProp_InActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnShowBuySlotPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventOnShowBuySlotPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnTryBuyWeaponSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics
	{
		static void NewProp_bIsWeaponDiscarded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponDiscarded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryScreen_eventOnWeaponInSlotDiscarded_Parms*)Obj)->bIsWeaponDiscarded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded = { "bIsWeaponDiscarded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryScreen_eventOnWeaponInSlotDiscarded_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnWeaponInSlotDiscarded", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventOnWeaponInSlotDiscarded_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "OnWeaponSlotScreenDisplayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventTryBuyWeaponSlot_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventTryBuyWeaponSlot_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "TryBuyWeaponSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventTryBuyWeaponSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventTryDiscardWeaponInIndex_Parms
		{
			int32 SlotIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventTryDiscardWeaponInIndex_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryScreen_eventTryDiscardWeaponInIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryScreen_eventTryDiscardWeaponInIndex_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "TryDiscardWeaponInIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventTryDiscardWeaponInIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics
	{
		struct SBZMainMenuWeaponInventoryScreen_eventUpdateActiveWeaponSlotIndex_Parms
		{
			int32 InNewIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::NewProp_InNewIndex = { "InNewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventUpdateActiveWeaponSlotIndex_Parms, InNewIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::NewProp_InNewIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "UpdateActiveWeaponSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventUpdateActiveWeaponSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "UpdateWeaponSlotButtons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventWeaponSlotButtonFocusedChanged_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryScreen_eventWeaponSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryScreen_eventWeaponSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "WeaponSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventWeaponSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult = { "MetaResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventWeaponSlotStoreItemTransactionComplete_Parms, MetaResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData = { "InventoryItemData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryScreen_eventWeaponSlotStoreItemTransactionComplete_Parms, InventoryItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, nullptr, "WeaponSlotStoreItemTransactionComplete", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryScreen_eventWeaponSlotStoreItemTransactionComplete_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_NoRegister()
	{
		return USBZMainMenuWeaponInventoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponSlotButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_WeaponSlotButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_WeaponSlotButtons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLoadoutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWeaponSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLoadoutWeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveLoadoutWeaponSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWeaponSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWeaponSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSlotCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_WeaponSlotStoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_WeaponSlotStoreItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardWeaponPopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DiscardWeaponPopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardWeaponPopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DiscardWeaponPopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardWeaponPopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardWeaponPopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardWeaponPopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardWeaponPopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponToDiscardIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponToDiscardIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardWeaponPopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscardWeaponPopUpBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponSlotButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponSlotButtonPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackInventoryBaseScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_CanDiscardWeaponIndex, "CanDiscardWeaponIndex" }, // 3355657661
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DiscardItemDone, "DiscardItemDone" }, // 3989315456
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_DisplayWeaponInventoryScreen, "DisplayWeaponInventoryScreen" }, // 1445875265
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_HandleProgressionSave, "HandleProgressionSave" }, // 2809155484
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotButtonSelected, "NativeOnWeaponSlotButtonSelected" }, // 135510325
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_NativeOnWeaponSlotStoreItemTransactionComplete, "NativeOnWeaponSlotStoreItemTransactionComplete" }, // 1726594482
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnActiveWeaponChanged, "OnActiveWeaponChanged" }, // 2078890872
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotItemCompleted, "OnBuyWeaponSlotItemCompleted" }, // 4187591581
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnBuyWeaponSlotTransactionFailed, "OnBuyWeaponSlotTransactionFailed" }, // 2379638481
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnDiscardWeaponPopUpClosed, "OnDiscardWeaponPopUpClosed" }, // 340828498
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnNewSlotPurchased, "OnNewSlotPurchased" }, // 3011548763
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnShowBuySlotPopUpClosed, "OnShowBuySlotPopUpClosed" }, // 3474506057
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnTryBuyWeaponSlot, "OnTryBuyWeaponSlot" }, // 3059909149
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponInSlotDiscarded, "OnWeaponInSlotDiscarded" }, // 3259555066
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_OnWeaponSlotScreenDisplayed, "OnWeaponSlotScreenDisplayed" }, // 721149328
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryBuyWeaponSlot, "TryBuyWeaponSlot" }, // 1900698507
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_TryDiscardWeaponInIndex, "TryDiscardWeaponInIndex" }, // 1974740710
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateActiveWeaponSlotIndex, "UpdateActiveWeaponSlotIndex" }, // 1691470168
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_UpdateWeaponSlotButtons, "UpdateWeaponSlotButtons" }, // 2439175697
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotButtonFocusedChanged, "WeaponSlotButtonFocusedChanged" }, // 2216639165
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryScreen_WeaponSlotStoreItemTransactionComplete, "WeaponSlotStoreItemTransactionComplete" }, // 4004970674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponInventoryScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonClass = { "WeaponSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponSlotButtonClass), Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Panel_WeaponSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Panel_WeaponSlotButtons = { "Panel_WeaponSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, Panel_WeaponSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Panel_WeaponSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Panel_WeaponSlotButtons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_CurrentLoadoutIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_CurrentLoadoutIndex = { "CurrentLoadoutIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, CurrentLoadoutIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_CurrentLoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_CurrentLoadoutIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlotIndex = { "ActiveWeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, ActiveWeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveLoadoutWeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveLoadoutWeaponSlotIndex = { "ActiveLoadoutWeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, ActiveLoadoutWeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveLoadoutWeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveLoadoutWeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlots = { "ActiveWeaponSlots", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, ActiveWeaponSlots), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotCount = { "WeaponSlotCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponSlotCount), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Button_WeaponSlotStoreItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Button_WeaponSlotStoreItem = { "Button_WeaponSlotStoreItem", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, Button_WeaponSlotStoreItem), Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Button_WeaponSlotStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Button_WeaponSlotStoreItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBodyWidgetClass = { "DiscardWeaponPopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpBodyWidgetClass), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpHeader = { "DiscardWeaponPopUpHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpAcceptAction = { "DiscardWeaponPopUpAcceptAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpCancelAction = { "DiscardWeaponPopUpCancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponToDiscardIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponToDiscardIndex = { "WeaponToDiscardIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponToDiscardIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponToDiscardIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponToDiscardIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBody = { "DiscardWeaponPopUpBody", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpBody), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_Inner = { "WeaponSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool = { "WeaponSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Panel_WeaponSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_CurrentLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveLoadoutWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_ActiveWeaponSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_Button_WeaponSlotStoreItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponToDiscardIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_DiscardWeaponPopUpBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::NewProp_WeaponSlotButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponInventoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::ClassParams = {
		&USBZMainMenuWeaponInventoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponInventoryScreen, 19698709);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponInventoryScreen>()
	{
		return USBZMainMenuWeaponInventoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponInventoryScreen(Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen, &USBZMainMenuWeaponInventoryScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponInventoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponInventoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
