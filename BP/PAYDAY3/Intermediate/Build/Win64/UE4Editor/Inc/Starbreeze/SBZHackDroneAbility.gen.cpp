// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackDroneAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackDroneAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackDroneAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackDroneAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHackDroneAbility::StaticRegisterNativesUSBZHackDroneAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZHackDroneAbility_NoRegister()
	{
		return USBZHackDroneAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZHackDroneAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHackDroneAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHackDroneAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackDroneAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackDroneAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHackDroneAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHackDroneAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHackDroneAbility_Statics::ClassParams = {
		&USBZHackDroneAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZHackDroneAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHackDroneAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHackDroneAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHackDroneAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHackDroneAbility, 724808755);
	template<> STARBREEZE_API UClass* StaticClass<USBZHackDroneAbility>()
	{
		return USBZHackDroneAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHackDroneAbility(Z_Construct_UClass_USBZHackDroneAbility, &USBZHackDroneAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHackDroneAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHackDroneAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
