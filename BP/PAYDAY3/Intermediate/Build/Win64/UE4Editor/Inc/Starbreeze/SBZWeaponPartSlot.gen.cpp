// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPartSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPartSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeshPartSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWeaponPartSlot::StaticRegisterNativesUSBZWeaponPartSlot()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponPartSlot_NoRegister()
	{
		return USBZWeaponPartSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPartSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPartSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMeshPartSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPartSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPartSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartSlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPartSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPartSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPartSlot_Statics::ClassParams = {
		&USBZWeaponPartSlot::StaticClass,
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
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPartSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPartSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPartSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPartSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPartSlot, 1685860189);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPartSlot>()
	{
		return USBZWeaponPartSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPartSlot(Z_Construct_UClass_USBZWeaponPartSlot, &USBZWeaponPartSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPartSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPartSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
