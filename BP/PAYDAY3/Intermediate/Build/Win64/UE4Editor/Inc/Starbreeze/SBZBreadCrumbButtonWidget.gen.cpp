// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBreadCrumbButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBreadCrumbButtonWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreadCrumbButtonWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreadCrumbButtonWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBreadCrumbButtonWidget::execIsBreadCrumbForStackValue)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InStackValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBreadCrumbForStackValue(Z_Param_Out_InStackValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBreadCrumbButtonWidget::execSetStackValue)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InStackValue);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStackValue(Z_Param_Out_InStackValue,Z_Param_Out_InTextValue);
		P_NATIVE_END;
	}
	void USBZBreadCrumbButtonWidget::StaticRegisterNativesUSBZBreadCrumbButtonWidget()
	{
		UClass* Class = USBZBreadCrumbButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsBreadCrumbForStackValue", &USBZBreadCrumbButtonWidget::execIsBreadCrumbForStackValue },
			{ "SetStackValue", &USBZBreadCrumbButtonWidget::execSetStackValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics
	{
		struct SBZBreadCrumbButtonWidget_eventIsBreadCrumbForStackValue_Parms
		{
			FName InStackValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InStackValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_InStackValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_InStackValue = { "InStackValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreadCrumbButtonWidget_eventIsBreadCrumbForStackValue_Parms, InStackValue), METADATA_PARAMS(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_InStackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_InStackValue_MetaData)) };
	void Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBreadCrumbButtonWidget_eventIsBreadCrumbForStackValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreadCrumbButtonWidget_eventIsBreadCrumbForStackValue_Parms), &Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_InStackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreadCrumbButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBreadCrumbButtonWidget, nullptr, "IsBreadCrumbForStackValue", nullptr, nullptr, sizeof(SBZBreadCrumbButtonWidget_eventIsBreadCrumbForStackValue_Parms), Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics
	{
		struct SBZBreadCrumbButtonWidget_eventSetStackValue_Parms
		{
			FName InStackValue;
			FText InTextValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InStackValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InTextValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InStackValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InStackValue = { "InStackValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreadCrumbButtonWidget_eventSetStackValue_Parms, InStackValue), METADATA_PARAMS(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InStackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InStackValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InTextValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InTextValue = { "InTextValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreadCrumbButtonWidget_eventSetStackValue_Parms, InTextValue), METADATA_PARAMS(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InTextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InTextValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InStackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::NewProp_InTextValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreadCrumbButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBreadCrumbButtonWidget, nullptr, "SetStackValue", nullptr, nullptr, sizeof(SBZBreadCrumbButtonWidget_eventSetStackValue_Parms), Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBreadCrumbButtonWidget_NoRegister()
	{
		return USBZBreadCrumbButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Stack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Stack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBreadCrumbButtonWidget_IsBreadCrumbForStackValue, "IsBreadCrumbForStackValue" }, // 977343346
		{ &Z_Construct_UFunction_USBZBreadCrumbButtonWidget_SetStackValue, "SetStackValue" }, // 1050160403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBreadCrumbButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_Text_Stack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreadCrumbButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_Text_Stack = { "Text_Stack", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBreadCrumbButtonWidget, Text_Stack), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_Text_Stack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_Text_Stack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_StackValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreadCrumbButtonWidget" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_StackValue = { "StackValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBreadCrumbButtonWidget, StackValue), METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_StackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_StackValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_Text_Stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::NewProp_StackValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBreadCrumbButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::ClassParams = {
		&USBZBreadCrumbButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBreadCrumbButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBreadCrumbButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBreadCrumbButtonWidget, 680153151);
	template<> STARBREEZE_API UClass* StaticClass<USBZBreadCrumbButtonWidget>()
	{
		return USBZBreadCrumbButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBreadCrumbButtonWidget(Z_Construct_UClass_USBZBreadCrumbButtonWidget, &USBZBreadCrumbButtonWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBreadCrumbButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBreadCrumbButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
