// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMediaAssetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMediaAssetData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMediaAssetData::StaticRegisterNativesUAkMediaAssetData()
	{
	}
	UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister()
	{
		return UAkMediaAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[];
#endif
		static void NewProp_IsStreamed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStreamed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDeviceMemory_MetaData[];
#endif
		static void NewProp_UseDeviceMemory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDeviceMemory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMediaAssetData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMediaAssetData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAssetData" },
		{ "ModuleRelativePath", "Public/AkMediaAssetData.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_SetBit(void* Obj)
	{
		((UAkMediaAssetData*)Obj)->IsStreamed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkMediaAssetData), &Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAssetData" },
		{ "ModuleRelativePath", "Public/AkMediaAssetData.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_SetBit(void* Obj)
	{
		((UAkMediaAssetData*)Obj)->UseDeviceMemory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory = { "UseDeviceMemory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkMediaAssetData), &Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAssetData" },
		{ "ModuleRelativePath", "Public/AkMediaAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAssetData, Language), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAssetData" },
		{ "ModuleRelativePath", "Public/AkMediaAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform = { "AssetPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAssetData, AssetPlatform), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAssetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams = {
		&UAkMediaAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAssetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMediaAssetData, 606887808);
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAssetData>()
	{
		return UAkMediaAssetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMediaAssetData(Z_Construct_UClass_UAkMediaAssetData, &UAkMediaAssetData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMediaAssetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAssetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
