// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponCharmData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponCharmData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeaponCharm_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularMeshContainer_NoRegister();
// End Cross Module References
	void USBZWeaponCharmData::StaticRegisterNativesUSBZWeaponCharmData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponCharmData_NoRegister()
	{
		return USBZWeaponCharmData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponCharmData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModularMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModularMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachmentBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCharmClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_WeaponCharmClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponCharmData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCharmData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponCharmData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_ModularMeshes_Inner = { "ModularMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZModularMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_ModularMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCharmData" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_ModularMeshes = { "ModularMeshes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCharmData, ModularMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_ModularMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_ModularMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCharmData" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentBoneName = { "AttachmentBoneName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCharmData, AttachmentBoneName), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_WeaponCharmClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCharmData" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_WeaponCharmClass = { "WeaponCharmClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCharmData, WeaponCharmClass), Z_Construct_UClass_ASBZWeaponCharm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_WeaponCharmClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_WeaponCharmClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCharmData" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentOffset = { "AttachmentOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCharmData, AttachmentOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponCharmData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_ModularMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_ModularMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_WeaponCharmClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCharmData_Statics::NewProp_AttachmentOffset,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZWeaponCharmData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZModularMeshContainer_NoRegister, (int32)VTABLE_OFFSET(USBZWeaponCharmData, ISBZModularMeshContainer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponCharmData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponCharmData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponCharmData_Statics::ClassParams = {
		&USBZWeaponCharmData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponCharmData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCharmData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponCharmData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponCharmData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponCharmData, 1948028948);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponCharmData>()
	{
		return USBZWeaponCharmData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponCharmData(Z_Construct_UClass_USBZWeaponCharmData, &USBZWeaponCharmData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponCharmData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponCharmData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
