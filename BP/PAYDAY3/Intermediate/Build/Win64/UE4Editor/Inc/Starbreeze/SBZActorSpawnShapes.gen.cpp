// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorSpawnShapes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorSpawnShapes() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnShapes_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnShapes();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnRegionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZActorSpawnShapes::StaticRegisterNativesASBZActorSpawnShapes()
	{
	}
	UClass* Z_Construct_UClass_ASBZActorSpawnShapes_NoRegister()
	{
		return ASBZActorSpawnShapes::StaticClass();
	}
	struct Z_Construct_UClass_ASBZActorSpawnShapes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZActorSpawnShapes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZActorSpawnRegionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnShapes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActorSpawnShapes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnShapes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZActorSpawnShapes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZActorSpawnShapes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZActorSpawnShapes_Statics::ClassParams = {
		&ASBZActorSpawnShapes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnShapes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnShapes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZActorSpawnShapes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZActorSpawnShapes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZActorSpawnShapes, 85051804);
	template<> STARBREEZE_API UClass* StaticClass<ASBZActorSpawnShapes>()
	{
		return ASBZActorSpawnShapes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZActorSpawnShapes(Z_Construct_UClass_ASBZActorSpawnShapes, &ASBZActorSpawnShapes::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZActorSpawnShapes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZActorSpawnShapes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
