// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIObjectiveInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIObjectiveInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIObjectiveInterface::StaticRegisterNativesUSBZAIObjectiveInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZAIObjectiveInterface_NoRegister()
	{
		return USBZAIObjectiveInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIObjectiveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIObjectiveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIObjectiveInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIObjectiveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZAIObjectiveInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIObjectiveInterface_Statics::ClassParams = {
		&USBZAIObjectiveInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIObjectiveInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIObjectiveInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIObjectiveInterface, 1470643151);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIObjectiveInterface>()
	{
		return USBZAIObjectiveInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIObjectiveInterface(Z_Construct_UClass_USBZAIObjectiveInterface, &USBZAIObjectiveInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIObjectiveInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIObjectiveInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
