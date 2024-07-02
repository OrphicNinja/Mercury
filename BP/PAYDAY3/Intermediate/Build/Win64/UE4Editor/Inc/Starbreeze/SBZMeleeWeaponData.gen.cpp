// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeleeWeaponData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeleeWeaponData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeWeaponData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeWeaponData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMeleeAttackData_NoRegister();
// End Cross Module References
	void USBZMeleeWeaponData::StaticRegisterNativesUSBZMeleeWeaponData()
	{
	}
	UClass* Z_Construct_UClass_USBZMeleeWeaponData_NoRegister()
	{
		return USBZMeleeWeaponData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMeleeWeaponData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMeleeWeaponData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseWeaponData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeWeaponData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMeleeWeaponData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMeleeWeaponData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeWeaponData_Statics::NewProp_MeleeAttackData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/SBZMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMeleeWeaponData_Statics::NewProp_MeleeAttackData = { "MeleeAttackData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeWeaponData, MeleeAttackData), Z_Construct_UClass_USBZWeaponMeleeAttackData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeWeaponData_Statics::NewProp_MeleeAttackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeWeaponData_Statics::NewProp_MeleeAttackData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMeleeWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeWeaponData_Statics::NewProp_MeleeAttackData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMeleeWeaponData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMeleeWeaponData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMeleeWeaponData_Statics::ClassParams = {
		&USBZMeleeWeaponData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMeleeWeaponData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeWeaponData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMeleeWeaponData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeWeaponData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMeleeWeaponData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMeleeWeaponData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMeleeWeaponData, 3542193550);
	template<> STARBREEZE_API UClass* StaticClass<USBZMeleeWeaponData>()
	{
		return USBZMeleeWeaponData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMeleeWeaponData(Z_Construct_UClass_USBZMeleeWeaponData, &USBZMeleeWeaponData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMeleeWeaponData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMeleeWeaponData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
