// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRuntimeInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRuntimeInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRuntimeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRuntimeInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZRuntimeInterface::StaticRegisterNativesUSBZRuntimeInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZRuntimeInterface_NoRegister()
	{
		return USBZRuntimeInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZRuntimeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRuntimeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRuntimeInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRuntimeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRuntimeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZRuntimeInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRuntimeInterface_Statics::ClassParams = {
		&USBZRuntimeInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZRuntimeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRuntimeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRuntimeInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRuntimeInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRuntimeInterface, 656400047);
	template<> STARBREEZE_API UClass* StaticClass<USBZRuntimeInterface>()
	{
		return USBZRuntimeInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRuntimeInterface(Z_Construct_UClass_USBZRuntimeInterface, &USBZRuntimeInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRuntimeInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRuntimeInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
