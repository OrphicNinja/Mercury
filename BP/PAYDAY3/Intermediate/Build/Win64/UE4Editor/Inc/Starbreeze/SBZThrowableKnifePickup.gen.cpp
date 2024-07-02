// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableKnifePickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableKnifePickup() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowableKnifePickup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowableKnifePickup();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoPickup();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZThrowableKnifePickup::StaticRegisterNativesASBZThrowableKnifePickup()
	{
	}
	UClass* Z_Construct_UClass_ASBZThrowableKnifePickup_NoRegister()
	{
		return ASBZThrowableKnifePickup::StaticClass();
	}
	struct Z_Construct_UClass_ASBZThrowableKnifePickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZThrowableKnifePickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAmmoPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnifePickup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThrowableKnifePickup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnifePickup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZThrowableKnifePickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZThrowableKnifePickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZThrowableKnifePickup_Statics::ClassParams = {
		&ASBZThrowableKnifePickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnifePickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnifePickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZThrowableKnifePickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZThrowableKnifePickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZThrowableKnifePickup, 593134621);
	template<> STARBREEZE_API UClass* StaticClass<ASBZThrowableKnifePickup>()
	{
		return ASBZThrowableKnifePickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZThrowableKnifePickup(Z_Construct_UClass_ASBZThrowableKnifePickup, &ASBZThrowableKnifePickup::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZThrowableKnifePickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZThrowableKnifePickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
