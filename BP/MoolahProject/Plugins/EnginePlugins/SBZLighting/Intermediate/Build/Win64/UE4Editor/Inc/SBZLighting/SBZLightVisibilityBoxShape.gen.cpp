// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/SBZLightVisibilityBoxShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLightVisibilityBoxShape() {}
// Cross Module References
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityBoxShape_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityBoxShape();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityShape();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ASBZLightVisibilityBoxShape::StaticRegisterNativesASBZLightVisibilityBoxShape()
	{
	}
	UClass* Z_Construct_UClass_ASBZLightVisibilityBoxShape_NoRegister()
	{
		return ASBZLightVisibilityBoxShape::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZLightVisibilityShape,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZLighting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLightVisibilityBoxShape.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityBoxShape.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLightVisibilityBoxShape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityBoxShape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLightVisibilityBoxShape, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLightVisibilityBoxShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::ClassParams = {
		&ASBZLightVisibilityBoxShape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLightVisibilityBoxShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLightVisibilityBoxShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLightVisibilityBoxShape, 545171090);
	template<> SBZLIGHTING_API UClass* StaticClass<ASBZLightVisibilityBoxShape>()
	{
		return ASBZLightVisibilityBoxShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLightVisibilityBoxShape(Z_Construct_UClass_ASBZLightVisibilityBoxShape, &ASBZLightVisibilityBoxShape::StaticClass, TEXT("/Script/SBZLighting"), TEXT("ASBZLightVisibilityBoxShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLightVisibilityBoxShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
