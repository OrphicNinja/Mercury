// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskCustomizationPattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskCustomizationPattern() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationPattern_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationPattern();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EBSZPatternMenuMode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMaskCustomizationPattern::execCosmeticPanelButtonSelected)
	{
		P_GET_OBJECT(USBZMainMenuCosmeticItemButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticPanelButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationPattern::execCosmeticPanelDefaultButtonSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticPanelDefaultButtonSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationPattern::execIncrementSprayCanSlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementSprayCanSlotIndex(Z_Param_InDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationPattern::execSetActiveSprayCanSlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetActiveSprayCanSlotIndex(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationPattern::execShowPatterns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPatterns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationPattern::execShowSprayCans)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSprayCans();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskCustomizationPattern::execSprayCanSelectorButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_SelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprayCanSelectorButtonSelected(Z_Param_SelectedButton);
		P_NATIVE_END;
	}
	void USBZMaskCustomizationPattern::StaticRegisterNativesUSBZMaskCustomizationPattern()
	{
		UClass* Class = USBZMaskCustomizationPattern::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CosmeticPanelButtonSelected", &USBZMaskCustomizationPattern::execCosmeticPanelButtonSelected },
			{ "CosmeticPanelDefaultButtonSelected", &USBZMaskCustomizationPattern::execCosmeticPanelDefaultButtonSelected },
			{ "IncrementSprayCanSlotIndex", &USBZMaskCustomizationPattern::execIncrementSprayCanSlotIndex },
			{ "SetActiveSprayCanSlotIndex", &USBZMaskCustomizationPattern::execSetActiveSprayCanSlotIndex },
			{ "ShowPatterns", &USBZMaskCustomizationPattern::execShowPatterns },
			{ "ShowSprayCans", &USBZMaskCustomizationPattern::execShowSprayCans },
			{ "SprayCanSelectorButtonSelected", &USBZMaskCustomizationPattern::execSprayCanSelectorButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics
	{
		struct SBZMaskCustomizationPattern_eventCosmeticPanelButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskCustomizationPattern_eventCosmeticPanelButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationPattern, nullptr, "CosmeticPanelButtonSelected", nullptr, nullptr, sizeof(SBZMaskCustomizationPattern_eventCosmeticPanelButtonSelected_Parms), Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationPattern, nullptr, "CosmeticPanelDefaultButtonSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics
	{
		struct SBZMaskCustomizationPattern_eventIncrementSprayCanSlotIndex_Parms
		{
			int32 InDelta;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::NewProp_InDelta = { "InDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskCustomizationPattern_eventIncrementSprayCanSlotIndex_Parms, InDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::NewProp_InDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationPattern, nullptr, "IncrementSprayCanSlotIndex", nullptr, nullptr, sizeof(SBZMaskCustomizationPattern_eventIncrementSprayCanSlotIndex_Parms), Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics
	{
		struct SBZMaskCustomizationPattern_eventSetActiveSprayCanSlotIndex_Parms
		{
			int32 InIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskCustomizationPattern_eventSetActiveSprayCanSlotIndex_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMaskCustomizationPattern_eventSetActiveSprayCanSlotIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMaskCustomizationPattern_eventSetActiveSprayCanSlotIndex_Parms), &Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationPattern, nullptr, "SetActiveSprayCanSlotIndex", nullptr, nullptr, sizeof(SBZMaskCustomizationPattern_eventSetActiveSprayCanSlotIndex_Parms), Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationPattern, nullptr, "ShowPatterns", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationPattern, nullptr, "ShowSprayCans", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics
	{
		struct SBZMaskCustomizationPattern_eventSprayCanSelectorButtonSelected_Parms
		{
			USBZMenuButton* SelectedButton;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskCustomizationPattern_eventSprayCanSelectorButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskCustomizationPattern, nullptr, "SprayCanSelectorButtonSelected", nullptr, nullptr, sizeof(SBZMaskCustomizationPattern_eventSprayCanSelectorButtonSelected_Parms), Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMaskCustomizationPattern_NoRegister()
	{
		return USBZMaskCustomizationPattern::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskCustomizationPattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternSlotAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatternSlotAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprayCanSlotAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprayCanSlotAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatternSprayCanSlotAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternSprayCanSlotAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatternSprayCanSlotAssets;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentMenuMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMenuMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentMenuMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSprayCans_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSprayCans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnPattern;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnSprayCanArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnSprayCanArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnSprayCanArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprayCanSelectorButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SprayCanSelectorButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprayCanSelectorButtonMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SprayCanSelectorButtonMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticPanelDefaultButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CosmeticPanelDefaultButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSprayCanSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveSprayCanSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cosmetic_Panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cosmetic_Panel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprayCanHorizontalPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprayCanHorizontalPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPatternSelectedItemButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPatternSelectedItemButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelButtonSelected, "CosmeticPanelButtonSelected" }, // 3278443345
		{ &Z_Construct_UFunction_USBZMaskCustomizationPattern_CosmeticPanelDefaultButtonSelected, "CosmeticPanelDefaultButtonSelected" }, // 2862115217
		{ &Z_Construct_UFunction_USBZMaskCustomizationPattern_IncrementSprayCanSlotIndex, "IncrementSprayCanSlotIndex" }, // 928772462
		{ &Z_Construct_UFunction_USBZMaskCustomizationPattern_SetActiveSprayCanSlotIndex, "SetActiveSprayCanSlotIndex" }, // 4177399000
		{ &Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowPatterns, "ShowPatterns" }, // 3412812315
		{ &Z_Construct_UFunction_USBZMaskCustomizationPattern_ShowSprayCans, "ShowSprayCans" }, // 2633447111
		{ &Z_Construct_UFunction_USBZMaskCustomizationPattern_SprayCanSelectorButtonSelected, "SprayCanSelectorButtonSelected" }, // 4132195872
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskCustomizationPattern.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSlotAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSlotAsset = { "PatternSlotAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, PatternSlotAsset), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSlotAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSlotAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSlotAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSlotAsset = { "SprayCanSlotAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanSlotAsset), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSlotAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSlotAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSprayCanSlotAssets_Inner = { "PatternSprayCanSlotAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSprayCanSlotAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSprayCanSlotAssets = { "PatternSprayCanSlotAssets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, PatternSprayCanSlotAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSprayCanSlotAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSprayCanSlotAssets_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentMenuMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentMenuMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentMenuMode = { "CurrentMenuMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, CurrentMenuMode), Z_Construct_UEnum_Starbreeze_EBSZPatternMenuMode, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentMenuMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentMenuMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_MaxSprayCans_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_MaxSprayCans = { "MaxSprayCans", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, MaxSprayCans), METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_MaxSprayCans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_MaxSprayCans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnPattern_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnPattern = { "ReturnPattern", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, ReturnPattern), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnPattern_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnSprayCanArray_Inner = { "ReturnSprayCanArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnSprayCanArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnSprayCanArray = { "ReturnSprayCanArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, ReturnSprayCanArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnSprayCanArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnSprayCanArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonClass = { "SprayCanSelectorButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanSelectorButtonClass), Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonMargin = { "SprayCanSelectorButtonMargin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanSelectorButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CosmeticPanelDefaultButtonText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CosmeticPanelDefaultButtonText = { "CosmeticPanelDefaultButtonText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, CosmeticPanelDefaultButtonText), METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CosmeticPanelDefaultButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CosmeticPanelDefaultButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ActiveSprayCanSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ActiveSprayCanSlotIndex = { "ActiveSprayCanSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, ActiveSprayCanSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ActiveSprayCanSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ActiveSprayCanSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_Cosmetic_Panel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_Cosmetic_Panel = { "Cosmetic_Panel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, Cosmetic_Panel), Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_Cosmetic_Panel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_Cosmetic_Panel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanHorizontalPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanHorizontalPanel = { "SprayCanHorizontalPanel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanHorizontalPanel), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanHorizontalPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanHorizontalPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentPatternSelectedItemButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskCustomizationPattern" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentPatternSelectedItemButton = { "CurrentPatternSelectedItemButton", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskCustomizationPattern, CurrentPatternSelectedItemButton), Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentPatternSelectedItemButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentPatternSelectedItemButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSlotAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSlotAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSprayCanSlotAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_PatternSprayCanSlotAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentMenuMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentMenuMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_MaxSprayCans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnSprayCanArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ReturnSprayCanArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanSelectorButtonMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CosmeticPanelDefaultButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_ActiveSprayCanSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_Cosmetic_Panel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_SprayCanHorizontalPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::NewProp_CurrentPatternSelectedItemButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskCustomizationPattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::ClassParams = {
		&USBZMaskCustomizationPattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskCustomizationPattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskCustomizationPattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskCustomizationPattern, 2662881916);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskCustomizationPattern>()
	{
		return USBZMaskCustomizationPattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskCustomizationPattern(Z_Construct_UClass_USBZMaskCustomizationPattern, &USBZMaskCustomizationPattern::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskCustomizationPattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskCustomizationPattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
