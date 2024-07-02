// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirNeighborTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirNeighborTestActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirNeighborTestActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirNeighborTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZAirNeighborTestActor::StaticRegisterNativesASBZAirNeighborTestActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZAirNeighborTestActor_NoRegister()
	{
		return ASBZAirNeighborTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAirNeighborTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAirNeighborTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirNeighborTestActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAirNeighborTestActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAirNeighborTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAirNeighborTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAirNeighborTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAirNeighborTestActor_Statics::ClassParams = {
		&ASBZAirNeighborTestActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZAirNeighborTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirNeighborTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAirNeighborTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAirNeighborTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAirNeighborTestActor, 699687381);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAirNeighborTestActor>()
	{
		return ASBZAirNeighborTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAirNeighborTestActor(Z_Construct_UClass_ASBZAirNeighborTestActor, &ASBZAirNeighborTestActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAirNeighborTestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAirNeighborTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
