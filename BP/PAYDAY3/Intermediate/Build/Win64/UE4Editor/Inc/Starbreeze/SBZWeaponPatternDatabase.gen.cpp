// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPatternDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPatternDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternData_NoRegister();
// End Cross Module References
	void USBZWeaponPatternDatabase::StaticRegisterNativesUSBZWeaponPatternDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponPatternDatabase_NoRegister()
	{
		return USBZWeaponPatternDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPatternDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPatternArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPatternArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponPatternArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPatternDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::NewProp_WeaponPatternArray_Inner = { "WeaponPatternArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponPatternData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::NewProp_WeaponPatternArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternDatabase" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::NewProp_WeaponPatternArray = { "WeaponPatternArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPatternDatabase, WeaponPatternArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::NewProp_WeaponPatternArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::NewProp_WeaponPatternArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::NewProp_WeaponPatternArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::NewProp_WeaponPatternArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPatternDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::ClassParams = {
		&USBZWeaponPatternDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPatternDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPatternDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPatternDatabase, 454994206);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPatternDatabase>()
	{
		return USBZWeaponPatternDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPatternDatabase(Z_Construct_UClass_USBZWeaponPatternDatabase, &USBZWeaponPatternDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPatternDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPatternDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
