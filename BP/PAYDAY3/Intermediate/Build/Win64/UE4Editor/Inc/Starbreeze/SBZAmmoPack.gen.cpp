// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAmmoPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAmmoPack() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoPack_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoPack();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoBag();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZAmmoPack::StaticRegisterNativesASBZAmmoPack()
	{
	}
	UClass* Z_Construct_UClass_ASBZAmmoPack_NoRegister()
	{
		return ASBZAmmoPack::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAmmoPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAmmoPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAmmoBag,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmmoPack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAmmoPack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAmmoPack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAmmoPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAmmoPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAmmoPack_Statics::ClassParams = {
		&ASBZAmmoPack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZAmmoPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAmmoPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAmmoPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAmmoPack, 1217243677);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAmmoPack>()
	{
		return ASBZAmmoPack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAmmoPack(Z_Construct_UClass_ASBZAmmoPack, &ASBZAmmoPack::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAmmoPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAmmoPack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
