// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCarryAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCarryAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarryAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarryAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCarryAbility::StaticRegisterNativesUSBZCarryAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZCarryAbility_NoRegister()
	{
		return USBZCarryAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZCarryAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCarryAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarryAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCarryAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCarryAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCarryAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCarryAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCarryAbility_Statics::ClassParams = {
		&USBZCarryAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZCarryAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarryAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCarryAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCarryAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCarryAbility, 3598646895);
	template<> STARBREEZE_API UClass* StaticClass<USBZCarryAbility>()
	{
		return USBZCarryAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCarryAbility(Z_Construct_UClass_USBZCarryAbility, &USBZCarryAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCarryAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCarryAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
