// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayTags() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayTags_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayTags();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGameplayTags::StaticRegisterNativesUSBZGameplayTags()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayTags_NoRegister()
	{
		return USBZGameplayTags::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayTags_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayTags.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayTags.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayTags>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayTags_Statics::ClassParams = {
		&USBZGameplayTags::StaticClass,
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
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayTags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayTags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayTags_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayTags, 305365669);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayTags>()
	{
		return USBZGameplayTags::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayTags(Z_Construct_UClass_USBZGameplayTags, &USBZGameplayTags::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayTags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayTags);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
