// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticsPartSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticsPartSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCosmeticsPartSlot::StaticRegisterNativesUSBZCosmeticsPartSlot()
	{
	}
	UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister()
	{
		return USBZCosmeticsPartSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZCosmeticsPartSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCosmeticsPartSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartSlotBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticsPartSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCosmeticsPartSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticsPartSlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCosmeticsPartSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCosmeticsPartSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCosmeticsPartSlot_Statics::ClassParams = {
		&USBZCosmeticsPartSlot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticsPartSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticsPartSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCosmeticsPartSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCosmeticsPartSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCosmeticsPartSlot, 962176498);
	template<> STARBREEZE_API UClass* StaticClass<USBZCosmeticsPartSlot>()
	{
		return USBZCosmeticsPartSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCosmeticsPartSlot(Z_Construct_UClass_USBZCosmeticsPartSlot, &USBZCosmeticsPartSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCosmeticsPartSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCosmeticsPartSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
