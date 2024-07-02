// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAsyncLoadLevelInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAsyncLoadLevelInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAsyncLoadLevelInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAsyncLoadLevelInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAsyncLoadLevelInterface::StaticRegisterNativesUSBZAsyncLoadLevelInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZAsyncLoadLevelInterface_NoRegister()
	{
		return USBZAsyncLoadLevelInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAsyncLoadLevelInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZAsyncLoadLevelInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics::ClassParams = {
		&USBZAsyncLoadLevelInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAsyncLoadLevelInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAsyncLoadLevelInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAsyncLoadLevelInterface, 4112552773);
	template<> STARBREEZE_API UClass* StaticClass<USBZAsyncLoadLevelInterface>()
	{
		return USBZAsyncLoadLevelInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAsyncLoadLevelInterface(Z_Construct_UClass_USBZAsyncLoadLevelInterface, &USBZAsyncLoadLevelInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAsyncLoadLevelInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAsyncLoadLevelInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
