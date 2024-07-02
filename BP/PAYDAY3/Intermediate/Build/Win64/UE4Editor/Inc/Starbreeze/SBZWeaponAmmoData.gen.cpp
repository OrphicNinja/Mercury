// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponAmmoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponAmmoData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponAmmoData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponAmmoData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void USBZWeaponAmmoData::StaticRegisterNativesUSBZWeaponAmmoData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponAmmoData_NoRegister()
	{
		return USBZWeaponAmmoData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponAmmoData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EmptyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LoadedMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponAmmoData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartCustomData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAmmoData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponAmmoData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponAmmoData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_EmptyMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAmmoData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAmmoData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_EmptyMesh = { "EmptyMesh", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAmmoData, EmptyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_EmptyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_EmptyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_LoadedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAmmoData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAmmoData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_LoadedMesh = { "LoadedMesh", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAmmoData, LoadedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_LoadedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_LoadedMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponAmmoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_EmptyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAmmoData_Statics::NewProp_LoadedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponAmmoData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponAmmoData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponAmmoData_Statics::ClassParams = {
		&USBZWeaponAmmoData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponAmmoData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAmmoData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAmmoData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAmmoData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponAmmoData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponAmmoData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponAmmoData, 4108009955);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponAmmoData>()
	{
		return USBZWeaponAmmoData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponAmmoData(Z_Construct_UClass_USBZWeaponAmmoData, &USBZWeaponAmmoData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponAmmoData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponAmmoData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
