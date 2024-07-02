// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableProjectileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableProjectileData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableProjectileData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableProjectileData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZThrowableProjectileData::StaticRegisterNativesUSBZThrowableProjectileData()
	{
	}
	UClass* Z_Construct_UClass_USBZThrowableProjectileData_NoRegister()
	{
		return USBZThrowableProjectileData::StaticClass();
	}
	struct Z_Construct_UClass_USBZThrowableProjectileData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThrowableProjectileData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZThrowableData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowableProjectileData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThrowableProjectileData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableProjectileData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThrowableProjectileData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThrowableProjectileData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThrowableProjectileData_Statics::ClassParams = {
		&USBZThrowableProjectileData::StaticClass,
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
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZThrowableProjectileData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowableProjectileData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThrowableProjectileData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThrowableProjectileData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThrowableProjectileData, 2175723812);
	template<> STARBREEZE_API UClass* StaticClass<USBZThrowableProjectileData>()
	{
		return USBZThrowableProjectileData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThrowableProjectileData(Z_Construct_UClass_USBZThrowableProjectileData, &USBZThrowableProjectileData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThrowableProjectileData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThrowableProjectileData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
