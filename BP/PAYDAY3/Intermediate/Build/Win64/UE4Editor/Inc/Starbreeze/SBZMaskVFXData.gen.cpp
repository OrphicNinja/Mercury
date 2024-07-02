// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskVFXData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskVFXData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskVFXData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskVFXData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMaskVFXSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmitterSpawnerData_NoRegister();
// End Cross Module References
	void USBZMaskVFXData::StaticRegisterNativesUSBZMaskVFXData()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskVFXData_NoRegister()
	{
		return USBZMaskVFXData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskVFXData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VFXSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFXSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VFXSlot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterSpawnerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmitterSpawnerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskVFXData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskVFXData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskVFXData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskVFXData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_VFXSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_VFXSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskVFXData" },
		{ "ModuleRelativePath", "Public/SBZMaskVFXData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_VFXSlot = { "VFXSlot", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskVFXData, VFXSlot), Z_Construct_UEnum_Starbreeze_ESBZMaskVFXSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_VFXSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_VFXSlot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_EmitterSpawnerArray_Inner = { "EmitterSpawnerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZEmitterSpawnerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_EmitterSpawnerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskVFXData" },
		{ "ModuleRelativePath", "Public/SBZMaskVFXData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_EmitterSpawnerArray = { "EmitterSpawnerArray", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskVFXData, EmitterSpawnerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_EmitterSpawnerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_EmitterSpawnerArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskVFXData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_VFXSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_VFXSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_EmitterSpawnerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskVFXData_Statics::NewProp_EmitterSpawnerArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskVFXData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskVFXData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskVFXData_Statics::ClassParams = {
		&USBZMaskVFXData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMaskVFXData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskVFXData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskVFXData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskVFXData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskVFXData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskVFXData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskVFXData, 223008566);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskVFXData>()
	{
		return USBZMaskVFXData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskVFXData(Z_Construct_UClass_USBZMaskVFXData, &USBZMaskVFXData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskVFXData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskVFXData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
