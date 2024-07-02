// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerTackleRunningAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerTackleRunningAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTackleRunningAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTackleRunningAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTackleBaseAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerTackleRunningAbility::StaticRegisterNativesUSBZPlayerTackleRunningAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerTackleRunningAbility_NoRegister()
	{
		return USBZPlayerTackleRunningAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerTackleBaseAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerTackleRunningAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerTackleRunningAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerTackleRunningAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics::ClassParams = {
		&USBZPlayerTackleRunningAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerTackleRunningAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerTackleRunningAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerTackleRunningAbility, 1845923216);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerTackleRunningAbility>()
	{
		return USBZPlayerTackleRunningAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerTackleRunningAbility(Z_Construct_UClass_USBZPlayerTackleRunningAbility, &USBZPlayerTackleRunningAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerTackleRunningAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerTackleRunningAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
