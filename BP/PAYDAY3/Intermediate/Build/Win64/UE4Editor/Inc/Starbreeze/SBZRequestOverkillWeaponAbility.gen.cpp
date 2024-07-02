// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRequestOverkillWeaponAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRequestOverkillWeaponAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRequestOverkillWeaponAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRequestOverkillWeaponAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
// End Cross Module References
	void USBZRequestOverkillWeaponAbility::StaticRegisterNativesUSBZRequestOverkillWeaponAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZRequestOverkillWeaponAbility_NoRegister()
	{
		return USBZRequestOverkillWeaponAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillSuccessDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverkillSuccessDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillFailedDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverkillFailedDialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRequestOverkillWeaponAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRequestOverkillWeaponAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRequestOverkillWeaponAbility" },
		{ "ModuleRelativePath", "Public/SBZRequestOverkillWeaponAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRequestOverkillWeaponAbility, OwnerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillSuccessDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRequestOverkillWeaponAbility" },
		{ "ModuleRelativePath", "Public/SBZRequestOverkillWeaponAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillSuccessDialog = { "OverkillSuccessDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRequestOverkillWeaponAbility, OverkillSuccessDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillSuccessDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillSuccessDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillFailedDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRequestOverkillWeaponAbility" },
		{ "ModuleRelativePath", "Public/SBZRequestOverkillWeaponAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillFailedDialog = { "OverkillFailedDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRequestOverkillWeaponAbility, OverkillFailedDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillFailedDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillFailedDialog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillSuccessDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::NewProp_OverkillFailedDialog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRequestOverkillWeaponAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::ClassParams = {
		&USBZRequestOverkillWeaponAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRequestOverkillWeaponAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRequestOverkillWeaponAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRequestOverkillWeaponAbility, 1054089692);
	template<> STARBREEZE_API UClass* StaticClass<USBZRequestOverkillWeaponAbility>()
	{
		return USBZRequestOverkillWeaponAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRequestOverkillWeaponAbility(Z_Construct_UClass_USBZRequestOverkillWeaponAbility, &USBZRequestOverkillWeaponAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRequestOverkillWeaponAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRequestOverkillWeaponAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
