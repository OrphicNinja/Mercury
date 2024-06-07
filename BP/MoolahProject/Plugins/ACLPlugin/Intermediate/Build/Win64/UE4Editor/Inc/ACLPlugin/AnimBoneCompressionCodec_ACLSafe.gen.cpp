// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACLSafe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLSafe() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACLSafe::StaticRegisterNativesUAnimBoneCompressionCodec_ACLSafe()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACLSafe::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The default codec implementation for ACL support with the minimal set of exposed features for ease of use. */" },
		{ "DisplayName", "Anim Compress ACL Safe" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLSafe.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLSafe.h" },
		{ "ToolTip", "The default codec implementation for ACL support with the minimal set of exposed features for ease of use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLSafe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACLSafe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionCodec_ACLSafe, 93502366);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLSafe>()
	{
		return UAnimBoneCompressionCodec_ACLSafe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionCodec_ACLSafe(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe, &UAnimBoneCompressionCodec_ACLSafe::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimBoneCompressionCodec_ACLSafe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLSafe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
