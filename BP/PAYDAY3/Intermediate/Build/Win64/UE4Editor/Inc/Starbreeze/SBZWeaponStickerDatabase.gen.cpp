// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStickerDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStickerDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerData_NoRegister();
// End Cross Module References
	void USBZWeaponStickerDatabase::StaticRegisterNativesUSBZWeaponStickerDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponStickerDatabase_NoRegister()
	{
		return USBZWeaponStickerDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponStickerDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponStickerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStickerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponStickerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponStickerDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::NewProp_WeaponStickerArray_Inner = { "WeaponStickerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponStickerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::NewProp_WeaponStickerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerDatabase" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::NewProp_WeaponStickerArray = { "WeaponStickerArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerDatabase, WeaponStickerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::NewProp_WeaponStickerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::NewProp_WeaponStickerArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::NewProp_WeaponStickerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::NewProp_WeaponStickerArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponStickerDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::ClassParams = {
		&USBZWeaponStickerDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponStickerDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponStickerDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponStickerDatabase, 664873877);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponStickerDatabase>()
	{
		return USBZWeaponStickerDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponStickerDatabase(Z_Construct_UClass_USBZWeaponStickerDatabase, &USBZWeaponStickerDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponStickerDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponStickerDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
