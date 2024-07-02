// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerAnimationCollectionTPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerAnimationCollectionTPP() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionTPP();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerAnimationCollectionTPP::StaticRegisterNativesUSBZPlayerAnimationCollectionTPP()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_NoRegister()
	{
		return USBZPlayerAnimationCollectionTPP::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerAnimationCollectionTPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationCollectionTPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerAnimationCollectionTPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics::ClassParams = {
		&USBZPlayerAnimationCollectionTPP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionTPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerAnimationCollectionTPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerAnimationCollectionTPP, 3526603056);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerAnimationCollectionTPP>()
	{
		return USBZPlayerAnimationCollectionTPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerAnimationCollectionTPP(Z_Construct_UClass_USBZPlayerAnimationCollectionTPP, &USBZPlayerAnimationCollectionTPP::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerAnimationCollectionTPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerAnimationCollectionTPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
