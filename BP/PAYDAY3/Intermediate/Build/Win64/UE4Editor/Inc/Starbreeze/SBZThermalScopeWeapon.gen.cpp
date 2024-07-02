// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThermalScopeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThermalScopeWeapon() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThermalScopeWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThermalScopeWeapon();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void ASBZThermalScopeWeapon::StaticRegisterNativesASBZThermalScopeWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASBZThermalScopeWeapon_NoRegister()
	{
		return ASBZThermalScopeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASBZThermalScopeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThermalMaterialArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThermalMaterialArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThermalMaterialArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZRangedWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThermalScopeWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalScopeWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_ThermalMaterialArray_Inner = { "ThermalMaterialArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_ThermalMaterialArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalScopeWeapon" },
		{ "ModuleRelativePath", "Public/SBZThermalScopeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_ThermalMaterialArray = { "ThermalMaterialArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalScopeWeapon, ThermalMaterialArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_ThermalMaterialArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_ThermalMaterialArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_TargetSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalScopeWeapon" },
		{ "ModuleRelativePath", "Public/SBZThermalScopeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_TargetSocketName = { "TargetSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalScopeWeapon, TargetSocketName), METADATA_PARAMS(Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_TargetSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_TargetSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_ThermalMaterialArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_ThermalMaterialArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::NewProp_TargetSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZThermalScopeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::ClassParams = {
		&ASBZThermalScopeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZThermalScopeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZThermalScopeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZThermalScopeWeapon, 2068313890);
	template<> STARBREEZE_API UClass* StaticClass<ASBZThermalScopeWeapon>()
	{
		return ASBZThermalScopeWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZThermalScopeWeapon(Z_Construct_UClass_ASBZThermalScopeWeapon, &ASBZThermalScopeWeapon::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZThermalScopeWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZThermalScopeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
