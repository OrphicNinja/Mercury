// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZECMJammerToolData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZECMJammerToolData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZECMJammerToolData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZECMJammerToolData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZECMJammerToolData::StaticRegisterNativesUSBZECMJammerToolData()
	{
	}
	UClass* Z_Construct_UClass_USBZECMJammerToolData_NoRegister()
	{
		return USBZECMJammerToolData::StaticClass();
	}
	struct Z_Construct_UClass_USBZECMJammerToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZECMJammerToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZECMJammerToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZECMJammerToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZECMJammerToolData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZECMJammerToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZECMJammerToolData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZECMJammerToolData_Statics::ClassParams = {
		&USBZECMJammerToolData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZECMJammerToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZECMJammerToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZECMJammerToolData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZECMJammerToolData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZECMJammerToolData, 3243209706);
	template<> STARBREEZE_API UClass* StaticClass<USBZECMJammerToolData>()
	{
		return USBZECMJammerToolData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZECMJammerToolData(Z_Construct_UClass_USBZECMJammerToolData, &USBZECMJammerToolData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZECMJammerToolData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZECMJammerToolData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
