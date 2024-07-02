// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDrillMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDrillMaterial() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDrillMaterial_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDrillMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDrillMatData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZDrillMaterial::StaticRegisterNativesUSBZDrillMaterial()
	{
	}
	UClass* Z_Construct_UClass_USBZDrillMaterial_NoRegister()
	{
		return USBZDrillMaterial::StaticClass();
	}
	struct Z_Construct_UClass_USBZDrillMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FastSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDrillMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDrillMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_NormalSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillMaterial" },
		{ "ModuleRelativePath", "Public/SBZDrillMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillMaterial, NormalSpeed), Z_Construct_UScriptStruct_FSBZDrillMatData, METADATA_PARAMS(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_NormalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_NormalSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_FastSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillMaterial" },
		{ "ModuleRelativePath", "Public/SBZDrillMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_FastSpeed = { "FastSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillMaterial, FastSpeed), Z_Construct_UScriptStruct_FSBZDrillMatData, METADATA_PARAMS(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_FastSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_FastSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillMaterial" },
		{ "ModuleRelativePath", "Public/SBZDrillMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillMaterial, Duration), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_MinimumProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillMaterial" },
		{ "ModuleRelativePath", "Public/SBZDrillMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_MinimumProgress = { "MinimumProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillMaterial, MinimumProgress), METADATA_PARAMS(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_MinimumProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_MinimumProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDrillMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_NormalSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_FastSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillMaterial_Statics::NewProp_MinimumProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDrillMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDrillMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDrillMaterial_Statics::ClassParams = {
		&USBZDrillMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDrillMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillMaterial_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDrillMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDrillMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDrillMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDrillMaterial, 2709092343);
	template<> STARBREEZE_API UClass* StaticClass<USBZDrillMaterial>()
	{
		return USBZDrillMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDrillMaterial(Z_Construct_UClass_USBZDrillMaterial, &USBZDrillMaterial::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDrillMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDrillMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
