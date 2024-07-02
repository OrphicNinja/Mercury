// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUITextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUITextBlock() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUITextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUITextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZColorStyle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTextStyle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUITextScrollStyle_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	DEFINE_FUNCTION(USBZUITextBlock::execResetScrollState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetScrollState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUITextBlock::execSetColorStyle)
	{
		P_GET_OBJECT(USBZColorStyle,Z_Param_InStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorStyle(Z_Param_InStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUITextBlock::execSetScrollingEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsScrollingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollingEnabled(Z_Param_bInIsScrollingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUITextBlock::execSetStyle)
	{
		P_GET_OBJECT(USBZTextStyle,Z_Param_InStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStyle(Z_Param_InStyle);
		P_NATIVE_END;
	}
	void USBZUITextBlock::StaticRegisterNativesUSBZUITextBlock()
	{
		UClass* Class = USBZUITextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetScrollState", &USBZUITextBlock::execResetScrollState },
			{ "SetColorStyle", &USBZUITextBlock::execSetColorStyle },
			{ "SetScrollingEnabled", &USBZUITextBlock::execSetScrollingEnabled },
			{ "SetStyle", &USBZUITextBlock::execSetStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUITextBlock_ResetScrollState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUITextBlock_ResetScrollState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUITextBlock_ResetScrollState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUITextBlock, nullptr, "ResetScrollState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUITextBlock_ResetScrollState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUITextBlock_ResetScrollState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUITextBlock_ResetScrollState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUITextBlock_ResetScrollState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics
	{
		struct SBZUITextBlock_eventSetColorStyle_Parms
		{
			USBZColorStyle* InStyle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUITextBlock_eventSetColorStyle_Parms, InStyle), Z_Construct_UClass_USBZColorStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUITextBlock, nullptr, "SetColorStyle", nullptr, nullptr, sizeof(SBZUITextBlock_eventSetColorStyle_Parms), Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUITextBlock_SetColorStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUITextBlock_SetColorStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics
	{
		struct SBZUITextBlock_eventSetScrollingEnabled_Parms
		{
			bool bInIsScrollingEnabled;
		};
		static void NewProp_bInIsScrollingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsScrollingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled_SetBit(void* Obj)
	{
		((SBZUITextBlock_eventSetScrollingEnabled_Parms*)Obj)->bInIsScrollingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled = { "bInIsScrollingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUITextBlock_eventSetScrollingEnabled_Parms), &Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUITextBlock, nullptr, "SetScrollingEnabled", nullptr, nullptr, sizeof(SBZUITextBlock_eventSetScrollingEnabled_Parms), Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics
	{
		struct SBZUITextBlock_eventSetStyle_Parms
		{
			USBZTextStyle* InStyle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUITextBlock_eventSetStyle_Parms, InStyle), Z_Construct_UClass_USBZTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUITextBlock, nullptr, "SetStyle", nullptr, nullptr, sizeof(SBZUITextBlock_eventSetStyle_Parms), Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUITextBlock_SetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUITextBlock_SetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUITextBlock_NoRegister()
	{
		return USBZUITextBlock::StaticClass();
	}
	struct Z_Construct_UClass_USBZUITextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScrollStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScrollingEnabled_MetaData[];
#endif
		static void NewProp_bIsScrollingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScrollingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHideTextOnEmpty_MetaData[];
#endif
		static void NewProp_bEnableHideTextOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHideTextOnEmpty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnEmptyVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEmptyVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnEmptyVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnNotEmptyVisbility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotEmptyVisbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnNotEmptyVisbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUITextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUITextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUITextBlock_ResetScrollState, "ResetScrollState" }, // 640541317
		{ &Z_Construct_UFunction_USBZUITextBlock_SetColorStyle, "SetColorStyle" }, // 2169707313
		{ &Z_Construct_UFunction_USBZUITextBlock_SetScrollingEnabled, "SetScrollingEnabled" }, // 1258278602
		{ &Z_Construct_UFunction_USBZUITextBlock_SetStyle, "SetStyle" }, // 3127934966
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUITextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ColorStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUITextBlock" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ColorStyle = { "ColorStyle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUITextBlock, ColorStyle), Z_Construct_UClass_USBZColorStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ColorStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ColorStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_Style_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUITextBlock" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUITextBlock, Style), Z_Construct_UClass_USBZTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ScrollStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUITextBlock" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ScrollStyle = { "ScrollStyle", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUITextBlock, ScrollStyle), Z_Construct_UClass_USBZUITextScrollStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ScrollStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ScrollStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUITextBlock" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	void Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bIsScrollingEnabled_SetBit(void* Obj)
	{
		((USBZUITextBlock*)Obj)->bIsScrollingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bIsScrollingEnabled = { "bIsScrollingEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZUITextBlock), &Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bIsScrollingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bEnableHideTextOnEmpty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUITextBlock" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	void Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bEnableHideTextOnEmpty_SetBit(void* Obj)
	{
		((USBZUITextBlock*)Obj)->bEnableHideTextOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bEnableHideTextOnEmpty = { "bEnableHideTextOnEmpty", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZUITextBlock), &Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bEnableHideTextOnEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bEnableHideTextOnEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bEnableHideTextOnEmpty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnEmptyVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnEmptyVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUITextBlock" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnEmptyVisibility = { "OnEmptyVisibility", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUITextBlock, OnEmptyVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnEmptyVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnEmptyVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnNotEmptyVisbility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnNotEmptyVisbility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUITextBlock" },
		{ "ModuleRelativePath", "Public/SBZUITextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnNotEmptyVisbility = { "OnNotEmptyVisbility", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUITextBlock, OnNotEmptyVisbility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnNotEmptyVisbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnNotEmptyVisbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUITextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ColorStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_ScrollStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bIsScrollingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_bEnableHideTextOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnEmptyVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnEmptyVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnNotEmptyVisbility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUITextBlock_Statics::NewProp_OnNotEmptyVisbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUITextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUITextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUITextBlock_Statics::ClassParams = {
		&USBZUITextBlock::StaticClass,
		"StarbreezeUI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZUITextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUITextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUITextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUITextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUITextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUITextBlock, 3946963329);
	template<> STARBREEZE_API UClass* StaticClass<USBZUITextBlock>()
	{
		return USBZUITextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUITextBlock(Z_Construct_UClass_USBZUITextBlock, &USBZUITextBlock::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUITextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUITextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
