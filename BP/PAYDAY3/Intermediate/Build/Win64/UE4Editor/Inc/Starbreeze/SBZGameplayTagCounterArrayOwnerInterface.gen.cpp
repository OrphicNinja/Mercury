// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayTagCounterArrayOwnerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayTagCounterArrayOwnerInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGameplayTagCounterArrayOwnerInterface::StaticRegisterNativesUSBZGameplayTagCounterArrayOwnerInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_NoRegister()
	{
		return USBZGameplayTagCounterArrayOwnerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayTagCounterArrayOwnerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZGameplayTagCounterArrayOwnerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics::ClassParams = {
		&USBZGameplayTagCounterArrayOwnerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayTagCounterArrayOwnerInterface, 3884870732);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayTagCounterArrayOwnerInterface>()
	{
		return USBZGameplayTagCounterArrayOwnerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayTagCounterArrayOwnerInterface(Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface, &USBZGameplayTagCounterArrayOwnerInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayTagCounterArrayOwnerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayTagCounterArrayOwnerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
