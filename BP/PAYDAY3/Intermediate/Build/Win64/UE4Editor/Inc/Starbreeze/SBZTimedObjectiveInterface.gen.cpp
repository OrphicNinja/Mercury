// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTimedObjectiveInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTimedObjectiveInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimedObjectiveInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTimedObjectiveInterface::StaticRegisterNativesUSBZTimedObjectiveInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister()
	{
		return USBZTimedObjectiveInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZTimedObjectiveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTimedObjectiveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTimedObjectiveInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedObjectiveInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTimedObjectiveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZTimedObjectiveInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTimedObjectiveInterface_Statics::ClassParams = {
		&USBZTimedObjectiveInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZTimedObjectiveInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTimedObjectiveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTimedObjectiveInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTimedObjectiveInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTimedObjectiveInterface, 2592817043);
	template<> STARBREEZE_API UClass* StaticClass<USBZTimedObjectiveInterface>()
	{
		return USBZTimedObjectiveInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTimedObjectiveInterface(Z_Construct_UClass_USBZTimedObjectiveInterface, &USBZTimedObjectiveInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTimedObjectiveInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTimedObjectiveInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
