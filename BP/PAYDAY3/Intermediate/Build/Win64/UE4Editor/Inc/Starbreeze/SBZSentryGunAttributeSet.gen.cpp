// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGunAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGunAttributeSet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunAttributeSet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunAttributeSet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSentryGunAttributeSet::StaticRegisterNativesUSBZSentryGunAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryGunAttributeSet_NoRegister()
	{
		return USBZSentryGunAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryGunAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryGunAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPawnAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSentryGunAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryGunAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryGunAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryGunAttributeSet_Statics::ClassParams = {
		&USBZSentryGunAttributeSet::StaticClass,
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
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryGunAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryGunAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryGunAttributeSet, 2079092810);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryGunAttributeSet>()
	{
		return USBZSentryGunAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryGunAttributeSet(Z_Construct_UClass_USBZSentryGunAttributeSet, &USBZSentryGunAttributeSet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryGunAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryGunAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
