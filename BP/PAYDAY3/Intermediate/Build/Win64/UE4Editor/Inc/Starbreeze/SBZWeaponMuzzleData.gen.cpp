// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponMuzzleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponMuzzleData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMuzzleData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMuzzleData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMuzzleSuppressor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void USBZWeaponMuzzleData::StaticRegisterNativesUSBZWeaponMuzzleData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponMuzzleData_NoRegister()
	{
		return USBZWeaponMuzzleData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponMuzzleData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuppressorStrength_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressorStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuppressorStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireEmitterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FireEmitterMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponMuzzleData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartCustomData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMuzzleData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponMuzzleData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponMuzzleData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_SuppressorStrength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_SuppressorStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMuzzleData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMuzzleData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_SuppressorStrength = { "SuppressorStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMuzzleData, SuppressorStrength), Z_Construct_UEnum_Starbreeze_ESBZMuzzleSuppressor, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_SuppressorStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_SuppressorStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_FireEmitterMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMuzzleData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMuzzleData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_FireEmitterMesh = { "FireEmitterMesh", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMuzzleData, FireEmitterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_FireEmitterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_FireEmitterMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponMuzzleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_SuppressorStrength_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_SuppressorStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMuzzleData_Statics::NewProp_FireEmitterMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponMuzzleData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponMuzzleData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponMuzzleData_Statics::ClassParams = {
		&USBZWeaponMuzzleData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponMuzzleData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMuzzleData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMuzzleData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMuzzleData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponMuzzleData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponMuzzleData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponMuzzleData, 3211588047);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponMuzzleData>()
	{
		return USBZWeaponMuzzleData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponMuzzleData(Z_Construct_UClass_USBZWeaponMuzzleData, &USBZWeaponMuzzleData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponMuzzleData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponMuzzleData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
