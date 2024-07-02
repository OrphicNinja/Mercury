// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFirstAidPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFirstAidPack() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFirstAidPack_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFirstAidPack();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHealthPlaceable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZFirstAidPack::StaticRegisterNativesASBZFirstAidPack()
	{
	}
	UClass* Z_Construct_UClass_ASBZFirstAidPack_NoRegister()
	{
		return ASBZFirstAidPack::StaticClass();
	}
	struct Z_Construct_UClass_ASBZFirstAidPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZFirstAidPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZHealthPlaceable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFirstAidPack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFirstAidPack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFirstAidPack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZFirstAidPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZFirstAidPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZFirstAidPack_Statics::ClassParams = {
		&ASBZFirstAidPack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZFirstAidPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFirstAidPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZFirstAidPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZFirstAidPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZFirstAidPack, 1790077350);
	template<> STARBREEZE_API UClass* StaticClass<ASBZFirstAidPack>()
	{
		return ASBZFirstAidPack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZFirstAidPack(Z_Construct_UClass_ASBZFirstAidPack, &ASBZFirstAidPack::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZFirstAidPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZFirstAidPack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
