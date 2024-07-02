// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBackendErrorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBackendErrorWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBackendErrorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBackendErrorWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBackendErrorWidget::execGetErrorHeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetErrorHeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBackendErrorWidget::execGetErrorText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetErrorText();
		P_NATIVE_END;
	}
	void USBZBackendErrorWidget::StaticRegisterNativesUSBZBackendErrorWidget()
	{
		UClass* Class = USBZBackendErrorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetErrorHeader", &USBZBackendErrorWidget::execGetErrorHeader },
			{ "GetErrorText", &USBZBackendErrorWidget::execGetErrorText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics
	{
		struct SBZBackendErrorWidget_eventGetErrorHeader_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBackendErrorWidget_eventGetErrorHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBackendErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBackendErrorWidget, nullptr, "GetErrorHeader", nullptr, nullptr, sizeof(SBZBackendErrorWidget_eventGetErrorHeader_Parms), Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics
	{
		struct SBZBackendErrorWidget_eventGetErrorText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBackendErrorWidget_eventGetErrorText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBackendErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBackendErrorWidget, nullptr, "GetErrorText", nullptr, nullptr, sizeof(SBZBackendErrorWidget_eventGetErrorText_Parms), Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBackendErrorWidget_NoRegister()
	{
		return USBZBackendErrorWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBackendErrorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessageStringTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErrorMessageStringTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBackendErrorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBackendErrorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorHeader, "GetErrorHeader" }, // 4030824199
		{ &Z_Construct_UFunction_USBZBackendErrorWidget_GetErrorText, "GetErrorText" }, // 3028786776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBackendErrorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBackendErrorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBackendErrorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBackendErrorWidget_Statics::NewProp_ErrorMessageStringTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBackendErrorWidget" },
		{ "ModuleRelativePath", "Public/SBZBackendErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBackendErrorWidget_Statics::NewProp_ErrorMessageStringTable = { "ErrorMessageStringTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBackendErrorWidget, ErrorMessageStringTable), Z_Construct_UClass_UStringTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBackendErrorWidget_Statics::NewProp_ErrorMessageStringTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBackendErrorWidget_Statics::NewProp_ErrorMessageStringTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBackendErrorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBackendErrorWidget_Statics::NewProp_ErrorMessageStringTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBackendErrorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBackendErrorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBackendErrorWidget_Statics::ClassParams = {
		&USBZBackendErrorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBackendErrorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBackendErrorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBackendErrorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBackendErrorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBackendErrorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBackendErrorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBackendErrorWidget, 2733579855);
	template<> STARBREEZE_API UClass* StaticClass<USBZBackendErrorWidget>()
	{
		return USBZBackendErrorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBackendErrorWidget(Z_Construct_UClass_USBZBackendErrorWidget, &USBZBackendErrorWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBackendErrorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBackendErrorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
