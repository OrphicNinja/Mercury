// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStatics() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStatics_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStatics();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWeaponStatics::StaticRegisterNativesUSBZWeaponStatics()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponStatics_NoRegister()
	{
		return USBZWeaponStatics::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStatics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponStatics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponStatics_Statics::ClassParams = {
		&USBZWeaponStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponStatics, 1779887928);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponStatics>()
	{
		return USBZWeaponStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponStatics(Z_Construct_UClass_USBZWeaponStatics, &USBZWeaponStatics::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
