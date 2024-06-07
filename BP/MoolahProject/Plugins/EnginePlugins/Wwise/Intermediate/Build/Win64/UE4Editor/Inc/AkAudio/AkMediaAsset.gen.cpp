// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMediaAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister();
// End Cross Module References
	void UAkMediaAsset::StaticRegisterNativesUAkMediaAsset()
	{
	}
	UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister()
	{
		return UAkMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MediaName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[];
#endif
		static void NewProp_AutoLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoLoad;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMediaAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMediaAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMediaAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, Id), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, MediaName), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_SetBit(void* Obj)
	{
		((UAkMediaAsset*)Obj)->AutoLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad = { "AutoLoad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkMediaAsset), &Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, Language), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData = { "CurrentMediaAssetData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, CurrentMediaAssetData), Z_Construct_UClass_UAkMediaAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams = {
		&UAkMediaAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMediaAsset, 3090855057);
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAsset>()
	{
		return UAkMediaAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMediaAsset(Z_Construct_UClass_UAkMediaAsset, &UAkMediaAsset::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMediaAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
