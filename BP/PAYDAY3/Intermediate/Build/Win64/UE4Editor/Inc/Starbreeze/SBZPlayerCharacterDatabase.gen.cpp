// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCharacterDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCharacterDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
// End Cross Module References
	void USBZPlayerCharacterDatabase::StaticRegisterNativesUSBZPlayerCharacterDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerCharacterDatabase_NoRegister()
	{
		return USBZPlayerCharacterDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerCharacterArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerCharacterDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::NewProp_PlayerCharacterArray_Inner = { "PlayerCharacterArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::NewProp_PlayerCharacterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterDatabase" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::NewProp_PlayerCharacterArray = { "PlayerCharacterArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterDatabase, PlayerCharacterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::NewProp_PlayerCharacterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::NewProp_PlayerCharacterArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::NewProp_PlayerCharacterArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::NewProp_PlayerCharacterArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerCharacterDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::ClassParams = {
		&USBZPlayerCharacterDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerCharacterDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerCharacterDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerCharacterDatabase, 466354349);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerCharacterDatabase>()
	{
		return USBZPlayerCharacterDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerCharacterDatabase(Z_Construct_UClass_USBZPlayerCharacterDatabase, &USBZPlayerCharacterDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerCharacterDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerCharacterDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
