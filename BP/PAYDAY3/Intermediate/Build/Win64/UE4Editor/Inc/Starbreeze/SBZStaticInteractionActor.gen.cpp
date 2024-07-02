// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStaticInteractionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStaticInteractionActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticInteractionActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticInteractionActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractionActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZStaticInteractionActor::StaticRegisterNativesASBZStaticInteractionActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZStaticInteractionActor_NoRegister()
	{
		return ASBZStaticInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStaticInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStaticInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZInteractionActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStaticInteractionActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticInteractionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStaticInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStaticInteractionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStaticInteractionActor_Statics::ClassParams = {
		&ASBZStaticInteractionActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZStaticInteractionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticInteractionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStaticInteractionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStaticInteractionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStaticInteractionActor, 1179642416);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStaticInteractionActor>()
	{
		return ASBZStaticInteractionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStaticInteractionActor(Z_Construct_UClass_ASBZStaticInteractionActor, &ASBZStaticInteractionActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStaticInteractionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStaticInteractionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
