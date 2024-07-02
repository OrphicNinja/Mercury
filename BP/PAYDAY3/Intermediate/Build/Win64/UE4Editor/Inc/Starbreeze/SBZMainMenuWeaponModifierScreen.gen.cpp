// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponModifierScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponModifierScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponModifierScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execGetBlockedSlotNamesForWeaponPart)
	{
		P_GET_OBJECT(USBZWeaponPartDataAsset,Z_Param_WeaponPartDataAsset);
		P_GET_TARRAY_REF(FText,Z_Param_Out_OutSlotNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBlockedSlotNamesForWeaponPart(Z_Param_WeaponPartDataAsset,Z_Param_Out_OutSlotNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execGetCurrentWeaponPartSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWeaponPartSlot**)Z_Param__Result=P_THIS->GetCurrentWeaponPartSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execGetWeaponSlotInfo)
	{
		P_GET_ENUM_REF(ESBZEquippableLoadoutSlot,Z_Param_Out_OutEquippableSlot);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponSlotInfo((ESBZEquippableLoadoutSlot&)(Z_Param_Out_OutEquippableSlot),Z_Param_Out_OutWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execInitializeWeaponPartCustomization)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_GET_OBJECT(USBZWeaponPartSlot,Z_Param_InWeaponPartSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeWeaponPartCustomization(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex,Z_Param_InWeaponPartSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execOnPayForAttachItemDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_BuyWeaponResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPayForAttachItemDone(ESBZMetaRequestResult(Z_Param_BuyWeaponResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execOnPurchaseItemPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPurchaseItemPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execOnWeaponPartProgressionButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponPartProgressionButtonFocusedChanged(Z_Param_InButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execOnWeaponPartProgressionButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponPartProgressionButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execSendPurchaseAttemptEvent)
	{
		P_GET_UBOOL(Z_Param_bIsAcceptPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPurchaseAttemptEvent(Z_Param_bIsAcceptPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponModifierScreen::execSetNewEquippedButton)
	{
		P_GET_OBJECT(USBZMainMenuWeaponPartProgressionButton,Z_Param_InEquippedWeaponProgressionButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewEquippedButton(Z_Param_InEquippedWeaponProgressionButton);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused = FName(TEXT("NewWeaponPartFocused"));
	void USBZMainMenuWeaponModifierScreen::NewWeaponPartFocused(const USBZMainMenuWeaponPartProgressionButton* NewFocusedButton)
	{
		SBZMainMenuWeaponModifierScreen_eventNewWeaponPartFocused_Parms Parms;
		Parms.NewFocusedButton=NewFocusedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponModifierScreen_OnScreenInitialized = FName(TEXT("OnScreenInitialized"));
	void USBZMainMenuWeaponModifierScreen::OnScreenInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponModifierScreen_OnScreenInitialized),NULL);
	}
	static FName NAME_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped = FName(TEXT("OnWeaponPartButtonEquipped"));
	void USBZMainMenuWeaponModifierScreen::OnWeaponPartButtonEquipped(const USBZMainMenuWeaponPartProgressionButton* EquippedButton)
	{
		SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonEquipped_Parms Parms;
		Parms.EquippedButton=EquippedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected = FName(TEXT("OnWeaponPartButtonSelected"));
	void USBZMainMenuWeaponModifierScreen::OnWeaponPartButtonSelected(const USBZMainMenuWeaponPartProgressionButton* SelectedButton)
	{
		SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponModifierScreen_SetDefaultFocus = FName(TEXT("SetDefaultFocus"));
	void USBZMainMenuWeaponModifierScreen::SetDefaultFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponModifierScreen_SetDefaultFocus),NULL);
	}
	void USBZMainMenuWeaponModifierScreen::StaticRegisterNativesUSBZMainMenuWeaponModifierScreen()
	{
		UClass* Class = USBZMainMenuWeaponModifierScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlockedSlotNamesForWeaponPart", &USBZMainMenuWeaponModifierScreen::execGetBlockedSlotNamesForWeaponPart },
			{ "GetCurrentWeaponPartSlot", &USBZMainMenuWeaponModifierScreen::execGetCurrentWeaponPartSlot },
			{ "GetWeaponSlotInfo", &USBZMainMenuWeaponModifierScreen::execGetWeaponSlotInfo },
			{ "InitializeWeaponPartCustomization", &USBZMainMenuWeaponModifierScreen::execInitializeWeaponPartCustomization },
			{ "OnPayForAttachItemDone", &USBZMainMenuWeaponModifierScreen::execOnPayForAttachItemDone },
			{ "OnPurchaseItemPopUpClosed", &USBZMainMenuWeaponModifierScreen::execOnPurchaseItemPopUpClosed },
			{ "OnWeaponPartProgressionButtonFocusedChanged", &USBZMainMenuWeaponModifierScreen::execOnWeaponPartProgressionButtonFocusedChanged },
			{ "OnWeaponPartProgressionButtonSelected", &USBZMainMenuWeaponModifierScreen::execOnWeaponPartProgressionButtonSelected },
			{ "SendPurchaseAttemptEvent", &USBZMainMenuWeaponModifierScreen::execSendPurchaseAttemptEvent },
			{ "SetNewEquippedButton", &USBZMainMenuWeaponModifierScreen::execSetNewEquippedButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventGetBlockedSlotNamesForWeaponPart_Parms
		{
			const USBZWeaponPartDataAsset* WeaponPartDataAsset;
			TArray<FText> OutSlotNames;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPartDataAsset;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutSlotNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSlotNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_WeaponPartDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_WeaponPartDataAsset = { "WeaponPartDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventGetBlockedSlotNamesForWeaponPart_Parms, WeaponPartDataAsset), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_WeaponPartDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_WeaponPartDataAsset_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_OutSlotNames_Inner = { "OutSlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_OutSlotNames = { "OutSlotNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventGetBlockedSlotNamesForWeaponPart_Parms, OutSlotNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_WeaponPartDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_OutSlotNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::NewProp_OutSlotNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "GetBlockedSlotNamesForWeaponPart", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventGetBlockedSlotNamesForWeaponPart_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventGetCurrentWeaponPartSlot_Parms
		{
			const USBZWeaponPartSlot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventGetCurrentWeaponPartSlot_Parms, ReturnValue), Z_Construct_UClass_USBZWeaponPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "GetCurrentWeaponPartSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventGetCurrentWeaponPartSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventGetWeaponSlotInfo_Parms
		{
			ESBZEquippableLoadoutSlot OutEquippableSlot;
			int32 OutWeaponSlotIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutWeaponSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::NewProp_OutEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::NewProp_OutEquippableSlot = { "OutEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventGetWeaponSlotInfo_Parms, OutEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::NewProp_OutWeaponSlotIndex = { "OutWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventGetWeaponSlotInfo_Parms, OutWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::NewProp_OutEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::NewProp_OutEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::NewProp_OutWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "GetWeaponSlotInfo", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventGetWeaponSlotInfo_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventInitializeWeaponPartCustomization_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventInitializeWeaponPartCustomization_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventInitializeWeaponPartCustomization_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InWeaponPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InWeaponPartSlot = { "InWeaponPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventInitializeWeaponPartCustomization_Parms, InWeaponPartSlot), Z_Construct_UClass_USBZWeaponPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InWeaponPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InWeaponPartSlot_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponModifierScreen_eventInitializeWeaponPartCustomization_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponModifierScreen_eventInitializeWeaponPartCustomization_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_InWeaponPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "InitializeWeaponPartCustomization", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventInitializeWeaponPartCustomization_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFocusedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFocusedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::NewProp_NewFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::NewProp_NewFocusedButton = { "NewFocusedButton", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventNewWeaponPartFocused_Parms, NewFocusedButton), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::NewProp_NewFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::NewProp_NewFocusedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::NewProp_NewFocusedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "NewWeaponPartFocused", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventNewWeaponPartFocused_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventOnPayForAttachItemDone_Parms
		{
			ESBZMetaRequestResult BuyWeaponResult;
			FGuid ItemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuyWeaponResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuyWeaponResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BuyWeaponResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_BuyWeaponResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_BuyWeaponResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_BuyWeaponResult = { "BuyWeaponResult", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventOnPayForAttachItemDone_Parms, BuyWeaponResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_BuyWeaponResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_BuyWeaponResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventOnPayForAttachItemDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_BuyWeaponResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_BuyWeaponResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "OnPayForAttachItemDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventOnPayForAttachItemDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventOnPurchaseItemPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventOnPurchaseItemPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "OnPurchaseItemPopUpClosed", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventOnPurchaseItemPopUpClosed_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "OnScreenInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::NewProp_EquippedButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::NewProp_EquippedButton = { "EquippedButton", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonEquipped_Parms, EquippedButton), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::NewProp_EquippedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::NewProp_EquippedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::NewProp_EquippedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "OnWeaponPartButtonEquipped", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonEquipped_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "OnWeaponPartButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms
		{
			USBZMenuButton* InButton;
			bool bIsFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "OnWeaponPartProgressionButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "OnWeaponPartProgressionButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventOnWeaponPartProgressionButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventSendPurchaseAttemptEvent_Parms
		{
			bool bIsAcceptPressed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAcceptPressed_MetaData[];
#endif
		static void NewProp_bIsAcceptPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAcceptPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponModifierScreen_eventSendPurchaseAttemptEvent_Parms*)Obj)->bIsAcceptPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed = { "bIsAcceptPressed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponModifierScreen_eventSendPurchaseAttemptEvent_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::NewProp_bIsAcceptPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "SendPurchaseAttemptEvent", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventSendPurchaseAttemptEvent_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "SetDefaultFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics
	{
		struct SBZMainMenuWeaponModifierScreen_eventSetNewEquippedButton_Parms
		{
			USBZMainMenuWeaponPartProgressionButton* InEquippedWeaponProgressionButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquippedWeaponProgressionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InEquippedWeaponProgressionButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::NewProp_InEquippedWeaponProgressionButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::NewProp_InEquippedWeaponProgressionButton = { "InEquippedWeaponProgressionButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponModifierScreen_eventSetNewEquippedButton_Parms, InEquippedWeaponProgressionButton), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::NewProp_InEquippedWeaponProgressionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::NewProp_InEquippedWeaponProgressionButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::NewProp_InEquippedWeaponProgressionButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, nullptr, "SetNewEquippedButton", nullptr, nullptr, sizeof(SBZMainMenuWeaponModifierScreen_eventSetNewEquippedButton_Parms), Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_NoRegister()
	{
		return USBZMainMenuWeaponModifierScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_WeaponProgressionPartButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_WeaponProgressionPartButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponPartProgressionButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeaponProgressionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeaponProgressionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_TransactionInProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_TransactionInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OkControlReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OkControlReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PurchaseItemPopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PurchaseItemPopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseItemPopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemPopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseItemPopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPartSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPartProgressionButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponPartProgressionButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartInPurchase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPartInPurchase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWeaponProgressionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedWeaponProgressionButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetBlockedSlotNamesForWeaponPart, "GetBlockedSlotNamesForWeaponPart" }, // 3700295046
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetCurrentWeaponPartSlot, "GetCurrentWeaponPartSlot" }, // 4009509954
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_GetWeaponSlotInfo, "GetWeaponSlotInfo" }, // 3171982780
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_InitializeWeaponPartCustomization, "InitializeWeaponPartCustomization" }, // 3429653882
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_NewWeaponPartFocused, "NewWeaponPartFocused" }, // 919985956
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPayForAttachItemDone, "OnPayForAttachItemDone" }, // 74958820
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnPurchaseItemPopUpClosed, "OnPurchaseItemPopUpClosed" }, // 3353212290
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnScreenInitialized, "OnScreenInitialized" }, // 2767561377
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonEquipped, "OnWeaponPartButtonEquipped" }, // 2372672639
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartButtonSelected, "OnWeaponPartButtonSelected" }, // 2569083019
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonFocusedChanged, "OnWeaponPartProgressionButtonFocusedChanged" }, // 923027934
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_OnWeaponPartProgressionButtonSelected, "OnWeaponPartProgressionButtonSelected" }, // 1333480653
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SendPurchaseAttemptEvent, "SendPurchaseAttemptEvent" }, // 384551723
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetDefaultFocus, "SetDefaultFocus" }, // 2619185860
		{ &Z_Construct_UFunction_USBZMainMenuWeaponModifierScreen_SetNewEquippedButton, "SetNewEquippedButton" }, // 4267216778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponModifierScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons = { "Panel_WeaponProgressionPartButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, Panel_WeaponProgressionPartButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonClass = { "WeaponPartProgressionButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartProgressionButtonClass), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippedWeaponProgressionButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippedWeaponProgressionButton = { "EquippedWeaponProgressionButton", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, EquippedWeaponProgressionButton), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippedWeaponProgressionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippedWeaponProgressionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_TransactionInProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_TransactionInProgress = { "Panel_TransactionInProgress", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, Panel_TransactionInProgress), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_TransactionInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_TransactionInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_OkControlReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_OkControlReference = { "OkControlReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, OkControlReference), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_OkControlReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_OkControlReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass = { "PurchaseItemPopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpBodyWidgetClass), Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpHeader = { "PurchaseItemPopUpHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpAcceptAction = { "PurchaseItemPopUpAcceptAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpCancelAction = { "PurchaseItemPopUpCancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartSlot = { "WeaponPartSlot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartSlot), Z_Construct_UClass_USBZWeaponPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponSlotIndex = { "WeaponSlotIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner = { "WeaponPartProgressionButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool = { "WeaponPartProgressionButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartProgressionButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartInPurchase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartInPurchase = { "WeaponPartInPurchase", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartInPurchase), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartInPurchase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartInPurchase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_SelectedWeaponProgressionButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponModifierScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponModifierScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_SelectedWeaponProgressionButton = { "SelectedWeaponProgressionButton", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, SelectedWeaponProgressionButton), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_SelectedWeaponProgressionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_SelectedWeaponProgressionButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippedWeaponProgressionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_Panel_TransactionInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_OkControlReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_PurchaseItemPopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartProgressionButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_WeaponPartInPurchase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::NewProp_SelectedWeaponProgressionButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponModifierScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::ClassParams = {
		&USBZMainMenuWeaponModifierScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponModifierScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponModifierScreen, 2063602761);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponModifierScreen>()
	{
		return USBZMainMenuWeaponModifierScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponModifierScreen(Z_Construct_UClass_USBZMainMenuWeaponModifierScreen, &USBZMainMenuWeaponModifierScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponModifierScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponModifierScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
