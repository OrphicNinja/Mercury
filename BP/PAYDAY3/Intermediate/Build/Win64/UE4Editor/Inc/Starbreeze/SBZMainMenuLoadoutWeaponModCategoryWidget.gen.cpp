// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuLoadoutWeaponModCategoryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutModCategoryButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponModCategoryWidget::execCustomizeWeaponInSlot)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponModCategoryWidget::execGetAvailibleButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLoadoutModCategoryButton**)Z_Param__Result=P_THIS->GetAvailibleButton(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponModCategoryWidget::execOnCategoryButtonSelected)
	{
		P_GET_OBJECT(USBZModularPartSlotBase,Z_Param_ModSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCategoryButtonSelected(Z_Param_ModSlot);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused = FName(TEXT("OnCategoryButtonFocused"));
	void USBZMainMenuLoadoutWeaponModCategoryWidget::OnCategoryButtonFocused(USBZMenuButton* InButton, bool bIsFocused)
	{
		SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonFocused_Parms Parms;
		Parms.InButton=InButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused),&Parms);
	}
	void USBZMainMenuLoadoutWeaponModCategoryWidget::StaticRegisterNativesUSBZMainMenuLoadoutWeaponModCategoryWidget()
	{
		UClass* Class = USBZMainMenuLoadoutWeaponModCategoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomizeWeaponInSlot", &USBZMainMenuLoadoutWeaponModCategoryWidget::execCustomizeWeaponInSlot },
			{ "GetAvailibleButton", &USBZMainMenuLoadoutWeaponModCategoryWidget::execGetAvailibleButton },
			{ "OnCategoryButtonSelected", &USBZMainMenuLoadoutWeaponModCategoryWidget::execOnCategoryButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics
	{
		struct SBZMainMenuLoadoutWeaponModCategoryWidget_eventCustomizeWeaponInSlot_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponModCategoryWidget_eventCustomizeWeaponInSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponModCategoryWidget_eventCustomizeWeaponInSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuLoadoutWeaponModCategoryWidget_eventCustomizeWeaponInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuLoadoutWeaponModCategoryWidget_eventCustomizeWeaponInSlot_Parms), &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget, nullptr, "CustomizeWeaponInSlot", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponModCategoryWidget_eventCustomizeWeaponInSlot_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics
	{
		struct SBZMainMenuLoadoutWeaponModCategoryWidget_eventGetAvailibleButton_Parms
		{
			int32 Index;
			USBZLoadoutModCategoryButton* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponModCategoryWidget_eventGetAvailibleButton_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponModCategoryWidget_eventGetAvailibleButton_Parms, ReturnValue), Z_Construct_UClass_USBZLoadoutModCategoryButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget, nullptr, "GetAvailibleButton", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponModCategoryWidget_eventGetAvailibleButton_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonFocused_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonFocused_Parms), &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget, nullptr, "OnCategoryButtonFocused", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonFocused_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics
	{
		struct SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonSelected_Parms
		{
			const USBZModularPartSlotBase* ModSlot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::NewProp_ModSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::NewProp_ModSlot = { "ModSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonSelected_Parms, ModSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::NewProp_ModSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::NewProp_ModSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::NewProp_ModSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget, nullptr, "OnCategoryButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_NoRegister()
	{
		return USBZMainMenuLoadoutWeaponModCategoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPoolAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectPoolAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryParentPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategoryParentPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_CustomizeWeaponInSlot, "CustomizeWeaponInSlot" }, // 277994750
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_GetAvailibleButton, "GetAvailibleButton" }, // 563221335
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonFocused, "OnCategoryButtonFocused" }, // 1225714111
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponModCategoryWidget_OnCategoryButtonSelected, "OnCategoryButtonSelected" }, // 4196979549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponModCategoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ButtonClass = { "ButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, ButtonClass), Z_Construct_UClass_USBZLoadoutModCategoryButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ObjectPoolAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponModCategoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ObjectPoolAmount = { "ObjectPoolAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, ObjectPoolAmount), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ObjectPoolAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ObjectPoolAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_CategoryParentPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponModCategoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_CategoryParentPanel = { "CategoryParentPanel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, CategoryParentPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_CategoryParentPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_CategoryParentPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponModCategoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableConfig = { "EquippableConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, EquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponModCategoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_WeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponModCategoryWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponModCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_WeaponSlotIndex = { "WeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, WeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_WeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_WeaponSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_ObjectPoolAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_CategoryParentPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::NewProp_WeaponSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuLoadoutWeaponModCategoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::ClassParams = {
		&USBZMainMenuLoadoutWeaponModCategoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuLoadoutWeaponModCategoryWidget, 47486162);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuLoadoutWeaponModCategoryWidget>()
	{
		return USBZMainMenuLoadoutWeaponModCategoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget(Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget, &USBZMainMenuLoadoutWeaponModCategoryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuLoadoutWeaponModCategoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuLoadoutWeaponModCategoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
