// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWatchData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWatchData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWatchData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWatchData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWatchData::StaticRegisterNativesUSBZWatchData()
	{
	}
	UClass* Z_Construct_UClass_USBZWatchData_NoRegister()
	{
		return USBZWatchData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWatchData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWatchData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWatchData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWatchData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWatchData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWatchData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWatchData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWatchData_Statics::ClassParams = {
		&USBZWatchData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZWatchData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWatchData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWatchData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWatchData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWatchData, 907896655);
	template<> STARBREEZE_API UClass* StaticClass<USBZWatchData>()
	{
		return USBZWatchData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWatchData(Z_Construct_UClass_USBZWatchData, &USBZWatchData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWatchData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWatchData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
