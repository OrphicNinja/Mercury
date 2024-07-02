// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficSpline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficSpline() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficSpline_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficSpline();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficManager_NoRegister();
// End Cross Module References
	void ASBZTrafficSpline::StaticRegisterNativesASBZTrafficSpline()
	{
	}
	UClass* Z_Construct_UClass_ASBZTrafficSpline_NoRegister()
	{
		return ASBZTrafficSpline::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTrafficSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineTypeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SplineTypeFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTypeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VehicleTypeFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTrafficSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSpline,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficSpline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTrafficSpline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_TrafficManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpline" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_TrafficManager = { "TrafficManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficSpline, TrafficManager), Z_Construct_UClass_USBZTrafficManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_TrafficManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_TrafficManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_SplineTypeFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpline" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_SplineTypeFlags = { "SplineTypeFlags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficSpline, SplineTypeFlags), METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_SplineTypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_SplineTypeFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_VehicleTypeFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpline" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_VehicleTypeFlags = { "VehicleTypeFlags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficSpline, VehicleTypeFlags), METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_VehicleTypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_VehicleTypeFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTrafficSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_TrafficManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_SplineTypeFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficSpline_Statics::NewProp_VehicleTypeFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTrafficSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTrafficSpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTrafficSpline_Statics::ClassParams = {
		&ASBZTrafficSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZTrafficSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTrafficSpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTrafficSpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTrafficSpline, 1820779122);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTrafficSpline>()
	{
		return ASBZTrafficSpline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTrafficSpline(Z_Construct_UClass_ASBZTrafficSpline, &ASBZTrafficSpline::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTrafficSpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTrafficSpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
