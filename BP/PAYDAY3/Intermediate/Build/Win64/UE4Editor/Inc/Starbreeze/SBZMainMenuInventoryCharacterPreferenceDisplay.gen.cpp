// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventoryCharacterPreferenceDisplay() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPreferredCharacterSlotIndexChanged__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceDisplay::execDecrementActiveIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementActiveIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceDisplay::execGetActiveIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceDisplay::execIncrementActiveIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementActiveIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceDisplay::execInitializeCharacterDisplays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCharacterDisplays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceDisplay::execIsActiveSlotEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveSlotEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceDisplay::execNativeOnPreferredCharacterSlotButtonSelected)
	{
		P_GET_OBJECT(USBZCharacterPreferenceCharacterSlotButton,Z_Param_SelectedPreferredCharacterSlotButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnPreferredCharacterSlotButtonSelected(Z_Param_SelectedPreferredCharacterSlotButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterPreferenceDisplay::execSetActiveIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewActiveIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveIndex(Z_Param_NewActiveIndex);
		P_NATIVE_END;
	}
	void USBZMainMenuInventoryCharacterPreferenceDisplay::StaticRegisterNativesUSBZMainMenuInventoryCharacterPreferenceDisplay()
	{
		UClass* Class = USBZMainMenuInventoryCharacterPreferenceDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecrementActiveIndex", &USBZMainMenuInventoryCharacterPreferenceDisplay::execDecrementActiveIndex },
			{ "GetActiveIndex", &USBZMainMenuInventoryCharacterPreferenceDisplay::execGetActiveIndex },
			{ "IncrementActiveIndex", &USBZMainMenuInventoryCharacterPreferenceDisplay::execIncrementActiveIndex },
			{ "InitializeCharacterDisplays", &USBZMainMenuInventoryCharacterPreferenceDisplay::execInitializeCharacterDisplays },
			{ "IsActiveSlotEmpty", &USBZMainMenuInventoryCharacterPreferenceDisplay::execIsActiveSlotEmpty },
			{ "NativeOnPreferredCharacterSlotButtonSelected", &USBZMainMenuInventoryCharacterPreferenceDisplay::execNativeOnPreferredCharacterSlotButtonSelected },
			{ "SetActiveIndex", &USBZMainMenuInventoryCharacterPreferenceDisplay::execSetActiveIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, nullptr, "DecrementActiveIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics
	{
		struct SBZMainMenuInventoryCharacterPreferenceDisplay_eventGetActiveIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterPreferenceDisplay_eventGetActiveIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, nullptr, "GetActiveIndex", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceDisplay_eventGetActiveIndex_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, nullptr, "IncrementActiveIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, nullptr, "InitializeCharacterDisplays", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics
	{
		struct SBZMainMenuInventoryCharacterPreferenceDisplay_eventIsActiveSlotEmpty_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryCharacterPreferenceDisplay_eventIsActiveSlotEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryCharacterPreferenceDisplay_eventIsActiveSlotEmpty_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, nullptr, "IsActiveSlotEmpty", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceDisplay_eventIsActiveSlotEmpty_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics
	{
		struct SBZMainMenuInventoryCharacterPreferenceDisplay_eventNativeOnPreferredCharacterSlotButtonSelected_Parms
		{
			USBZCharacterPreferenceCharacterSlotButton* SelectedPreferredCharacterSlotButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPreferredCharacterSlotButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedPreferredCharacterSlotButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::NewProp_SelectedPreferredCharacterSlotButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::NewProp_SelectedPreferredCharacterSlotButton = { "SelectedPreferredCharacterSlotButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterPreferenceDisplay_eventNativeOnPreferredCharacterSlotButtonSelected_Parms, SelectedPreferredCharacterSlotButton), Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::NewProp_SelectedPreferredCharacterSlotButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::NewProp_SelectedPreferredCharacterSlotButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::NewProp_SelectedPreferredCharacterSlotButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, nullptr, "NativeOnPreferredCharacterSlotButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceDisplay_eventNativeOnPreferredCharacterSlotButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics
	{
		struct SBZMainMenuInventoryCharacterPreferenceDisplay_eventSetActiveIndex_Parms
		{
			int32 NewActiveIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewActiveIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::NewProp_NewActiveIndex = { "NewActiveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterPreferenceDisplay_eventSetActiveIndex_Parms, NewActiveIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::NewProp_NewActiveIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, nullptr, "SetActiveIndex", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterPreferenceDisplay_eventSetActiveIndex_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_NoRegister()
	{
		return USBZMainMenuInventoryCharacterPreferenceDisplay::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreferredCharacterSlotIndexChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreferredCharacterSlotIndexChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_CharacterDisplays_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_CharacterDisplays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDisplayWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterDisplayWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDisplayPanelPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterDisplayPanelPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredCharacterSlotButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreferredCharacterSlotButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredCharacterSlotButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreferredCharacterSlotButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_DecrementActiveIndex, "DecrementActiveIndex" }, // 234301254
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_GetActiveIndex, "GetActiveIndex" }, // 2100716829
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IncrementActiveIndex, "IncrementActiveIndex" }, // 2479077917
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_InitializeCharacterDisplays, "InitializeCharacterDisplays" }, // 3158030752
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_IsActiveSlotEmpty, "IsActiveSlotEmpty" }, // 1091509872
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_NativeOnPreferredCharacterSlotButtonSelected, "NativeOnPreferredCharacterSlotButtonSelected" }, // 3401227170
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterPreferenceDisplay_SetActiveIndex, "SetActiveIndex" }, // 1419354092
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_OnPreferredCharacterSlotIndexChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceDisplay" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_OnPreferredCharacterSlotIndexChanged = { "OnPreferredCharacterSlotIndexChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceDisplay, OnPreferredCharacterSlotIndexChanged), Z_Construct_UDelegateFunction_Starbreeze_OnPreferredCharacterSlotIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_OnPreferredCharacterSlotIndexChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_OnPreferredCharacterSlotIndexChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_HorizontalBox_CharacterDisplays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_HorizontalBox_CharacterDisplays = { "HorizontalBox_CharacterDisplays", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceDisplay, HorizontalBox_CharacterDisplays), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_HorizontalBox_CharacterDisplays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_HorizontalBox_CharacterDisplays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceDisplay" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayWidgetClass = { "CharacterDisplayWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceDisplay, CharacterDisplayWidgetClass), Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayPanelPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceDisplay" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayPanelPadding = { "CharacterDisplayPanelPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceDisplay, CharacterDisplayPanelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayPanelPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayPanelPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_Inner = { "PreferredCharacterSlotButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool = { "PreferredCharacterSlotButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceDisplay, PreferredCharacterSlotButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_ActiveIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterPreferenceDisplay" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterPreferenceDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_ActiveIndex = { "ActiveIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceDisplay, ActiveIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_ActiveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_ActiveIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_OnPreferredCharacterSlotIndexChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_HorizontalBox_CharacterDisplays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_CharacterDisplayPanelPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_PreferredCharacterSlotButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::NewProp_ActiveIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventoryCharacterPreferenceDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::ClassParams = {
		&USBZMainMenuInventoryCharacterPreferenceDisplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventoryCharacterPreferenceDisplay, 1300074444);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventoryCharacterPreferenceDisplay>()
	{
		return USBZMainMenuInventoryCharacterPreferenceDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay(Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceDisplay, &USBZMainMenuInventoryCharacterPreferenceDisplay::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventoryCharacterPreferenceDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventoryCharacterPreferenceDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
