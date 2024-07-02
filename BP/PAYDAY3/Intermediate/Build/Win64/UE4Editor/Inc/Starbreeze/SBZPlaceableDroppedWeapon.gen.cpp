// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableDroppedWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableDroppedWeapon() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableDroppedWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableDroppedWeapon();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableWeapon();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon_NoRegister();
// End Cross Module References
	void ASBZPlaceableDroppedWeapon::StaticRegisterNativesASBZPlaceableDroppedWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASBZPlaceableDroppedWeapon_NoRegister()
	{
		return ASBZPlaceableDroppedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLoadedLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoLoadedLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventoryLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInventoryLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableDroppedWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableDroppedWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_WeaponPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableDroppedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableDroppedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_WeaponPoint = { "WeaponPoint", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, WeaponPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_WeaponPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_WeaponPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AttachedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableDroppedWeapon" },
		{ "ModuleRelativePath", "Public/SBZPlaceableDroppedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AttachedWeapon = { "AttachedWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, AttachedWeapon), Z_Construct_UClass_ASBZWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AttachedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AttachedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoLoadedLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableDroppedWeapon" },
		{ "ModuleRelativePath", "Public/SBZPlaceableDroppedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoLoadedLeft = { "AmmoLoadedLeft", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, AmmoLoadedLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoLoadedLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoLoadedLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoInventoryLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableDroppedWeapon" },
		{ "ModuleRelativePath", "Public/SBZPlaceableDroppedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoInventoryLeft = { "AmmoInventoryLeft", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, AmmoInventoryLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoInventoryLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoInventoryLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_WeaponPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AttachedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoLoadedLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::NewProp_AmmoInventoryLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlaceableDroppedWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::ClassParams = {
		&ASBZPlaceableDroppedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlaceableDroppedWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlaceableDroppedWeapon, 991740415);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlaceableDroppedWeapon>()
	{
		return ASBZPlaceableDroppedWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlaceableDroppedWeapon(Z_Construct_UClass_ASBZPlaceableDroppedWeapon, &ASBZPlaceableDroppedWeapon::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlaceableDroppedWeapon"), false, nullptr, nullptr, nullptr);

	void ASBZPlaceableDroppedWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AmmoLoadedLeft(TEXT("AmmoLoadedLeft"));
		static const FName Name_AmmoInventoryLeft(TEXT("AmmoInventoryLeft"));

		const bool bIsValid = true
			&& Name_AmmoLoadedLeft == ClassReps[(int32)ENetFields_Private::AmmoLoadedLeft].Property->GetFName()
			&& Name_AmmoInventoryLeft == ClassReps[(int32)ENetFields_Private::AmmoInventoryLeft].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPlaceableDroppedWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlaceableDroppedWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
