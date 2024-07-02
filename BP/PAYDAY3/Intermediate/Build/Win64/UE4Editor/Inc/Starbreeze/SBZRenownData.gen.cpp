// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRenownData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRenownData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRenownData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRenownData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	void USBZRenownData::StaticRegisterNativesUSBZRenownData()
	{
	}
	UClass* Z_Construct_UClass_USBZRenownData_NoRegister()
	{
		return USBZRenownData::StaticClass();
	}
	struct Z_Construct_UClass_USBZRenownData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TierColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TierColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelsPerDivision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelsPerDivision;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DivisionSprites_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DivisionSprites_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DivisionSprites;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRenownData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRenownData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRenownData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRenownData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRenownData_Statics::NewProp_TierColors_Inner = { "TierColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRenownData_Statics::NewProp_TierColors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRenownData" },
		{ "ModuleRelativePath", "Public/SBZRenownData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZRenownData_Statics::NewProp_TierColors = { "TierColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRenownData, TierColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZRenownData_Statics::NewProp_TierColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRenownData_Statics::NewProp_TierColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRenownData_Statics::NewProp_LevelsPerDivision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRenownData" },
		{ "ModuleRelativePath", "Public/SBZRenownData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZRenownData_Statics::NewProp_LevelsPerDivision = { "LevelsPerDivision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRenownData, LevelsPerDivision), METADATA_PARAMS(Z_Construct_UClass_USBZRenownData_Statics::NewProp_LevelsPerDivision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRenownData_Statics::NewProp_LevelsPerDivision_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRenownData_Statics::NewProp_DivisionSprites_Inner = { "DivisionSprites", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRenownData_Statics::NewProp_DivisionSprites_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRenownData" },
		{ "ModuleRelativePath", "Public/SBZRenownData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZRenownData_Statics::NewProp_DivisionSprites = { "DivisionSprites", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRenownData, DivisionSprites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZRenownData_Statics::NewProp_DivisionSprites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRenownData_Statics::NewProp_DivisionSprites_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRenownData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRenownData_Statics::NewProp_TierColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRenownData_Statics::NewProp_TierColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRenownData_Statics::NewProp_LevelsPerDivision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRenownData_Statics::NewProp_DivisionSprites_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRenownData_Statics::NewProp_DivisionSprites,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRenownData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRenownData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRenownData_Statics::ClassParams = {
		&USBZRenownData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZRenownData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRenownData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRenownData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRenownData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRenownData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRenownData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRenownData, 310237780);
	template<> STARBREEZE_API UClass* StaticClass<USBZRenownData>()
	{
		return USBZRenownData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRenownData(Z_Construct_UClass_USBZRenownData, &USBZRenownData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRenownData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRenownData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
