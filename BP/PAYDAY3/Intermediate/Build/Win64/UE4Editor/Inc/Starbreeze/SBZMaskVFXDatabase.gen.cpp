// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskVFXDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskVFXDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskVFXDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskVFXDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskVFXData_NoRegister();
// End Cross Module References
	void USBZMaskVFXDatabase::StaticRegisterNativesUSBZMaskVFXDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskVFXDatabase_NoRegister()
	{
		return USBZMaskVFXDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskVFXDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskVFXArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskVFXArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaskVFXArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskVFXDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskVFXDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskVFXDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskVFXDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskVFXDatabase_Statics::NewProp_MaskVFXArray_Inner = { "MaskVFXArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMaskVFXData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskVFXDatabase_Statics::NewProp_MaskVFXArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskVFXDatabase" },
		{ "ModuleRelativePath", "Public/SBZMaskVFXDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMaskVFXDatabase_Statics::NewProp_MaskVFXArray = { "MaskVFXArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskVFXDatabase, MaskVFXArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMaskVFXDatabase_Statics::NewProp_MaskVFXArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskVFXDatabase_Statics::NewProp_MaskVFXArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskVFXDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskVFXDatabase_Statics::NewProp_MaskVFXArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskVFXDatabase_Statics::NewProp_MaskVFXArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskVFXDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskVFXDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskVFXDatabase_Statics::ClassParams = {
		&USBZMaskVFXDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMaskVFXDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskVFXDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskVFXDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskVFXDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskVFXDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskVFXDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskVFXDatabase, 1063551203);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskVFXDatabase>()
	{
		return USBZMaskVFXDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskVFXDatabase(Z_Construct_UClass_USBZMaskVFXDatabase, &USBZMaskVFXDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskVFXDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskVFXDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
