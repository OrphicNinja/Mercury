// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCableComponentWindApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCableComponentWindApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCableComponentWindApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCableComponentWindApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCableComponentWindApplier::StaticRegisterNativesUSBZCableComponentWindApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZCableComponentWindApplier_NoRegister()
	{
		return USBZCableComponentWindApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZCableComponentWindApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCableComponentWindApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWindApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponentWindApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCableComponentWindApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCableComponentWindApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCableComponentWindApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCableComponentWindApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCableComponentWindApplier_Statics::ClassParams = {
		&USBZCableComponentWindApplier::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCableComponentWindApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponentWindApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCableComponentWindApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCableComponentWindApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCableComponentWindApplier, 1740784200);
	template<> STARBREEZE_API UClass* StaticClass<USBZCableComponentWindApplier>()
	{
		return USBZCableComponentWindApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCableComponentWindApplier(Z_Construct_UClass_USBZCableComponentWindApplier, &USBZCableComponentWindApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCableComponentWindApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCableComponentWindApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
