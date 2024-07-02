// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCrimeNet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCrimeNet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execDecrementHeistCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementHeistCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execIncrementHeistCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementHeistCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execNativeOnHeistButtonFocused)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InFocusedButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnHeistButtonFocused(Z_Param_InFocusedButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execNativeOnHeistButtonHovered)
	{
		P_GET_OBJECT(USBZMainMenuCrimeNetHeistMapIcon,Z_Param_MapIcon);
		P_GET_UBOOL(Z_Param_bIsHovered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnHeistButtonHovered(Z_Param_MapIcon,Z_Param_bIsHovered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execNativeOnHeistButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnHeistButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execNativeOnHeistMapIconClicked)
	{
		P_GET_OBJECT(USBZMainMenuCrimeNetHeistMapIcon,Z_Param_InSelectedHeistMapIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnHeistMapIconClicked(Z_Param_InSelectedHeistMapIcon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execOnHeistButtonNavigation)
	{
		P_GET_ENUM(EUINavigation,Z_Param_ButtonNavigation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistButtonNavigation(EUINavigation(Z_Param_ButtonNavigation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execRefreshCollections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshCollections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execSetActiveHeistCollection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveHeistCollection(Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execToggleStoryModeFilter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleStoryModeFilter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNet::execUpdateHeistCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHeistCollection();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCrimeNet_OnHeistButtonFocused = FName(TEXT("OnHeistButtonFocused"));
	void USBZMainMenuCrimeNet::OnHeistButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused)
	{
		SBZMainMenuCrimeNet_eventOnHeistButtonFocused_Parms Parms;
		Parms.MenuButton=MenuButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNet_OnHeistButtonFocused),&Parms);
	}
	static FName NAME_USBZMainMenuCrimeNet_OnHeistButtonSelected = FName(TEXT("OnHeistButtonSelected"));
	void USBZMainMenuCrimeNet::OnHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton)
	{
		SBZMainMenuCrimeNet_eventOnHeistButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNet_OnHeistButtonSelected),&Parms);
	}
	static FName NAME_USBZMainMenuCrimeNet_OnHeistCollectionChanged = FName(TEXT("OnHeistCollectionChanged"));
	void USBZMainMenuCrimeNet::OnHeistCollectionChanged(FSBZHeistCollectionWithOwnership const& ActiveHeistCollection)
	{
		SBZMainMenuCrimeNet_eventOnHeistCollectionChanged_Parms Parms;
		Parms.ActiveHeistCollection=ActiveHeistCollection;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNet_OnHeistCollectionChanged),&Parms);
	}
	void USBZMainMenuCrimeNet::StaticRegisterNativesUSBZMainMenuCrimeNet()
	{
		UClass* Class = USBZMainMenuCrimeNet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecrementHeistCollection", &USBZMainMenuCrimeNet::execDecrementHeistCollection },
			{ "IncrementHeistCollection", &USBZMainMenuCrimeNet::execIncrementHeistCollection },
			{ "NativeOnHeistButtonFocused", &USBZMainMenuCrimeNet::execNativeOnHeistButtonFocused },
			{ "NativeOnHeistButtonHovered", &USBZMainMenuCrimeNet::execNativeOnHeistButtonHovered },
			{ "NativeOnHeistButtonSelected", &USBZMainMenuCrimeNet::execNativeOnHeistButtonSelected },
			{ "NativeOnHeistMapIconClicked", &USBZMainMenuCrimeNet::execNativeOnHeistMapIconClicked },
			{ "OnHeistButtonNavigation", &USBZMainMenuCrimeNet::execOnHeistButtonNavigation },
			{ "RefreshCollections", &USBZMainMenuCrimeNet::execRefreshCollections },
			{ "SetActiveHeistCollection", &USBZMainMenuCrimeNet::execSetActiveHeistCollection },
			{ "ToggleStoryModeFilter", &USBZMainMenuCrimeNet::execToggleStoryModeFilter },
			{ "UpdateHeistCollection", &USBZMainMenuCrimeNet::execUpdateHeistCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "DecrementHeistCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "IncrementHeistCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics
	{
		struct SBZMainMenuCrimeNet_eventNativeOnHeistButtonFocused_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventNativeOnHeistButtonFocused_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNet_eventNativeOnHeistButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNet_eventNativeOnHeistButtonFocused_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "NativeOnHeistButtonFocused", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventNativeOnHeistButtonFocused_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics
	{
		struct SBZMainMenuCrimeNet_eventNativeOnHeistButtonHovered_Parms
		{
			USBZMainMenuCrimeNetHeistMapIcon* MapIcon;
			bool bIsHovered;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
		static void NewProp_bIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventNativeOnHeistButtonHovered_Parms, MapIcon), Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_MapIcon_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_bIsHovered_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNet_eventNativeOnHeistButtonHovered_Parms*)Obj)->bIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_bIsHovered = { "bIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNet_eventNativeOnHeistButtonHovered_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_MapIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::NewProp_bIsHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "NativeOnHeistButtonHovered", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventNativeOnHeistButtonHovered_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics
	{
		struct SBZMainMenuCrimeNet_eventNativeOnHeistButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventNativeOnHeistButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "NativeOnHeistButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventNativeOnHeistButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics
	{
		struct SBZMainMenuCrimeNet_eventNativeOnHeistMapIconClicked_Parms
		{
			USBZMainMenuCrimeNetHeistMapIcon* InSelectedHeistMapIcon;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedHeistMapIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSelectedHeistMapIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::NewProp_InSelectedHeistMapIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::NewProp_InSelectedHeistMapIcon = { "InSelectedHeistMapIcon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventNativeOnHeistMapIconClicked_Parms, InSelectedHeistMapIcon), Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::NewProp_InSelectedHeistMapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::NewProp_InSelectedHeistMapIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::NewProp_InSelectedHeistMapIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "NativeOnHeistMapIconClicked", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventNativeOnHeistMapIconClicked_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_MenuButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventOnHeistButtonFocused_Parms, MenuButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_MenuButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNet_eventOnHeistButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNet_eventOnHeistButtonFocused_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "OnHeistButtonFocused", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventOnHeistButtonFocused_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics
	{
		struct SBZMainMenuCrimeNet_eventOnHeistButtonNavigation_Parms
		{
			EUINavigation ButtonNavigation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonNavigation_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonNavigation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::NewProp_ButtonNavigation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::NewProp_ButtonNavigation = { "ButtonNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventOnHeistButtonNavigation_Parms, ButtonNavigation), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::NewProp_ButtonNavigation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::NewProp_ButtonNavigation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "OnHeistButtonNavigation", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventOnHeistButtonNavigation_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventOnHeistButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "OnHeistButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventOnHeistButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveHeistCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveHeistCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::NewProp_ActiveHeistCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::NewProp_ActiveHeistCollection = { "ActiveHeistCollection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventOnHeistCollectionChanged_Parms, ActiveHeistCollection), Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::NewProp_ActiveHeistCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::NewProp_ActiveHeistCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::NewProp_ActiveHeistCollection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "OnHeistCollectionChanged", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventOnHeistCollectionChanged_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "RefreshCollections", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics
	{
		struct SBZMainMenuCrimeNet_eventSetActiveHeistCollection_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNet_eventSetActiveHeistCollection_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "SetActiveHeistCollection", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventSetActiveHeistCollection_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics
	{
		struct SBZMainMenuCrimeNet_eventToggleStoryModeFilter_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNet_eventToggleStoryModeFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNet_eventToggleStoryModeFilter_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "ToggleStoryModeFilter", nullptr, nullptr, sizeof(SBZMainMenuCrimeNet_eventToggleStoryModeFilter_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNet, nullptr, "UpdateHeistCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNet_NoRegister()
	{
		return USBZMainMenuCrimeNet::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCrimeNet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HeistButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryModeButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StoryModeButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_HeistButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_HeistButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistButtonPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistMapIconClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HeistMapIconClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_HeistMapIcons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel_HeistMapIcons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedHeistButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedHeistButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveHeistButtons_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveHeistButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveHeistButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveHeistButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveHeistCollectionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveHeistCollectionIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeistCollections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeistButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistMapIconsPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistMapIconsPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistMapIconsPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeistMapIconsPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryModeButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoryModeButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryModeButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StoryModeButtonPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_DecrementHeistCollection, "DecrementHeistCollection" }, // 3481183428
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_IncrementHeistCollection, "IncrementHeistCollection" }, // 3299304030
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonFocused, "NativeOnHeistButtonFocused" }, // 502825826
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonHovered, "NativeOnHeistButtonHovered" }, // 3008186747
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistButtonSelected, "NativeOnHeistButtonSelected" }, // 2128471267
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_NativeOnHeistMapIconClicked, "NativeOnHeistMapIconClicked" }, // 3245019957
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonFocused, "OnHeistButtonFocused" }, // 3301316587
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonNavigation, "OnHeistButtonNavigation" }, // 104110770
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistButtonSelected, "OnHeistButtonSelected" }, // 1374033757
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_OnHeistCollectionChanged, "OnHeistCollectionChanged" }, // 206262516
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_RefreshCollections, "RefreshCollections" }, // 4140622830
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_SetActiveHeistCollection, "SetActiveHeistCollection" }, // 1055110099
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_ToggleStoryModeFilter, "ToggleStoryModeFilter" }, // 215103440
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNet_UpdateHeistCollection, "UpdateHeistCollection" }, // 1472813307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCrimeNet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonClass = { "HeistButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistButtonClass), Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonClass = { "StoryModeButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, StoryModeButtonClass), Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HorizontalBox_HeistButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HorizontalBox_HeistButtons = { "HorizontalBox_HeistButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, HorizontalBox_HeistButtons), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HorizontalBox_HeistButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HorizontalBox_HeistButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPadding = { "HeistButtonPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconClass = { "HeistMapIconClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistMapIconClass), Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_CanvasPanel_HeistMapIcons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_CanvasPanel_HeistMapIcons = { "CanvasPanel_HeistMapIcons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, CanvasPanel_HeistMapIcons), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_CanvasPanel_HeistMapIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_CanvasPanel_HeistMapIcons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_SelectedHeistButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_SelectedHeistButton = { "SelectedHeistButton", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, SelectedHeistButton), Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_SelectedHeistButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_SelectedHeistButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_Inner = { "ActiveHeistButtons", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons = { "ActiveHeistButtons", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, ActiveHeistButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistCollectionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistCollectionIndex = { "ActiveHeistCollectionIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, ActiveHeistCollectionIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistCollectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistCollectionIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistCollections_Inner = { "HeistCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistCollections = { "HeistCollections", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistCollections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_Inner = { "HeistButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool = { "HeistButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_Inner = { "HeistMapIconsPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool = { "HeistMapIconsPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistMapIconsPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_Inner = { "StoryModeButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool = { "StoryModeButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNet, StoryModeButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HorizontalBox_HeistButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_CanvasPanel_HeistMapIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_SelectedHeistButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_ActiveHeistCollectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_HeistMapIconsPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::NewProp_StoryModeButtonPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCrimeNet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::ClassParams = {
		&USBZMainMenuCrimeNet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCrimeNet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCrimeNet, 25406994);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCrimeNet>()
	{
		return USBZMainMenuCrimeNet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCrimeNet(Z_Construct_UClass_USBZMainMenuCrimeNet, &USBZMainMenuCrimeNet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCrimeNet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCrimeNet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
