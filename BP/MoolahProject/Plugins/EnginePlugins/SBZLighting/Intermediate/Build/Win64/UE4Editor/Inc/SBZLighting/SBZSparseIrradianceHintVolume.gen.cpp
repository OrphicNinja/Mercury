// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/SBZSparseIrradianceHintVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSparseIrradianceHintVolume() {}
// Cross Module References
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZSparseIrradianceHintVolume_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_ASBZSparseIrradianceHintVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
	SBZLIGHTING_API UEnum* Z_Construct_UEnum_SBZLighting_ESBZSparseIrradianceHintVolumeAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
// End Cross Module References
	void ASBZSparseIrradianceHintVolume::StaticRegisterNativesASBZSparseIrradianceHintVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZSparseIrradianceHintVolume_NoRegister()
	{
		return ASBZSparseIrradianceHintVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepulsionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepulsionDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZLighting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZSparseIrradianceHintVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSparseIrradianceHintVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSparseIrradianceHintVolume" },
		{ "ModuleRelativePath", "Public/SBZSparseIrradianceHintVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSparseIrradianceHintVolume, Action), Z_Construct_UEnum_SBZLighting_ESBZSparseIrradianceHintVolumeAction, METADATA_PARAMS(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSparseIrradianceHintVolume" },
		{ "ModuleRelativePath", "Public/SBZSparseIrradianceHintVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSparseIrradianceHintVolume, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_RepulsionDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSparseIrradianceHintVolume" },
		{ "ModuleRelativePath", "Public/SBZSparseIrradianceHintVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_RepulsionDistance = { "RepulsionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSparseIrradianceHintVolume, RepulsionDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_RepulsionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_RepulsionDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_LightingChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::NewProp_RepulsionDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSparseIrradianceHintVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::ClassParams = {
		&ASBZSparseIrradianceHintVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSparseIrradianceHintVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSparseIrradianceHintVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSparseIrradianceHintVolume, 4114597396);
	template<> SBZLIGHTING_API UClass* StaticClass<ASBZSparseIrradianceHintVolume>()
	{
		return ASBZSparseIrradianceHintVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSparseIrradianceHintVolume(Z_Construct_UClass_ASBZSparseIrradianceHintVolume, &ASBZSparseIrradianceHintVolume::StaticClass, TEXT("/Script/SBZLighting"), TEXT("ASBZSparseIrradianceHintVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSparseIrradianceHintVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
