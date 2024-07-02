// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTripper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTripper() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTripper_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTripper();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableToolBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	void ASBZTripper::StaticRegisterNativesASBZTripper()
	{
	}
	UClass* Z_Construct_UClass_ASBZTripper_NoRegister()
	{
		return ASBZTripper::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTripper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarkedDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTripper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTripper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTripper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTripper.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTripper_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTripper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTripper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTripper_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTripper, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTripper_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTripper_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTripper_Statics::NewProp_LaserEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTripper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTripper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTripper_Statics::NewProp_LaserEffectComponent = { "LaserEffectComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTripper, LaserEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTripper_Statics::NewProp_LaserEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTripper_Statics::NewProp_LaserEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTripper_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTripper" },
		{ "ModuleRelativePath", "Public/SBZTripper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZTripper_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTripper, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZTripper_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTripper_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTripper_Statics::NewProp_SurfaceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTripper" },
		{ "ModuleRelativePath", "Public/SBZTripper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZTripper_Statics::NewProp_SurfaceOffset = { "SurfaceOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTripper, SurfaceOffset), METADATA_PARAMS(Z_Construct_UClass_ASBZTripper_Statics::NewProp_SurfaceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTripper_Statics::NewProp_SurfaceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTripper_Statics::NewProp_MarkedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTripper" },
		{ "ModuleRelativePath", "Public/SBZTripper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZTripper_Statics::NewProp_MarkedDuration = { "MarkedDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTripper, MarkedDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZTripper_Statics::NewProp_MarkedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTripper_Statics::NewProp_MarkedDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTripper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTripper_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTripper_Statics::NewProp_LaserEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTripper_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTripper_Statics::NewProp_SurfaceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTripper_Statics::NewProp_MarkedDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTripper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTripper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTripper_Statics::ClassParams = {
		&ASBZTripper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZTripper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTripper_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTripper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTripper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTripper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTripper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTripper, 4174156904);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTripper>()
	{
		return ASBZTripper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTripper(Z_Construct_UClass_ASBZTripper, &ASBZTripper::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTripper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTripper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
