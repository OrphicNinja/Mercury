// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerStatisticsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerStatisticsData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponProgressionStats();
// End Cross Module References
	void USBZPlayerStatisticsData::StaticRegisterNativesUSBZPlayerStatisticsData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerStatisticsData_NoRegister()
	{
		return USBZPlayerStatisticsData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerStatisticsData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatCodeToValueMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatCodeToValueMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCodeToValueMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StatCodeToValueMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemProgressionLevelMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProgressionLevelMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProgressionLevelMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemProgressionLevelMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerStatisticsData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatisticsData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerStatisticsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap_ValueProp = { "StatCodeToValueMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap_Key_KeyProp = { "StatCodeToValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatisticsData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap = { "StatCodeToValueMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerStatisticsData, StatCodeToValueMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap_ValueProp = { "ItemProgressionLevelMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponProgressionStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap_Key_KeyProp = { "ItemProgressionLevelMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatisticsData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap = { "ItemProgressionLevelMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerStatisticsData, ItemProgressionLevelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerStatisticsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_StatCodeToValueMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsData_Statics::NewProp_ItemProgressionLevelMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerStatisticsData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerStatisticsData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerStatisticsData_Statics::ClassParams = {
		&USBZPlayerStatisticsData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerStatisticsData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatisticsData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerStatisticsData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerStatisticsData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerStatisticsData, 1435383489);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerStatisticsData>()
	{
		return USBZPlayerStatisticsData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerStatisticsData(Z_Construct_UClass_USBZPlayerStatisticsData, &USBZPlayerStatisticsData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerStatisticsData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerStatisticsData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
