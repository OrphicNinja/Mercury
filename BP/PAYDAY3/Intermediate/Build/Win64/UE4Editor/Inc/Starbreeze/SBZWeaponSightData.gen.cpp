// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponSightData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponSightData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSightData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSightData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponTargetingData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponDOFData_NoRegister();
// End Cross Module References
	void USBZWeaponSightData::StaticRegisterNativesUSBZWeaponSightData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponSightData_NoRegister()
	{
		return USBZWeaponSightData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponSightData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DOFData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DOFData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponSightData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartCustomData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSightData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponSightData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponSightData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_TargetingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSightData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_TargetingData = { "TargetingData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSightData, TargetingData), Z_Construct_UClass_USBZWeaponTargetingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_TargetingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_TargetingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DOFData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSightData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DOFData = { "DOFData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSightData, DOFData), Z_Construct_UClass_USBZWeaponDOFData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DOFData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DOFData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSightData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSightData, DisplayName), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponSightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_TargetingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DOFData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSightData_Statics::NewProp_DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponSightData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponSightData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponSightData_Statics::ClassParams = {
		&USBZWeaponSightData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponSightData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSightData_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSightData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSightData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponSightData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponSightData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponSightData, 2296140374);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponSightData>()
	{
		return USBZWeaponSightData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponSightData(Z_Construct_UClass_USBZWeaponSightData, &USBZWeaponSightData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponSightData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponSightData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
