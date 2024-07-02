// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerSmokeGrenadeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerSmokeGrenadeData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSmokeGrenadeData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSmokeGrenadeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerGasGrenadeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerSmokeGrenadeData::StaticRegisterNativesUSBZPlayerSmokeGrenadeData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerSmokeGrenadeData_NoRegister()
	{
		return USBZPlayerSmokeGrenadeData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeMultiplierIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeMultiplierIncrease;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerGasGrenadeData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerSmokeGrenadeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerSmokeGrenadeData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::NewProp_RangeMultiplierIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSmokeGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZPlayerSmokeGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::NewProp_RangeMultiplierIncrease = { "RangeMultiplierIncrease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerSmokeGrenadeData, RangeMultiplierIncrease), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::NewProp_RangeMultiplierIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::NewProp_RangeMultiplierIncrease_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::NewProp_RangeMultiplierIncrease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerSmokeGrenadeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::ClassParams = {
		&USBZPlayerSmokeGrenadeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerSmokeGrenadeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerSmokeGrenadeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerSmokeGrenadeData, 2838779193);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerSmokeGrenadeData>()
	{
		return USBZPlayerSmokeGrenadeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerSmokeGrenadeData(Z_Construct_UClass_USBZPlayerSmokeGrenadeData, &USBZPlayerSmokeGrenadeData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerSmokeGrenadeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerSmokeGrenadeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
