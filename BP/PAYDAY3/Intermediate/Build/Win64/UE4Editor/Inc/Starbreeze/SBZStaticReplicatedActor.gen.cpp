// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStaticReplicatedActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStaticReplicatedActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticReplicatedActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticReplicatedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZStaticReplicatedActor::StaticRegisterNativesASBZStaticReplicatedActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZStaticReplicatedActor_NoRegister()
	{
		return ASBZStaticReplicatedActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStaticReplicatedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStaticReplicatedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticReplicatedActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStaticReplicatedActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticReplicatedActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStaticReplicatedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStaticReplicatedActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStaticReplicatedActor_Statics::ClassParams = {
		&ASBZStaticReplicatedActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZStaticReplicatedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticReplicatedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStaticReplicatedActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStaticReplicatedActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStaticReplicatedActor, 2139221336);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStaticReplicatedActor>()
	{
		return ASBZStaticReplicatedActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStaticReplicatedActor(Z_Construct_UClass_ASBZStaticReplicatedActor, &ASBZStaticReplicatedActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStaticReplicatedActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStaticReplicatedActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
