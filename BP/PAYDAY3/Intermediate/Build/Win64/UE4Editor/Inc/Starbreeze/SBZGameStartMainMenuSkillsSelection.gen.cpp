// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameStartMainMenuSkillsSelection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameStartMainMenuSkillsSelection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameStartMainMenuSkillsSelection::execCustomizeSkillsForPlayerLoadoutIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CustomizeSkillsForPlayerLoadoutIndex(Z_Param_InLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStartMainMenuSkillsSelection::execHandleProgressionSave)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProgressionSave(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStartMainMenuSkillsSelection::execNativeOnAlternativeSelectionPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnAlternativeSelectionPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStartMainMenuSkillsSelection::execNativeOnAlternativeSelectionReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnAlternativeSelectionReleased();
		P_NATIVE_END;
	}
	static FName NAME_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete = FName(TEXT("OnAlternativeHoldDurationComplete"));
	void USBZGameStartMainMenuSkillsSelection::OnAlternativeHoldDurationComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete),NULL);
	}
	static FName NAME_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed = FName(TEXT("OnAlternativeSelectionPressed"));
	void USBZGameStartMainMenuSkillsSelection::OnAlternativeSelectionPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed),NULL);
	}
	static FName NAME_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased = FName(TEXT("OnAlternativeSelectionReleased"));
	void USBZGameStartMainMenuSkillsSelection::OnAlternativeSelectionReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased),NULL);
	}
	static FName NAME_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged = FName(TEXT("OnDescriptionScrollAxisChanged"));
	void USBZGameStartMainMenuSkillsSelection::OnDescriptionScrollAxisChanged(float Value)
	{
		SBZGameStartMainMenuSkillsSelection_eventOnDescriptionScrollAxisChanged_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged),&Parms);
	}
	void USBZGameStartMainMenuSkillsSelection::StaticRegisterNativesUSBZGameStartMainMenuSkillsSelection()
	{
		UClass* Class = USBZGameStartMainMenuSkillsSelection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomizeSkillsForPlayerLoadoutIndex", &USBZGameStartMainMenuSkillsSelection::execCustomizeSkillsForPlayerLoadoutIndex },
			{ "HandleProgressionSave", &USBZGameStartMainMenuSkillsSelection::execHandleProgressionSave },
			{ "NativeOnAlternativeSelectionPressed", &USBZGameStartMainMenuSkillsSelection::execNativeOnAlternativeSelectionPressed },
			{ "NativeOnAlternativeSelectionReleased", &USBZGameStartMainMenuSkillsSelection::execNativeOnAlternativeSelectionReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics
	{
		struct SBZGameStartMainMenuSkillsSelection_eventCustomizeSkillsForPlayerLoadoutIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuSkillsSelection_eventCustomizeSkillsForPlayerLoadoutIndex_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStartMainMenuSkillsSelection_eventCustomizeSkillsForPlayerLoadoutIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStartMainMenuSkillsSelection_eventCustomizeSkillsForPlayerLoadoutIndex_Parms), &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::NewProp_InLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "CustomizeSkillsForPlayerLoadoutIndex", nullptr, nullptr, sizeof(SBZGameStartMainMenuSkillsSelection_eventCustomizeSkillsForPlayerLoadoutIndex_Parms), Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics
	{
		struct SBZGameStartMainMenuSkillsSelection_eventHandleProgressionSave_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuSkillsSelection_eventHandleProgressionSave_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "HandleProgressionSave", nullptr, nullptr, sizeof(SBZGameStartMainMenuSkillsSelection_eventHandleProgressionSave_Parms), Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "NativeOnAlternativeSelectionPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "NativeOnAlternativeSelectionReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "OnAlternativeHoldDurationComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "OnAlternativeSelectionPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "OnAlternativeSelectionReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuSkillsSelection_eventOnDescriptionScrollAxisChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, nullptr, "OnDescriptionScrollAxisChanged", nullptr, nullptr, sizeof(SBZGameStartMainMenuSkillsSelection_eventOnDescriptionScrollAxisChanged_Parms), Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_NoRegister()
	{
		return USBZGameStartMainMenuSkillsSelection::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeSelectionInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AlternativeSelectionInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeSelectionHoldDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlternativeSelectionHoldDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionScrollAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionScrollAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionScrollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DescriptionScrollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLoadoutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedPlayerLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_CustomizeSkillsForPlayerLoadoutIndex, "CustomizeSkillsForPlayerLoadoutIndex" }, // 3147210572
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_HandleProgressionSave, "HandleProgressionSave" }, // 563766893
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionPressed, "NativeOnAlternativeSelectionPressed" }, // 1912724422
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_NativeOnAlternativeSelectionReleased, "NativeOnAlternativeSelectionReleased" }, // 2511876869
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeHoldDurationComplete, "OnAlternativeHoldDurationComplete" }, // 2782943800
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionPressed, "OnAlternativeSelectionPressed" }, // 2967647686
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnAlternativeSelectionReleased, "OnAlternativeSelectionReleased" }, // 2717075822
		{ &Z_Construct_UFunction_USBZGameStartMainMenuSkillsSelection_OnDescriptionScrollAxisChanged, "OnDescriptionScrollAxisChanged" }, // 4005116551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameStartMainMenuSkillsSelection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_Skills_Inner = { "Skills", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_Skills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, Skills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_Skills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_Skills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionInput = { "AlternativeSelectionInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, AlternativeSelectionInput), METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionHoldDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionHoldDuration = { "AlternativeSelectionHoldDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, AlternativeSelectionHoldDuration), METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionHoldDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionHoldDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollAxis = { "DescriptionScrollAxis", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, DescriptionScrollAxis), METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollSpeed = { "DescriptionScrollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, DescriptionScrollSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AxisDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AxisDeadZone = { "AxisDeadZone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, AxisDeadZone), METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AxisDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AxisDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CurrentLoadoutIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CurrentLoadoutIndex = { "CurrentLoadoutIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, CurrentLoadoutIndex), METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CurrentLoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CurrentLoadoutIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CachedPlayerLoadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuSkillsSelection" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuSkillsSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CachedPlayerLoadout = { "CachedPlayerLoadout", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, CachedPlayerLoadout), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CachedPlayerLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CachedPlayerLoadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_Skills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_Skills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AlternativeSelectionHoldDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_DescriptionScrollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_AxisDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CurrentLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::NewProp_CachedPlayerLoadout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameStartMainMenuSkillsSelection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::ClassParams = {
		&USBZGameStartMainMenuSkillsSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameStartMainMenuSkillsSelection, 1194485506);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameStartMainMenuSkillsSelection>()
	{
		return USBZGameStartMainMenuSkillsSelection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameStartMainMenuSkillsSelection(Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection, &USBZGameStartMainMenuSkillsSelection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameStartMainMenuSkillsSelection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameStartMainMenuSkillsSelection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
