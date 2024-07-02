// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCoverPointContainerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCoverPointContainerInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoverPointContainerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoverPointContainerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCoverPointContainerInterface::StaticRegisterNativesUSBZCoverPointContainerInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZCoverPointContainerInterface_NoRegister()
	{
		return USBZCoverPointContainerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZCoverPointContainerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCoverPointContainerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCoverPointContainerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPointContainerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCoverPointContainerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZCoverPointContainerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCoverPointContainerInterface_Statics::ClassParams = {
		&USBZCoverPointContainerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZCoverPointContainerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCoverPointContainerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCoverPointContainerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCoverPointContainerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCoverPointContainerInterface, 237883225);
	template<> STARBREEZE_API UClass* StaticClass<USBZCoverPointContainerInterface>()
	{
		return USBZCoverPointContainerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCoverPointContainerInterface(Z_Construct_UClass_USBZCoverPointContainerInterface, &USBZCoverPointContainerInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCoverPointContainerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCoverPointContainerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
