// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHandCuffAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHandCuffAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHandCuffAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHandCuffAnimationCollection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHandCuffAnimationCollection::StaticRegisterNativesUSBZHandCuffAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZHandCuffAnimationCollection_NoRegister()
	{
		return USBZHandCuffAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippableAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHandCuffAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHandCuffAnimationCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHandCuffAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics::ClassParams = {
		&USBZHandCuffAnimationCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHandCuffAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHandCuffAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHandCuffAnimationCollection, 829806617);
	template<> STARBREEZE_API UClass* StaticClass<USBZHandCuffAnimationCollection>()
	{
		return USBZHandCuffAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHandCuffAnimationCollection(Z_Construct_UClass_USBZHandCuffAnimationCollection, &USBZHandCuffAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHandCuffAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHandCuffAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
