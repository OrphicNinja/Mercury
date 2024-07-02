// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSmokeGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSmokeGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmokeGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmokeGrenade();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGasGrenade();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZSmokeGrenade::StaticRegisterNativesASBZSmokeGrenade()
	{
	}
	UClass* Z_Construct_UClass_ASBZSmokeGrenade_NoRegister()
	{
		return ASBZSmokeGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSmokeGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSmokeGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGasGrenade,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmokeGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSmokeGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSmokeGrenade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSmokeGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSmokeGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSmokeGrenade_Statics::ClassParams = {
		&ASBZSmokeGrenade::StaticClass,
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
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSmokeGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmokeGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSmokeGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSmokeGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSmokeGrenade, 1294983419);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSmokeGrenade>()
	{
		return ASBZSmokeGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSmokeGrenade(Z_Construct_UClass_ASBZSmokeGrenade, &ASBZSmokeGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSmokeGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSmokeGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
