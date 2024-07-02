// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPopupWidgetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPopupWidgetInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPopupWidgetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPopupWidgetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPopupWidgetInterface::StaticRegisterNativesUSBZPopupWidgetInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZPopupWidgetInterface_NoRegister()
	{
		return USBZPopupWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZPopupWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPopupWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPopupWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPopupWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZPopupWidgetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPopupWidgetInterface_Statics::ClassParams = {
		&USBZPopupWidgetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPopupWidgetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPopupWidgetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPopupWidgetInterface, 1807697392);
	template<> STARBREEZE_API UClass* StaticClass<USBZPopupWidgetInterface>()
	{
		return USBZPopupWidgetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPopupWidgetInterface(Z_Construct_UClass_USBZPopupWidgetInterface, &USBZPopupWidgetInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPopupWidgetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPopupWidgetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
