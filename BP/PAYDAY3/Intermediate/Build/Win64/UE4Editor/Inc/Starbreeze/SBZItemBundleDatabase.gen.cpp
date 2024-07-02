// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemBundleDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemBundleDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemBundleDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemBundleDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemBundleData_NoRegister();
// End Cross Module References
	void USBZItemBundleDatabase::StaticRegisterNativesUSBZItemBundleDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZItemBundleDatabase_NoRegister()
	{
		return USBZItemBundleDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZItemBundleDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBundleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBundleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBundleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZItemBundleDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemBundleDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZItemBundleDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZItemBundleDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZItemBundleDatabase_Statics::NewProp_ItemBundleArray_Inner = { "ItemBundleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZItemBundleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemBundleDatabase_Statics::NewProp_ItemBundleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemBundleDatabase" },
		{ "ModuleRelativePath", "Public/SBZItemBundleDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZItemBundleDatabase_Statics::NewProp_ItemBundleArray = { "ItemBundleArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZItemBundleDatabase, ItemBundleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZItemBundleDatabase_Statics::NewProp_ItemBundleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemBundleDatabase_Statics::NewProp_ItemBundleArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZItemBundleDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZItemBundleDatabase_Statics::NewProp_ItemBundleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZItemBundleDatabase_Statics::NewProp_ItemBundleArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZItemBundleDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZItemBundleDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZItemBundleDatabase_Statics::ClassParams = {
		&USBZItemBundleDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZItemBundleDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemBundleDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZItemBundleDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemBundleDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZItemBundleDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZItemBundleDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZItemBundleDatabase, 166424613);
	template<> STARBREEZE_API UClass* StaticClass<USBZItemBundleDatabase>()
	{
		return USBZItemBundleDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZItemBundleDatabase(Z_Construct_UClass_USBZItemBundleDatabase, &USBZItemBundleDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZItemBundleDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZItemBundleDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
