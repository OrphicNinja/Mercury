// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuLoadoutDisplayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuLoadoutDisplayWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnWeaponButtonSelected__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnItemButtonSelected__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execNativeOnItemArmourButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButtonSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnItemArmourButtonSelected(Z_Param_InButtonSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execNativeOnItemPlaceableButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButtonSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnItemPlaceableButtonSelected(Z_Param_InButtonSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execNativeOnItemThrowableButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButtonSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnItemThrowableButtonSelected(Z_Param_InButtonSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execNativeOnItemToolButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButtonSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnItemToolButtonSelected(Z_Param_InButtonSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execNativeOnOverkillWeaponButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButtonSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnOverkillWeaponButtonSelected(Z_Param_InButtonSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execNativeOnWeaponButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButtonSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnWeaponButtonSelected(Z_Param_InButtonSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execOnLocalLoadoutChanged)
	{
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_InPlayerLoadout);
		P_GET_PROPERTY(FIntProperty,Z_Param_ModifiedPlayerLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocalLoadoutChanged(Z_Param_Out_InPlayerLoadout,Z_Param_ModifiedPlayerLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execUpdateLoadoutConfig)
	{
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_PlayerLoadoutConfig);
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLoadoutConfig(Z_Param_Out_PlayerLoadoutConfig,Z_Param_InLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutDisplayWidget::execUpdateLoadoutConfigFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLoadoutConfigFromIndex(Z_Param_InLoadoutIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated = FName(TEXT("OnNewConfigUpdated"));
	void USBZMainMenuLoadoutDisplayWidget::OnNewConfigUpdated(FSBZPlayerLoadoutConfig const& PlayerLoadoutConfig)
	{
		SBZMainMenuLoadoutDisplayWidget_eventOnNewConfigUpdated_Parms Parms;
		Parms.PlayerLoadoutConfig=PlayerLoadoutConfig;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated),&Parms);
	}
	void USBZMainMenuLoadoutDisplayWidget::StaticRegisterNativesUSBZMainMenuLoadoutDisplayWidget()
	{
		UClass* Class = USBZMainMenuLoadoutDisplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnItemArmourButtonSelected", &USBZMainMenuLoadoutDisplayWidget::execNativeOnItemArmourButtonSelected },
			{ "NativeOnItemPlaceableButtonSelected", &USBZMainMenuLoadoutDisplayWidget::execNativeOnItemPlaceableButtonSelected },
			{ "NativeOnItemThrowableButtonSelected", &USBZMainMenuLoadoutDisplayWidget::execNativeOnItemThrowableButtonSelected },
			{ "NativeOnItemToolButtonSelected", &USBZMainMenuLoadoutDisplayWidget::execNativeOnItemToolButtonSelected },
			{ "NativeOnOverkillWeaponButtonSelected", &USBZMainMenuLoadoutDisplayWidget::execNativeOnOverkillWeaponButtonSelected },
			{ "NativeOnWeaponButtonSelected", &USBZMainMenuLoadoutDisplayWidget::execNativeOnWeaponButtonSelected },
			{ "OnLocalLoadoutChanged", &USBZMainMenuLoadoutDisplayWidget::execOnLocalLoadoutChanged },
			{ "UpdateLoadoutConfig", &USBZMainMenuLoadoutDisplayWidget::execUpdateLoadoutConfig },
			{ "UpdateLoadoutConfigFromIndex", &USBZMainMenuLoadoutDisplayWidget::execUpdateLoadoutConfigFromIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemArmourButtonSelected_Parms
		{
			USBZMenuButton* InButtonSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::NewProp_InButtonSelected_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::NewProp_InButtonSelected = { "InButtonSelected", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemArmourButtonSelected_Parms, InButtonSelected), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::NewProp_InButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::NewProp_InButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::NewProp_InButtonSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "NativeOnItemArmourButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemArmourButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemPlaceableButtonSelected_Parms
		{
			USBZMenuButton* InButtonSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::NewProp_InButtonSelected_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::NewProp_InButtonSelected = { "InButtonSelected", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemPlaceableButtonSelected_Parms, InButtonSelected), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::NewProp_InButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::NewProp_InButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::NewProp_InButtonSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "NativeOnItemPlaceableButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemPlaceableButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemThrowableButtonSelected_Parms
		{
			USBZMenuButton* InButtonSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::NewProp_InButtonSelected_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::NewProp_InButtonSelected = { "InButtonSelected", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemThrowableButtonSelected_Parms, InButtonSelected), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::NewProp_InButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::NewProp_InButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::NewProp_InButtonSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "NativeOnItemThrowableButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemThrowableButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemToolButtonSelected_Parms
		{
			USBZMenuButton* InButtonSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::NewProp_InButtonSelected_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::NewProp_InButtonSelected = { "InButtonSelected", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemToolButtonSelected_Parms, InButtonSelected), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::NewProp_InButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::NewProp_InButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::NewProp_InButtonSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "NativeOnItemToolButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventNativeOnItemToolButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventNativeOnOverkillWeaponButtonSelected_Parms
		{
			USBZMenuButton* InButtonSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::NewProp_InButtonSelected_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::NewProp_InButtonSelected = { "InButtonSelected", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventNativeOnOverkillWeaponButtonSelected_Parms, InButtonSelected), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::NewProp_InButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::NewProp_InButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::NewProp_InButtonSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "NativeOnOverkillWeaponButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventNativeOnOverkillWeaponButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventNativeOnWeaponButtonSelected_Parms
		{
			USBZMenuButton* InButtonSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::NewProp_InButtonSelected_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::NewProp_InButtonSelected = { "InButtonSelected", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventNativeOnWeaponButtonSelected_Parms, InButtonSelected), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::NewProp_InButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::NewProp_InButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::NewProp_InButtonSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "NativeOnWeaponButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventNativeOnWeaponButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventOnLocalLoadoutChanged_Parms
		{
			FSBZPlayerLoadoutConfig InPlayerLoadout;
			int32 ModifiedPlayerLoadoutIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerLoadout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModifiedPlayerLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::NewProp_InPlayerLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::NewProp_InPlayerLoadout = { "InPlayerLoadout", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventOnLocalLoadoutChanged_Parms, InPlayerLoadout), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::NewProp_InPlayerLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::NewProp_InPlayerLoadout_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::NewProp_ModifiedPlayerLoadoutIndex = { "ModifiedPlayerLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventOnLocalLoadoutChanged_Parms, ModifiedPlayerLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::NewProp_InPlayerLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::NewProp_ModifiedPlayerLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "OnLocalLoadoutChanged", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventOnLocalLoadoutChanged_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLoadoutConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::NewProp_PlayerLoadoutConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventOnNewConfigUpdated_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::NewProp_PlayerLoadoutConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::NewProp_PlayerLoadoutConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::NewProp_PlayerLoadoutConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "OnNewConfigUpdated", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventOnNewConfigUpdated_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventUpdateLoadoutConfig_Parms
		{
			FSBZPlayerLoadoutConfig PlayerLoadoutConfig;
			int32 InLoadoutIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLoadoutConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::NewProp_PlayerLoadoutConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventUpdateLoadoutConfig_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::NewProp_PlayerLoadoutConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::NewProp_PlayerLoadoutConfig_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventUpdateLoadoutConfig_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::NewProp_PlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::NewProp_InLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "UpdateLoadoutConfig", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventUpdateLoadoutConfig_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics
	{
		struct SBZMainMenuLoadoutDisplayWidget_eventUpdateLoadoutConfigFromIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutDisplayWidget_eventUpdateLoadoutConfigFromIndex_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::NewProp_InLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, nullptr, "UpdateLoadoutConfigFromIndex", nullptr, nullptr, sizeof(SBZMainMenuLoadoutDisplayWidget_eventUpdateLoadoutConfigFromIndex_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_NoRegister()
	{
		return USBZMainMenuLoadoutDisplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_PrimaryWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_PrimaryWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_SecondaryWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_SecondaryWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_OverkillWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_OverkillWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Armour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Armour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Throwable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Throwable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Tool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Tool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Placeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Placeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_WeaponButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OverkillWeaponButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmourButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ArmourButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ThrowableButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ToolButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaceableButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemArmourButtonSelected, "NativeOnItemArmourButtonSelected" }, // 1353810829
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemPlaceableButtonSelected, "NativeOnItemPlaceableButtonSelected" }, // 1633247929
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemThrowableButtonSelected, "NativeOnItemThrowableButtonSelected" }, // 2569902332
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnItemToolButtonSelected, "NativeOnItemToolButtonSelected" }, // 2424325070
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnOverkillWeaponButtonSelected, "NativeOnOverkillWeaponButtonSelected" }, // 3119716013
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_NativeOnWeaponButtonSelected, "NativeOnWeaponButtonSelected" }, // 328860520
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnLocalLoadoutChanged, "OnLocalLoadoutChanged" }, // 1207201387
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_OnNewConfigUpdated, "OnNewConfigUpdated" }, // 2742651274
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfig, "UpdateLoadoutConfig" }, // 2532776546
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutDisplayWidget_UpdateLoadoutConfigFromIndex, "UpdateLoadoutConfigFromIndex" }, // 1155487334
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuLoadoutDisplayWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_PrimaryWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_PrimaryWeapon = { "Button_PrimaryWeapon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_PrimaryWeapon), Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_PrimaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_PrimaryWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_SecondaryWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_SecondaryWeapon = { "Button_SecondaryWeapon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_SecondaryWeapon), Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_SecondaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_SecondaryWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_OverkillWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_OverkillWeapon = { "Button_OverkillWeapon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_OverkillWeapon), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_OverkillWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_OverkillWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Armour_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Armour = { "Button_Armour", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Armour), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Armour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Armour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Throwable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Throwable = { "Button_Throwable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Throwable), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Throwable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Throwable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Tool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Tool = { "Button_Tool", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Tool), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Tool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Tool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Placeable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Placeable = { "Button_Placeable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Placeable), Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Placeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Placeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_WeaponButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_WeaponButtonSelected = { "WeaponButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, WeaponButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnWeaponButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_WeaponButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_WeaponButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_OverkillWeaponButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_OverkillWeaponButtonSelected = { "OverkillWeaponButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, OverkillWeaponButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnItemButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_OverkillWeaponButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_OverkillWeaponButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ArmourButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ArmourButtonSelected = { "ArmourButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, ArmourButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnItemButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ArmourButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ArmourButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ThrowableButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ThrowableButtonSelected = { "ThrowableButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, ThrowableButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnItemButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ThrowableButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ThrowableButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ToolButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ToolButtonSelected = { "ToolButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, ToolButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnItemButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ToolButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ToolButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_PlaceableButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_PlaceableButtonSelected = { "PlaceableButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, PlaceableButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnItemButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_PlaceableButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_PlaceableButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_PrimaryWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_SecondaryWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_OverkillWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Armour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Throwable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Tool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_Button_Placeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_WeaponButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_OverkillWeaponButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ArmourButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ThrowableButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_ToolButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::NewProp_PlaceableButtonSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuLoadoutDisplayWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::ClassParams = {
		&USBZMainMenuLoadoutDisplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuLoadoutDisplayWidget, 302408022);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuLoadoutDisplayWidget>()
	{
		return USBZMainMenuLoadoutDisplayWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuLoadoutDisplayWidget(Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget, &USBZMainMenuLoadoutDisplayWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuLoadoutDisplayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuLoadoutDisplayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
