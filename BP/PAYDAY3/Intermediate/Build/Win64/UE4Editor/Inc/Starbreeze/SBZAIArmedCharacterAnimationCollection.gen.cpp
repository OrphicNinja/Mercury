// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIArmedCharacterAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIArmedCharacterAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIArmedCharacterAnimationCollection::StaticRegisterNativesUSBZAIArmedCharacterAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_NoRegister()
	{
		return USBZAIArmedCharacterAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAICharacterAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIArmedCharacterAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterAnimationCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIArmedCharacterAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics::ClassParams = {
		&USBZAIArmedCharacterAnimationCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIArmedCharacterAnimationCollection, 2267130639);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIArmedCharacterAnimationCollection>()
	{
		return USBZAIArmedCharacterAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIArmedCharacterAnimationCollection(Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection, &USBZAIArmedCharacterAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIArmedCharacterAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIArmedCharacterAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
