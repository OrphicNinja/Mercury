// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGunFireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGunFireData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunFireData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunFireData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeaponFireData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	void USBZSentryGunFireData::StaticRegisterNativesUSBZSentryGunFireData()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryGunFireData_NoRegister()
	{
		return USBZSentryGunFireData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryGunFireData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverheatEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OverheatEffectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryGunFireData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIWeaponFireData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunFireData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSentryGunFireData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGunFireData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunFireData_Statics::NewProp_OverheatEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunFireData" },
		{ "ModuleRelativePath", "Public/SBZSentryGunFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSentryGunFireData_Statics::NewProp_OverheatEffectClass = { "OverheatEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunFireData, OverheatEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunFireData_Statics::NewProp_OverheatEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunFireData_Statics::NewProp_OverheatEffectClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSentryGunFireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunFireData_Statics::NewProp_OverheatEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryGunFireData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryGunFireData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryGunFireData_Statics::ClassParams = {
		&USBZSentryGunFireData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSentryGunFireData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunFireData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunFireData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunFireData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryGunFireData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryGunFireData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryGunFireData, 1174340618);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryGunFireData>()
	{
		return USBZSentryGunFireData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryGunFireData(Z_Construct_UClass_USBZSentryGunFireData, &USBZSentryGunFireData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryGunFireData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryGunFireData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
