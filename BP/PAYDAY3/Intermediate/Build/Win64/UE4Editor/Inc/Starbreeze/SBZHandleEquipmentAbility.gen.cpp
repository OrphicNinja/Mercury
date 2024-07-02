// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHandleEquipmentAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHandleEquipmentAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHandleEquipmentAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHandleEquipmentAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHandleEquipmentAbility::StaticRegisterNativesUSBZHandleEquipmentAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZHandleEquipmentAbility_NoRegister()
	{
		return USBZHandleEquipmentAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZHandleEquipmentAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHandleEquipmentAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHandleEquipmentAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHandleEquipmentAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHandleEquipmentAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHandleEquipmentAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHandleEquipmentAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHandleEquipmentAbility_Statics::ClassParams = {
		&USBZHandleEquipmentAbility::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHandleEquipmentAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHandleEquipmentAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHandleEquipmentAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHandleEquipmentAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHandleEquipmentAbility, 3437015437);
	template<> STARBREEZE_API UClass* StaticClass<USBZHandleEquipmentAbility>()
	{
		return USBZHandleEquipmentAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHandleEquipmentAbility(Z_Construct_UClass_USBZHandleEquipmentAbility, &USBZHandleEquipmentAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHandleEquipmentAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHandleEquipmentAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
