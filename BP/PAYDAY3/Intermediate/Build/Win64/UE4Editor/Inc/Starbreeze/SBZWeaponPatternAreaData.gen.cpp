// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPatternAreaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPatternAreaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternAreaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternAreaData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternAreaDefinition();
// End Cross Module References
	void USBZWeaponPatternAreaData::StaticRegisterNativesUSBZWeaponPatternAreaData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponPatternAreaData_NoRegister()
	{
		return USBZWeaponPatternAreaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPatternAreaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AreaName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAreaDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAreaDefinition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPatternAreaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternAreaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_AreaName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternAreaData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternAreaData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_AreaName = { "AreaName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPatternAreaData, AreaName), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_AreaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_AreaName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_DefaultAreaDefinition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternAreaData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternAreaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_DefaultAreaDefinition = { "DefaultAreaDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPatternAreaData, DefaultAreaDefinition), Z_Construct_UScriptStruct_FSBZWeaponPatternAreaDefinition, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_DefaultAreaDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_DefaultAreaDefinition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_AreaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::NewProp_DefaultAreaDefinition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPatternAreaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::ClassParams = {
		&USBZWeaponPatternAreaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPatternAreaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPatternAreaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPatternAreaData, 21987708);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPatternAreaData>()
	{
		return USBZWeaponPatternAreaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPatternAreaData(Z_Construct_UClass_USBZWeaponPatternAreaData, &USBZWeaponPatternAreaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPatternAreaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPatternAreaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
