// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/SBZLightVisibilityShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLightVisibilityShape() {}
// Cross Module References
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityShape_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityShape();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
// End Cross Module References
	void ASBZLightVisibilityShape::StaticRegisterNativesASBZLightVisibilityShape()
	{
	}
	UClass* Z_Construct_UClass_ASBZLightVisibilityShape_NoRegister()
	{
		return ASBZLightVisibilityShape::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLightVisibilityShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLightVisibilityShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZLighting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityShape_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLightVisibilityShape.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityShape.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLightVisibilityShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLightVisibilityShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLightVisibilityShape_Statics::ClassParams = {
		&ASBZLightVisibilityShape::StaticClass,
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
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLightVisibilityShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLightVisibilityShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLightVisibilityShape, 1105309745);
	template<> SBZLIGHTING_API UClass* StaticClass<ASBZLightVisibilityShape>()
	{
		return ASBZLightVisibilityShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLightVisibilityShape(Z_Construct_UClass_ASBZLightVisibilityShape, &ASBZLightVisibilityShape::StaticClass, TEXT("/Script/SBZLighting"), TEXT("ASBZLightVisibilityShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLightVisibilityShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
