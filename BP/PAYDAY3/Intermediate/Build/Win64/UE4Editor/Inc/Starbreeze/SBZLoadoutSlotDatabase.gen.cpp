// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadoutSlotDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadoutSlotDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutSlotDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutSlotDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutSlotData_NoRegister();
// End Cross Module References
	void USBZLoadoutSlotDatabase::StaticRegisterNativesUSBZLoadoutSlotDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZLoadoutSlotDatabase_NoRegister()
	{
		return USBZLoadoutSlotDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutSlotArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSlotArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadoutSlotArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadoutSlotDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadoutSlotDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::NewProp_LoadoutSlotArray_Inner = { "LoadoutSlotArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZLoadoutSlotData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::NewProp_LoadoutSlotArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutSlotDatabase" },
		{ "ModuleRelativePath", "Public/SBZLoadoutSlotDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::NewProp_LoadoutSlotArray = { "LoadoutSlotArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoadoutSlotDatabase, LoadoutSlotArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::NewProp_LoadoutSlotArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::NewProp_LoadoutSlotArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::NewProp_LoadoutSlotArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::NewProp_LoadoutSlotArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadoutSlotDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::ClassParams = {
		&USBZLoadoutSlotDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadoutSlotDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadoutSlotDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadoutSlotDatabase, 1821668428);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadoutSlotDatabase>()
	{
		return USBZLoadoutSlotDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadoutSlotDatabase(Z_Construct_UClass_USBZLoadoutSlotDatabase, &USBZLoadoutSlotDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadoutSlotDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadoutSlotDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
