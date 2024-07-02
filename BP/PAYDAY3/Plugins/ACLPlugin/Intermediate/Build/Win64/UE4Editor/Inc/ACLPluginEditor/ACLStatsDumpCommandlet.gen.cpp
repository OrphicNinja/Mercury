// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPluginEditor/Classes/ACLStatsDumpCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACLStatsDumpCommandlet() {}
// Cross Module References
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLStatsDumpCommandlet_NoRegister();
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLStatsDumpCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_ACLPluginEditor();
// End Cross Module References
	void UACLStatsDumpCommandlet::StaticRegisterNativesUACLStatsDumpCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UACLStatsDumpCommandlet_NoRegister()
	{
		return UACLStatsDumpCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UACLStatsDumpCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This commandlet is used to extract and dump animation compression statistics.\n *\n * It supports the following arguments: -acl=<path> -stats=<path> -MasterTolerance=<tolerance>\n *\n *   acl: This is the path to the input directory that contains the ACL SJSON animation clips.\n *   stats: This is the path to the output directory that will contain the extracted SJSON statistics.\n *   MasterTolerance: This is the master tolerance used by the UE4 Automatic compression algorithm. Defaults to 0.1cm.\n */" },
		{ "IncludePath", "ACLStatsDumpCommandlet.h" },
		{ "ModuleRelativePath", "Classes/ACLStatsDumpCommandlet.h" },
		{ "ToolTip", "* This commandlet is used to extract and dump animation compression statistics.\n*\n* It supports the following arguments: -acl=<path> -stats=<path> -MasterTolerance=<tolerance>\n*\n*   acl: This is the path to the input directory that contains the ACL SJSON animation clips.\n*   stats: This is the path to the output directory that will contain the extracted SJSON statistics.\n*   MasterTolerance: This is the master tolerance used by the UE4 Automatic compression algorithm. Defaults to 0.1cm." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACLStatsDumpCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::ClassParams = {
		&UACLStatsDumpCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACLStatsDumpCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACLStatsDumpCommandlet, 1219039898);
	template<> ACLPLUGINEDITOR_API UClass* StaticClass<UACLStatsDumpCommandlet>()
	{
		return UACLStatsDumpCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACLStatsDumpCommandlet(Z_Construct_UClass_UACLStatsDumpCommandlet, &UACLStatsDumpCommandlet::StaticClass, TEXT("/Script/ACLPluginEditor"), TEXT("UACLStatsDumpCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACLStatsDumpCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
