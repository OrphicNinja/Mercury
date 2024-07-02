// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITaserFireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITaserFireData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITaserFireData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITaserFireData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeaponFireData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAITaserFireData::StaticRegisterNativesUSBZAITaserFireData()
	{
	}
	UClass* Z_Construct_UClass_USBZAITaserFireData_NoRegister()
	{
		return USBZAITaserFireData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAITaserFireData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAITaserFireData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIWeaponFireData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITaserFireData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAITaserFireData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAITaserFireData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITaserFireData_Statics::NewProp_DamageInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserFireData" },
		{ "ModuleRelativePath", "Public/SBZAITaserFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAITaserFireData_Statics::NewProp_DamageInterval = { "DamageInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DamageInterval, USBZAITaserFireData), STRUCT_OFFSET(USBZAITaserFireData, DamageInterval), METADATA_PARAMS(Z_Construct_UClass_USBZAITaserFireData_Statics::NewProp_DamageInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITaserFireData_Statics::NewProp_DamageInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAITaserFireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITaserFireData_Statics::NewProp_DamageInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAITaserFireData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAITaserFireData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAITaserFireData_Statics::ClassParams = {
		&USBZAITaserFireData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAITaserFireData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITaserFireData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAITaserFireData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITaserFireData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAITaserFireData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAITaserFireData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAITaserFireData, 593668368);
	template<> STARBREEZE_API UClass* StaticClass<USBZAITaserFireData>()
	{
		return USBZAITaserFireData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAITaserFireData(Z_Construct_UClass_USBZAITaserFireData, &USBZAITaserFireData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAITaserFireData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAITaserFireData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
