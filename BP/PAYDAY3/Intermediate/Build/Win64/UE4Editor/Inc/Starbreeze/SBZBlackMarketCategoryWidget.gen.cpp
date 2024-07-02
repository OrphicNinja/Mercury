// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketCategoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketCategoryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketCategoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketCategoryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStoreItemDefaultUICategory();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlackMarketCategoryWidget::execGetCategoryStringTextFromCategoryEnum)
	{
		P_GET_ENUM(ESBZStoreItemDefaultUICategory,Z_Param_InCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USBZBlackMarketCategoryWidget::GetCategoryStringTextFromCategoryEnum(ESBZStoreItemDefaultUICategory(Z_Param_InCategory));
		P_NATIVE_END;
	}
	static FName NAME_USBZBlackMarketCategoryWidget_SetStoreCategoryName = FName(TEXT("SetStoreCategoryName"));
	void USBZBlackMarketCategoryWidget::SetStoreCategoryName(FText const& InCategoryName)
	{
		SBZBlackMarketCategoryWidget_eventSetStoreCategoryName_Parms Parms;
		Parms.InCategoryName=InCategoryName;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketCategoryWidget_SetStoreCategoryName),&Parms);
	}
	void USBZBlackMarketCategoryWidget::StaticRegisterNativesUSBZBlackMarketCategoryWidget()
	{
		UClass* Class = USBZBlackMarketCategoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategoryStringTextFromCategoryEnum", &USBZBlackMarketCategoryWidget::execGetCategoryStringTextFromCategoryEnum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics
	{
		struct SBZBlackMarketCategoryWidget_eventGetCategoryStringTextFromCategoryEnum_Parms
		{
			ESBZStoreItemDefaultUICategory InCategory;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCategory;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::NewProp_InCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketCategoryWidget_eventGetCategoryStringTextFromCategoryEnum_Parms, InCategory), Z_Construct_UEnum_Starbreeze_ESBZStoreItemDefaultUICategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketCategoryWidget_eventGetCategoryStringTextFromCategoryEnum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::NewProp_InCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::NewProp_InCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketCategoryWidget, nullptr, "GetCategoryStringTextFromCategoryEnum", nullptr, nullptr, sizeof(SBZBlackMarketCategoryWidget_eventGetCategoryStringTextFromCategoryEnum_Parms), Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::NewProp_InCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::NewProp_InCategoryName = { "InCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketCategoryWidget_eventSetStoreCategoryName_Parms, InCategoryName), METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::NewProp_InCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::NewProp_InCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::NewProp_InCategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketCategoryWidget, nullptr, "SetStoreCategoryName", nullptr, nullptr, sizeof(SBZBlackMarketCategoryWidget_eventSetStoreCategoryName_Parms), Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketCategoryWidget_NoRegister()
	{
		return USBZBlackMarketCategoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ButtonList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ButtonList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketCategoryWidget_GetCategoryStringTextFromCategoryEnum, "GetCategoryStringTextFromCategoryEnum" }, // 3220765047
		{ &Z_Construct_UFunction_USBZBlackMarketCategoryWidget_SetStoreCategoryName, "SetStoreCategoryName" }, // 622069498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketCategoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketCategoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::NewProp_Panel_ButtonList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketCategoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketCategoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::NewProp_Panel_ButtonList = { "Panel_ButtonList", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketCategoryWidget, Panel_ButtonList), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::NewProp_Panel_ButtonList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::NewProp_Panel_ButtonList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::NewProp_Panel_ButtonList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketCategoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::ClassParams = {
		&USBZBlackMarketCategoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketCategoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketCategoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketCategoryWidget, 3590562935);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketCategoryWidget>()
	{
		return USBZBlackMarketCategoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketCategoryWidget(Z_Construct_UClass_USBZBlackMarketCategoryWidget, &USBZBlackMarketCategoryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketCategoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketCategoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
