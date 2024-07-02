// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/SBZLightVisibilityAreaManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLightVisibilityAreaManager() {}
// Cross Module References
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityAreaManager_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityAreaManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
// End Cross Module References
	void ASBZLightVisibilityAreaManager::StaticRegisterNativesASBZLightVisibilityAreaManager()
	{
	}
	UClass* Z_Construct_UClass_ASBZLightVisibilityAreaManager_NoRegister()
	{
		return ASBZLightVisibilityAreaManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZLighting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLightVisibilityAreaManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityAreaManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLightVisibilityAreaManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics::ClassParams = {
		&ASBZLightVisibilityAreaManager::StaticClass,
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
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLightVisibilityAreaManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLightVisibilityAreaManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLightVisibilityAreaManager, 2138989159);
	template<> SBZLIGHTING_API UClass* StaticClass<ASBZLightVisibilityAreaManager>()
	{
		return ASBZLightVisibilityAreaManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLightVisibilityAreaManager(Z_Construct_UClass_ASBZLightVisibilityAreaManager, &ASBZLightVisibilityAreaManager::StaticClass, TEXT("/Script/SBZLighting"), TEXT("ASBZLightVisibilityAreaManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLightVisibilityAreaManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
