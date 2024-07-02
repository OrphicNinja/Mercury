// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomConnectorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomConnectorInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZRoomConnectorInterface::StaticRegisterNativesUSBZRoomConnectorInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister()
	{
		return USBZRoomConnectorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZRoomConnectorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRoomConnectorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomConnectorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRoomConnectorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZRoomConnectorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRoomConnectorInterface_Statics::ClassParams = {
		&USBZRoomConnectorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRoomConnectorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRoomConnectorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRoomConnectorInterface, 2858213268);
	template<> STARBREEZE_API UClass* StaticClass<USBZRoomConnectorInterface>()
	{
		return USBZRoomConnectorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRoomConnectorInterface(Z_Construct_UClass_USBZRoomConnectorInterface, &USBZRoomConnectorInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRoomConnectorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRoomConnectorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
