// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDOverlayRight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDOverlayRight() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDOverlayRight_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDOverlayRight();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHUDOverlayRight::execMakePrePlanningText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakePrePlanningText();
		P_NATIVE_END;
	}
	void USBZHUDOverlayRight::StaticRegisterNativesUSBZHUDOverlayRight()
	{
		UClass* Class = USBZHUDOverlayRight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakePrePlanningText", &USBZHUDOverlayRight::execMakePrePlanningText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDOverlayRight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDOverlayRight, nullptr, "MakePrePlanningText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHUDOverlayRight_NoRegister()
	{
		return USBZHUDOverlayRight::StaticClass();
	}
	struct Z_Construct_UClass_USBZHUDOverlayRight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_PrePlanningAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_PrePlanningAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHUDOverlayRight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHUDOverlayRight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHUDOverlayRight_MakePrePlanningText, "MakePrePlanningText" }, // 2237168339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDOverlayRight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHUDOverlayRight.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDOverlayRight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDOverlayRight_Statics::NewProp_Text_PrePlanningAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDOverlayRight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDOverlayRight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDOverlayRight_Statics::NewProp_Text_PrePlanningAssets = { "Text_PrePlanningAssets", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDOverlayRight, Text_PrePlanningAssets), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDOverlayRight_Statics::NewProp_Text_PrePlanningAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDOverlayRight_Statics::NewProp_Text_PrePlanningAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHUDOverlayRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDOverlayRight_Statics::NewProp_Text_PrePlanningAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHUDOverlayRight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHUDOverlayRight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHUDOverlayRight_Statics::ClassParams = {
		&USBZHUDOverlayRight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHUDOverlayRight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDOverlayRight_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHUDOverlayRight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDOverlayRight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHUDOverlayRight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHUDOverlayRight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHUDOverlayRight, 4116627674);
	template<> STARBREEZE_API UClass* StaticClass<USBZHUDOverlayRight>()
	{
		return USBZHUDOverlayRight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHUDOverlayRight(Z_Construct_UClass_USBZHUDOverlayRight, &USBZHUDOverlayRight::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHUDOverlayRight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHUDOverlayRight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
