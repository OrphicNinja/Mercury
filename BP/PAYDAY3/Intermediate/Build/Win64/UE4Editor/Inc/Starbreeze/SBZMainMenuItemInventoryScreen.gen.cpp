// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuItemInventoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuItemInventoryScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemInventoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemInventoryScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuItemInventoryScreen::execDisplayItemInventoryScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_GET_ENUM(ESBZItemLoadoutSlot,Z_Param_InItemSlotType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayItemInventoryScreen(Z_Param_InLoadoutIndex,ESBZItemLoadoutSlot(Z_Param_InItemSlotType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuItemInventoryScreen::execGetActiveItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=P_THIS->GetActiveItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuItemInventoryScreen::execHandleProgressionSave)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProgressionSave(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuItemInventoryScreen::execNativeOnItemSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnItemSlotButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged = FName(TEXT("OnItemSlotButtonFocusedChanged"));
	void USBZMainMenuItemInventoryScreen::OnItemSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused)
	{
		SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonFocusedChanged_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected = FName(TEXT("OnItemSlotButtonSelected"));
	void USBZMainMenuItemInventoryScreen::OnItemSlotButtonSelected(USBZMenuButton* SelectedButton)
	{
		SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected),&Parms);
	}
	static FName NAME_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed = FName(TEXT("OnItemSlotScreenDisplayed"));
	void USBZMainMenuItemInventoryScreen::OnItemSlotScreenDisplayed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed),NULL);
	}
	static FName NAME_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated = FName(TEXT("OnItemSlotsUpdated"));
	void USBZMainMenuItemInventoryScreen::OnItemSlotsUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated),NULL);
	}
	void USBZMainMenuItemInventoryScreen::StaticRegisterNativesUSBZMainMenuItemInventoryScreen()
	{
		UClass* Class = USBZMainMenuItemInventoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayItemInventoryScreen", &USBZMainMenuItemInventoryScreen::execDisplayItemInventoryScreen },
			{ "GetActiveItem", &USBZMainMenuItemInventoryScreen::execGetActiveItem },
			{ "HandleProgressionSave", &USBZMainMenuItemInventoryScreen::execHandleProgressionSave },
			{ "NativeOnItemSlotButtonSelected", &USBZMainMenuItemInventoryScreen::execNativeOnItemSlotButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics
	{
		struct SBZMainMenuItemInventoryScreen_eventDisplayItemInventoryScreen_Parms
		{
			int32 InLoadoutIndex;
			ESBZItemLoadoutSlot InItemSlotType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLoadoutIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InItemSlotType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InItemSlotType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryScreen_eventDisplayItemInventoryScreen_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType = { "InItemSlotType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryScreen_eventDisplayItemInventoryScreen_Parms, InItemSlotType), Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuItemInventoryScreen_eventDisplayItemInventoryScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuItemInventoryScreen_eventDisplayItemInventoryScreen_Parms), &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_InLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "DisplayItemInventoryScreen", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryScreen_eventDisplayItemInventoryScreen_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics
	{
		struct SBZMainMenuItemInventoryScreen_eventGetActiveItem_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryScreen_eventGetActiveItem_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "GetActiveItem", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryScreen_eventGetActiveItem_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics
	{
		struct SBZMainMenuItemInventoryScreen_eventHandleProgressionSave_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryScreen_eventHandleProgressionSave_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "HandleProgressionSave", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryScreen_eventHandleProgressionSave_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics
	{
		struct SBZMainMenuItemInventoryScreen_eventNativeOnItemSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryScreen_eventNativeOnItemSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "NativeOnItemSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryScreen_eventNativeOnItemSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonFocusedChanged_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_SelectedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "OnItemSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "OnItemSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "OnItemSlotScreenDisplayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemInventoryScreen, nullptr, "OnItemSlotsUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuItemInventoryScreen_NoRegister()
	{
		return USBZMainMenuItemInventoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLoadoutIndex;
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
	UObject* (*const Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_DisplayItemInventoryScreen, "DisplayItemInventoryScreen" }, // 2083780266
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_GetActiveItem, "GetActiveItem" }, // 216462881
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_HandleProgressionSave, "HandleProgressionSave" }, // 3741236703
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_NativeOnItemSlotButtonSelected, "NativeOnItemSlotButtonSelected" }, // 477237015
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonFocusedChanged, "OnItemSlotButtonFocusedChanged" }, // 1216375631
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotButtonSelected, "OnItemSlotButtonSelected" }, // 636968166
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotScreenDisplayed, "OnItemSlotScreenDisplayed" }, // 604890798
		{ &Z_Construct_UFunction_USBZMainMenuItemInventoryScreen_OnItemSlotsUpdated, "OnItemSlotsUpdated" }, // 1420291894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuItemInventoryScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonClass = { "ItemSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, ItemSlotButtonClass), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_Panel_ItemSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_Panel_ItemSlotButtons = { "Panel_ItemSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, Panel_ItemSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_Panel_ItemSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_Panel_ItemSlotButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_CurrentLoadoutIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_CurrentLoadoutIndex = { "CurrentLoadoutIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, CurrentLoadoutIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_CurrentLoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_CurrentLoadoutIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotType = { "ItemSlotType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, ItemSlotType), Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_SelectedItemButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_SelectedItemButton = { "SelectedItemButton", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, SelectedItemButton), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_SelectedItemButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_SelectedItemButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_Inner = { "ItemSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuItemInventoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemInventoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool = { "ItemSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, ItemSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_Panel_ItemSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_CurrentLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_SelectedItemButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::NewProp_ItemSlotButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuItemInventoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::ClassParams = {
		&USBZMainMenuItemInventoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuItemInventoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuItemInventoryScreen, 904919045);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuItemInventoryScreen>()
	{
		return USBZMainMenuItemInventoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuItemInventoryScreen(Z_Construct_UClass_USBZMainMenuItemInventoryScreen, &USBZMainMenuItemInventoryScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuItemInventoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuItemInventoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
