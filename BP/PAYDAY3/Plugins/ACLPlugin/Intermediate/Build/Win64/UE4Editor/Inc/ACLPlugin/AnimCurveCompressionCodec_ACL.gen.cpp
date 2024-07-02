// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimCurveCompressionCodec_ACL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_ACL() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UAnimCurveCompressionCodec_ACL::StaticRegisterNativesUAnimCurveCompressionCodec_ACL()
	{
	}
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_NoRegister()
	{
		return UAnimCurveCompressionCodec_ACL::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurvePrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurvePrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargetPositionPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphTargetPositionPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargetSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MorphTargetSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The default codec implementation for ACL curve compression support with the minimal set of exposed features for ease of use. */" },
		{ "DisplayName", "ACL Curves" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimCurveCompressionCodec_ACL.h" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "The default codec implementation for ACL curve compression support with the minimal set of exposed features for ease of use." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The curve precision to target when compressing the animation curves. */" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "The curve precision to target when compressing the animation curves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision = { "CurvePrecision", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_ACL, CurvePrecision), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The mesh deformation precision to target when compressing morph target animation curves. */" },
		{ "EditCondition", "MorphTargetSource != nullptr" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "The mesh deformation precision to target when compressing morph target animation curves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision = { "MorphTargetPositionPrecision", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_ACL, MorphTargetPositionPrecision), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal mesh used to estimate the morph target deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "The skeletal mesh used to estimate the morph target deformation during compression." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource = { "MorphTargetSource", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_ACL, MorphTargetSource), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_ACL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::ClassParams = {
		&UAnimCurveCompressionCodec_ACL::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::PropPointers), 0),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCurveCompressionCodec_ACL, 571433599);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimCurveCompressionCodec_ACL>()
	{
		return UAnimCurveCompressionCodec_ACL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCurveCompressionCodec_ACL(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL, &UAnimCurveCompressionCodec_ACL::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimCurveCompressionCodec_ACL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_ACL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
