// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeCategoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeCategoryData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	void USBZChallengeCategoryData::StaticRegisterNativesUSBZChallengeCategoryData()
	{
	}
	UClass* Z_Construct_UClass_USBZChallengeCategoryData_NoRegister()
	{
		return USBZChallengeCategoryData::StaticClass();
	}
	struct Z_Construct_UClass_USBZChallengeCategoryData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChallengeCategoryData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeCategoryData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChallengeCategoryData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeCategoryData" },
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeCategoryData, CategoryTag), METADATA_PARAMS(Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeCategoryData" },
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeCategoryData, CategoryName), METADATA_PARAMS(Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_DisplayIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeCategoryData" },
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_DisplayIcon = { "DisplayIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeCategoryData, DisplayIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_DisplayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_DisplayIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZChallengeCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeCategoryData_Statics::NewProp_DisplayIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChallengeCategoryData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChallengeCategoryData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChallengeCategoryData_Statics::ClassParams = {
		&USBZChallengeCategoryData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZChallengeCategoryData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChallengeCategoryData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChallengeCategoryData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChallengeCategoryData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChallengeCategoryData, 2048035417);
	template<> STARBREEZE_API UClass* StaticClass<USBZChallengeCategoryData>()
	{
		return USBZChallengeCategoryData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChallengeCategoryData(Z_Construct_UClass_USBZChallengeCategoryData, &USBZChallengeCategoryData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChallengeCategoryData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChallengeCategoryData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
