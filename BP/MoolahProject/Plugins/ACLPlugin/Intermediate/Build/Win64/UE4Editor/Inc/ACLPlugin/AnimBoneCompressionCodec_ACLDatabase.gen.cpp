// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACLDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLDatabase() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACLDatabase::StaticRegisterNativesUAnimBoneCompressionCodec_ACLDatabase()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACLDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DatabaseAsset;
#if WITH_EDITORONLY_DATA
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
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The default database codec implementation for ACL support with the minimal set of exposed features for ease of use. */" },
		{ "DisplayName", "Anim Compress ACL Database" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ToolTip", "The default database codec implementation for ACL support with the minimal set of exposed features for ease of use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_DatabaseAsset_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The database asset that will hold the compressed animation data. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ToolTip", "The database asset that will hold the compressed animation data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_DatabaseAsset = { "DatabaseAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLDatabase, DatabaseAsset), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_DatabaseAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_DatabaseAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLDatabase, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_DatabaseAsset,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACLDatabase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionCodec_ACLDatabase, 4002456364);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLDatabase>()
	{
		return UAnimBoneCompressionCodec_ACLDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionCodec_ACLDatabase(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase, &UAnimBoneCompressionCodec_ACLDatabase::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimBoneCompressionCodec_ACLDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
