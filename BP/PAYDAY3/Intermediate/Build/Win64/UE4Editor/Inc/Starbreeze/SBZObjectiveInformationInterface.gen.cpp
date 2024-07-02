// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjectiveInformationInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjectiveInformationInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveInformationInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveInformationInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZObjectiveInformationInterface::StaticRegisterNativesUSBZObjectiveInformationInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZObjectiveInformationInterface_NoRegister()
	{
		return USBZObjectiveInformationInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZObjectiveInformationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObjectiveInformationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveInformationInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveInformationInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObjectiveInformationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZObjectiveInformationInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObjectiveInformationInterface_Statics::ClassParams = {
		&USBZObjectiveInformationInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveInformationInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveInformationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObjectiveInformationInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObjectiveInformationInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObjectiveInformationInterface, 3765148686);
	template<> STARBREEZE_API UClass* StaticClass<USBZObjectiveInformationInterface>()
	{
		return USBZObjectiveInformationInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObjectiveInformationInterface(Z_Construct_UClass_USBZObjectiveInformationInterface, &USBZObjectiveInformationInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObjectiveInformationInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObjectiveInformationInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
