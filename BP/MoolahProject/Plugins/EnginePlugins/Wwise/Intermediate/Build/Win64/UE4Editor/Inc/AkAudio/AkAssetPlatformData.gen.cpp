// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAssetPlatformData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetPlatformData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData_NoRegister();
// End Cross Module References
	void UAkAssetPlatformData::StaticRegisterNativesUAkAssetPlatformData()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetPlatformData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetPlatformData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAssetPlatformData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAssetPlatformData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetPlatformData" },
		{ "ModuleRelativePath", "Public/AkAssetPlatformData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData = { "CurrentAssetData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetPlatformData, CurrentAssetData), Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetPlatformData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetPlatformData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams = {
		&UAkAssetPlatformData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetPlatformData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetPlatformData, 3307311205);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetPlatformData>()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetPlatformData(Z_Construct_UClass_UAkAssetPlatformData, &UAkAssetPlatformData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetPlatformData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetPlatformData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
