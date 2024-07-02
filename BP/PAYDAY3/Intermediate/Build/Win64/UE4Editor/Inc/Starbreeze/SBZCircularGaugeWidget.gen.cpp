// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCircularGaugeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCircularGaugeWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCircularGaugeWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCircularGaugeWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCircularGaugeWidget::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCircularGaugeWidget::execSetGaugeThickness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InGaugeThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGaugeThickness(Z_Param_InGaugeThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCircularGaugeWidget::execUpdateGaugeProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inNewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGaugeProgress(Z_Param_inNewProgress);
		P_NATIVE_END;
	}
	void USBZCircularGaugeWidget::StaticRegisterNativesUSBZCircularGaugeWidget()
	{
		UClass* Class = USBZCircularGaugeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColor", &USBZCircularGaugeWidget::execSetColor },
			{ "SetGaugeThickness", &USBZCircularGaugeWidget::execSetGaugeThickness },
			{ "UpdateGaugeProgress", &USBZCircularGaugeWidget::execUpdateGaugeProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics
	{
		struct SBZCircularGaugeWidget_eventSetColor_Parms
		{
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCircularGaugeWidget_eventSetColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularGaugeWidget, nullptr, "SetColor", nullptr, nullptr, sizeof(SBZCircularGaugeWidget_eventSetColor_Parms), Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics
	{
		struct SBZCircularGaugeWidget_eventSetGaugeThickness_Parms
		{
			float InGaugeThickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InGaugeThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::NewProp_InGaugeThickness = { "InGaugeThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCircularGaugeWidget_eventSetGaugeThickness_Parms, InGaugeThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::NewProp_InGaugeThickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularGaugeWidget, nullptr, "SetGaugeThickness", nullptr, nullptr, sizeof(SBZCircularGaugeWidget_eventSetGaugeThickness_Parms), Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics
	{
		struct SBZCircularGaugeWidget_eventUpdateGaugeProgress_Parms
		{
			float inNewProgress;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inNewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::NewProp_inNewProgress = { "inNewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCircularGaugeWidget_eventUpdateGaugeProgress_Parms, inNewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::NewProp_inNewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularGaugeWidget, nullptr, "UpdateGaugeProgress", nullptr, nullptr, sizeof(SBZCircularGaugeWidget_eventUpdateGaugeProgress_Parms), Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCircularGaugeWidget_NoRegister()
	{
		return USBZCircularGaugeWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZCircularGaugeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircularGaugeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CircularGaugeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircularGaugeMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CircularGaugeMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_Gauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_Gauge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCircularGaugeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCircularGaugeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCircularGaugeWidget_SetColor, "SetColor" }, // 4159072101
		{ &Z_Construct_UFunction_USBZCircularGaugeWidget_SetGaugeThickness, "SetGaugeThickness" }, // 1258487633
		{ &Z_Construct_UFunction_USBZCircularGaugeWidget_UpdateGaugeProgress, "UpdateGaugeProgress" }, // 812531999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularGaugeWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCircularGaugeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCircularGaugeWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularGaugeWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterial = { "CircularGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularGaugeWidget, CircularGaugeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterialInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularGaugeWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterialInstance = { "CircularGaugeMaterialInstance", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularGaugeWidget, CircularGaugeMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_Image_Gauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularGaugeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCircularGaugeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_Image_Gauge = { "Image_Gauge", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularGaugeWidget, Image_Gauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_Image_Gauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_Image_Gauge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCircularGaugeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_CircularGaugeMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularGaugeWidget_Statics::NewProp_Image_Gauge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCircularGaugeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCircularGaugeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCircularGaugeWidget_Statics::ClassParams = {
		&USBZCircularGaugeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCircularGaugeWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularGaugeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCircularGaugeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCircularGaugeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCircularGaugeWidget, 2599352742);
	template<> STARBREEZE_API UClass* StaticClass<USBZCircularGaugeWidget>()
	{
		return USBZCircularGaugeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCircularGaugeWidget(Z_Construct_UClass_USBZCircularGaugeWidget, &USBZCircularGaugeWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCircularGaugeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCircularGaugeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
