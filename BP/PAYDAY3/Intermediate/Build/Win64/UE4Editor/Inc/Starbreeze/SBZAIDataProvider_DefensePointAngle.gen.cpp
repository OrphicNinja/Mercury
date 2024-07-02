// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDataProvider_DefensePointAngle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDataProvider_DefensePointAngle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIDataProvider_DefensePointAngle::StaticRegisterNativesUSBZAIDataProvider_DefensePointAngle()
	{
	}
	UClass* Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_NoRegister()
	{
		return USBZAIDataProvider_DefensePointAngle::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIDataProvider_DefensePointAngle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDataProvider_DefensePointAngle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::NewProp_FloatValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDataProvider_DefensePointAngle" },
		{ "ModuleRelativePath", "Public/SBZAIDataProvider_DefensePointAngle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDataProvider_DefensePointAngle, FloatValue), METADATA_PARAMS(Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::NewProp_FloatValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::NewProp_FloatValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIDataProvider_DefensePointAngle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::ClassParams = {
		&USBZAIDataProvider_DefensePointAngle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIDataProvider_DefensePointAngle, 2785596212);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIDataProvider_DefensePointAngle>()
	{
		return USBZAIDataProvider_DefensePointAngle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIDataProvider_DefensePointAngle(Z_Construct_UClass_USBZAIDataProvider_DefensePointAngle, &USBZAIDataProvider_DefensePointAngle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIDataProvider_DefensePointAngle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIDataProvider_DefensePointAngle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
