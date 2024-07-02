// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerFragGrenadeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerFragGrenadeData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerFragGrenadeData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerFragGrenadeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFragGrenadeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
// End Cross Module References
	void USBZPlayerFragGrenadeData::StaticRegisterNativesUSBZPlayerFragGrenadeData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerFragGrenadeData_NoRegister()
	{
		return USBZPlayerFragGrenadeData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageDistanceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZFragGrenadeData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerFragGrenadeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_DamageDistanceArray_Inner = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_DamageDistanceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZPlayerFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_DamageDistanceArray = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerFragGrenadeData, DamageDistanceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_DamageDistanceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_DamageDistanceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZPlayerFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerFragGrenadeData, ArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_ArmorPenetration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_DamageDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_DamageDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::NewProp_ArmorPenetration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerFragGrenadeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::ClassParams = {
		&USBZPlayerFragGrenadeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerFragGrenadeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerFragGrenadeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerFragGrenadeData, 3602754938);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerFragGrenadeData>()
	{
		return USBZPlayerFragGrenadeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerFragGrenadeData(Z_Construct_UClass_USBZPlayerFragGrenadeData, &USBZPlayerFragGrenadeData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerFragGrenadeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerFragGrenadeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
