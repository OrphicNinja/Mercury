// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHandheldEquippable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHandheldEquippable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHandheldEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHandheldEquippable();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZHandheldEquippable::StaticRegisterNativesASBZHandheldEquippable()
	{
	}
	UClass* Z_Construct_UClass_ASBZHandheldEquippable_NoRegister()
	{
		return ASBZHandheldEquippable::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHandheldEquippable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHandheldEquippable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZEquippable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHandheldEquippable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHandheldEquippable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHandheldEquippable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHandheldEquippable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHandheldEquippable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHandheldEquippable_Statics::ClassParams = {
		&ASBZHandheldEquippable::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHandheldEquippable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHandheldEquippable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHandheldEquippable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHandheldEquippable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHandheldEquippable, 3682993073);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHandheldEquippable>()
	{
		return ASBZHandheldEquippable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHandheldEquippable(Z_Construct_UClass_ASBZHandheldEquippable, &ASBZHandheldEquippable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHandheldEquippable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHandheldEquippable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
