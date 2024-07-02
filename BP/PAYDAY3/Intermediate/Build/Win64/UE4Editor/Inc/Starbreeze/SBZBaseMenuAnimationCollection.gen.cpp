// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseMenuAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseMenuAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuAnimationCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
// End Cross Module References
	void USBZBaseMenuAnimationCollection::StaticRegisterNativesUSBZBaseMenuAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZBaseMenuAnimationCollection_NoRegister()
	{
		return USBZBaseMenuAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DefaultCharacter;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SupportedCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateCollection_MetaData[];
#endif
		static void NewProp_bUpdateCollection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBaseMenuAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseMenuAnimationCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_DefaultCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseMenuAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZBaseMenuAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_DefaultCharacter = { "DefaultCharacter", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseMenuAnimationCollection, DefaultCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_DefaultCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_DefaultCharacter_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_SupportedCharacters_Inner = { "SupportedCharacters", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_SupportedCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseMenuAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZBaseMenuAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_SupportedCharacters = { "SupportedCharacters", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseMenuAnimationCollection, SupportedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_SupportedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_SupportedCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_Template_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseMenuAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZBaseMenuAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseMenuAnimationCollection, Template), Z_Construct_UClass_USBZBaseMenuAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_bUpdateCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseMenuAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZBaseMenuAnimationCollection.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_bUpdateCollection_SetBit(void* Obj)
	{
		((USBZBaseMenuAnimationCollection*)Obj)->bUpdateCollection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_bUpdateCollection = { "bUpdateCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBaseMenuAnimationCollection), &Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_bUpdateCollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_bUpdateCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_bUpdateCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_DefaultCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_SupportedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_SupportedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_Template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::NewProp_bUpdateCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseMenuAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::ClassParams = {
		&USBZBaseMenuAnimationCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseMenuAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseMenuAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseMenuAnimationCollection, 2507751305);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseMenuAnimationCollection>()
	{
		return USBZBaseMenuAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseMenuAnimationCollection(Z_Construct_UClass_USBZBaseMenuAnimationCollection, &USBZBaseMenuAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseMenuAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseMenuAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
