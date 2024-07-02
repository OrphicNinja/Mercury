// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitData::StaticRegisterNativesUSBZSuitData()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitData_NoRegister()
	{
		return USBZSuitData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitData_Statics::ClassParams = {
		&USBZSuitData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitData, 2865873896);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitData>()
	{
		return USBZSuitData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitData(Z_Construct_UClass_USBZSuitData, &USBZSuitData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
