// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventoryCharacterPreferenceScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventoryCharacterPreferenceScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterPreferenceButtonSelectionAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterSlotData();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceScreen::execDecrementSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceScreen::execIncrementSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceScreen::execNativeCharacterSlotButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InFocusedButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeCharacterSlotButtonFocusedChanged(Z_Param_InFocusedButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceScreen::execNativeCharacterSlotButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeCharacterSlotButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceScreen::execNativeOnActiveCharacterSlotIndexChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnActiveCharacterSlotIndexChanged(Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceScreen::execNativeOnCharacterPreferenceUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnCharacterPreferenceUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceScreen::execNativeOnClearPreferredCharactersInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnClearPreferredCharactersInputPressed();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference = FName(TEXT("UpdateCharacterSlotButtonControlsReference"));
	void USBZMainMenuInventoryCharacterPreferenceScreen::UpdateCharacterSlotButtonControlsReference(ESBZCharacterPreferenceButtonSelectionAction SelectionAction)
	{
		SBZMainMenuInventoryCharacterPreferenceScreen_eventUpdateCharacterSlotButtonControlsReference_Parms Parms;
		Parms.SelectionAction=SelectionAction;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference),&Parms);
	}
	void USBZMainMenuInventoryCharacterPreferenceScreen::StaticRegisterNativesUSBZMainMenuInventoryCharacterPreferenceScreen()
	{
		UClass* Class = USBZMainMenuInventoryCharacterPreferenceScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecrementSlot", &USBZMainMenuInventoryCharacterPreferenceScreen::execDecrementSlot },
			{ "IncrementSlot", &USBZMainMenuInventoryCharacterPreferenceScreen::execIncrementSlot },
			{ "NativeCharacterSlotButtonFocusedChanged", &USBZMainMenuInventoryCharacterPreferenceScreen::execNativeCharacterSlotButtonFocusedChanged },
			{ "NativeCharacterSlotButtonSelected", &USBZMainMenuInventoryCharacterPreferenceScreen::execNativeCharacterSlotButtonSelected },
			{ "NativeOnActiveCharacterSlotIndexChanged", &USBZMainMenuInventoryCharacterPreferenceScreen::execNativeOnActiveCharacterSlotIndexChanged },
			{ "NativeOnCharacterPreferenceUpdated", &USBZMainMenuInventoryCharacterPreferenceScreen::execNativeOnCharacterPreferenceUpdated },
			{ "NativeOnClearPreferredCharactersInputPressed", &USBZMainMenuInventoryCharacterPreferenceScreen::execNativeOnClearPreferredCharactersInputPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "DecrementSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "IncrementSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics
	{
		struct SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonFocusedChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonFocusedChanged_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "NativeCharacterSlotButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics
	{
		struct SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "NativeCharacterSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeCharacterSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics
	{
		struct SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeOnActiveCharacterSlotIndexChanged_Parms
		{
			int32 NewIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeOnActiveCharacterSlotIndexChanged_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "NativeOnActiveCharacterSlotIndexChanged", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceScreen_eventNativeOnActiveCharacterSlotIndexChanged_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "NativeOnCharacterPreferenceUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "NativeOnClearPreferredCharactersInputPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionAction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectionAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::NewProp_SelectionAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::NewProp_SelectionAction = { "SelectionAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterPreferenceScreen_eventUpdateCharacterSlotButtonControlsReference_Parms, SelectionAction), Z_Construct_UEnum_Starbreeze_ESBZCharacterPreferenceButtonSelectionAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::NewProp_SelectionAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::NewProp_SelectionAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, nullptr, "UpdateCharacterSlotButtonControlsReference", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceScreen_eventUpdateCharacterSlotButtonControlsReference_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_NoRegister()
	{
		return USBZMainMenuInventoryCharacterPreferenceScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCharactersInputActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClearCharactersInputActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSlotButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterSlotButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_CharacterSlotButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_CharacterSlotButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_CharacterPreferenceDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_CharacterPreferenceDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_CharacterDisplayPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_CharacterDisplayPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedCharacterSlotButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusedCharacterSlotButton;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredCharacterArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredCharacterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreferredCharacterArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSlotButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSlotButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSlotButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterSlotButtonPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_DecrementSlot, "DecrementSlot" }, // 1873832032
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_IncrementSlot, "IncrementSlot" }, // 2282918344
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonFocusedChanged, "NativeCharacterSlotButtonFocusedChanged" }, // 962911830
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeCharacterSlotButtonSelected, "NativeCharacterSlotButtonSelected" }, // 532834203
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnActiveCharacterSlotIndexChanged, "NativeOnActiveCharacterSlotIndexChanged" }, // 3915592333
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnCharacterPreferenceUpdated, "NativeOnCharacterPreferenceUpdated" }, // 339293378
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_NativeOnClearPreferredCharactersInputPressed, "NativeOnClearPreferredCharactersInputPressed" }, // 4223596296
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceScreen_UpdateCharacterSlotButtonControlsReference, "UpdateCharacterSlotButtonControlsReference" }, // 3638165496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventoryCharacterPreferenceScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_ClearCharactersInputActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_ClearCharactersInputActionName = { "ClearCharactersInputActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, ClearCharactersInputActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_ClearCharactersInputActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_ClearCharactersInputActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonClass = { "CharacterSlotButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, CharacterSlotButtonClass), Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Panel_CharacterSlotButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Panel_CharacterSlotButtons = { "Panel_CharacterSlotButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, Panel_CharacterSlotButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Panel_CharacterSlotButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Panel_CharacterSlotButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterPreferenceDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterPreferenceDisplay = { "Widget_CharacterPreferenceDisplay", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, Widget_CharacterPreferenceDisplay), Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterPreferenceDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterPreferenceDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterDisplayPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterDisplayPanel = { "Widget_CharacterDisplayPanel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, Widget_CharacterDisplayPanel), Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterDisplayPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterDisplayPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_FocusedCharacterSlotButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_FocusedCharacterSlotButton = { "FocusedCharacterSlotButton", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, FocusedCharacterSlotButton), Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_FocusedCharacterSlotButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_FocusedCharacterSlotButton_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_PreferredCharacterArray_Inner = { "PreferredCharacterArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCharacterSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_PreferredCharacterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_PreferredCharacterArray = { "PreferredCharacterArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, PreferredCharacterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_PreferredCharacterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_PreferredCharacterArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_Inner = { "CharacterSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool = { "CharacterSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, CharacterSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_ClearCharactersInputActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Panel_CharacterSlotButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterPreferenceDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_Widget_CharacterDisplayPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_FocusedCharacterSlotButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_PreferredCharacterArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_PreferredCharacterArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::NewProp_CharacterSlotButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventoryCharacterPreferenceScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::ClassParams = {
		&USBZMainMenuInventoryCharacterPreferenceScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventoryCharacterPreferenceScreen, 2498541732);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventoryCharacterPreferenceScreen>()
	{
		return USBZMainMenuInventoryCharacterPreferenceScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventoryCharacterPreferenceScreen(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen, &USBZMainMenuInventoryCharacterPreferenceScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventoryCharacterPreferenceScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventoryCharacterPreferenceScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
