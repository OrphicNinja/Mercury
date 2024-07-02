// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHealthPlaceable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHealthPlaceable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHealthPlaceable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHealthPlaceable();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZHealthPlaceable::StaticRegisterNativesASBZHealthPlaceable()
	{
	}
	UClass* Z_Construct_UClass_ASBZHealthPlaceable_NoRegister()
	{
		return ASBZHealthPlaceable::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHealthPlaceable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthGainedPerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthGainedPerCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownsGainedPerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownsGainedPerCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialCharges_MetaData[];
#endif
		static void NewProp_bAllowPartialCharges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialCharges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHealthPlaceable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableCharges,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHealthPlaceable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHealthPlaceable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHealthPlaceable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_HealthGainedPerCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHealthPlaceable" },
		{ "ModuleRelativePath", "Public/SBZHealthPlaceable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_HealthGainedPerCharge = { "HealthGainedPerCharge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHealthPlaceable, HealthGainedPerCharge), METADATA_PARAMS(Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_HealthGainedPerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_HealthGainedPerCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_DownsGainedPerCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHealthPlaceable" },
		{ "ModuleRelativePath", "Public/SBZHealthPlaceable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_DownsGainedPerCharge = { "DownsGainedPerCharge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHealthPlaceable, DownsGainedPerCharge), METADATA_PARAMS(Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_DownsGainedPerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_DownsGainedPerCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_bAllowPartialCharges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHealthPlaceable" },
		{ "ModuleRelativePath", "Public/SBZHealthPlaceable.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_bAllowPartialCharges_SetBit(void* Obj)
	{
		((ASBZHealthPlaceable*)Obj)->bAllowPartialCharges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_bAllowPartialCharges = { "bAllowPartialCharges", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHealthPlaceable), &Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_bAllowPartialCharges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_bAllowPartialCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_bAllowPartialCharges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHealthPlaceable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_HealthGainedPerCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_DownsGainedPerCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHealthPlaceable_Statics::NewProp_bAllowPartialCharges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHealthPlaceable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHealthPlaceable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHealthPlaceable_Statics::ClassParams = {
		&ASBZHealthPlaceable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZHealthPlaceable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHealthPlaceable_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHealthPlaceable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHealthPlaceable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHealthPlaceable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHealthPlaceable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHealthPlaceable, 2616838636);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHealthPlaceable>()
	{
		return ASBZHealthPlaceable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHealthPlaceable(Z_Construct_UClass_ASBZHealthPlaceable, &ASBZHealthPlaceable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHealthPlaceable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHealthPlaceable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
