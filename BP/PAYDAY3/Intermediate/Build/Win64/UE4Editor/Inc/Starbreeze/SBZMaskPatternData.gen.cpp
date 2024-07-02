// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskPatternData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskPatternData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPatternData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPatternData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPatternDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMaskPatternData::StaticRegisterNativesUSBZMaskPatternData()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskPatternData_NoRegister()
	{
		return USBZMaskPatternData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskPatternData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskPatternData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsPatternDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskPatternData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskPatternData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskPatternData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskPatternData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskPatternData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskPatternData_Statics::ClassParams = {
		&USBZMaskPatternData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskPatternData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskPatternData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskPatternData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskPatternData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskPatternData, 1515338722);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskPatternData>()
	{
		return USBZMaskPatternData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskPatternData(Z_Construct_UClass_USBZMaskPatternData, &USBZMaskPatternData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskPatternData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskPatternData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
