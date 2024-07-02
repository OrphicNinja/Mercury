// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuItemInventoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuItemInventoryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemInventoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemInventoryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuItemInventoryWidget::execDisplayItemSlotScreen)
	{
		P_GET_ENUM(ESBZItemLoadoutSlot,Z_Param_InItemSlotType);
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InActiveItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayItemSlotScreen(ESBZItemLoadoutSlot(Z_Param_InItemSlotType),Z_Param_InActiveItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuItemInventoryWidget::execGetActiveItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=P_THIS->GetActiveItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuItemInventoryWidget::execNativeOnItemSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnItemSlotButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged = FName(TEXT("OnItemSlotButtonFocusedChanged"));
	void USBZMainMenuItemInventoryWidget::OnItemSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused)
	{
		SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected = FName(TEXT("OnItemSlotButtonSelected"));
	void USBZMainMenuItemInventoryWidget::OnItemSlotButtonSelected(USBZMenuButton* SelectedButton)
	{
		SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected),&Parms);
	}
	static FName NAME_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated = FName(TEXT("OnItemSlotsUpdated"));
	void USBZMainMenuItemInventoryWidget::OnItemSlotsUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated),NULL);
	}
	void USBZMainMenuItemInventoryWidget::StaticRegisterNativesUSBZMainMenuItemInventoryWidget()
	{
		UClass* Class = USBZMainMenuItemInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayItemSlotScreen", &USBZMainMenuItemInventoryWidget::execDisplayItemSlotScreen },
			{ "GetActiveItem", &USBZMainMenuItemInventoryWidget::execGetActiveItem },
			{ "NativeOnItemSlotButtonSelected", &USBZMainMenuItemInventoryWidget::execNativeOnItemSlotButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics
	{
		struct SBZMainMenuItemInventoryWidget_eventDisplayItemSlotScreen_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType = { "InItemSlotType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryWidget_eventDisplayItemSlotScreen_Parms, InItemSlotType), Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InActiveItem = { "InActiveItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryWidget_eventDisplayItemSlotScreen_Parms, InActiveItem), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuItemInventoryWidget_eventDisplayItemSlotScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuItemInventoryWidget_eventDisplayItemSlotScreen_Parms), &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InItemSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_InActiveItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryWidget, nullptr, "DisplayItemSlotScreen", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryWidget_eventDisplayItemSlotScreen_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics
	{
		struct SBZMainMenuItemInventoryWidget_eventGetActiveItem_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryWidget_eventGetActiveItem_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryWidget, nullptr, "GetActiveItem", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryWidget_eventGetActiveItem_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics
	{
		struct SBZMainMenuItemInventoryWidget_eventNativeOnItemSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryWidget_eventNativeOnItemSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryWidget, nullptr, "NativeOnItemSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryWidget_eventNativeOnItemSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryWidget, nullptr, "OnItemSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryWidget, nullptr, "OnItemSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryWidget, nullptr, "OnItemSlotsUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuItemInventoryWidget_NoRegister()
	{
		return USBZMainMenuItemInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_DisplayItemSlotScreen, "DisplayItemSlotScreen" }, // 2410585501
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_GetActiveItem, "GetActiveItem" }, // 3485688498
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_NativeOnItemSlotButtonSelected, "NativeOnItemSlotButtonSelected" }, // 4033957779
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonFocusedChanged, "OnItemSlotButtonFocusedChanged" }, // 2693703749
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotButtonSelected, "OnItemSlotButtonSelected" }, // 2908430531
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryWidget_OnItemSlotsUpdated, "OnItemSlotsUpdated" }, // 2780455863
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuItemInventoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonClass = { "ItemSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, ItemSlotButtonClass), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons = { "Panel_ItemSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, Panel_ItemSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotType = { "ItemSlotType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, ItemSlotType), Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_SelectedItemButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_SelectedItemButton = { "SelectedItemButton", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, SelectedItemButton), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_SelectedItemButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_SelectedItemButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner = { "ItemSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool = { "ItemSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, ItemSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_Panel_ItemSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_SelectedItemButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::NewProp_ItemSlotButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuItemInventoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::ClassParams = {
		&USBZMainMenuItemInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuItemInventoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuItemInventoryWidget, 46257949);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuItemInventoryWidget>()
	{
		return USBZMainMenuItemInventoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuItemInventoryWidget(Z_Construct_UClass_USBZMainMenuItemInventoryWidget, &USBZMainMenuItemInventoryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuItemInventoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuItemInventoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
