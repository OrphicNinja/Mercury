// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFactions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFactions() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFactions_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFactions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZFactions::StaticRegisterNativesUSBZFactions()
	{
	}
	UClass* Z_Construct_UClass_USBZFactions_NoRegister()
	{
		return USBZFactions::StaticClass();
	}
	struct Z_Construct_UClass_USBZFactions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFactions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFactions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFactions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFactions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFactions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFactions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFactions_Statics::ClassParams = {
		&USBZFactions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFactions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFactions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFactions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFactions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFactions, 2364414613);
	template<> STARBREEZE_API UClass* StaticClass<USBZFactions>()
	{
		return USBZFactions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFactions(Z_Construct_UClass_USBZFactions, &USBZFactions::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFactions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFactions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
