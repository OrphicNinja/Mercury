// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitMaterialData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitMaterialData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitMaterialData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitMaterialData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitMaterialData::StaticRegisterNativesUSBZSuitMaterialData()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitMaterialData_NoRegister()
	{
		return USBZSuitMaterialData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitMaterialData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitMaterialData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitMaterialData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitMaterialData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitMaterialData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitMaterialData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitMaterialData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitMaterialData_Statics::ClassParams = {
		&USBZSuitMaterialData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitMaterialData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitMaterialData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitMaterialData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitMaterialData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitMaterialData, 538585443);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitMaterialData>()
	{
		return USBZSuitMaterialData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitMaterialData(Z_Construct_UClass_USBZSuitMaterialData, &USBZSuitMaterialData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitMaterialData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitMaterialData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
