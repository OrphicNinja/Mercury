// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAssetDatabaseManagerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAssetDatabaseManagerInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetDatabaseManagerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetDatabaseManagerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAssetDatabaseManagerInterface::StaticRegisterNativesUSBZAssetDatabaseManagerInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZAssetDatabaseManagerInterface_NoRegister()
	{
		return USBZAssetDatabaseManagerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManagerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZAssetDatabaseManagerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics::ClassParams = {
		&USBZAssetDatabaseManagerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAssetDatabaseManagerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAssetDatabaseManagerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAssetDatabaseManagerInterface, 1776138064);
	template<> STARBREEZE_API UClass* StaticClass<USBZAssetDatabaseManagerInterface>()
	{
		return USBZAssetDatabaseManagerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAssetDatabaseManagerInterface(Z_Construct_UClass_USBZAssetDatabaseManagerInterface, &USBZAssetDatabaseManagerInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAssetDatabaseManagerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAssetDatabaseManagerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
