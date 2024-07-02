// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponDecalData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponDecalData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponDecalData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponDecalData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void USBZWeaponDecalData::StaticRegisterNativesUSBZWeaponDecalData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponDecalData_NoRegister()
	{
		return USBZWeaponDecalData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponDecalData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalTextureRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalTextureRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalTexturePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalTexturePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponDecalData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDecalData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponDecalData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponDecalData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDecalData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDecalData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexture = { "DecalTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDecalData, DecalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDecalData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDecalData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureRotation = { "DecalTextureRotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDecalData, DecalTextureRotation), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDecalData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDecalData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureSize = { "DecalTextureSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDecalData, DecalTextureSize), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexturePosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDecalData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDecalData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexturePosition = { "DecalTexturePosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDecalData, DecalTexturePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexturePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexturePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponDecalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDecalData_Statics::NewProp_DecalTexturePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponDecalData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponDecalData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponDecalData_Statics::ClassParams = {
		&USBZWeaponDecalData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponDecalData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDecalData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDecalData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDecalData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponDecalData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponDecalData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponDecalData, 3421807455);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponDecalData>()
	{
		return USBZWeaponDecalData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponDecalData(Z_Construct_UClass_USBZWeaponDecalData, &USBZWeaponDecalData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponDecalData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponDecalData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
