// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIFragGrenadeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIFragGrenadeData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIFragGrenadeData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIFragGrenadeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFragGrenadeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void USBZAIFragGrenadeData::StaticRegisterNativesUSBZAIFragGrenadeData()
	{
	}
	UClass* Z_Construct_UClass_USBZAIFragGrenadeData_NoRegister()
	{
		return USBZAIFragGrenadeData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIFragGrenadeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Damage_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Damage_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageModifierCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIFragGrenadeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZFragGrenadeData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIFragGrenadeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIFragGrenadeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_ValueProp = { "Damage", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_Key_KeyProp = { "Damage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZAIFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIFragGrenadeData, Damage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_DamageModifierCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZAIFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_DamageModifierCurve = { "DamageModifierCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIFragGrenadeData, DamageModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_DamageModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_DamageModifierCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIFragGrenadeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFragGrenadeData_Statics::NewProp_DamageModifierCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIFragGrenadeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIFragGrenadeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIFragGrenadeData_Statics::ClassParams = {
		&USBZAIFragGrenadeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIFragGrenadeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFragGrenadeData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIFragGrenadeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFragGrenadeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIFragGrenadeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIFragGrenadeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIFragGrenadeData, 273194565);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIFragGrenadeData>()
	{
		return USBZAIFragGrenadeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIFragGrenadeData(Z_Construct_UClass_USBZAIFragGrenadeData, &USBZAIFragGrenadeData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIFragGrenadeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIFragGrenadeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
