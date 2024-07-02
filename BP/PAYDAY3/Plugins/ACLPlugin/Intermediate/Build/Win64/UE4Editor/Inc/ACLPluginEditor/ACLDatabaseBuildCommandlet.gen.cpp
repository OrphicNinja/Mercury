// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPluginEditor/Classes/ACLDatabaseBuildCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACLDatabaseBuildCommandlet() {}
// Cross Module References
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet_NoRegister();
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_ACLPluginEditor();
// End Cross Module References
	void UACLDatabaseBuildCommandlet::StaticRegisterNativesUACLDatabaseBuildCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet_NoRegister()
	{
		return UACLDatabaseBuildCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This commandlet is used to update instances of UAnimationCompressionLibraryDatabase to ensure their mapping is up-to-date.\n */" },
		{ "IncludePath", "ACLDatabaseBuildCommandlet.h" },
		{ "ModuleRelativePath", "Classes/ACLDatabaseBuildCommandlet.h" },
		{ "ToolTip", "* This commandlet is used to update instances of UAnimationCompressionLibraryDatabase to ensure their mapping is up-to-date." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACLDatabaseBuildCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::ClassParams = {
		&UACLDatabaseBuildCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACLDatabaseBuildCommandlet, 49881533);
	template<> ACLPLUGINEDITOR_API UClass* StaticClass<UACLDatabaseBuildCommandlet>()
	{
		return UACLDatabaseBuildCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACLDatabaseBuildCommandlet(Z_Construct_UClass_UACLDatabaseBuildCommandlet, &UACLDatabaseBuildCommandlet::StaticClass, TEXT("/Script/ACLPluginEditor"), TEXT("UACLDatabaseBuildCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACLDatabaseBuildCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
