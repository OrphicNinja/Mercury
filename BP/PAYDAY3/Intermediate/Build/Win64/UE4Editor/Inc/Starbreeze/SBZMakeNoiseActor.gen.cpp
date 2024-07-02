// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMakeNoiseActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMakeNoiseActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMakeNoiseActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMakeNoiseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZMakeNoiseActor::StaticRegisterNativesASBZMakeNoiseActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZMakeNoiseActor_NoRegister()
	{
		return ASBZMakeNoiseActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMakeNoiseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMakeNoiseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMakeNoiseActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMakeNoiseActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMakeNoiseActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMakeNoiseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMakeNoiseActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMakeNoiseActor_Statics::ClassParams = {
		&ASBZMakeNoiseActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZMakeNoiseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMakeNoiseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMakeNoiseActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMakeNoiseActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMakeNoiseActor, 21516303);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMakeNoiseActor>()
	{
		return ASBZMakeNoiseActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMakeNoiseActor(Z_Construct_UClass_ASBZMakeNoiseActor, &ASBZMakeNoiseActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMakeNoiseActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMakeNoiseActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
