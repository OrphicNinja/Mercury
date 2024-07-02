// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAssetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAssetData::StaticRegisterNativesUAkAssetData()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetData_NoRegister()
	{
		return UAkAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CachedHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankLanguage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankLanguage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAssetData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAssetData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetData" },
		{ "ModuleRelativePath", "Public/AkAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash = { "CachedHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetData, CachedHash), METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetData" },
		{ "ModuleRelativePath", "Public/AkAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage = { "BankLanguage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetData, BankLanguage), METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetData_Statics::ClassParams = {
		&UAkAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetData, 2538593888);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetData>()
	{
		return UAkAssetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetData(Z_Construct_UClass_UAkAssetData, &UAkAssetData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
