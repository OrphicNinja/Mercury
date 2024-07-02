// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPartDataCosmeticOverrideConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPartDataCosmeticOverrideConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularMeshContainer_NoRegister();
// End Cross Module References
	void USBZWeaponPartDataCosmeticOverrideConfig::StaticRegisterNativesUSBZWeaponPartDataCosmeticOverrideConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_NoRegister()
	{
		return USBZWeaponPartDataCosmeticOverrideConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenWeaponPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverriddenWeaponPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddMeshes_MetaData[];
#endif
		static void NewProp_bAddMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverriddenWeaponMaterialPerMesh_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverriddenWeaponMaterialPerMesh_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenWeaponMaterialPerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OverriddenWeaponMaterialPerMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPartDataCosmeticOverrideConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataCosmeticOverrideConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartDataCosmeticOverrideConfig" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataCosmeticOverrideConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponPart = { "OverriddenWeaponPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPartDataCosmeticOverrideConfig, OverriddenWeaponPart), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_bAddMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartDataCosmeticOverrideConfig" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataCosmeticOverrideConfig.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_bAddMeshes_SetBit(void* Obj)
	{
		((USBZWeaponPartDataCosmeticOverrideConfig*)Obj)->bAddMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_bAddMeshes = { "bAddMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponPartDataCosmeticOverrideConfig), &Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_bAddMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_bAddMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_bAddMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZModularMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_Meshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartDataCosmeticOverrideConfig" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataCosmeticOverrideConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPartDataCosmeticOverrideConfig, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh_ValueProp = { "OverriddenWeaponMaterialPerMesh", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh_Key_KeyProp = { "OverriddenWeaponMaterialPerMesh_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartDataCosmeticOverrideConfig" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataCosmeticOverrideConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh = { "OverriddenWeaponMaterialPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPartDataCosmeticOverrideConfig, OverriddenWeaponMaterialPerMesh), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_bAddMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::NewProp_OverriddenWeaponMaterialPerMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZModularMeshContainer_NoRegister, (int32)VTABLE_OFFSET(USBZWeaponPartDataCosmeticOverrideConfig, ISBZModularMeshContainer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPartDataCosmeticOverrideConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::ClassParams = {
		&USBZWeaponPartDataCosmeticOverrideConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPartDataCosmeticOverrideConfig, 3087732789);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPartDataCosmeticOverrideConfig>()
	{
		return USBZWeaponPartDataCosmeticOverrideConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPartDataCosmeticOverrideConfig(Z_Construct_UClass_USBZWeaponPartDataCosmeticOverrideConfig, &USBZWeaponPartDataCosmeticOverrideConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPartDataCosmeticOverrideConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPartDataCosmeticOverrideConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
