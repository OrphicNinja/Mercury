// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_UtilityCriticalSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_UtilityCriticalSection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_UtilityCriticalSection::StaticRegisterNativesUSBZBTDecorator_UtilityCriticalSection()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_NoRegister()
	{
		return USBZBTDecorator_UtilityCriticalSection::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_UtilityCriticalSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_UtilityCriticalSection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_UtilityCriticalSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics::ClassParams = {
		&USBZBTDecorator_UtilityCriticalSection::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_UtilityCriticalSection, 3222911705);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_UtilityCriticalSection>()
	{
		return USBZBTDecorator_UtilityCriticalSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_UtilityCriticalSection(Z_Construct_UClass_USBZBTDecorator_UtilityCriticalSection, &USBZBTDecorator_UtilityCriticalSection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_UtilityCriticalSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_UtilityCriticalSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
