// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableSentry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableSentry() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableSentry_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableSentry();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSentryGun_NoRegister();
// End Cross Module References
	void ASBZPlaceableSentry::StaticRegisterNativesASBZPlaceableSentry()
	{
	}
	UClass* Z_Construct_UClass_ASBZPlaceableSentry_NoRegister()
	{
		return ASBZPlaceableSentry::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlaceableSentry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SentryClassToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlaceableSentry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableCharges,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSentry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableSentry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSentry.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSentry_Statics::NewProp_SentryClassToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSentry" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSentry.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlaceableSentry_Statics::NewProp_SentryClassToSpawn = { "SentryClassToSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableSentry, SentryClassToSpawn), Z_Construct_UClass_ASBZSentryGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSentry_Statics::NewProp_SentryClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSentry_Statics::NewProp_SentryClassToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlaceableSentry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSentry_Statics::NewProp_SentryClassToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlaceableSentry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlaceableSentry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlaceableSentry_Statics::ClassParams = {
		&ASBZPlaceableSentry::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPlaceableSentry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSentry_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSentry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSentry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlaceableSentry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlaceableSentry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlaceableSentry, 2911607060);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlaceableSentry>()
	{
		return ASBZPlaceableSentry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlaceableSentry(Z_Construct_UClass_ASBZPlaceableSentry, &ASBZPlaceableSentry::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlaceableSentry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlaceableSentry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
