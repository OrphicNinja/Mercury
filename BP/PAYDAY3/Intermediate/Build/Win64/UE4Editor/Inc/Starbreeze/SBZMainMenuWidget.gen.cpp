// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuCosmeticType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutCustomization_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemInventoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuMaskCustomization_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitCustomization_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketInspectWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmetic_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFullscreenVideoWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBar_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIPopupData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWidget::execCanInspectInventoryItem)
	{
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InspectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInspectInventoryItem(Z_Param_InspectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execCustomizeLoadout)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CustomizeLoadout(Z_Param_InLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execCustomizeWeaponInSlot)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execCustomizeWeaponInSlotTemp)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CustomizeWeaponInSlotTemp(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayBlackmarketInspectScreen)
	{
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InspectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayBlackmarketInspectScreen(Z_Param_InspectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayCosmeticScreen)
	{
		P_GET_ENUM(ESBZMainMenuCosmeticType,Z_Param_InType);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayCosmeticScreen(ESBZMainMenuCosmeticType(Z_Param_InType),ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayFullscreenVideoScreen)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayFullscreenVideoScreen(Z_Param_Out_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayHeistInpectScreen)
	{
		P_GET_OBJECT(UPD3HeistDataAsset,Z_Param_InHeistData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayHeistInpectScreen(Z_Param_InHeistData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayItemInventoryScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_GET_ENUM(ESBZItemLoadoutSlot,Z_Param_InItemSlotType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayItemInventoryScreen(Z_Param_InLoadoutIndex,ESBZItemLoadoutSlot(Z_Param_InItemSlotType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayMaskCustomizationScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaskSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayMaskCustomizationScreen(Z_Param_InMaskSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayMaskGenericSlotScreen)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_InCosmeticPartSlot);
		P_GET_UBOOL(Z_Param_HasDefaultBool);
		P_GET_PROPERTY(FTextProperty,Z_Param_DefaultDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayMaskGenericSlotScreen(Z_Param_InCosmeticPartSlot,Z_Param_HasDefaultBool,Z_Param_DefaultDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplaySkillsSelection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplaySkillsSelection(Z_Param_InLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplaySuitCosmeticCustomizationScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSuitSlotIndex);
		P_GET_OBJECT(USBZSuitPartConfig,Z_Param_InSuitPartConfig);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_InCosmeticPartSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplaySuitCosmeticCustomizationScreen(Z_Param_InSuitSlotIndex,Z_Param_InSuitPartConfig,Z_Param_InCosmeticPartSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplaySuitCustomizationScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSuitSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplaySuitCustomizationScreen(Z_Param_InSuitSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayWeaponInventoryScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayWeaponInventoryScreen(Z_Param_LoadoutIndex,ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayWeaponModiferScreen)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_GET_OBJECT(USBZWeaponPartSlot,Z_Param_InWeaponPartSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayWeaponModiferScreen(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex,Z_Param_InWeaponPartSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execDisplayWeaponProgressionScreen)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execGetVendorTypeToOpen)
	{
		P_GET_UBOOL(Z_Param_bResetValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZBlackMarketVendorType*)Z_Param__Result=P_THIS->GetVendorTypeToOpen(Z_Param_bResetValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execOnCrossplayPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCrossplayPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execOnGameSensePopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameSensePopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execOnLoadoutChangePopupClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutChangePopupClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execOnMainMenuInitializeComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuInitializeComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execOnTelemetryPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTelemetryPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execOnTutorialPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execRequestRemoveBackgroundBlur)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRemoveBackgroundBlur();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execSetVendorTypeToOpen)
	{
		P_GET_ENUM(ESBZBlackMarketVendorType,Z_Param_VendorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVendorTypeToOpen(ESBZBlackMarketVendorType(Z_Param_VendorType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execShowCrossplayPopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCrossplayPopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execShowGameSensePopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowGameSensePopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execShowTelemetryPopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowTelemetryPopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWidget::execShowTutorialPopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowTutorialPopup();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWidget_AddBackgroundBlur = FName(TEXT("AddBackgroundBlur"));
	void USBZMainMenuWidget::AddBackgroundBlur()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWidget_AddBackgroundBlur),NULL);
	}
	static FName NAME_USBZMainMenuWidget_RemoveBackgroundBlur = FName(TEXT("RemoveBackgroundBlur"));
	void USBZMainMenuWidget::RemoveBackgroundBlur()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWidget_RemoveBackgroundBlur),NULL);
	}
	static FName NAME_USBZMainMenuWidget_ShowMainMenuFunction = FName(TEXT("ShowMainMenuFunction"));
	void USBZMainMenuWidget::ShowMainMenuFunction()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWidget_ShowMainMenuFunction),NULL);
	}
	void USBZMainMenuWidget::StaticRegisterNativesUSBZMainMenuWidget()
	{
		UClass* Class = USBZMainMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInspectInventoryItem", &USBZMainMenuWidget::execCanInspectInventoryItem },
			{ "CustomizeLoadout", &USBZMainMenuWidget::execCustomizeLoadout },
			{ "CustomizeWeaponInSlot", &USBZMainMenuWidget::execCustomizeWeaponInSlot },
			{ "CustomizeWeaponInSlotTemp", &USBZMainMenuWidget::execCustomizeWeaponInSlotTemp },
			{ "DisplayBlackmarketInspectScreen", &USBZMainMenuWidget::execDisplayBlackmarketInspectScreen },
			{ "DisplayCosmeticScreen", &USBZMainMenuWidget::execDisplayCosmeticScreen },
			{ "DisplayFullscreenVideoScreen", &USBZMainMenuWidget::execDisplayFullscreenVideoScreen },
			{ "DisplayHeistInpectScreen", &USBZMainMenuWidget::execDisplayHeistInpectScreen },
			{ "DisplayItemInventoryScreen", &USBZMainMenuWidget::execDisplayItemInventoryScreen },
			{ "DisplayMaskCustomizationScreen", &USBZMainMenuWidget::execDisplayMaskCustomizationScreen },
			{ "DisplayMaskGenericSlotScreen", &USBZMainMenuWidget::execDisplayMaskGenericSlotScreen },
			{ "DisplaySkillsSelection", &USBZMainMenuWidget::execDisplaySkillsSelection },
			{ "DisplaySuitCosmeticCustomizationScreen", &USBZMainMenuWidget::execDisplaySuitCosmeticCustomizationScreen },
			{ "DisplaySuitCustomizationScreen", &USBZMainMenuWidget::execDisplaySuitCustomizationScreen },
			{ "DisplayWeaponInventoryScreen", &USBZMainMenuWidget::execDisplayWeaponInventoryScreen },
			{ "DisplayWeaponModiferScreen", &USBZMainMenuWidget::execDisplayWeaponModiferScreen },
			{ "DisplayWeaponProgressionScreen", &USBZMainMenuWidget::execDisplayWeaponProgressionScreen },
			{ "GetVendorTypeToOpen", &USBZMainMenuWidget::execGetVendorTypeToOpen },
			{ "OnCrossplayPopUpClosed", &USBZMainMenuWidget::execOnCrossplayPopUpClosed },
			{ "OnGameSensePopUpClosed", &USBZMainMenuWidget::execOnGameSensePopUpClosed },
			{ "OnLoadoutChangePopupClosed", &USBZMainMenuWidget::execOnLoadoutChangePopupClosed },
			{ "OnMainMenuInitializeComplete", &USBZMainMenuWidget::execOnMainMenuInitializeComplete },
			{ "OnTelemetryPopUpClosed", &USBZMainMenuWidget::execOnTelemetryPopUpClosed },
			{ "OnTutorialPopUpClosed", &USBZMainMenuWidget::execOnTutorialPopUpClosed },
			{ "RequestRemoveBackgroundBlur", &USBZMainMenuWidget::execRequestRemoveBackgroundBlur },
			{ "SetVendorTypeToOpen", &USBZMainMenuWidget::execSetVendorTypeToOpen },
			{ "ShowCrossplayPopup", &USBZMainMenuWidget::execShowCrossplayPopup },
			{ "ShowGameSensePopup", &USBZMainMenuWidget::execShowGameSensePopup },
			{ "ShowTelemetryPopup", &USBZMainMenuWidget::execShowTelemetryPopup },
			{ "ShowTutorialPopup", &USBZMainMenuWidget::execShowTutorialPopup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "AddBackgroundBlur", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics
	{
		struct SBZMainMenuWidget_eventCanInspectInventoryItem_Parms
		{
			USBZInventoryBaseData* InspectData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InspectData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::NewProp_InspectData = { "InspectData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventCanInspectInventoryItem_Parms, InspectData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventCanInspectInventoryItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventCanInspectInventoryItem_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::NewProp_InspectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "CanInspectInventoryItem", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventCanInspectInventoryItem_Parms), Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics
	{
		struct SBZMainMenuWidget_eventCustomizeLoadout_Parms
		{
			int32 InLoadoutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventCustomizeLoadout_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::NewProp_InLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "CustomizeLoadout", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventCustomizeLoadout_Parms), Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics
	{
		struct SBZMainMenuWidget_eventCustomizeWeaponInSlot_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventCustomizeWeaponInSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventCustomizeWeaponInSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventCustomizeWeaponInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventCustomizeWeaponInSlot_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "CustomizeWeaponInSlot", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventCustomizeWeaponInSlot_Parms), Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics
	{
		struct SBZMainMenuWidget_eventCustomizeWeaponInSlotTemp_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventCustomizeWeaponInSlotTemp_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventCustomizeWeaponInSlotTemp_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventCustomizeWeaponInSlotTemp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventCustomizeWeaponInSlotTemp_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "CustomizeWeaponInSlotTemp", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventCustomizeWeaponInSlotTemp_Parms), Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayBlackmarketInspectScreen_Parms
		{
			USBZInventoryBaseData* InspectData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InspectData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::NewProp_InspectData = { "InspectData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayBlackmarketInspectScreen_Parms, InspectData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayBlackmarketInspectScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayBlackmarketInspectScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::NewProp_InspectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayBlackmarketInspectScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayBlackmarketInspectScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayCosmeticScreen_Parms
		{
			ESBZMainMenuCosmeticType InType;
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayCosmeticScreen_Parms, InType), Z_Construct_UEnum_Starbreeze_ESBZMainMenuCosmeticType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayCosmeticScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayCosmeticScreen_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayCosmeticScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayCosmeticScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayFullscreenVideoScreen_Parms
		{
			FFilePath FilePath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayFullscreenVideoScreen_Parms, FilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayFullscreenVideoScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayFullscreenVideoScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayHeistInpectScreen_Parms
		{
			UPD3HeistDataAsset* InHeistData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InHeistData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::NewProp_InHeistData = { "InHeistData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayHeistInpectScreen_Parms, InHeistData), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::NewProp_InHeistData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayHeistInpectScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayHeistInpectScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayItemInventoryScreen_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayItemInventoryScreen_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType = { "InItemSlotType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayItemInventoryScreen_Parms, InItemSlotType), Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayItemInventoryScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayItemInventoryScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_InLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_InItemSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayItemInventoryScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayItemInventoryScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayMaskCustomizationScreen_Parms
		{
			int32 InMaskSlotIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaskSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::NewProp_InMaskSlotIndex = { "InMaskSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayMaskCustomizationScreen_Parms, InMaskSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayMaskCustomizationScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayMaskCustomizationScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::NewProp_InMaskSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayMaskCustomizationScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayMaskCustomizationScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms
		{
			const USBZCosmeticsPartSlot* InCosmeticPartSlot;
			bool HasDefaultBool;
			FText DefaultDisplayName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticPartSlot;
		static void NewProp_HasDefaultBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasDefaultBool;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultDisplayName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_InCosmeticPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_InCosmeticPartSlot = { "InCosmeticPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms, InCosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_InCosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_InCosmeticPartSlot_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_HasDefaultBool_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms*)Obj)->HasDefaultBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_HasDefaultBool = { "HasDefaultBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_HasDefaultBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_DefaultDisplayName = { "DefaultDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms, DefaultDisplayName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_InCosmeticPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_HasDefaultBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_DefaultDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayMaskGenericSlotScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayMaskGenericSlotScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics
	{
		struct SBZMainMenuWidget_eventDisplaySkillsSelection_Parms
		{
			int32 InLoadoutIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLoadoutIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplaySkillsSelection_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplaySkillsSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplaySkillsSelection_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::NewProp_InLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplaySkillsSelection", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplaySkillsSelection_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplaySuitCosmeticCustomizationScreen_Parms
		{
			int32 InSuitSlotIndex;
			const USBZSuitPartConfig* InSuitPartConfig;
			const USBZCosmeticsPartSlot* InCosmeticPartSlot;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSuitSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSuitPartConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSuitPartConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticPartSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InSuitSlotIndex = { "InSuitSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplaySuitCosmeticCustomizationScreen_Parms, InSuitSlotIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InSuitPartConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InSuitPartConfig = { "InSuitPartConfig", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplaySuitCosmeticCustomizationScreen_Parms, InSuitPartConfig), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InSuitPartConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InSuitPartConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InCosmeticPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InCosmeticPartSlot = { "InCosmeticPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplaySuitCosmeticCustomizationScreen_Parms, InCosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InCosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InCosmeticPartSlot_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplaySuitCosmeticCustomizationScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplaySuitCosmeticCustomizationScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InSuitSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InSuitPartConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_InCosmeticPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplaySuitCosmeticCustomizationScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplaySuitCosmeticCustomizationScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplaySuitCustomizationScreen_Parms
		{
			int32 InSuitSlotIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSuitSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::NewProp_InSuitSlotIndex = { "InSuitSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplaySuitCustomizationScreen_Parms, InSuitSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplaySuitCustomizationScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplaySuitCustomizationScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::NewProp_InSuitSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplaySuitCustomizationScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplaySuitCustomizationScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayWeaponInventoryScreen_Parms
		{
			int32 LoadoutIndex;
			ESBZEquippableLoadoutSlot InEquippableSlot;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayWeaponInventoryScreen_Parms, LoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayWeaponInventoryScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayWeaponInventoryScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayWeaponInventoryScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayWeaponInventoryScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayWeaponInventoryScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayWeaponModiferScreen_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
			const USBZWeaponPartSlot* InWeaponPartSlot;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWeaponPartSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayWeaponModiferScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayWeaponModiferScreen_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InWeaponPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InWeaponPartSlot = { "InWeaponPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayWeaponModiferScreen_Parms, InWeaponPartSlot), Z_Construct_UClass_USBZWeaponPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InWeaponPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InWeaponPartSlot_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayWeaponModiferScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayWeaponModiferScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_InWeaponPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayWeaponModiferScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayWeaponModiferScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics
	{
		struct SBZMainMenuWidget_eventDisplayWeaponProgressionScreen_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayWeaponProgressionScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventDisplayWeaponProgressionScreen_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventDisplayWeaponProgressionScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventDisplayWeaponProgressionScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "DisplayWeaponProgressionScreen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventDisplayWeaponProgressionScreen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics
	{
		struct SBZMainMenuWidget_eventGetVendorTypeToOpen_Parms
		{
			bool bResetValue;
			ESBZBlackMarketVendorType ReturnValue;
		};
		static void NewProp_bResetValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_bResetValue_SetBit(void* Obj)
	{
		((SBZMainMenuWidget_eventGetVendorTypeToOpen_Parms*)Obj)->bResetValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_bResetValue = { "bResetValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWidget_eventGetVendorTypeToOpen_Parms), &Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_bResetValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventGetVendorTypeToOpen_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_bResetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "GetVendorTypeToOpen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventGetVendorTypeToOpen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics
	{
		struct SBZMainMenuWidget_eventOnCrossplayPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventOnCrossplayPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "OnCrossplayPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventOnCrossplayPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics
	{
		struct SBZMainMenuWidget_eventOnGameSensePopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventOnGameSensePopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "OnGameSensePopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventOnGameSensePopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics
	{
		struct SBZMainMenuWidget_eventOnLoadoutChangePopupClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventOnLoadoutChangePopupClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "OnLoadoutChangePopupClosed", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventOnLoadoutChangePopupClosed_Parms), Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "OnMainMenuInitializeComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics
	{
		struct SBZMainMenuWidget_eventOnTelemetryPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventOnTelemetryPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "OnTelemetryPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventOnTelemetryPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics
	{
		struct SBZMainMenuWidget_eventOnTutorialPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventOnTutorialPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "OnTutorialPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventOnTutorialPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "RemoveBackgroundBlur", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "RequestRemoveBackgroundBlur", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics
	{
		struct SBZMainMenuWidget_eventSetVendorTypeToOpen_Parms
		{
			ESBZBlackMarketVendorType VendorType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VendorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VendorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::NewProp_VendorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::NewProp_VendorType = { "VendorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWidget_eventSetVendorTypeToOpen_Parms, VendorType), Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::NewProp_VendorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::NewProp_VendorType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "SetVendorTypeToOpen", nullptr, nullptr, sizeof(SBZMainMenuWidget_eventSetVendorTypeToOpen_Parms), Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "ShowCrossplayPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "ShowGameSensePopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "ShowMainMenuFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "ShowTelemetryPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWidget, nullptr, "ShowTutorialPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWidget_NoRegister()
	{
		return USBZMainMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_LoadoutCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_LoadoutCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_WeaponCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_WeaponCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_WeaponCustomizationTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_WeaponCustomizationTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_WeaponInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_WeaponInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ItemInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ItemInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_SkillsSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_SkillsSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_WeaponProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_WeaponProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MaskCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_MaskCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_WeaponModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_WeaponModifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_SuitCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_SuitCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_SuitCosmeticCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_SuitCosmeticCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_BlackMarketInspect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_BlackMarketInspect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Cosmetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Cosmetic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_HeistInspect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_HeistInspect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_FullscreenVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_FullscreenVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MainMenuNavbar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_MainMenuNavbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticItemButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CosmeticItemButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossplayPopupWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CrossplayPopupWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialPopupWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialPopupWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialPopupHeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TutorialPopupHeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossplayPopupHeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CrossplayPopupHeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossplayPopupBodyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CrossplayPopupBodyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpPlayTutorialAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpPlayTutorialAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpSkipTutorialAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpSkipTutorialAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpOptInAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpOptInAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpOptOutAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpOptOutAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelemetryHeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TelemetryHeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelemetryBodyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TelemetryBodyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSenseHeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GameSenseHeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSenseBodyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GameSenseBodyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopUpBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TutorialObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutChangePopupWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoadoutChangePopupWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutChangePopupHeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoadoutChangePopupHeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutChangePopupDescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoadoutChangePopupDescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutChangePopupListText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoadoutChangePopupListText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CosmeticButtonPool;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VendorTypeToOpen_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorTypeToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VendorTypeToOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWidget_AddBackgroundBlur, "AddBackgroundBlur" }, // 1243290931
		{ &Z_Construct_UFunction_USBZMainMenuWidget_CanInspectInventoryItem, "CanInspectInventoryItem" }, // 1410051470
		{ &Z_Construct_UFunction_USBZMainMenuWidget_CustomizeLoadout, "CustomizeLoadout" }, // 2964774225
		{ &Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlot, "CustomizeWeaponInSlot" }, // 2278551623
		{ &Z_Construct_UFunction_USBZMainMenuWidget_CustomizeWeaponInSlotTemp, "CustomizeWeaponInSlotTemp" }, // 3133294751
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayBlackmarketInspectScreen, "DisplayBlackmarketInspectScreen" }, // 934932023
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayCosmeticScreen, "DisplayCosmeticScreen" }, // 3751084423
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayFullscreenVideoScreen, "DisplayFullscreenVideoScreen" }, // 1648198869
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayHeistInpectScreen, "DisplayHeistInpectScreen" }, // 1556415131
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayItemInventoryScreen, "DisplayItemInventoryScreen" }, // 4118851839
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskCustomizationScreen, "DisplayMaskCustomizationScreen" }, // 1072309847
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayMaskGenericSlotScreen, "DisplayMaskGenericSlotScreen" }, // 138375897
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplaySkillsSelection, "DisplaySkillsSelection" }, // 3446126162
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCosmeticCustomizationScreen, "DisplaySuitCosmeticCustomizationScreen" }, // 2807016333
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplaySuitCustomizationScreen, "DisplaySuitCustomizationScreen" }, // 4293633523
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponInventoryScreen, "DisplayWeaponInventoryScreen" }, // 3354583453
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponModiferScreen, "DisplayWeaponModiferScreen" }, // 1712453407
		{ &Z_Construct_UFunction_USBZMainMenuWidget_DisplayWeaponProgressionScreen, "DisplayWeaponProgressionScreen" }, // 2288965571
		{ &Z_Construct_UFunction_USBZMainMenuWidget_GetVendorTypeToOpen, "GetVendorTypeToOpen" }, // 933865318
		{ &Z_Construct_UFunction_USBZMainMenuWidget_OnCrossplayPopUpClosed, "OnCrossplayPopUpClosed" }, // 728607560
		{ &Z_Construct_UFunction_USBZMainMenuWidget_OnGameSensePopUpClosed, "OnGameSensePopUpClosed" }, // 809532790
		{ &Z_Construct_UFunction_USBZMainMenuWidget_OnLoadoutChangePopupClosed, "OnLoadoutChangePopupClosed" }, // 4059051074
		{ &Z_Construct_UFunction_USBZMainMenuWidget_OnMainMenuInitializeComplete, "OnMainMenuInitializeComplete" }, // 3699397059
		{ &Z_Construct_UFunction_USBZMainMenuWidget_OnTelemetryPopUpClosed, "OnTelemetryPopUpClosed" }, // 2344509469
		{ &Z_Construct_UFunction_USBZMainMenuWidget_OnTutorialPopUpClosed, "OnTutorialPopUpClosed" }, // 3718596779
		{ &Z_Construct_UFunction_USBZMainMenuWidget_RemoveBackgroundBlur, "RemoveBackgroundBlur" }, // 285148939
		{ &Z_Construct_UFunction_USBZMainMenuWidget_RequestRemoveBackgroundBlur, "RequestRemoveBackgroundBlur" }, // 3632637175
		{ &Z_Construct_UFunction_USBZMainMenuWidget_SetVendorTypeToOpen, "SetVendorTypeToOpen" }, // 1424342961
		{ &Z_Construct_UFunction_USBZMainMenuWidget_ShowCrossplayPopup, "ShowCrossplayPopup" }, // 24769996
		{ &Z_Construct_UFunction_USBZMainMenuWidget_ShowGameSensePopup, "ShowGameSensePopup" }, // 2998092296
		{ &Z_Construct_UFunction_USBZMainMenuWidget_ShowMainMenuFunction, "ShowMainMenuFunction" }, // 3928741522
		{ &Z_Construct_UFunction_USBZMainMenuWidget_ShowTelemetryPopup, "ShowTelemetryPopup" }, // 1781160706
		{ &Z_Construct_UFunction_USBZMainMenuWidget_ShowTutorialPopup, "ShowTutorialPopup" }, // 1946474349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_LoadoutCustomization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_LoadoutCustomization = { "Widget_LoadoutCustomization", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_LoadoutCustomization), Z_Construct_UClass_USBZMainMenuLoadoutCustomization_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_LoadoutCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_LoadoutCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomization = { "Widget_WeaponCustomization", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponCustomization), Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomizationTemp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomizationTemp = { "Widget_WeaponCustomizationTemp", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponCustomizationTemp), Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomizationTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomizationTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponInventory = { "Widget_WeaponInventory", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponInventory), Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_ItemInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_ItemInventory = { "Widget_ItemInventory", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_ItemInventory), Z_Construct_UClass_USBZMainMenuItemInventoryScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_ItemInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_ItemInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SkillsSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SkillsSelection = { "Widget_SkillsSelection", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_SkillsSelection), Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SkillsSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SkillsSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponProgression = { "Widget_WeaponProgression", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponProgression), Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MaskCustomization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MaskCustomization = { "Widget_MaskCustomization", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_MaskCustomization), Z_Construct_UClass_USBZMainMenuMaskCustomization_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MaskCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MaskCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponModifiers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponModifiers = { "Widget_WeaponModifiers", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponModifiers), Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponModifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCustomization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCustomization = { "Widget_SuitCustomization", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_SuitCustomization), Z_Construct_UClass_USBZMainMenuSuitCustomization_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCosmeticCustomization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCosmeticCustomization = { "Widget_SuitCosmeticCustomization", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_SuitCosmeticCustomization), Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCosmeticCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCosmeticCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_BlackMarketInspect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_BlackMarketInspect = { "Widget_BlackMarketInspect", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_BlackMarketInspect), Z_Construct_UClass_USBZBlackMarketInspectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_BlackMarketInspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_BlackMarketInspect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_Cosmetic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_Cosmetic = { "Widget_Cosmetic", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_Cosmetic), Z_Construct_UClass_USBZMainMenuCosmetic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_Cosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_Cosmetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_HeistInspect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_HeistInspect = { "Widget_HeistInspect", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_HeistInspect), Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_HeistInspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_HeistInspect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_FullscreenVideo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_FullscreenVideo = { "Widget_FullscreenVideo", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_FullscreenVideo), Z_Construct_UClass_USBZFullscreenVideoWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_FullscreenVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_FullscreenVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MainMenuNavbar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MainMenuNavbar = { "Widget_MainMenuNavbar", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, Widget_MainMenuNavbar), Z_Construct_UClass_USBZMenuNavBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MainMenuNavbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MainMenuNavbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticItemButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticItemButtonClass = { "CosmeticItemButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, CosmeticItemButtonClass), Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticItemButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticItemButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupWidgetClass = { "CrossplayPopupWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, CrossplayPopupWidgetClass), Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupWidgetClass = { "TutorialPopupWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, TutorialPopupWidgetClass), Z_Construct_UClass_USBZWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupHeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupHeaderText = { "TutorialPopupHeaderText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, TutorialPopupHeaderText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupHeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupHeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupHeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupHeaderText = { "CrossplayPopupHeaderText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, CrossplayPopupHeaderText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupHeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupHeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupBodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupBodyText = { "CrossplayPopupBodyText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, CrossplayPopupBodyText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupBodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupBodyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpPlayTutorialAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpPlayTutorialAction = { "PopUpPlayTutorialAction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, PopUpPlayTutorialAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpPlayTutorialAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpPlayTutorialAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpSkipTutorialAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpSkipTutorialAction = { "PopUpSkipTutorialAction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, PopUpSkipTutorialAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpSkipTutorialAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpSkipTutorialAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptInAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptInAction = { "PopUpOptInAction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, PopUpOptInAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptInAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptInAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptOutAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptOutAction = { "PopUpOptOutAction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, PopUpOptOutAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptOutAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptOutAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryHeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryHeaderText = { "TelemetryHeaderText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, TelemetryHeaderText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryHeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryHeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryBodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryBodyText = { "TelemetryBodyText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, TelemetryBodyText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryBodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryBodyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseHeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseHeaderText = { "GameSenseHeaderText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, GameSenseHeaderText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseHeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseHeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseBodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseBodyText = { "GameSenseBodyText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, GameSenseBodyText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseBodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseBodyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpData = { "PopUpData", nullptr, (EPropertyFlags)0x0040008000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, PopUpData), Z_Construct_UScriptStruct_FSBZUIPopupData, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpBody = { "PopUpBody", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, PopUpBody), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialObjectPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialObjectPath = { "TutorialObjectPath", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, TutorialObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupWidgetClass = { "LoadoutChangePopupWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupWidgetClass), Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupHeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupHeaderText = { "LoadoutChangePopupHeaderText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupHeaderText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupHeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupHeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupDescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupDescriptionText = { "LoadoutChangePopupDescriptionText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupDescriptionText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupDescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupDescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupListText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupListText = { "LoadoutChangePopupListText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupListText), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupListText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupListText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_Inner = { "CosmeticButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool = { "CosmeticButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, CosmeticButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_VendorTypeToOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_VendorTypeToOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_VendorTypeToOpen = { "VendorTypeToOpen", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWidget, VendorTypeToOpen), Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_VendorTypeToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_VendorTypeToOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_LoadoutCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponCustomizationTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_ItemInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SkillsSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MaskCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_WeaponModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_SuitCosmeticCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_BlackMarketInspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_Cosmetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_HeistInspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_FullscreenVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_Widget_MainMenuNavbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticItemButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialPopupHeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupHeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CrossplayPopupBodyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpPlayTutorialAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpSkipTutorialAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptInAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpOptOutAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryHeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TelemetryBodyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseHeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_GameSenseBodyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_PopUpBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_TutorialObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupHeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupDescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_LoadoutChangePopupListText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_CosmeticButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_VendorTypeToOpen_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWidget_Statics::NewProp_VendorTypeToOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWidget_Statics::ClassParams = {
		&USBZMainMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWidget, 2485270459);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWidget>()
	{
		return USBZMainMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWidget(Z_Construct_UClass_USBZMainMenuWidget, &USBZMainMenuWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
