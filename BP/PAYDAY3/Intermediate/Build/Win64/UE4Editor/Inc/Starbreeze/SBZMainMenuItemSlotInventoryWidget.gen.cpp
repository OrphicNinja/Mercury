// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuItemSlotInventoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuItemSlotInventoryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnActiveItemChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuItemSlotInventoryWidget::execDisplayItemSlotScreen)
	{
		P_GET_ENUM(ESBZItemLoadoutSlot,Z_Param_InItemSlotType);
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InActiveItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayItemSlotScreen(ESBZItemLoadoutSlot(Z_Param_InItemSlotType),Z_Param_InActiveItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuItemSlotInventoryWidget::execGetActiveItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=P_THIS->GetActiveItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuItemSlotInventoryWidget::execNativeOnItemSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnItemSlotButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged = FName(TEXT("OnItemSlotButtonFocusedChanged"));
	void USBZMainMenuItemSlotInventoryWidget::OnItemSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused)
	{
		SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected = FName(TEXT("OnItemSlotButtonSelected"));
	void USBZMainMenuItemSlotInventoryWidget::OnItemSlotButtonSelected(USBZMenuButton* SelectedButton)
	{
		SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected),&Parms);
	}
	static FName NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed = FName(TEXT("OnItemSlotScreenDisplayed"));
	void USBZMainMenuItemSlotInventoryWidget::OnItemSlotScreenDisplayed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed),NULL);
	}
	static FName NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated = FName(TEXT("OnItemSlotsUpdated"));
	void USBZMainMenuItemSlotInventoryWidget::OnItemSlotsUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated),NULL);
	}
	void USBZMainMenuItemSlotInventoryWidget::StaticRegisterNativesUSBZMainMenuItemSlotInventoryWidget()
	{
		UClass* Class = USBZMainMenuItemSlotInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayItemSlotScreen", &USBZMainMenuItemSlotInventoryWidget::execDisplayItemSlotScreen },
			{ "GetActiveItem", &USBZMainMenuItemSlotInventoryWidget::execGetActiveItem },
			{ "NativeOnItemSlotButtonSelected", &USBZMainMenuItemSlotInventoryWidget::execNativeOnItemSlotButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics
	{
		struct SBZMainMenuItemSlotInventoryWidget_eventDisplayItemSlotScreen_Parms
		{
			ESBZItemLoadoutSlot InItemSlotType;
			USBZInventoryBaseData* InActiveItem;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InItemSlotType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InItemSlotType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActiveItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType = { "InItemSlotType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemSlotInventoryWidget_eventDisplayItemSlotScreen_Parms, InItemSlotType), Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InActiveItem = { "InActiveItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemSlotInventoryWidget_eventDisplayItemSlotScreen_Parms, InActiveItem), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuItemSlotInventoryWidget_eventDisplayItemSlotScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuItemSlotInventoryWidget_eventDisplayItemSlotScreen_Parms), &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InActiveItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, nullptr, "DisplayItemSlotScreen", nullptr, nullptr, sizeof(SBZMainMenuItemSlotInventoryWidget_eventDisplayItemSlotScreen_Parms), Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics
	{
		struct SBZMainMenuItemSlotInventoryWidget_eventGetActiveItem_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemSlotInventoryWidget_eventGetActiveItem_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, nullptr, "GetActiveItem", nullptr, nullptr, sizeof(SBZMainMenuItemSlotInventoryWidget_eventGetActiveItem_Parms), Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics
	{
		struct SBZMainMenuItemSlotInventoryWidget_eventNativeOnItemSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemSlotInventoryWidget_eventNativeOnItemSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, nullptr, "NativeOnItemSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuItemSlotInventoryWidget_eventNativeOnItemSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, nullptr, "OnItemSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, nullptr, "OnItemSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, nullptr, "OnItemSlotScreenDisplayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, nullptr, "OnItemSlotsUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_NoRegister()
	{
		return USBZMainMenuItemSlotInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveItemSlotChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveItemSlotChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlotButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemSlotButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ItemSlotButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ItemSlotButtons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemSlotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemSlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedItemButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedItemButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlotButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSlotButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlotButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemSlotButtonPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_DisplayItemSlotScreen, "DisplayItemSlotScreen" }, // 2179395261
		{ &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_GetActiveItem, "GetActiveItem" }, // 1285077983
		{ &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_NativeOnItemSlotButtonSelected, "NativeOnItemSlotButtonSelected" }, // 2851528997
		{ &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonFocusedChanged, "OnItemSlotButtonFocusedChanged" }, // 1494684195
		{ &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotButtonSelected, "OnItemSlotButtonSelected" }, // 2792401679
		{ &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotScreenDisplayed, "OnItemSlotScreenDisplayed" }, // 4281893851
		{ &Z_Construct_UFunction_USBZMainMenuItemSlotInventoryWidget_OnItemSlotsUpdated, "OnItemSlotsUpdated" }, // 3432231496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuItemSlotInventoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_OnActiveItemSlotChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_OnActiveItemSlotChanged = { "OnActiveItemSlotChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, OnActiveItemSlotChanged), Z_Construct_UDelegateFunction_Starbreeze_OnActiveItemChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_OnActiveItemSlotChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_OnActiveItemSlotChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonClass = { "ItemSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, ItemSlotButtonClass), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons = { "Panel_ItemSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, Panel_ItemSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemSlotInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotType = { "ItemSlotType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, ItemSlotType), Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_SelectedItemButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_SelectedItemButton = { "SelectedItemButton", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, SelectedItemButton), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_SelectedItemButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_SelectedItemButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner = { "ItemSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemSlotInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemSlotInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool = { "ItemSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, ItemSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_OnActiveItemSlotChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_SelectedItemButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::NewProp_ItemSlotButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuItemSlotInventoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::ClassParams = {
		&USBZMainMenuItemSlotInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuItemSlotInventoryWidget, 2347326564);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuItemSlotInventoryWidget>()
	{
		return USBZMainMenuItemSlotInventoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuItemSlotInventoryWidget(Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget, &USBZMainMenuItemSlotInventoryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuItemSlotInventoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuItemSlotInventoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
