// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponSlotInventoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponSlotInventoryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnActiveWeaponSlotChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponSlotInventoryWidget::execCanDiscardWeaponIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToDiscard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDiscardWeaponIndex(Z_Param_IndexToDiscard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponSlotInventoryWidget::execDiscardItemDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_BuyItemResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardItemDone(ESBZMetaRequestResult(Z_Param_BuyItemResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponSlotInventoryWidget::execDiscardWeaponInSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DiscardWeaponInSlot(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponSlotInventoryWidget::execDisplayWeaponSlotScreen)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSetActiveWeaponIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayWeaponSlotScreen(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InSetActiveWeaponIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponSlotInventoryWidget::execNativeOnWeaponSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnWeaponSlotButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponSlotInventoryWidget::execNativeOnWeaponSlotStoreItemTransactionComplete)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_MetaResult);
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InventoryItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnWeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult(Z_Param_MetaResult),Z_Param_InventoryItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponSlotInventoryWidget::execUpdateActiveWeaponSlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveWeaponSlotIndex(Z_Param_InNewIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded = FName(TEXT("OnWeaponInSlotDiscarded"));
	void USBZMainMenuWeaponSlotInventoryWidget::OnWeaponInSlotDiscarded(bool bIsWeaponDiscarded)
	{
		SBZMainMenuWeaponSlotInventoryWidget_eventOnWeaponInSlotDiscarded_Parms Parms;
		Parms.bIsWeaponDiscarded=bIsWeaponDiscarded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed = FName(TEXT("OnWeaponSlotScreenDisplayed"));
	void USBZMainMenuWeaponSlotInventoryWidget::OnWeaponSlotScreenDisplayed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed),NULL);
	}
	static FName NAME_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged = FName(TEXT("WeaponSlotButtonFocusedChanged"));
	void USBZMainMenuWeaponSlotInventoryWidget::WeaponSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused)
	{
		SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotButtonFocusedChanged_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete = FName(TEXT("WeaponSlotStoreItemTransactionComplete"));
	void USBZMainMenuWeaponSlotInventoryWidget::WeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData)
	{
		SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotStoreItemTransactionComplete_Parms Parms;
		Parms.MetaResult=MetaResult;
		Parms.InventoryItemData=InventoryItemData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete),&Parms);
	}
	void USBZMainMenuWeaponSlotInventoryWidget::StaticRegisterNativesUSBZMainMenuWeaponSlotInventoryWidget()
	{
		UClass* Class = USBZMainMenuWeaponSlotInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDiscardWeaponIndex", &USBZMainMenuWeaponSlotInventoryWidget::execCanDiscardWeaponIndex },
			{ "DiscardItemDone", &USBZMainMenuWeaponSlotInventoryWidget::execDiscardItemDone },
			{ "DiscardWeaponInSlot", &USBZMainMenuWeaponSlotInventoryWidget::execDiscardWeaponInSlot },
			{ "DisplayWeaponSlotScreen", &USBZMainMenuWeaponSlotInventoryWidget::execDisplayWeaponSlotScreen },
			{ "NativeOnWeaponSlotButtonSelected", &USBZMainMenuWeaponSlotInventoryWidget::execNativeOnWeaponSlotButtonSelected },
			{ "NativeOnWeaponSlotStoreItemTransactionComplete", &USBZMainMenuWeaponSlotInventoryWidget::execNativeOnWeaponSlotStoreItemTransactionComplete },
			{ "UpdateActiveWeaponSlotIndex", &USBZMainMenuWeaponSlotInventoryWidget::execUpdateActiveWeaponSlotIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics
	{
		struct SBZMainMenuWeaponSlotInventoryWidget_eventCanDiscardWeaponIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_IndexToDiscard = { "IndexToDiscard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventCanDiscardWeaponIndex_Parms, IndexToDiscard), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponSlotInventoryWidget_eventCanDiscardWeaponIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventCanDiscardWeaponIndex_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_IndexToDiscard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "CanDiscardWeaponIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventCanDiscardWeaponIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics
	{
		struct SBZMainMenuWeaponSlotInventoryWidget_eventDiscardItemDone_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult = { "BuyItemResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventDiscardItemDone_Parms, BuyItemResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventDiscardItemDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::NewProp_BuyItemResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "DiscardItemDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventDiscardItemDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics
	{
		struct SBZMainMenuWeaponSlotInventoryWidget_eventDiscardWeaponInSlot_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventDiscardWeaponInSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponSlotInventoryWidget_eventDiscardWeaponInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventDiscardWeaponInSlot_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "DiscardWeaponInSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventDiscardWeaponInSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics
	{
		struct SBZMainMenuWeaponSlotInventoryWidget_eventDisplayWeaponSlotScreen_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InSetActiveWeaponIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSetActiveWeaponIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventDisplayWeaponSlotScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InSetActiveWeaponIndex = { "InSetActiveWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventDisplayWeaponSlotScreen_Parms, InSetActiveWeaponIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponSlotInventoryWidget_eventDisplayWeaponSlotScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventDisplayWeaponSlotScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_InSetActiveWeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "DisplayWeaponSlotScreen", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventDisplayWeaponSlotScreen_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics
	{
		struct SBZMainMenuWeaponSlotInventoryWidget_eventNativeOnWeaponSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventNativeOnWeaponSlotButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "NativeOnWeaponSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventNativeOnWeaponSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics
	{
		struct SBZMainMenuWeaponSlotInventoryWidget_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult = { "MetaResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms, MetaResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData = { "InventoryItemData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms, InventoryItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "NativeOnWeaponSlotStoreItemTransactionComplete", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventNativeOnWeaponSlotStoreItemTransactionComplete_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics
	{
		static void NewProp_bIsWeaponDiscarded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponDiscarded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponSlotInventoryWidget_eventOnWeaponInSlotDiscarded_Parms*)Obj)->bIsWeaponDiscarded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded = { "bIsWeaponDiscarded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventOnWeaponInSlotDiscarded_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::NewProp_bIsWeaponDiscarded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "OnWeaponInSlotDiscarded", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventOnWeaponInSlotDiscarded_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "OnWeaponSlotScreenDisplayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics
	{
		struct SBZMainMenuWeaponSlotInventoryWidget_eventUpdateActiveWeaponSlotIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::NewProp_InNewIndex = { "InNewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventUpdateActiveWeaponSlotIndex_Parms, InNewIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::NewProp_InNewIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "UpdateActiveWeaponSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventUpdateActiveWeaponSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotButtonFocusedChanged_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_SelectedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "WeaponSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult = { "MetaResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotStoreItemTransactionComplete_Parms, MetaResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData = { "InventoryItemData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotStoreItemTransactionComplete_Parms, InventoryItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, nullptr, "WeaponSlotStoreItemTransactionComplete", nullptr, nullptr, sizeof(SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotStoreItemTransactionComplete_Parms), Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_NoRegister()
	{
		return USBZMainMenuWeaponSlotInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveWeaponSlotChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveWeaponSlotChanged;
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
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_CanDiscardWeaponIndex, "CanDiscardWeaponIndex" }, // 3077311564
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardItemDone, "DiscardItemDone" }, // 3153713761
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DiscardWeaponInSlot, "DiscardWeaponInSlot" }, // 1067069807
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_DisplayWeaponSlotScreen, "DisplayWeaponSlotScreen" }, // 1124245632
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotButtonSelected, "NativeOnWeaponSlotButtonSelected" }, // 645711224
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_NativeOnWeaponSlotStoreItemTransactionComplete, "NativeOnWeaponSlotStoreItemTransactionComplete" }, // 3715480723
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponInSlotDiscarded, "OnWeaponInSlotDiscarded" }, // 4110999367
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_OnWeaponSlotScreenDisplayed, "OnWeaponSlotScreenDisplayed" }, // 2904737653
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_UpdateActiveWeaponSlotIndex, "UpdateActiveWeaponSlotIndex" }, // 3466349577
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotButtonFocusedChanged, "WeaponSlotButtonFocusedChanged" }, // 638581775
		{ &Z_Construct_UFunction_USBZMainMenuWeaponSlotInventoryWidget_WeaponSlotStoreItemTransactionComplete, "WeaponSlotStoreItemTransactionComplete" }, // 1713520562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponSlotInventoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_OnActiveWeaponSlotChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_OnActiveWeaponSlotChanged = { "OnActiveWeaponSlotChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, OnActiveWeaponSlotChanged), Z_Construct_UDelegateFunction_Starbreeze_OnActiveWeaponSlotChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_OnActiveWeaponSlotChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_OnActiveWeaponSlotChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonClass = { "WeaponSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, WeaponSlotButtonClass), Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons = { "Panel_WeaponSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, Panel_WeaponSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex = { "ActiveWeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, ActiveWeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveLoadoutWeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveLoadoutWeaponSlotIndex = { "ActiveLoadoutWeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, ActiveLoadoutWeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveLoadoutWeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveLoadoutWeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlots = { "ActiveWeaponSlots", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, ActiveWeaponSlots), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotCount = { "WeaponSlotCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, WeaponSlotCount), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Button_WeaponSlotStoreItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Button_WeaponSlotStoreItem = { "Button_WeaponSlotStoreItem", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, Button_WeaponSlotStoreItem), Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Button_WeaponSlotStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Button_WeaponSlotStoreItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner = { "WeaponSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool = { "WeaponSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, WeaponSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_OnActiveWeaponSlotChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Panel_WeaponSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveLoadoutWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_ActiveWeaponSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_Button_WeaponSlotStoreItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::NewProp_WeaponSlotButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponSlotInventoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::ClassParams = {
		&USBZMainMenuWeaponSlotInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponSlotInventoryWidget, 1318703548);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponSlotInventoryWidget>()
	{
		return USBZMainMenuWeaponSlotInventoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponSlotInventoryWidget(Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget, &USBZMainMenuWeaponSlotInventoryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponSlotInventoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponSlotInventoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
