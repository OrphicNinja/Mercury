// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData_NoRegister();
// End Cross Module References
	void USBZToolDatabase::StaticRegisterNativesUSBZToolDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZToolDatabase_NoRegister()
	{
		return USBZToolDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZToolDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tools;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZToolDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZToolDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZToolDatabase_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolDatabase_Statics::NewProp_Tools_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolDatabase" },
		{ "ModuleRelativePath", "Public/SBZToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZToolDatabase_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolDatabase, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZToolDatabase_Statics::NewProp_Tools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolDatabase_Statics::NewProp_Tools_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZToolDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolDatabase_Statics::NewProp_Tools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolDatabase_Statics::NewProp_Tools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZToolDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZToolDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZToolDatabase_Statics::ClassParams = {
		&USBZToolDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZToolDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZToolDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZToolDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZToolDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZToolDatabase, 1007591647);
	template<> STARBREEZE_API UClass* StaticClass<USBZToolDatabase>()
	{
		return USBZToolDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZToolDatabase(Z_Construct_UClass_USBZToolDatabase, &USBZToolDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZToolDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZToolDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
