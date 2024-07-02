// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionPreviewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionPreviewData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionPreviewData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionPreviewData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationCollection_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
// End Cross Module References
	void USBZLifeActionPreviewData::StaticRegisterNativesUSBZLifeActionPreviewData()
	{
	}
	UClass* Z_Construct_UClass_USBZLifeActionPreviewData_NoRegister()
	{
		return USBZLifeActionPreviewData::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionPreviewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationCollection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewStance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewStance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewEquippableFamily_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewEquippableFamily_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewEquippableFamily;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewEquippableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_PreviewEquippableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionPreviewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionPreviewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLifeActionPreviewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionPreviewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionPreviewData" },
		{ "ModuleRelativePath", "Public/SBZLifeActionPreviewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionPreviewData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_AnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionPreviewData" },
		{ "ModuleRelativePath", "Public/SBZLifeActionPreviewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_AnimationCollection = { "AnimationCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionPreviewData, AnimationCollection), Z_Construct_UClass_USBZBaseCharacterAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_AnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_AnimationCollection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewStance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionPreviewData" },
		{ "ModuleRelativePath", "Public/SBZLifeActionPreviewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewStance = { "PreviewStance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionPreviewData, PreviewStance), Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewStance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableFamily_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionPreviewData" },
		{ "ModuleRelativePath", "Public/SBZLifeActionPreviewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableFamily = { "PreviewEquippableFamily", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionPreviewData, PreviewEquippableFamily), Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableFamily_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableFamily_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionPreviewData" },
		{ "ModuleRelativePath", "Public/SBZLifeActionPreviewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableClass = { "PreviewEquippableClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionPreviewData, PreviewEquippableClass), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionPreviewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_AnimationCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewStance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableFamily_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableFamily,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionPreviewData_Statics::NewProp_PreviewEquippableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionPreviewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionPreviewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionPreviewData_Statics::ClassParams = {
		&USBZLifeActionPreviewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLifeActionPreviewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionPreviewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionPreviewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionPreviewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionPreviewData, 2158318934);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionPreviewData>()
	{
		return USBZLifeActionPreviewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionPreviewData(Z_Construct_UClass_USBZLifeActionPreviewData, &USBZLifeActionPreviewData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionPreviewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionPreviewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
