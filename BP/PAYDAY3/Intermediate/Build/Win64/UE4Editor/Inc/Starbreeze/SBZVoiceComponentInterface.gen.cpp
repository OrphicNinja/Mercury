// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoiceComponentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoiceComponentInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceComponentInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceComponentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZVoiceComponentInterface::StaticRegisterNativesUSBZVoiceComponentInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZVoiceComponentInterface_NoRegister()
	{
		return USBZVoiceComponentInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZVoiceComponentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVoiceComponentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceComponentInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVoiceComponentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVoiceComponentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZVoiceComponentInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVoiceComponentInterface_Statics::ClassParams = {
		&USBZVoiceComponentInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZVoiceComponentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceComponentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVoiceComponentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVoiceComponentInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVoiceComponentInterface, 768012060);
	template<> STARBREEZE_API UClass* StaticClass<USBZVoiceComponentInterface>()
	{
		return USBZVoiceComponentInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVoiceComponentInterface(Z_Construct_UClass_USBZVoiceComponentInterface, &USBZVoiceComponentInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVoiceComponentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVoiceComponentInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
