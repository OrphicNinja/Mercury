// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
// End Cross Module References
	void USBZThrowableDatabase::StaticRegisterNativesUSBZThrowableDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZThrowableDatabase_NoRegister()
	{
		return USBZThrowableDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZThrowableDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Throwables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throwables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Throwables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThrowableDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowableDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThrowableDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZThrowableDatabase_Statics::NewProp_Throwables_Inner = { "Throwables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowableDatabase_Statics::NewProp_Throwables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableDatabase" },
		{ "ModuleRelativePath", "Public/SBZThrowableDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZThrowableDatabase_Statics::NewProp_Throwables = { "Throwables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZThrowableDatabase, Throwables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZThrowableDatabase_Statics::NewProp_Throwables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowableDatabase_Statics::NewProp_Throwables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZThrowableDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThrowableDatabase_Statics::NewProp_Throwables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThrowableDatabase_Statics::NewProp_Throwables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThrowableDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThrowableDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThrowableDatabase_Statics::ClassParams = {
		&USBZThrowableDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZThrowableDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowableDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZThrowableDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowableDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThrowableDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThrowableDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThrowableDatabase, 394390668);
	template<> STARBREEZE_API UClass* StaticClass<USBZThrowableDatabase>()
	{
		return USBZThrowableDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThrowableDatabase(Z_Construct_UClass_USBZThrowableDatabase, &USBZThrowableDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThrowableDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThrowableDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
