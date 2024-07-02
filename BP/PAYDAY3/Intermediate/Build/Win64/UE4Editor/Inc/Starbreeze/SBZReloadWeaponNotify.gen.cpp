// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReloadWeaponNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReloadWeaponNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReloadWeaponNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReloadWeaponNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZReloadWeaponNotify::StaticRegisterNativesUSBZReloadWeaponNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZReloadWeaponNotify_NoRegister()
	{
		return USBZReloadWeaponNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZReloadWeaponNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReloadWeaponNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReloadWeaponNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZReloadWeaponNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReloadWeaponNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReloadWeaponNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReloadWeaponNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReloadWeaponNotify_Statics::ClassParams = {
		&USBZReloadWeaponNotify::StaticClass,
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
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReloadWeaponNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReloadWeaponNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReloadWeaponNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReloadWeaponNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReloadWeaponNotify, 1622294038);
	template<> STARBREEZE_API UClass* StaticClass<USBZReloadWeaponNotify>()
	{
		return USBZReloadWeaponNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReloadWeaponNotify(Z_Construct_UClass_USBZReloadWeaponNotify, &USBZReloadWeaponNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReloadWeaponNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReloadWeaponNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
