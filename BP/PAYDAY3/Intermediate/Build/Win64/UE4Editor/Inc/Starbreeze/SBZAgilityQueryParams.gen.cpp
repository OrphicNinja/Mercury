// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityQueryParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityQueryParams() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityQueryParams_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityQueryParams();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam();
// End Cross Module References
	void USBZAgilityQueryParams::StaticRegisterNativesUSBZAgilityQueryParams()
	{
	}
	UClass* Z_Construct_UClass_USBZAgilityQueryParams_NoRegister()
	{
		return USBZAgilityQueryParams::StaticClass();
	}
	struct Z_Construct_UClass_USBZAgilityQueryParams_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleDetectionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObstacleDetectionProfileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RowQueryParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowQueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowQueryParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAgilityQueryParams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityQueryParams_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAgilityQueryParams.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityQueryParams.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityQueryParams" },
		{ "ModuleRelativePath", "Public/SBZAgilityQueryParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilityQueryParams, Radius), METADATA_PARAMS(Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_ObstacleDetectionProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityQueryParams" },
		{ "ModuleRelativePath", "Public/SBZAgilityQueryParams.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_ObstacleDetectionProfileName = { "ObstacleDetectionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilityQueryParams, ObstacleDetectionProfileName), METADATA_PARAMS(Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_ObstacleDetectionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_ObstacleDetectionProfileName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_RowQueryParams_Inner = { "RowQueryParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_RowQueryParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityQueryParams" },
		{ "ModuleRelativePath", "Public/SBZAgilityQueryParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_RowQueryParams = { "RowQueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilityQueryParams, RowQueryParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_RowQueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_RowQueryParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAgilityQueryParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_ObstacleDetectionProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_RowQueryParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityQueryParams_Statics::NewProp_RowQueryParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAgilityQueryParams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAgilityQueryParams>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAgilityQueryParams_Statics::ClassParams = {
		&USBZAgilityQueryParams::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAgilityQueryParams_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityQueryParams_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAgilityQueryParams_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityQueryParams_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAgilityQueryParams()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAgilityQueryParams_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAgilityQueryParams, 424494807);
	template<> STARBREEZE_API UClass* StaticClass<USBZAgilityQueryParams>()
	{
		return USBZAgilityQueryParams::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAgilityQueryParams(Z_Construct_UClass_USBZAgilityQueryParams, &USBZAgilityQueryParams::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAgilityQueryParams"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAgilityQueryParams);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
