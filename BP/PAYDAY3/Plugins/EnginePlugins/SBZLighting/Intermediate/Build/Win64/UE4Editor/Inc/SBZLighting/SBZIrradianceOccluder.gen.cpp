// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/SBZIrradianceOccluder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZIrradianceOccluder() {}
// Cross Module References
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZIrradianceOccluder_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZIrradianceOccluder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
	SBZLIGHTING_API UClass* Z_Construct_UClass_USBZIrradianceOccluderComponent_NoRegister();
// End Cross Module References
	void ASBZIrradianceOccluder::StaticRegisterNativesASBZIrradianceOccluder()
	{
	}
	UClass* Z_Construct_UClass_ASBZIrradianceOccluder_NoRegister()
	{
		return ASBZIrradianceOccluder::StaticClass();
	}
	struct Z_Construct_UClass_ASBZIrradianceOccluder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceOccluderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IrradianceOccluderComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZIrradianceOccluder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZLighting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZIrradianceOccluder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZIrradianceOccluder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZIrradianceOccluder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZIrradianceOccluder_Statics::NewProp_IrradianceOccluderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZIrradianceOccluder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZIrradianceOccluder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZIrradianceOccluder_Statics::NewProp_IrradianceOccluderComponent = { "IrradianceOccluderComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZIrradianceOccluder, IrradianceOccluderComponent), Z_Construct_UClass_USBZIrradianceOccluderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZIrradianceOccluder_Statics::NewProp_IrradianceOccluderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZIrradianceOccluder_Statics::NewProp_IrradianceOccluderComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZIrradianceOccluder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZIrradianceOccluder_Statics::NewProp_IrradianceOccluderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZIrradianceOccluder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZIrradianceOccluder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZIrradianceOccluder_Statics::ClassParams = {
		&ASBZIrradianceOccluder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZIrradianceOccluder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZIrradianceOccluder_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZIrradianceOccluder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZIrradianceOccluder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZIrradianceOccluder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZIrradianceOccluder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZIrradianceOccluder, 597252734);
	template<> SBZLIGHTING_API UClass* StaticClass<ASBZIrradianceOccluder>()
	{
		return ASBZIrradianceOccluder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZIrradianceOccluder(Z_Construct_UClass_ASBZIrradianceOccluder, &ASBZIrradianceOccluder::StaticClass, TEXT("/Script/SBZLighting"), TEXT("ASBZIrradianceOccluder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZIrradianceOccluder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
