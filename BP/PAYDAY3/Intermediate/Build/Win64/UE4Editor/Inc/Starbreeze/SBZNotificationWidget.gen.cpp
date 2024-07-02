// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNotificationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNotificationWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNotificationWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNotificationWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZNotificationWidget::execSetNotificationText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTextToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotificationText(Z_Param_Out_InTextToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNotificationWidget::execSetupWidget)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_InTextBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWidget(Z_Param_InTextBlock);
		P_NATIVE_END;
	}
	void USBZNotificationWidget::StaticRegisterNativesUSBZNotificationWidget()
	{
		UClass* Class = USBZNotificationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNotificationText", &USBZNotificationWidget::execSetNotificationText },
			{ "SetupWidget", &USBZNotificationWidget::execSetupWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics
	{
		struct SBZNotificationWidget_eventSetNotificationText_Parms
		{
			FText InTextToDisplay;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InTextToDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::NewProp_InTextToDisplay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::NewProp_InTextToDisplay = { "InTextToDisplay", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNotificationWidget_eventSetNotificationText_Parms, InTextToDisplay), METADATA_PARAMS(Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::NewProp_InTextToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::NewProp_InTextToDisplay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::NewProp_InTextToDisplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNotificationWidget, nullptr, "SetNotificationText", nullptr, nullptr, sizeof(SBZNotificationWidget_eventSetNotificationText_Parms), Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics
	{
		struct SBZNotificationWidget_eventSetupWidget_Parms
		{
			UTextBlock* InTextBlock;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::NewProp_InTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::NewProp_InTextBlock = { "InTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNotificationWidget_eventSetupWidget_Parms, InTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::NewProp_InTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::NewProp_InTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::NewProp_InTextBlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNotificationWidget, nullptr, "SetupWidget", nullptr, nullptr, sizeof(SBZNotificationWidget_eventSetupWidget_Parms), Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNotificationWidget_SetupWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNotificationWidget_SetupWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZNotificationWidget_NoRegister()
	{
		return USBZNotificationWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZNotificationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNotificationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZNotificationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZNotificationWidget_SetNotificationText, "SetNotificationText" }, // 254314927
		{ &Z_Construct_UFunction_USBZNotificationWidget_SetupWidget, "SetupWidget" }, // 2103257681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNotificationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNotificationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNotificationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNotificationWidget_Statics::NewProp_BodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNotificationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNotificationWidget_Statics::NewProp_BodyText = { "BodyText", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNotificationWidget, BodyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNotificationWidget_Statics::NewProp_BodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNotificationWidget_Statics::NewProp_BodyText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZNotificationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNotificationWidget_Statics::NewProp_BodyText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNotificationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNotificationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNotificationWidget_Statics::ClassParams = {
		&USBZNotificationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZNotificationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZNotificationWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNotificationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNotificationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNotificationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNotificationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNotificationWidget, 1631874922);
	template<> STARBREEZE_API UClass* StaticClass<USBZNotificationWidget>()
	{
		return USBZNotificationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNotificationWidget(Z_Construct_UClass_USBZNotificationWidget, &USBZNotificationWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNotificationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNotificationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
