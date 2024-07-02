// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACL() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACL::StaticRegisterNativesUAnimBoneCompressionCodec_ACL()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACL::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafetyFallbackCodec_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SafetyFallbackCodec;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafetyFallbackThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SafetyFallbackThreshold;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptimizationTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizationTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptimizationTargets;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The default codec implementation for ACL support with the minimal set of exposed features for ease of use. */" },
		{ "DisplayName", "Anim Compress ACL" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACL.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The default codec implementation for ACL support with the minimal set of exposed features for ease of use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackCodec_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackCodec = { "SafetyFallbackCodec", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, SafetyFallbackCodec), Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackCodec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackCodec_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackThreshold_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The error threshold after which we fallback on a safer encoding. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The error threshold after which we fallback on a safer encoding." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackThreshold = { "SafetyFallbackThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, SafetyFallbackThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackThreshold_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackCodec,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_SafetyFallbackThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACL::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionCodec_ACL, 3592595679);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACL>()
	{
		return UAnimBoneCompressionCodec_ACL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionCodec_ACL(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL, &UAnimBoneCompressionCodec_ACL::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimBoneCompressionCodec_ACL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
