// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/SBZLightVisibilityArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLightVisibilityArea() {}
// Cross Module References
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityArea_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityArea();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
	ENGINE_API UClass* Z_Construct_UClass_ALight_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZLightVisibilityShape_NoRegister();
	SBZLIGHTING_API UEnum* Z_Construct_UEnum_SBZLighting_ESBZLightVisibilityAreaAction();
// End Cross Module References
	void ASBZLightVisibilityArea::StaticRegisterNativesASBZLightVisibilityArea()
	{
	}
	UClass* Z_Construct_UClass_ASBZLightVisibilityArea_NoRegister()
	{
		return ASBZLightVisibilityArea::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLightVisibilityArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lights;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Shapes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLightVisibilityArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZLighting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLightVisibilityArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityArea.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Lights_Inner = { "Lights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALight_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Lights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLightVisibilityArea" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Lights = { "Lights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLightVisibilityArea, Lights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Lights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Lights_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZLightVisibilityShape_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Shapes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLightVisibilityArea" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLightVisibilityArea, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Shapes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLightVisibilityArea" },
		{ "ModuleRelativePath", "Public/SBZLightVisibilityArea.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLightVisibilityArea, Action), Z_Construct_UEnum_SBZLighting_ESBZLightVisibilityAreaAction, METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLightVisibilityArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Lights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Lights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Shapes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Shapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLightVisibilityArea_Statics::NewProp_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLightVisibilityArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLightVisibilityArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLightVisibilityArea_Statics::ClassParams = {
		&ASBZLightVisibilityArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZLightVisibilityArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLightVisibilityArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLightVisibilityArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLightVisibilityArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLightVisibilityArea, 3845728814);
	template<> SBZLIGHTING_API UClass* StaticClass<ASBZLightVisibilityArea>()
	{
		return ASBZLightVisibilityArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLightVisibilityArea(Z_Construct_UClass_ASBZLightVisibilityArea, &ASBZLightVisibilityArea::StaticClass, TEXT("/Script/SBZLighting"), TEXT("ASBZLightVisibilityArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLightVisibilityArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
