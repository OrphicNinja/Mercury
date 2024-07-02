// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInventorySlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInventorySlotData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventorySlotData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventorySlotData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInventorySlotData::StaticRegisterNativesUSBZInventorySlotData()
	{
	}
	UClass* Z_Construct_UClass_USBZInventorySlotData_NoRegister()
	{
		return USBZInventorySlotData::StaticClass();
	}
	struct Z_Construct_UClass_USBZInventorySlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInventorySlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventorySlotData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInventorySlotData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInventorySlotData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInventorySlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInventorySlotData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInventorySlotData_Statics::ClassParams = {
		&USBZInventorySlotData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZInventorySlotData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventorySlotData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInventorySlotData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInventorySlotData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInventorySlotData, 2602199212);
	template<> STARBREEZE_API UClass* StaticClass<USBZInventorySlotData>()
	{
		return USBZInventorySlotData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInventorySlotData(Z_Construct_UClass_USBZInventorySlotData, &USBZInventorySlotData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInventorySlotData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInventorySlotData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
