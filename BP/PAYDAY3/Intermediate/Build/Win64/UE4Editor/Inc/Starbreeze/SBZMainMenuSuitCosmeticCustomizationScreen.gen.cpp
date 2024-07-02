// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuSuitCosmeticCustomizationScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuSuitCosmeticCustomizationScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuSuitCosmeticCustomizationScreen::execCosmeticPanelButtonSelected)
	{
		P_GET_OBJECT(USBZMainMenuCosmeticItemButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticPanelButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitCosmeticCustomizationScreen::execCosmeticPanelDefaultButtonSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticPanelDefaultButtonSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuSuitCosmeticCustomizationScreen::execOnPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged = FName(TEXT("EquippedItemChanged"));
	void USBZMainMenuSuitCosmeticCustomizationScreen::EquippedItemChanged(const USBZCosmeticsDataAsset* InEquippedItem)
	{
		SBZMainMenuSuitCosmeticCustomizationScreen_eventEquippedItemChanged_Parms Parms;
		Parms.InEquippedItem=InEquippedItem;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged),&Parms);
	}
	void USBZMainMenuSuitCosmeticCustomizationScreen::StaticRegisterNativesUSBZMainMenuSuitCosmeticCustomizationScreen()
	{
		UClass* Class = USBZMainMenuSuitCosmeticCustomizationScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CosmeticPanelButtonSelected", &USBZMainMenuSuitCosmeticCustomizationScreen::execCosmeticPanelButtonSelected },
			{ "CosmeticPanelDefaultButtonSelected", &USBZMainMenuSuitCosmeticCustomizationScreen::execCosmeticPanelDefaultButtonSelected },
			{ "OnPopUpClosed", &USBZMainMenuSuitCosmeticCustomizationScreen::execOnPopUpClosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics
	{
		struct SBZMainMenuSuitCosmeticCustomizationScreen_eventCosmeticPanelButtonSelected_Parms
		{
			USBZMainMenuCosmeticItemButton* SelectedButton;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitCosmeticCustomizationScreen_eventCosmeticPanelButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen, nullptr, "CosmeticPanelButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuSuitCosmeticCustomizationScreen_eventCosmeticPanelButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen, nullptr, "CosmeticPanelDefaultButtonSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquippedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InEquippedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::NewProp_InEquippedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::NewProp_InEquippedItem = { "InEquippedItem", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitCosmeticCustomizationScreen_eventEquippedItemChanged_Parms, InEquippedItem), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::NewProp_InEquippedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::NewProp_InEquippedItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::NewProp_InEquippedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen, nullptr, "EquippedItemChanged", nullptr, nullptr, sizeof(SBZMainMenuSuitCosmeticCustomizationScreen_eventEquippedItemChanged_Parms), Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics
	{
		struct SBZMainMenuSuitCosmeticCustomizationScreen_eventOnPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitCosmeticCustomizationScreen_eventOnPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen, nullptr, "OnPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuSuitCosmeticCustomizationScreen_eventOnPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_NoRegister()
	{
		return USBZMainMenuSuitCosmeticCustomizationScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_CosmeticPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_CosmeticPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPartConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitPartConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuitSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultButtonParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultButtonParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousEquippedConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousEquippedConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopUpBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelButtonSelected, "CosmeticPanelButtonSelected" }, // 300033067
		{ &Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_CosmeticPanelDefaultButtonSelected, "CosmeticPanelDefaultButtonSelected" }, // 3317124314
		{ &Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_EquippedItemChanged, "EquippedItemChanged" }, // 1273062322
		{ &Z_Construct_UFunction_USBZMainMenuSuitCosmeticCustomizationScreen_OnPopUpClosed, "OnPopUpClosed" }, // 2512337991
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuSuitCosmeticCustomizationScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_Widget_CosmeticPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_Widget_CosmeticPanel = { "Widget_CosmeticPanel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, Widget_CosmeticPanel), Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_Widget_CosmeticPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_Widget_CosmeticPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitPartConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitPartConfig = { "SuitPartConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, SuitPartConfig), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitPartConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitPartConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_CosmeticPartSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_CosmeticPartSlot = { "CosmeticPartSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, CosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_CosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_CosmeticPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitSlotIndex = { "SuitSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, SuitSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_DefaultButtonParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_DefaultButtonParams = { "DefaultButtonParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, DefaultButtonParams), Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_DefaultButtonParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_DefaultButtonParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBodyWidgetClass = { "PopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpBodyWidgetClass), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpHeader = { "PopUpHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpAcceptAction = { "PopUpAcceptAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpCancelAction = { "PopUpCancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PreviousEquippedConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PreviousEquippedConfig = { "PreviousEquippedConfig", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PreviousEquippedConfig), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PreviousEquippedConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PreviousEquippedConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCosmeticCustomizationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCosmeticCustomizationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBody = { "PopUpBody", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpBody), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_Widget_CosmeticPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitPartConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_CosmeticPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_SuitSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_DefaultButtonParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PreviousEquippedConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::NewProp_PopUpBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuSuitCosmeticCustomizationScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::ClassParams = {
		&USBZMainMenuSuitCosmeticCustomizationScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuSuitCosmeticCustomizationScreen, 2884569452);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuSuitCosmeticCustomizationScreen>()
	{
		return USBZMainMenuSuitCosmeticCustomizationScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuSuitCosmeticCustomizationScreen(Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen, &USBZMainMenuSuitCosmeticCustomizationScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuSuitCosmeticCustomizationScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuSuitCosmeticCustomizationScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
