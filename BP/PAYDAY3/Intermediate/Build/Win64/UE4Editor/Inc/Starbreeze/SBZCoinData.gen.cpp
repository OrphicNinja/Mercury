// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCoinData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCoinData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoinData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoinData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCoinData::StaticRegisterNativesUSBZCoinData()
	{
	}
	UClass* Z_Construct_UClass_USBZCoinData_NoRegister()
	{
		return USBZCoinData::StaticClass();
	}
	struct Z_Construct_UClass_USBZCoinData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCoinData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCoinData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCoinData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCoinData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCoinData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCoinData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCoinData_Statics::ClassParams = {
		&USBZCoinData::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCoinData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCoinData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCoinData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCoinData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCoinData, 1586957354);
	template<> STARBREEZE_API UClass* StaticClass<USBZCoinData>()
	{
		return USBZCoinData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCoinData(Z_Construct_UClass_USBZCoinData, &USBZCoinData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCoinData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCoinData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
