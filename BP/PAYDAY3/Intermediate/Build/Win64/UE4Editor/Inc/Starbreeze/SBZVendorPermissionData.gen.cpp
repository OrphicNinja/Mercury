// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVendorPermissionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVendorPermissionData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorPermissionData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorPermissionData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZVendorPermissionData::StaticRegisterNativesUSBZVendorPermissionData()
	{
	}
	UClass* Z_Construct_UClass_USBZVendorPermissionData_NoRegister()
	{
		return USBZVendorPermissionData::StaticClass();
	}
	struct Z_Construct_UClass_USBZVendorPermissionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VendorItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVendorPermissionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVendorPermissionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVendorPermissionData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVendorPermissionData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVendorPermissionData_Statics::NewProp_VendorItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVendorPermissionData" },
		{ "ModuleRelativePath", "Public/SBZVendorPermissionData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZVendorPermissionData_Statics::NewProp_VendorItemSku = { "VendorItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVendorPermissionData, VendorItemSku), METADATA_PARAMS(Z_Construct_UClass_USBZVendorPermissionData_Statics::NewProp_VendorItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVendorPermissionData_Statics::NewProp_VendorItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVendorPermissionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVendorPermissionData_Statics::NewProp_VendorItemSku,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVendorPermissionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVendorPermissionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVendorPermissionData_Statics::ClassParams = {
		&USBZVendorPermissionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVendorPermissionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVendorPermissionData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVendorPermissionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVendorPermissionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVendorPermissionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVendorPermissionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVendorPermissionData, 410553651);
	template<> STARBREEZE_API UClass* StaticClass<USBZVendorPermissionData>()
	{
		return USBZVendorPermissionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVendorPermissionData(Z_Construct_UClass_USBZVendorPermissionData, &USBZVendorPermissionData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVendorPermissionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVendorPermissionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
