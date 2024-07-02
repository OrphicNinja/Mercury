// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavMeshGeneratorVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavMeshGeneratorVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNavMeshGeneratorVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNavMeshGeneratorVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZNavMeshGeneratorVolume::StaticRegisterNativesASBZNavMeshGeneratorVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZNavMeshGeneratorVolume_NoRegister()
	{
		return ASBZNavMeshGeneratorVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZNavMeshGeneratorVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavMeshGeneratorVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZNavMeshGeneratorVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics::ClassParams = {
		&ASBZNavMeshGeneratorVolume::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZNavMeshGeneratorVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZNavMeshGeneratorVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZNavMeshGeneratorVolume, 1024164245);
	template<> STARBREEZE_API UClass* StaticClass<ASBZNavMeshGeneratorVolume>()
	{
		return ASBZNavMeshGeneratorVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZNavMeshGeneratorVolume(Z_Construct_UClass_ASBZNavMeshGeneratorVolume, &ASBZNavMeshGeneratorVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZNavMeshGeneratorVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZNavMeshGeneratorVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
