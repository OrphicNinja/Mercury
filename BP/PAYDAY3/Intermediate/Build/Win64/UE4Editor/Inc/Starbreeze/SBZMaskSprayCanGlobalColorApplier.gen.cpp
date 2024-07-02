// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskSprayCanGlobalColorApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskSprayCanGlobalColorApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMaskSprayCanGlobalColorApplier::StaticRegisterNativesUSBZMaskSprayCanGlobalColorApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_NoRegister()
	{
		return USBZMaskSprayCanGlobalColorApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMaskSprayCanApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskSprayCanGlobalColorApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskSprayCanGlobalColorApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskSprayCanGlobalColorApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics::ClassParams = {
		&USBZMaskSprayCanGlobalColorApplier::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskSprayCanGlobalColorApplier, 3130826174);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskSprayCanGlobalColorApplier>()
	{
		return USBZMaskSprayCanGlobalColorApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskSprayCanGlobalColorApplier(Z_Construct_UClass_USBZMaskSprayCanGlobalColorApplier, &USBZMaskSprayCanGlobalColorApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskSprayCanGlobalColorApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskSprayCanGlobalColorApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
