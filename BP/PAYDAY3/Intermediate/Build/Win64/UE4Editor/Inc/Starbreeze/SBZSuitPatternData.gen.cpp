// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitPatternData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitPatternData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPatternData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPatternData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPatternDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitPatternData::StaticRegisterNativesUSBZSuitPatternData()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitPatternData_NoRegister()
	{
		return USBZSuitPatternData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitPatternData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitPatternData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsPatternDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitPatternData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitPatternData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitPatternData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitPatternData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitPatternData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitPatternData_Statics::ClassParams = {
		&USBZSuitPatternData::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitPatternData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPatternData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitPatternData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitPatternData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitPatternData, 2031144308);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitPatternData>()
	{
		return USBZSuitPatternData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitPatternData(Z_Construct_UClass_USBZSuitPatternData, &USBZSuitPatternData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitPatternData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitPatternData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
