// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGloveDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGloveDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
// End Cross Module References
	void USBZGloveDatabase::StaticRegisterNativesUSBZGloveDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZGloveDatabase_NoRegister()
	{
		return USBZGloveDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZGloveDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gloves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gloves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gloves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGloveDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGloveDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGloveDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGloveDatabase_Statics::NewProp_Gloves_Inner = { "Gloves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveDatabase_Statics::NewProp_Gloves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveDatabase" },
		{ "ModuleRelativePath", "Public/SBZGloveDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGloveDatabase_Statics::NewProp_Gloves = { "Gloves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGloveDatabase, Gloves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGloveDatabase_Statics::NewProp_Gloves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveDatabase_Statics::NewProp_Gloves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGloveDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGloveDatabase_Statics::NewProp_Gloves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGloveDatabase_Statics::NewProp_Gloves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGloveDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGloveDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGloveDatabase_Statics::ClassParams = {
		&USBZGloveDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGloveDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGloveDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGloveDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGloveDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGloveDatabase, 1406531615);
	template<> STARBREEZE_API UClass* StaticClass<USBZGloveDatabase>()
	{
		return USBZGloveDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGloveDatabase(Z_Construct_UClass_USBZGloveDatabase, &USBZGloveDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGloveDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGloveDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
