// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponInventoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponInventoryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execCanDiscardWeaponIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToDiscard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDiscardWeaponIndex(Z_Param_IndexToDiscard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execDiscardItemDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_BuyItemResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardItemDone(ESBZMetaRequestResult(Z_Param_BuyItemResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execDiscardWeaponInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DiscardWeaponInSlot(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execDisplayWeaponSlotScreen)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayWeaponSlotScreen(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execGetActiveWeaponSlotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveWeaponSlotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execGetSlotPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSlotPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execNativeOnBuyWeaponConfigSlotDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_BuyWeaponResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnBuyWeaponConfigSlotDone(ESBZMetaRequestResult(Z_Param_BuyWeaponResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execNativeOnWeaponSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnWeaponSlotButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execTryBuyItemSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryBuyItemSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execUpdateActiveWeaponSlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveWeaponSlotIndex(Z_Param_InNewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryWidget::execUpdateWeaponSlotButtons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponSlotButtons();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone = FName(TEXT("OnBuyWeaponConfigSlotDone"));
	void USBZMainMenuWeaponInventoryWidget::OnBuyWeaponConfigSlotDone(bool bWasSuccess)
	{
		SBZMainMenuWeaponInventoryWidget_eventOnBuyWeaponConfigSlotDone_Parms Parms;
		Parms.bWasSuccess=bWasSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet = FName(TEXT("OnSlotStoreItemSet"));
	void USBZMainMenuWeaponInventoryWidget::OnSlotStoreItemSet(FSBZInventorySlotStoreItem InSlotStoreItem)
	{
		SBZMainMenuWeaponInventoryWidget_eventOnSlotStoreItemSet_Parms Parms;
		Parms.InSlotStoreItem=InSlotStoreItem;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged = FName(TEXT("OnWeaponConfigSlotCountChanged"));
	void USBZMainMenuWeaponInventoryWidget::OnWeaponConfigSlotCountChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged),NULL);
	}
	static FName NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded = FName(TEXT("OnWeaponInSlotDiscarded"));
	void USBZMainMenuWeaponInventoryWidget::OnWeaponInSlotDiscarded(bool bIsWeaponDiscarded)
	{
		SBZMainMenuWeaponInventoryWidget_eventOnWeaponInSlotDiscarded_Parms Parms;
		Parms.bIsWeaponDiscarded=bIsWeaponDiscarded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged = FName(TEXT("OnWeaponSlotButtonFocusedChanged"));
	void USBZMainMenuWeaponInventoryWidget::OnWeaponSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused)
	{
		SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonFocusedChanged_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected = FName(TEXT("OnWeaponSlotButtonSelected"));
	void USBZMainMenuWeaponInventoryWidget::OnWeaponSlotButtonSelected(USBZMenuButton* SelectedButton)
	{
		SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated = FName(TEXT("OnWeaponSlotsUpdated"));
	void USBZMainMenuWeaponInventoryWidget::OnWeaponSlotsUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated),NULL);
	}
	void USBZMainMenuWeaponInventoryWidget::StaticRegisterNativesUSBZMainMenuWeaponInventoryWidget()
	{
		UClass* Class = USBZMainMenuWeaponInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDiscardWeaponIndex", &USBZMainMenuWeaponInventoryWidget::execCanDiscardWeaponIndex },
			{ "DiscardItemDone", &USBZMainMenuWeaponInventoryWidget::execDiscardItemDone },
			{ "DiscardWeaponInSlot", &USBZMainMenuWeaponInventoryWidget::execDiscardWeaponInSlot },
			{ "DisplayWeaponSlotScreen", &USBZMainMenuWeaponInventoryWidget::execDisplayWeaponSlotScreen },
			{ "GetActiveWeaponSlotIndex", &USBZMainMenuWeaponInventoryWidget::execGetActiveWeaponSlotIndex },
			{ "GetSlotPrice", &USBZMainMenuWeaponInventoryWidget::execGetSlotPrice },
			{ "NativeOnBuyWeaponConfigSlotDone", &USBZMainMenuWeaponInventoryWidget::execNativeOnBuyWeaponConfigSlotDone },
			{ "NativeOnWeaponSlotButtonSelected", &USBZMainMenuWeaponInventoryWidget::execNativeOnWeaponSlotButtonSelected },
			{ "TryBuyItemSlots", &USBZMainMenuWeaponInventoryWidget::execTryBuyItemSlots },
			{ "UpdateActiveWeaponSlotIndex", &USBZMainMenuWeaponInventoryWidget::execUpdateActiveWeaponSlotIndex },
			{ "UpdateWeaponSlotButtons", &USBZMainMenuWeaponInventoryWidget::execUpdateWeaponSlotButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventCanDiscardWeaponIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_IndexToDiscard = { "IndexToDiscard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventCanDiscardWeaponIndex_Parms, IndexToDiscard), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryWidget_eventCanDiscardWeaponIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryWidget_eventCanDiscardWeaponIndex_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_IndexToDiscard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "CanDiscardWeaponIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventCanDiscardWeaponIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventDiscardItemDone_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult = { "BuyItemResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventDiscardItemDone_Parms, BuyItemResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventDiscardItemDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "DiscardItemDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventDiscardItemDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventDiscardWeaponInSlot_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventDiscardWeaponInSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryWidget_eventDiscardWeaponInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryWidget_eventDiscardWeaponInSlot_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "DiscardWeaponInSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventDiscardWeaponInSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventDisplayWeaponSlotScreen_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InLoadoutIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLoadoutIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventDisplayWeaponSlotScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventDisplayWeaponSlotScreen_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryWidget_eventDisplayWeaponSlotScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryWidget_eventDisplayWeaponSlotScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "DisplayWeaponSlotScreen", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventDisplayWeaponSlotScreen_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventGetActiveWeaponSlotIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventGetActiveWeaponSlotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "GetActiveWeaponSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventGetActiveWeaponSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventGetSlotPrice_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventGetSlotPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "GetSlotPrice", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventGetSlotPrice_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventNativeOnBuyWeaponConfigSlotDone_Parms
		{
			ESBZMetaRequestResult BuyWeaponResult;
			FGuid ItemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuyWeaponResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BuyWeaponResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::NewProp_BuyWeaponResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::NewProp_BuyWeaponResult = { "BuyWeaponResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventNativeOnBuyWeaponConfigSlotDone_Parms, BuyWeaponResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventNativeOnBuyWeaponConfigSlotDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::NewProp_BuyWeaponResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::NewProp_BuyWeaponResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "NativeOnBuyWeaponConfigSlotDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventNativeOnBuyWeaponConfigSlotDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventNativeOnWeaponSlotButtonSelected_Parms
		{
			USBZMenuButton* SelectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventNativeOnWeaponSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "NativeOnWeaponSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventNativeOnWeaponSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics
	{
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryWidget_eventOnBuyWeaponConfigSlotDone_Parms*)Obj)->bWasSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryWidget_eventOnBuyWeaponConfigSlotDone_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "OnBuyWeaponConfigSlotDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventOnBuyWeaponConfigSlotDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlotStoreItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::NewProp_InSlotStoreItem = { "InSlotStoreItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventOnSlotStoreItemSet_Parms, InSlotStoreItem), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::NewProp_InSlotStoreItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "OnSlotStoreItemSet", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventOnSlotStoreItemSet_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "OnWeaponConfigSlotCountChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics
	{
		static void NewProp_bIsWeaponDiscarded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponDiscarded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryWidget_eventOnWeaponInSlotDiscarded_Parms*)Obj)->bIsWeaponDiscarded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded = { "bIsWeaponDiscarded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryWidget_eventOnWeaponInSlotDiscarded_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "OnWeaponInSlotDiscarded", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventOnWeaponInSlotDiscarded_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonFocusedChanged_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "OnWeaponSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "OnWeaponSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "OnWeaponSlotsUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "TryBuyItemSlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics
	{
		struct SBZMainMenuWeaponInventoryWidget_eventUpdateActiveWeaponSlotIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::NewProp_InNewIndex = { "InNewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryWidget_eventUpdateActiveWeaponSlotIndex_Parms, InNewIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::NewProp_InNewIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "UpdateActiveWeaponSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryWidget_eventUpdateActiveWeaponSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, nullptr, "UpdateWeaponSlotButtons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_NoRegister()
	{
		return USBZMainMenuWeaponInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWeaponSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWeaponSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSlotCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotStoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotStoreItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWeaponSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLoadoutActiveWeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveLoadoutActiveWeaponSlotIndex;
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
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_CanDiscardWeaponIndex, "CanDiscardWeaponIndex" }, // 3530747919
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardItemDone, "DiscardItemDone" }, // 2985789516
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DiscardWeaponInSlot, "DiscardWeaponInSlot" }, // 1526201599
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_DisplayWeaponSlotScreen, "DisplayWeaponSlotScreen" }, // 1932820347
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetActiveWeaponSlotIndex, "GetActiveWeaponSlotIndex" }, // 2489550377
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_GetSlotPrice, "GetSlotPrice" }, // 3353826123
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnBuyWeaponConfigSlotDone, "NativeOnBuyWeaponConfigSlotDone" }, // 673010074
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_NativeOnWeaponSlotButtonSelected, "NativeOnWeaponSlotButtonSelected" }, // 2158962502
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnBuyWeaponConfigSlotDone, "OnBuyWeaponConfigSlotDone" }, // 4034499376
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnSlotStoreItemSet, "OnSlotStoreItemSet" }, // 4274363124
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponConfigSlotCountChanged, "OnWeaponConfigSlotCountChanged" }, // 584502209
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponInSlotDiscarded, "OnWeaponInSlotDiscarded" }, // 2628724924
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonFocusedChanged, "OnWeaponSlotButtonFocusedChanged" }, // 2403713274
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotButtonSelected, "OnWeaponSlotButtonSelected" }, // 101360365
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_OnWeaponSlotsUpdated, "OnWeaponSlotsUpdated" }, // 1998206252
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_TryBuyItemSlots, "TryBuyItemSlots" }, // 615186184
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateActiveWeaponSlotIndex, "UpdateActiveWeaponSlotIndex" }, // 3329781634
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryWidget_UpdateWeaponSlotButtons, "UpdateWeaponSlotButtons" }, // 1047711761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponInventoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonClass = { "WeaponSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, WeaponSlotButtonClass), Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons = { "Panel_WeaponSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, Panel_WeaponSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlots = { "ActiveWeaponSlots", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, ActiveWeaponSlots), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotCount = { "WeaponSlotCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, WeaponSlotCount), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_SlotStoreItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_SlotStoreItem = { "SlotStoreItem", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, SlotStoreItem), Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_SlotStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_SlotStoreItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex = { "ActiveWeaponSlotIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, ActiveWeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_LoadoutSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_LoadoutSlotIndex = { "LoadoutSlotIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, LoadoutSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_LoadoutSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_LoadoutSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveLoadoutActiveWeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveLoadoutActiveWeaponSlotIndex = { "ActiveLoadoutActiveWeaponSlotIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, ActiveLoadoutActiveWeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveLoadoutActiveWeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveLoadoutActiveWeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner = { "WeaponSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool = { "WeaponSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, WeaponSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_SlotStoreItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_LoadoutSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_ActiveLoadoutActiveWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::NewProp_WeaponSlotButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponInventoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::ClassParams = {
		&USBZMainMenuWeaponInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponInventoryWidget, 463030738);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponInventoryWidget>()
	{
		return USBZMainMenuWeaponInventoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponInventoryWidget(Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget, &USBZMainMenuWeaponInventoryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponInventoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponInventoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
