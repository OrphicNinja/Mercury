// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGateNavAgentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGateNavAgentInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavAgentInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavAgentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGateNavAgentInterface::StaticRegisterNativesUSBZGateNavAgentInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZGateNavAgentInterface_NoRegister()
	{
		return USBZGateNavAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZGateNavAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGateNavAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGateNavAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGateNavAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZGateNavAgentInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGateNavAgentInterface_Statics::ClassParams = {
		&USBZGateNavAgentInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZGateNavAgentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavAgentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGateNavAgentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGateNavAgentInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGateNavAgentInterface, 685114106);
	template<> STARBREEZE_API UClass* StaticClass<USBZGateNavAgentInterface>()
	{
		return USBZGateNavAgentInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGateNavAgentInterface(Z_Construct_UClass_USBZGateNavAgentInterface, &USBZGateNavAgentInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGateNavAgentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGateNavAgentInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
