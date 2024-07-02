// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGloveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGloveData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	void USBZGloveData::StaticRegisterNativesUSBZGloveData()
	{
	}
	UClass* Z_Construct_UClass_USBZGloveData_NoRegister()
	{
		return USBZGloveData::StaticClass();
	}
	struct Z_Construct_UClass_USBZGloveData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGloveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGloveData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGloveData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveData" },
		{ "ModuleRelativePath", "Public/SBZGloveData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh1P = { "SkeletalMesh1P", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGloveData, SkeletalMesh1P), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh3P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveData" },
		{ "ModuleRelativePath", "Public/SBZGloveData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh3P = { "SkeletalMesh3P", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGloveData, SkeletalMesh3P), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh3P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveData_Statics::NewProp_OverrideMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveData" },
		{ "ModuleRelativePath", "Public/SBZGloveData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZGloveData_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGloveData, OverrideMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGloveData_Statics::NewProp_OverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveData_Statics::NewProp_OverrideMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGloveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGloveData_Statics::NewProp_SkeletalMesh3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGloveData_Statics::NewProp_OverrideMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGloveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGloveData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGloveData_Statics::ClassParams = {
		&USBZGloveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGloveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGloveData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGloveData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGloveData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGloveData, 349104737);
	template<> STARBREEZE_API UClass* StaticClass<USBZGloveData>()
	{
		return USBZGloveData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGloveData(Z_Construct_UClass_USBZGloveData, &USBZGloveData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGloveData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGloveData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
