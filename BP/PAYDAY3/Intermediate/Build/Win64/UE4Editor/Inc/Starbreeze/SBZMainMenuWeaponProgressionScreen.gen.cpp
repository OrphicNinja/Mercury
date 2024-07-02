// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponProgressionScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponProgressionScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponProgressionScreen::execDisplayWeaponProgressionScreen)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponProgressionScreen::execOnWeaponPartProgressionButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponPartProgressionButtonFocusedChanged(Z_Param_InButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged = FName(TEXT("FocusedWeaponPartChanged"));
	void USBZMainMenuWeaponProgressionScreen::FocusedWeaponPartChanged(const USBZWeaponPartDataAsset* FocusedWeaponPart)
	{
		SBZMainMenuWeaponProgressionScreen_eventFocusedWeaponPartChanged_Parms Parms;
		Parms.FocusedWeaponPart=FocusedWeaponPart;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged),&Parms);
	}
	void USBZMainMenuWeaponProgressionScreen::StaticRegisterNativesUSBZMainMenuWeaponProgressionScreen()
	{
		UClass* Class = USBZMainMenuWeaponProgressionScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayWeaponProgressionScreen", &USBZMainMenuWeaponProgressionScreen::execDisplayWeaponProgressionScreen },
			{ "OnWeaponPartProgressionButtonFocusedChanged", &USBZMainMenuWeaponProgressionScreen::execOnWeaponPartProgressionButtonFocusedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics
	{
		struct SBZMainMenuWeaponProgressionScreen_eventDisplayWeaponProgressionScreen_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionScreen_eventDisplayWeaponProgressionScreen_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionScreen_eventDisplayWeaponProgressionScreen_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponProgressionScreen_eventDisplayWeaponProgressionScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponProgressionScreen_eventDisplayWeaponProgressionScreen_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen, nullptr, "DisplayWeaponProgressionScreen", nullptr, nullptr, sizeof(SBZMainMenuWeaponProgressionScreen_eventDisplayWeaponProgressionScreen_Parms), Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedWeaponPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusedWeaponPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::NewProp_FocusedWeaponPart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::NewProp_FocusedWeaponPart = { "FocusedWeaponPart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionScreen_eventFocusedWeaponPartChanged_Parms, FocusedWeaponPart), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::NewProp_FocusedWeaponPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::NewProp_FocusedWeaponPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::NewProp_FocusedWeaponPart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen, nullptr, "FocusedWeaponPartChanged", nullptr, nullptr, sizeof(SBZMainMenuWeaponProgressionScreen_eventFocusedWeaponPartChanged_Parms), Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics
	{
		struct SBZMainMenuWeaponProgressionScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponProgressionScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponProgressionScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen, nullptr, "OnWeaponPartProgressionButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuWeaponProgressionScreen_eventOnWeaponPartProgressionButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_NoRegister()
	{
		return USBZMainMenuWeaponProgressionScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_WeaponProgressionDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_WeaponProgressionDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponPartProgressionButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultButtonMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultButtonMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPartProgressionButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponPartProgressionButtonPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_DisplayWeaponProgressionScreen, "DisplayWeaponProgressionScreen" }, // 1590433201
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_FocusedWeaponPartChanged, "FocusedWeaponPartChanged" }, // 3704867773
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionScreen_OnWeaponPartProgressionButtonFocusedChanged, "OnWeaponPartProgressionButtonFocusedChanged" }, // 1479257117
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponProgressionScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons = { "Panel_WeaponProgressionPartButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, Panel_WeaponProgressionPartButtons), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Widget_WeaponProgressionDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Widget_WeaponProgressionDisplay = { "Widget_WeaponProgressionDisplay", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, Widget_WeaponProgressionDisplay), Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Widget_WeaponProgressionDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Widget_WeaponProgressionDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonClass = { "WeaponPartProgressionButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, WeaponPartProgressionButtonClass), Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_DefaultButtonMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_DefaultButtonMargin = { "DefaultButtonMargin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, DefaultButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_DefaultButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_DefaultButtonMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner = { "WeaponPartProgressionButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool = { "WeaponPartProgressionButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, WeaponPartProgressionButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Panel_WeaponProgressionPartButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_Widget_WeaponProgressionDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_DefaultButtonMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::NewProp_WeaponPartProgressionButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponProgressionScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::ClassParams = {
		&USBZMainMenuWeaponProgressionScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponProgressionScreen, 4047808513);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponProgressionScreen>()
	{
		return USBZMainMenuWeaponProgressionScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponProgressionScreen(Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen, &USBZMainMenuWeaponProgressionScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponProgressionScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponProgressionScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
