// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewCharacterAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewCharacterAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewCharacterAnimationCollection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAICrewCharacterAnimationCollection::StaticRegisterNativesUSBZAICrewCharacterAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_NoRegister()
	{
		return USBZAICrewCharacterAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIArmedCharacterAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICrewCharacterAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterAnimationCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICrewCharacterAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics::ClassParams = {
		&USBZAICrewCharacterAnimationCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICrewCharacterAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICrewCharacterAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICrewCharacterAnimationCollection, 3103670149);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICrewCharacterAnimationCollection>()
	{
		return USBZAICrewCharacterAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICrewCharacterAnimationCollection(Z_Construct_UClass_USBZAICrewCharacterAnimationCollection, &USBZAICrewCharacterAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICrewCharacterAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICrewCharacterAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
