// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlockableNavlinkInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlockableNavlinkInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockableNavlinkInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBlockableNavlinkInterface::StaticRegisterNativesUSBZBlockableNavlinkInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister()
	{
		return USBZBlockableNavlinkInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlockableNavlinkInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZBlockableNavlinkInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics::ClassParams = {
		&USBZBlockableNavlinkInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlockableNavlinkInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlockableNavlinkInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlockableNavlinkInterface, 1284581533);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlockableNavlinkInterface>()
	{
		return USBZBlockableNavlinkInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlockableNavlinkInterface(Z_Construct_UClass_USBZBlockableNavlinkInterface, &USBZBlockableNavlinkInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlockableNavlinkInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlockableNavlinkInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
