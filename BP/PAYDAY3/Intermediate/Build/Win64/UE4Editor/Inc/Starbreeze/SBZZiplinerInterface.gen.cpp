// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZiplinerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZiplinerInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplinerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplinerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZZiplinerInterface::StaticRegisterNativesUSBZZiplinerInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZZiplinerInterface_NoRegister()
	{
		return USBZZiplinerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZZiplinerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZZiplinerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplinerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZiplinerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZZiplinerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZZiplinerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZZiplinerInterface_Statics::ClassParams = {
		&USBZZiplinerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZZiplinerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplinerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZZiplinerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZZiplinerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZZiplinerInterface, 2887011139);
	template<> STARBREEZE_API UClass* StaticClass<USBZZiplinerInterface>()
	{
		return USBZZiplinerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZZiplinerInterface(Z_Construct_UClass_USBZZiplinerInterface, &USBZZiplinerInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZZiplinerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZZiplinerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
