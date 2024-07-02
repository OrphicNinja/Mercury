// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCurrencyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCurrencyWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCurrencyWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCurrencyWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode();
// End Cross Module References
	DEFINE_FUNCTION(USBZCurrencyWidget::execSetCurrencyType)
	{
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_InCurrencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrencyType(ESBZCurrencyCode(Z_Param_InCurrencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCurrencyWidget::execSetCurrencyValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrencyValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	static FName NAME_USBZCurrencyWidget_OnAffordedChanged = FName(TEXT("OnAffordedChanged"));
	void USBZCurrencyWidget::OnAffordedChanged(bool bInIsAfforded, bool bIsInitial)
	{
		SBZCurrencyWidget_eventOnAffordedChanged_Parms Parms;
		Parms.bInIsAfforded=bInIsAfforded ? true : false;
		Parms.bIsInitial=bIsInitial ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCurrencyWidget_OnAffordedChanged),&Parms);
	}
	static FName NAME_USBZCurrencyWidget_OnCurrencyTypeChanged = FName(TEXT("OnCurrencyTypeChanged"));
	void USBZCurrencyWidget::OnCurrencyTypeChanged(ESBZCurrencyCode InCurrencyType, bool bIsInitial)
	{
		SBZCurrencyWidget_eventOnCurrencyTypeChanged_Parms Parms;
		Parms.InCurrencyType=InCurrencyType;
		Parms.bIsInitial=bIsInitial ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCurrencyWidget_OnCurrencyTypeChanged),&Parms);
	}
	static FName NAME_USBZCurrencyWidget_OnCurrencyValueChanged = FName(TEXT("OnCurrencyValueChanged"));
	void USBZCurrencyWidget::OnCurrencyValueChanged(int32 NewValue, bool bIsInitial)
	{
		SBZCurrencyWidget_eventOnCurrencyValueChanged_Parms Parms;
		Parms.NewValue=NewValue;
		Parms.bIsInitial=bIsInitial ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCurrencyWidget_OnCurrencyValueChanged),&Parms);
	}
	void USBZCurrencyWidget::StaticRegisterNativesUSBZCurrencyWidget()
	{
		UClass* Class = USBZCurrencyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrencyType", &USBZCurrencyWidget::execSetCurrencyType },
			{ "SetCurrencyValue", &USBZCurrencyWidget::execSetCurrencyValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics
	{
		static void NewProp_bInIsAfforded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsAfforded;
		static void NewProp_bIsInitial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bInIsAfforded_SetBit(void* Obj)
	{
		((SBZCurrencyWidget_eventOnAffordedChanged_Parms*)Obj)->bInIsAfforded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bInIsAfforded = { "bInIsAfforded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCurrencyWidget_eventOnAffordedChanged_Parms), &Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bInIsAfforded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bIsInitial_SetBit(void* Obj)
	{
		((SBZCurrencyWidget_eventOnAffordedChanged_Parms*)Obj)->bIsInitial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bIsInitial = { "bIsInitial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCurrencyWidget_eventOnAffordedChanged_Parms), &Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bIsInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bInIsAfforded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::NewProp_bIsInitial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyWidget, nullptr, "OnAffordedChanged", nullptr, nullptr, sizeof(SBZCurrencyWidget_eventOnAffordedChanged_Parms), Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCurrencyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCurrencyType;
		static void NewProp_bIsInitial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_InCurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_InCurrencyType = { "InCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyWidget_eventOnCurrencyTypeChanged_Parms, InCurrencyType), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_bIsInitial_SetBit(void* Obj)
	{
		((SBZCurrencyWidget_eventOnCurrencyTypeChanged_Parms*)Obj)->bIsInitial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_bIsInitial = { "bIsInitial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCurrencyWidget_eventOnCurrencyTypeChanged_Parms), &Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_bIsInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_InCurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_InCurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::NewProp_bIsInitial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyWidget, nullptr, "OnCurrencyTypeChanged", nullptr, nullptr, sizeof(SBZCurrencyWidget_eventOnCurrencyTypeChanged_Parms), Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static void NewProp_bIsInitial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyWidget_eventOnCurrencyValueChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::NewProp_bIsInitial_SetBit(void* Obj)
	{
		((SBZCurrencyWidget_eventOnCurrencyValueChanged_Parms*)Obj)->bIsInitial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::NewProp_bIsInitial = { "bIsInitial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCurrencyWidget_eventOnCurrencyValueChanged_Parms), &Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::NewProp_bIsInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::NewProp_bIsInitial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyWidget, nullptr, "OnCurrencyValueChanged", nullptr, nullptr, sizeof(SBZCurrencyWidget_eventOnCurrencyValueChanged_Parms), Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics
	{
		struct SBZCurrencyWidget_eventSetCurrencyType_Parms
		{
			ESBZCurrencyCode InCurrencyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCurrencyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCurrencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::NewProp_InCurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::NewProp_InCurrencyType = { "InCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyWidget_eventSetCurrencyType_Parms, InCurrencyType), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::NewProp_InCurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::NewProp_InCurrencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyWidget, nullptr, "SetCurrencyType", nullptr, nullptr, sizeof(SBZCurrencyWidget_eventSetCurrencyType_Parms), Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics
	{
		struct SBZCurrencyWidget_eventSetCurrencyValue_Parms
		{
			int32 InValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCurrencyWidget_eventSetCurrencyValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCurrencyWidget, nullptr, "SetCurrencyValue", nullptr, nullptr, sizeof(SBZCurrencyWidget_eventSetCurrencyValue_Parms), Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCurrencyWidget_NoRegister()
	{
		return USBZCurrencyWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZCurrencyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOwnerCurrency_MetaData[];
#endif
		static void NewProp_bIsOwnerCurrency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOwnerCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAffordedChecked_MetaData[];
#endif
		static void NewProp_bIsAffordedChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAffordedChecked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAfforded_MetaData[];
#endif
		static void NewProp_bIsAfforded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAfforded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCurrencyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCurrencyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCurrencyWidget_OnAffordedChanged, "OnAffordedChanged" }, // 3399696664
		{ &Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyTypeChanged, "OnCurrencyTypeChanged" }, // 226798702
		{ &Z_Construct_UFunction_USBZCurrencyWidget_OnCurrencyValueChanged, "OnCurrencyValueChanged" }, // 1960629212
		{ &Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyType, "SetCurrencyType" }, // 175709474
		{ &Z_Construct_UFunction_USBZCurrencyWidget_SetCurrencyValue, "SetCurrencyValue" }, // 901010820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCurrencyWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCurrencyWidget" },
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCurrencyWidget, CurrencyType), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCurrencyWidget" },
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyValue = { "CurrencyValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCurrencyWidget, CurrencyValue), METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsOwnerCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCurrencyWidget" },
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsOwnerCurrency_SetBit(void* Obj)
	{
		((USBZCurrencyWidget*)Obj)->bIsOwnerCurrency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsOwnerCurrency = { "bIsOwnerCurrency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCurrencyWidget), &Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsOwnerCurrency_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsOwnerCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsOwnerCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAffordedChecked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCurrencyWidget" },
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAffordedChecked_SetBit(void* Obj)
	{
		((USBZCurrencyWidget*)Obj)->bIsAffordedChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAffordedChecked = { "bIsAffordedChecked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCurrencyWidget), &Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAffordedChecked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAffordedChecked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAffordedChecked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAfforded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCurrencyWidget" },
		{ "ModuleRelativePath", "Public/SBZCurrencyWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAfforded_SetBit(void* Obj)
	{
		((USBZCurrencyWidget*)Obj)->bIsAfforded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAfforded = { "bIsAfforded", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCurrencyWidget), &Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAfforded_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAfforded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAfforded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCurrencyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_CurrencyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsOwnerCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAffordedChecked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCurrencyWidget_Statics::NewProp_bIsAfforded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCurrencyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCurrencyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCurrencyWidget_Statics::ClassParams = {
		&USBZCurrencyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCurrencyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCurrencyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCurrencyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCurrencyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCurrencyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCurrencyWidget, 1285096648);
	template<> STARBREEZE_API UClass* StaticClass<USBZCurrencyWidget>()
	{
		return USBZCurrencyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCurrencyWidget(Z_Construct_UClass_USBZCurrencyWidget, &USBZCurrencyWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCurrencyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCurrencyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
