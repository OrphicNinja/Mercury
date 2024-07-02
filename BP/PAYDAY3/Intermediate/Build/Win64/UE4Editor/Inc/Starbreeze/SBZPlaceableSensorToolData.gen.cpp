// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableSensorToolData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableSensorToolData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableSensorToolData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableSensorToolData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlaceableSensorToolData::StaticRegisterNativesUSBZPlaceableSensorToolData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceableSensorToolData_NoRegister()
	{
		return USBZPlaceableSensorToolData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceableSensorToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceableSensorToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableSensorToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableSensorToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorToolData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceableSensorToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceableSensorToolData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceableSensorToolData_Statics::ClassParams = {
		&USBZPlaceableSensorToolData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableSensorToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableSensorToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceableSensorToolData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceableSensorToolData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceableSensorToolData, 2529791547);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceableSensorToolData>()
	{
		return USBZPlaceableSensorToolData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceableSensorToolData(Z_Construct_UClass_USBZPlaceableSensorToolData, &USBZPlaceableSensorToolData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceableSensorToolData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceableSensorToolData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
