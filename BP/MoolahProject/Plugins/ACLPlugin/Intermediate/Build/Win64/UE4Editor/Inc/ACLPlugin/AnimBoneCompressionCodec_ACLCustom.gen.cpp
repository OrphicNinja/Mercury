// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACLCustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLCustom() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACLCustom::StaticRegisterNativesUAnimBoneCompressionCodec_ACLCustom()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACLCustom::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantRotationThresholdAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantRotationThresholdAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantTranslationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantTranslationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantScaleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantScaleThreshold;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptimizationTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizationTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptimizationTargets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The custom codec implementation for ACL support with all features supported. */" },
		{ "DisplayName", "Anim Compress ACL Custom" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The custom codec implementation for ACL support with all features supported." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The rotation format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The rotation format to use." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat = { "RotationFormat", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, RotationFormat), Z_Construct_UEnum_ACLPlugin_ACLRotationFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The translation format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The translation format to use." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat = { "TranslationFormat", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, TranslationFormat), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The scale format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The scale format to use." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat = { "ScaleFormat", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ScaleFormat), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle_MetaData[] = {
		{ "Category", "Clip" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold used to detect constant rotation tracks. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The threshold used to detect constant rotation tracks." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle = { "ConstantRotationThresholdAngle", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ConstantRotationThresholdAngle), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold_MetaData[] = {
		{ "Category", "Clip" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold used to detect constant translation tracks. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The threshold used to detect constant translation tracks." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold = { "ConstantTranslationThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ConstantTranslationThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold_MetaData[] = {
		{ "Category", "Clip" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold used to detect constant scale tracks. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The threshold used to detect constant scale tracks." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold = { "ConstantScaleThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ConstantScaleThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLCustom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACLCustom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers), 0),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionCodec_ACLCustom, 1209954785);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLCustom>()
	{
		return UAnimBoneCompressionCodec_ACLCustom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionCodec_ACLCustom(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom, &UAnimBoneCompressionCodec_ACLCustom::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimBoneCompressionCodec_ACLCustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLCustom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
