// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZModularPartSlot::StaticRegisterNativesUSBZModularPartSlot()
	{
	}
	UClass* Z_Construct_UClass_USBZModularPartSlot_NoRegister()
	{
		return USBZModularPartSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWeaponPartSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartSlot_Statics::ClassParams = {
		&USBZModularPartSlot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartSlot, 4195398343);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartSlot>()
	{
		return USBZModularPartSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartSlot(Z_Construct_UClass_USBZModularPartSlot, &USBZModularPartSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
