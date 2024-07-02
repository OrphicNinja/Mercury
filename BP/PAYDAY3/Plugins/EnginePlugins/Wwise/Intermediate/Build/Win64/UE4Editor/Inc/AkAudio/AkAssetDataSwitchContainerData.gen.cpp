// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAssetDataSwitchContainerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetDataSwitchContainerData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
// End Cross Module References
	void UAkAssetDataSwitchContainerData::StaticRegisterNativesUAkAssetDataSwitchContainerData()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister()
	{
		return UAkAssetDataSwitchContainerData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GroupValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGroupValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGroupValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MediaList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAssetDataSwitchContainerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetDataSwitchContainerData" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainerData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue = { "GroupValue", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, GroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetDataSwitchContainerData" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue = { "DefaultGroupValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, DefaultGroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_Inner = { "MediaList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkMediaAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetDataSwitchContainerData" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList = { "MediaList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, MediaList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetDataSwitchContainerData" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataSwitchContainerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::ClassParams = {
		&UAkAssetDataSwitchContainerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetDataSwitchContainerData, 1481728501);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataSwitchContainerData>()
	{
		return UAkAssetDataSwitchContainerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetDataSwitchContainerData(Z_Construct_UClass_UAkAssetDataSwitchContainerData, &UAkAssetDataSwitchContainerData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetDataSwitchContainerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataSwitchContainerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
