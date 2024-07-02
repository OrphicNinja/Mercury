// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicatedActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicatedActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplicatedActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplicatedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZReplicatedActor::StaticRegisterNativesASBZReplicatedActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZReplicatedActor_NoRegister()
	{
		return ASBZReplicatedActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZReplicatedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZReplicatedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplicatedActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicatedActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZReplicatedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZReplicatedActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZReplicatedActor_Statics::ClassParams = {
		&ASBZReplicatedActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZReplicatedActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZReplicatedActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZReplicatedActor, 554810455);
	template<> STARBREEZE_API UClass* StaticClass<ASBZReplicatedActor>()
	{
		return ASBZReplicatedActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZReplicatedActor(Z_Construct_UClass_ASBZReplicatedActor, &ASBZReplicatedActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZReplicatedActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZReplicatedActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
