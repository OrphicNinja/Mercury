// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnRequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnRequestData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnRequestData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnRequestData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnVariationData();
// End Cross Module References
	void USBZPawnSpawnRequestData::StaticRegisterNativesUSBZPawnSpawnRequestData()
	{
	}
	UClass* Z_Construct_UClass_USBZPawnSpawnRequestData_NoRegister()
	{
		return USBZPawnSpawnRequestData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPawnSpawnRequestData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassVariationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassVariationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassVariationArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnVariationDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnVariationDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PawnVariationDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPawnSpawnRequestData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_ClassVariationArray_Inner = { "ClassVariationArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_ClassVariationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnRequestData" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_ClassVariationArray = { "ClassVariationArray", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnSpawnRequestData, ClassVariationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_ClassVariationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_ClassVariationArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_PawnVariationDatas_Inner = { "PawnVariationDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPawnVariationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_PawnVariationDatas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnRequestData" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_PawnVariationDatas = { "PawnVariationDatas", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnSpawnRequestData, PawnVariationDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_PawnVariationDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_PawnVariationDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_ClassVariationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_ClassVariationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_PawnVariationDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::NewProp_PawnVariationDatas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPawnSpawnRequestData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::ClassParams = {
		&USBZPawnSpawnRequestData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPawnSpawnRequestData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPawnSpawnRequestData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPawnSpawnRequestData, 120243738);
	template<> STARBREEZE_API UClass* StaticClass<USBZPawnSpawnRequestData>()
	{
		return USBZPawnSpawnRequestData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPawnSpawnRequestData(Z_Construct_UClass_USBZPawnSpawnRequestData, &USBZPawnSpawnRequestData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPawnSpawnRequestData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPawnSpawnRequestData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
