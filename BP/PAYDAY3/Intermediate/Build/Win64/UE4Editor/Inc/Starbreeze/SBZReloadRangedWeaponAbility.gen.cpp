// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReloadRangedWeaponAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReloadRangedWeaponAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReloadRangedWeaponAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReloadRangedWeaponAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	void USBZReloadRangedWeaponAbility::StaticRegisterNativesUSBZReloadRangedWeaponAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZReloadRangedWeaponAbility_NoRegister()
	{
		return USBZReloadRangedWeaponAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReloadRangedWeaponAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReloadRangedWeaponAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReloadRangedWeaponAbility" },
		{ "ModuleRelativePath", "Public/SBZReloadRangedWeaponAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReloadRangedWeaponAbility, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReloadRangedWeaponAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::ClassParams = {
		&USBZReloadRangedWeaponAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReloadRangedWeaponAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReloadRangedWeaponAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReloadRangedWeaponAbility, 2871244081);
	template<> STARBREEZE_API UClass* StaticClass<USBZReloadRangedWeaponAbility>()
	{
		return USBZReloadRangedWeaponAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReloadRangedWeaponAbility(Z_Construct_UClass_USBZReloadRangedWeaponAbility, &USBZReloadRangedWeaponAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReloadRangedWeaponAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReloadRangedWeaponAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
