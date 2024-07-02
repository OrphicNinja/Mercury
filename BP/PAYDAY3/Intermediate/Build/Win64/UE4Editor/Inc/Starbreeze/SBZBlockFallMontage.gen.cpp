// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlockFallMontage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlockFallMontage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockFallMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockFallMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBlockFallMontage::StaticRegisterNativesUSBZBlockFallMontage()
	{
	}
	UClass* Z_Construct_UClass_USBZBlockFallMontage_NoRegister()
	{
		return USBZBlockFallMontage::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlockFallMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlockFallMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlockFallMontage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZBlockFallMontage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlockFallMontage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlockFallMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlockFallMontage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlockFallMontage_Statics::ClassParams = {
		&USBZBlockFallMontage::StaticClass,
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
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlockFallMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlockFallMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlockFallMontage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlockFallMontage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlockFallMontage, 2925400653);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlockFallMontage>()
	{
		return USBZBlockFallMontage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlockFallMontage(Z_Construct_UClass_USBZBlockFallMontage, &USBZBlockFallMontage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlockFallMontage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlockFallMontage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
