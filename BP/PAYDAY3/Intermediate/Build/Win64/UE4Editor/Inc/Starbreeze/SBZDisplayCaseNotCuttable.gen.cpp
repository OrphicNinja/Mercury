// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisplayCaseNotCuttable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisplayCaseNotCuttable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDisplayCaseNotCuttable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDisplayCaseNotCuttable();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDisplayCase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZDisplayCaseNotCuttable::StaticRegisterNativesASBZDisplayCaseNotCuttable()
	{
	}
	UClass* Z_Construct_UClass_ASBZDisplayCaseNotCuttable_NoRegister()
	{
		return ASBZDisplayCaseNotCuttable::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZDisplayCase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDisplayCaseNotCuttable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisplayCaseNotCuttable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDisplayCaseNotCuttable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics::ClassParams = {
		&ASBZDisplayCaseNotCuttable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDisplayCaseNotCuttable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDisplayCaseNotCuttable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDisplayCaseNotCuttable, 145716721);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDisplayCaseNotCuttable>()
	{
		return ASBZDisplayCaseNotCuttable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDisplayCaseNotCuttable(Z_Construct_UClass_ASBZDisplayCaseNotCuttable, &ASBZDisplayCaseNotCuttable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDisplayCaseNotCuttable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDisplayCaseNotCuttable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
