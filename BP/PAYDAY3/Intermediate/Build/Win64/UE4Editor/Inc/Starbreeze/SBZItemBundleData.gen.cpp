// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemBundleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemBundleData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemBundleData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemBundleData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZItemBundleData::StaticRegisterNativesUSBZItemBundleData()
	{
	}
	UClass* Z_Construct_UClass_USBZItemBundleData_NoRegister()
	{
		return USBZItemBundleData::StaticClass();
	}
	struct Z_Construct_UClass_USBZItemBundleData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZItemBundleData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemBundleData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZItemBundleData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZItemBundleData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZItemBundleData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZItemBundleData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZItemBundleData_Statics::ClassParams = {
		&USBZItemBundleData::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZItemBundleData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemBundleData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZItemBundleData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZItemBundleData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZItemBundleData, 2565035955);
	template<> STARBREEZE_API UClass* StaticClass<USBZItemBundleData>()
	{
		return USBZItemBundleData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZItemBundleData(Z_Construct_UClass_USBZItemBundleData, &USBZItemBundleData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZItemBundleData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZItemBundleData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
