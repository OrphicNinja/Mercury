// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPawnInterface::StaticRegisterNativesUSBZPawnInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZPawnInterface_NoRegister()
	{
		return USBZPawnInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZPawnInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPawnInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPawnInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZPawnInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPawnInterface_Statics::ClassParams = {
		&USBZPawnInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPawnInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPawnInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPawnInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPawnInterface, 192654657);
	template<> STARBREEZE_API UClass* StaticClass<USBZPawnInterface>()
	{
		return USBZPawnInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPawnInterface(Z_Construct_UClass_USBZPawnInterface, &USBZPawnInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPawnInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPawnInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
