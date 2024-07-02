// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponDOFData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponDOFData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponDOFData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponDOFData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCameraDOF();
// End Cross Module References
	void USBZWeaponDOFData::StaticRegisterNativesUSBZWeaponDOFData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponDOFData_NoRegister()
	{
		return USBZWeaponDOFData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponDOFData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalDOF_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalDOF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingDOF_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetingDOF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopPassNormalDOF_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopPassNormalDOF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopPassTargetingDOF_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopPassTargetingDOF;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponDOFData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDOFData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponDOFData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponDOFData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_NormalDOF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDOFData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDOFData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_NormalDOF = { "NormalDOF", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDOFData, NormalDOF), Z_Construct_UScriptStruct_FSBZCameraDOF, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_NormalDOF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_NormalDOF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TargetingDOF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDOFData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDOFData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TargetingDOF = { "TargetingDOF", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDOFData, TargetingDOF), Z_Construct_UScriptStruct_FSBZCameraDOF, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TargetingDOF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TargetingDOF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassNormalDOF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDOFData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDOFData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassNormalDOF = { "TopPassNormalDOF", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDOFData, TopPassNormalDOF), Z_Construct_UScriptStruct_FSBZCameraDOF, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassNormalDOF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassNormalDOF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassTargetingDOF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponDOFData" },
		{ "ModuleRelativePath", "Public/SBZWeaponDOFData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassTargetingDOF = { "TopPassTargetingDOF", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponDOFData, TopPassTargetingDOF), Z_Construct_UScriptStruct_FSBZCameraDOF, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassTargetingDOF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassTargetingDOF_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponDOFData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_NormalDOF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TargetingDOF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassNormalDOF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponDOFData_Statics::NewProp_TopPassTargetingDOF,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponDOFData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponDOFData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponDOFData_Statics::ClassParams = {
		&USBZWeaponDOFData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponDOFData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDOFData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponDOFData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponDOFData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponDOFData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponDOFData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponDOFData, 1370893248);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponDOFData>()
	{
		return USBZWeaponDOFData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponDOFData(Z_Construct_UClass_USBZWeaponDOFData, &USBZWeaponDOFData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponDOFData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponDOFData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
