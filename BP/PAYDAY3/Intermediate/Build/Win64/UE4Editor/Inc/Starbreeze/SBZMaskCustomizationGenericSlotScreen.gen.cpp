// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskCustomizationGenericSlotScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskCustomizationGenericSlotScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMaskCustomizationGenericSlotScreen::execCosmeticPanelButtonSelected)
	{
		P_GET_OBJECT(USBZMainMenuCosmeticItemButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticPanelButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationGenericSlotScreen::execCosmeticPanelDefaultButtonSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticPanelDefaultButtonSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationGenericSlotScreen::execInitializePartsSlot)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_PartsSlot);
		P_GET_STRUCT(FSBZCosmeticPanelDefaultParams,Z_Param_DefaultButtonParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializePartsSlot(Z_Param_PartsSlot,Z_Param_DefaultButtonParams);
		P_NATIVE_END;
	}
	void USBZMaskCustomizationGenericSlotScreen::StaticRegisterNativesUSBZMaskCustomizationGenericSlotScreen()
	{
		UClass* Class = USBZMaskCustomizationGenericSlotScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CosmeticPanelButtonSelected", &USBZMaskCustomizationGenericSlotScreen::execCosmeticPanelButtonSelected },
			{ "CosmeticPanelDefaultButtonSelected", &USBZMaskCustomizationGenericSlotScreen::execCosmeticPanelDefaultButtonSelected },
			{ "InitializePartsSlot", &USBZMaskCustomizationGenericSlotScreen::execInitializePartsSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics
	{
		struct SBZMaskCustomizationGenericSlotScreen_eventCosmeticPanelButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskCustomizationGenericSlotScreen_eventCosmeticPanelButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen, nullptr, "CosmeticPanelButtonSelected", nullptr, nullptr, sizeof(SBZMaskCustomizationGenericSlotScreen_eventCosmeticPanelButtonSelected_Parms), Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen, nullptr, "CosmeticPanelDefaultButtonSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics
	{
		struct SBZMaskCustomizationGenericSlotScreen_eventInitializePartsSlot_Parms
		{
			const USBZCosmeticsPartSlot* PartsSlot;
			FSBZCosmeticPanelDefaultParams DefaultButtonParams;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultButtonParams;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskCustomizationGenericSlotScreen_eventInitializePartsSlot_Parms, PartsSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_DefaultButtonParams = { "DefaultButtonParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskCustomizationGenericSlotScreen_eventInitializePartsSlot_Parms, DefaultButtonParams), Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMaskCustomizationGenericSlotScreen_eventInitializePartsSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMaskCustomizationGenericSlotScreen_eventInitializePartsSlot_Parms), &Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_DefaultButtonParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen, nullptr, "InitializePartsSlot", nullptr, nullptr, sizeof(SBZMaskCustomizationGenericSlotScreen_eventInitializePartsSlot_Parms), Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_NoRegister()
	{
		return USBZMaskCustomizationGenericSlotScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cosmetic_Panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cosmetic_Panel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticPartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticPartsSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSlotText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ScreenSlotText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelButtonSelected, "CosmeticPanelButtonSelected" }, // 941484927
		{ &Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_CosmeticPanelDefaultButtonSelected, "CosmeticPanelDefaultButtonSelected" }, // 2290696845
		{ &Z_Construct_UFunction_USBZMaskCustomizationGenericSlotScreen_InitializePartsSlot, "InitializePartsSlot" }, // 3616172129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskCustomizationGenericSlotScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_Cosmetic_Panel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationGenericSlotScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_Cosmetic_Panel = { "Cosmetic_Panel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationGenericSlotScreen, Cosmetic_Panel), Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_Cosmetic_Panel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_Cosmetic_Panel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_CosmeticPartsSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationGenericSlotScreen" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_CosmeticPartsSlot = { "CosmeticPartsSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationGenericSlotScreen, CosmeticPartsSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_CosmeticPartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_CosmeticPartsSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_SelectedAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationGenericSlotScreen" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_SelectedAsset = { "SelectedAsset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationGenericSlotScreen, SelectedAsset), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_SelectedAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_SelectedAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_ScreenSlotText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationGenericSlotScreen" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationGenericSlotScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_ScreenSlotText = { "ScreenSlotText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationGenericSlotScreen, ScreenSlotText), METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_ScreenSlotText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_ScreenSlotText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_Cosmetic_Panel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_CosmeticPartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_SelectedAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::NewProp_ScreenSlotText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskCustomizationGenericSlotScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::ClassParams = {
		&USBZMaskCustomizationGenericSlotScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskCustomizationGenericSlotScreen, 1553384277);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskCustomizationGenericSlotScreen>()
	{
		return USBZMaskCustomizationGenericSlotScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskCustomizationGenericSlotScreen(Z_Construct_UClass_USBZMaskCustomizationGenericSlotScreen, &USBZMaskCustomizationGenericSlotScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskCustomizationGenericSlotScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskCustomizationGenericSlotScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
