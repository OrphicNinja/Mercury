// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTypeInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTypeInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTypeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTypeInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTypeInterface::StaticRegisterNativesUSBZTypeInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZTypeInterface_NoRegister()
	{
		return USBZTypeInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZTypeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTypeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTypeInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTypeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTypeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZTypeInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTypeInterface_Statics::ClassParams = {
		&USBZTypeInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTypeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTypeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTypeInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTypeInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTypeInterface, 373219886);
	template<> STARBREEZE_API UClass* StaticClass<USBZTypeInterface>()
	{
		return USBZTypeInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTypeInterface(Z_Construct_UClass_USBZTypeInterface, &USBZTypeInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTypeInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTypeInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
