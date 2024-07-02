// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningAssetData1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningAssetData1() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData1_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData1();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPreplanningAssetData1::StaticRegisterNativesUSBZPreplanningAssetData1()
	{
	}
	UClass* Z_Construct_UClass_USBZPreplanningAssetData1_NoRegister()
	{
		return USBZPreplanningAssetData1::StaticClass();
	}
	struct Z_Construct_UClass_USBZPreplanningAssetData1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPreplanningAssetData1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPreplanningAssetData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPreplanningAssetData1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPreplanningAssetData1.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetData1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPreplanningAssetData1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPreplanningAssetData1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPreplanningAssetData1_Statics::ClassParams = {
		&USBZPreplanningAssetData1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPreplanningAssetData1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningAssetData1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPreplanningAssetData1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPreplanningAssetData1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPreplanningAssetData1, 1623716217);
	template<> STARBREEZE_API UClass* StaticClass<USBZPreplanningAssetData1>()
	{
		return USBZPreplanningAssetData1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPreplanningAssetData1(Z_Construct_UClass_USBZPreplanningAssetData1, &USBZPreplanningAssetData1::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPreplanningAssetData1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPreplanningAssetData1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
