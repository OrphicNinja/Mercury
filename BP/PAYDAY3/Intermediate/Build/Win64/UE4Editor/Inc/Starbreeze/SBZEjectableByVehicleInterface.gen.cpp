// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEjectableByVehicleInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEjectableByVehicleInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEjectableByVehicleInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEjectableByVehicleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEjectableByVehicleInterface::StaticRegisterNativesUSBZEjectableByVehicleInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZEjectableByVehicleInterface_NoRegister()
	{
		return USBZEjectableByVehicleInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEjectableByVehicleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZEjectableByVehicleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics::ClassParams = {
		&USBZEjectableByVehicleInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEjectableByVehicleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEjectableByVehicleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEjectableByVehicleInterface, 1056425720);
	template<> STARBREEZE_API UClass* StaticClass<USBZEjectableByVehicleInterface>()
	{
		return USBZEjectableByVehicleInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEjectableByVehicleInterface(Z_Construct_UClass_USBZEjectableByVehicleInterface, &USBZEjectableByVehicleInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEjectableByVehicleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEjectableByVehicleInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
