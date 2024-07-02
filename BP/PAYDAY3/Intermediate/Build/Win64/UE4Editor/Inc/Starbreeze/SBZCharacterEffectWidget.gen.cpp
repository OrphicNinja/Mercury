// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEffectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEffectWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCharacterEffectWidget::execInitializeCharacterEffect)
	{
		P_GET_STRUCT_REF(FSBZCharacterEffectRuntime,Z_Param_Out_InCharacterEffectRuntime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCharacterEffect(Z_Param_Out_InCharacterEffectRuntime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterEffectWidget::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterEffectWidget::execSetEffectValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectValue(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterEffectWidget::execSetProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress(Z_Param_InNewProgress);
		P_NATIVE_END;
	}
	static FName NAME_USBZCharacterEffectWidget_OnCharacterEffectInitialized = FName(TEXT("OnCharacterEffectInitialized"));
	void USBZCharacterEffectWidget::OnCharacterEffectInitialized(FSBZCharacterEffectRuntime InCharacterEffectRuntime)
	{
		SBZCharacterEffectWidget_eventOnCharacterEffectInitialized_Parms Parms;
		Parms.InCharacterEffectRuntime=InCharacterEffectRuntime;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterEffectWidget_OnCharacterEffectInitialized),&Parms);
	}
	static FName NAME_USBZCharacterEffectWidget_OnCooldownProgressChanged = FName(TEXT("OnCooldownProgressChanged"));
	void USBZCharacterEffectWidget::OnCooldownProgressChanged(float InNewProgress)
	{
		SBZCharacterEffectWidget_eventOnCooldownProgressChanged_Parms Parms;
		Parms.InNewProgress=InNewProgress;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterEffectWidget_OnCooldownProgressChanged),&Parms);
	}
	static FName NAME_USBZCharacterEffectWidget_OnEffectValueChanged = FName(TEXT("OnEffectValueChanged"));
	void USBZCharacterEffectWidget::OnEffectValueChanged(int32 InNewEffectValue)
	{
		SBZCharacterEffectWidget_eventOnEffectValueChanged_Parms Parms;
		Parms.InNewEffectValue=InNewEffectValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterEffectWidget_OnEffectValueChanged),&Parms);
	}
	void USBZCharacterEffectWidget::StaticRegisterNativesUSBZCharacterEffectWidget()
	{
		UClass* Class = USBZCharacterEffectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeCharacterEffect", &USBZCharacterEffectWidget::execInitializeCharacterEffect },
			{ "SetActive", &USBZCharacterEffectWidget::execSetActive },
			{ "SetEffectValue", &USBZCharacterEffectWidget::execSetEffectValue },
			{ "SetProgress", &USBZCharacterEffectWidget::execSetProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics
	{
		struct SBZCharacterEffectWidget_eventInitializeCharacterEffect_Parms
		{
			FSBZCharacterEffectRuntime InCharacterEffectRuntime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCharacterEffectRuntime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::NewProp_InCharacterEffectRuntime = { "InCharacterEffectRuntime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectWidget_eventInitializeCharacterEffect_Parms, InCharacterEffectRuntime), Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::NewProp_InCharacterEffectRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectWidget, nullptr, "InitializeCharacterEffect", nullptr, nullptr, sizeof(SBZCharacterEffectWidget_eventInitializeCharacterEffect_Parms), Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCharacterEffectRuntime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::NewProp_InCharacterEffectRuntime = { "InCharacterEffectRuntime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectWidget_eventOnCharacterEffectInitialized_Parms, InCharacterEffectRuntime), Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::NewProp_InCharacterEffectRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectWidget, nullptr, "OnCharacterEffectInitialized", nullptr, nullptr, sizeof(SBZCharacterEffectWidget_eventOnCharacterEffectInitialized_Parms), Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::NewProp_InNewProgress = { "InNewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectWidget_eventOnCooldownProgressChanged_Parms, InNewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::NewProp_InNewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectWidget, nullptr, "OnCooldownProgressChanged", nullptr, nullptr, sizeof(SBZCharacterEffectWidget_eventOnCooldownProgressChanged_Parms), Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewEffectValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::NewProp_InNewEffectValue = { "InNewEffectValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectWidget_eventOnEffectValueChanged_Parms, InNewEffectValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::NewProp_InNewEffectValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectWidget, nullptr, "OnEffectValueChanged", nullptr, nullptr, sizeof(SBZCharacterEffectWidget_eventOnEffectValueChanged_Parms), Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics
	{
		struct SBZCharacterEffectWidget_eventSetActive_Parms
		{
			bool bIsActive;
		};
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((SBZCharacterEffectWidget_eventSetActive_Parms*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterEffectWidget_eventSetActive_Parms), &Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectWidget, nullptr, "SetActive", nullptr, nullptr, sizeof(SBZCharacterEffectWidget_eventSetActive_Parms), Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics
	{
		struct SBZCharacterEffectWidget_eventSetEffectValue_Parms
		{
			int32 InNewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectWidget_eventSetEffectValue_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectWidget, nullptr, "SetEffectValue", nullptr, nullptr, sizeof(SBZCharacterEffectWidget_eventSetEffectValue_Parms), Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics
	{
		struct SBZCharacterEffectWidget_eventSetProgress_Parms
		{
			float InNewProgress;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::NewProp_InNewProgress = { "InNewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectWidget_eventSetProgress_Parms, InNewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::NewProp_InNewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectWidget, nullptr, "SetProgress", nullptr, nullptr, sizeof(SBZCharacterEffectWidget_eventSetProgress_Parms), Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCharacterEffectWidget_NoRegister()
	{
		return USBZCharacterEffectWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterEffectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuffDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterEffectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCharacterEffectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCharacterEffectWidget_InitializeCharacterEffect, "InitializeCharacterEffect" }, // 95432731
		{ &Z_Construct_UFunction_USBZCharacterEffectWidget_OnCharacterEffectInitialized, "OnCharacterEffectInitialized" }, // 3052395473
		{ &Z_Construct_UFunction_USBZCharacterEffectWidget_OnCooldownProgressChanged, "OnCooldownProgressChanged" }, // 2589250425
		{ &Z_Construct_UFunction_USBZCharacterEffectWidget_OnEffectValueChanged, "OnEffectValueChanged" }, // 1277722650
		{ &Z_Construct_UFunction_USBZCharacterEffectWidget_SetActive, "SetActive" }, // 3682027537
		{ &Z_Construct_UFunction_USBZCharacterEffectWidget_SetEffectValue, "SetEffectValue" }, // 3943800762
		{ &Z_Construct_UFunction_USBZCharacterEffectWidget_SetProgress, "SetProgress" }, // 1985971272
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterEffectWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectWidget_Statics::NewProp_BuffDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectWidget" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterEffectWidget_Statics::NewProp_BuffDataAsset = { "BuffDataAsset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectWidget, BuffDataAsset), Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectWidget_Statics::NewProp_BuffDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectWidget_Statics::NewProp_BuffDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterEffectWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectWidget_Statics::NewProp_BuffDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterEffectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterEffectWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterEffectWidget_Statics::ClassParams = {
		&USBZCharacterEffectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCharacterEffectWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterEffectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterEffectWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterEffectWidget, 2492752406);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterEffectWidget>()
	{
		return USBZCharacterEffectWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterEffectWidget(Z_Construct_UClass_USBZCharacterEffectWidget, &USBZCharacterEffectWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterEffectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterEffectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
