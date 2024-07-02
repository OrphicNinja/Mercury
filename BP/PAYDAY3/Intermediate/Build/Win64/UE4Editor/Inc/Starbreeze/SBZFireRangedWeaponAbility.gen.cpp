// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFireRangedWeaponAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFireRangedWeaponAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFireRangedWeaponAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFireRangedWeaponAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void USBZFireRangedWeaponAbility::StaticRegisterNativesUSBZFireRangedWeaponAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZFireRangedWeaponAbility_NoRegister()
	{
		return USBZFireRangedWeaponAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFireRangedWeaponAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFireRangedWeaponAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::NewProp_Pawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFireRangedWeaponAbility" },
		{ "ModuleRelativePath", "Public/SBZFireRangedWeaponAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFireRangedWeaponAbility, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::NewProp_Pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFireRangedWeaponAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::ClassParams = {
		&USBZFireRangedWeaponAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFireRangedWeaponAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFireRangedWeaponAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFireRangedWeaponAbility, 2570311125);
	template<> STARBREEZE_API UClass* StaticClass<USBZFireRangedWeaponAbility>()
	{
		return USBZFireRangedWeaponAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFireRangedWeaponAbility(Z_Construct_UClass_USBZFireRangedWeaponAbility, &USBZFireRangedWeaponAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFireRangedWeaponAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFireRangedWeaponAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
