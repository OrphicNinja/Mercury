// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitPatternDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitPatternDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPatternDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPatternDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPatternData_NoRegister();
// End Cross Module References
	void USBZSuitPatternDatabase::StaticRegisterNativesUSBZSuitPatternDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitPatternDatabase_NoRegister()
	{
		return USBZSuitPatternDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitPatternDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitPatternArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPatternArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuitPatternArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitPatternDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitPatternDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitPatternDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitPatternDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSuitPatternDatabase_Statics::NewProp_SuitPatternArray_Inner = { "SuitPatternArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSuitPatternData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitPatternDatabase_Statics::NewProp_SuitPatternArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPatternDatabase" },
		{ "ModuleRelativePath", "Public/SBZSuitPatternDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSuitPatternDatabase_Statics::NewProp_SuitPatternArray = { "SuitPatternArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSuitPatternDatabase, SuitPatternArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSuitPatternDatabase_Statics::NewProp_SuitPatternArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPatternDatabase_Statics::NewProp_SuitPatternArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSuitPatternDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitPatternDatabase_Statics::NewProp_SuitPatternArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitPatternDatabase_Statics::NewProp_SuitPatternArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitPatternDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitPatternDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitPatternDatabase_Statics::ClassParams = {
		&USBZSuitPatternDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSuitPatternDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPatternDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitPatternDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPatternDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitPatternDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitPatternDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitPatternDatabase, 3809636092);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitPatternDatabase>()
	{
		return USBZSuitPatternDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitPatternDatabase(Z_Construct_UClass_USBZSuitPatternDatabase, &USBZSuitPatternDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitPatternDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitPatternDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
