// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPartDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPartDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularMeshContainer_NoRegister();
// End Cross Module References
	void USBZWeaponPartDataAsset::StaticRegisterNativesUSBZWeaponPartDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister()
	{
		return USBZWeaponPartDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPartDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddTagToWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddTagToWeapon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModularMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModularMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UseDefaultPartsFromSlotsAndBlock_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDefaultPartsFromSlotsAndBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UseDefaultPartsFromSlotsAndBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPartDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_AddTagToWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_AddTagToWeapon = { "AddTagToWeapon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPartDataAsset, AddTagToWeapon), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_AddTagToWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_AddTagToWeapon_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_ModularMeshes_Inner = { "ModularMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZModularMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_ModularMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_ModularMeshes = { "ModularMeshes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPartDataAsset, ModularMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_ModularMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_ModularMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_UseDefaultPartsFromSlotsAndBlock_Inner = { "UseDefaultPartsFromSlotsAndBlock", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_UseDefaultPartsFromSlotsAndBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_UseDefaultPartsFromSlotsAndBlock = { "UseDefaultPartsFromSlotsAndBlock", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPartDataAsset, UseDefaultPartsFromSlotsAndBlock), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_UseDefaultPartsFromSlotsAndBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_UseDefaultPartsFromSlotsAndBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_AddTagToWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_ModularMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_ModularMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_UseDefaultPartsFromSlotsAndBlock_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::NewProp_UseDefaultPartsFromSlotsAndBlock,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZModularMeshContainer_NoRegister, (int32)VTABLE_OFFSET(USBZWeaponPartDataAsset, ISBZModularMeshContainer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPartDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::ClassParams = {
		&USBZWeaponPartDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPartDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPartDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPartDataAsset, 4057478546);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPartDataAsset>()
	{
		return USBZWeaponPartDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPartDataAsset(Z_Construct_UClass_USBZWeaponPartDataAsset, &USBZWeaponPartDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPartDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPartDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
