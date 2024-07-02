// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSensorBlockingInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSensorBlockingInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorBlockingInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorBlockingInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSensorBlockingInterface::StaticRegisterNativesUSBZSensorBlockingInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZSensorBlockingInterface_NoRegister()
	{
		return USBZSensorBlockingInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZSensorBlockingInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSensorBlockingInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorBlockingInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSensorBlockingInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSensorBlockingInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZSensorBlockingInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSensorBlockingInterface_Statics::ClassParams = {
		&USBZSensorBlockingInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSensorBlockingInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorBlockingInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSensorBlockingInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSensorBlockingInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSensorBlockingInterface, 747668793);
	template<> STARBREEZE_API UClass* StaticClass<USBZSensorBlockingInterface>()
	{
		return USBZSensorBlockingInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSensorBlockingInterface(Z_Construct_UClass_USBZSensorBlockingInterface, &USBZSensorBlockingInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSensorBlockingInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSensorBlockingInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
