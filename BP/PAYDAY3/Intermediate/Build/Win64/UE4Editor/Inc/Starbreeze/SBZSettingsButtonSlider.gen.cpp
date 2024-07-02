// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonSlider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonSlider() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonSlider_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonSlider();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonSlider::execSetIncrementValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIncrementValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIncrementValue(Z_Param_NewIncrementValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonSlider::execSetMaxValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxSliderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxValue(Z_Param_NewMaxSliderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonSlider::execSetMinValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMinSliderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinValue(Z_Param_NewMinSliderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonSlider::execSetSliderValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderValue(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingsButtonSlider_IncrementSliderValueChanged = FName(TEXT("IncrementSliderValueChanged"));
	void USBZSettingsButtonSlider::IncrementSliderValueChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButtonSlider_IncrementSliderValueChanged),NULL);
	}
	static FName NAME_USBZSettingsButtonSlider_MaxSliderValueChanged = FName(TEXT("MaxSliderValueChanged"));
	void USBZSettingsButtonSlider::MaxSliderValueChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButtonSlider_MaxSliderValueChanged),NULL);
	}
	static FName NAME_USBZSettingsButtonSlider_MinSliderValueChanged = FName(TEXT("MinSliderValueChanged"));
	void USBZSettingsButtonSlider::MinSliderValueChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButtonSlider_MinSliderValueChanged),NULL);
	}
	void USBZSettingsButtonSlider::StaticRegisterNativesUSBZSettingsButtonSlider()
	{
		UClass* Class = USBZSettingsButtonSlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIncrementValue", &USBZSettingsButtonSlider::execSetIncrementValue },
			{ "SetMaxValue", &USBZSettingsButtonSlider::execSetMaxValue },
			{ "SetMinValue", &USBZSettingsButtonSlider::execSetMinValue },
			{ "SetSliderValue", &USBZSettingsButtonSlider::execSetSliderValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonSlider, nullptr, "IncrementSliderValueChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonSlider, nullptr, "MaxSliderValueChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonSlider, nullptr, "MinSliderValueChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics
	{
		struct SBZSettingsButtonSlider_eventSetIncrementValue_Parms
		{
			float NewIncrementValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIncrementValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::NewProp_NewIncrementValue = { "NewIncrementValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonSlider_eventSetIncrementValue_Parms, NewIncrementValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::NewProp_NewIncrementValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonSlider, nullptr, "SetIncrementValue", nullptr, nullptr, sizeof(SBZSettingsButtonSlider_eventSetIncrementValue_Parms), Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics
	{
		struct SBZSettingsButtonSlider_eventSetMaxValue_Parms
		{
			float NewMaxSliderValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxSliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::NewProp_NewMaxSliderValue = { "NewMaxSliderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonSlider_eventSetMaxValue_Parms, NewMaxSliderValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::NewProp_NewMaxSliderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonSlider, nullptr, "SetMaxValue", nullptr, nullptr, sizeof(SBZSettingsButtonSlider_eventSetMaxValue_Parms), Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics
	{
		struct SBZSettingsButtonSlider_eventSetMinValue_Parms
		{
			float NewMinSliderValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMinSliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::NewProp_NewMinSliderValue = { "NewMinSliderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonSlider_eventSetMinValue_Parms, NewMinSliderValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::NewProp_NewMinSliderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonSlider, nullptr, "SetMinValue", nullptr, nullptr, sizeof(SBZSettingsButtonSlider_eventSetMinValue_Parms), Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics
	{
		struct SBZSettingsButtonSlider_eventSetSliderValue_Parms
		{
			float InNewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonSlider_eventSetSliderValue_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonSlider, nullptr, "SetSliderValue", nullptr, nullptr, sizeof(SBZSettingsButtonSlider_eventSetSliderValue_Parms), Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonSlider_NoRegister()
	{
		return USBZSettingsButtonSlider::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderIncrementValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderIncrementValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonSlider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonSlider_IncrementSliderValueChanged, "IncrementSliderValueChanged" }, // 2139501373
		{ &Z_Construct_UFunction_USBZSettingsButtonSlider_MaxSliderValueChanged, "MaxSliderValueChanged" }, // 1819823374
		{ &Z_Construct_UFunction_USBZSettingsButtonSlider_MinSliderValueChanged, "MinSliderValueChanged" }, // 3329203835
		{ &Z_Construct_UFunction_USBZSettingsButtonSlider_SetIncrementValue, "SetIncrementValue" }, // 3190876638
		{ &Z_Construct_UFunction_USBZSettingsButtonSlider_SetMaxValue, "SetMaxValue" }, // 2854040752
		{ &Z_Construct_UFunction_USBZSettingsButtonSlider_SetMinValue, "SetMinValue" }, // 4076247533
		{ &Z_Construct_UFunction_USBZSettingsButtonSlider_SetSliderValue, "SetSliderValue" }, // 3309769673
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonSlider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonSlider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMinValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonSlider" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMinValue = { "SliderMinValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonSlider, SliderMinValue), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonSlider" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMaxValue = { "SliderMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonSlider, SliderMaxValue), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderIncrementValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonSlider" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderIncrementValue = { "SliderIncrementValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonSlider, SliderIncrementValue), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderIncrementValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderIncrementValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonSlider" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderValue = { "SliderValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonSlider, SliderValue), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonSlider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderIncrementValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonSlider_Statics::NewProp_SliderValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonSlider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonSlider_Statics::ClassParams = {
		&USBZSettingsButtonSlider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonSlider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonSlider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonSlider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonSlider, 2103774258);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonSlider>()
	{
		return USBZSettingsButtonSlider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonSlider(Z_Construct_UClass_USBZSettingsButtonSlider, &USBZSettingsButtonSlider::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonSlider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonSlider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
