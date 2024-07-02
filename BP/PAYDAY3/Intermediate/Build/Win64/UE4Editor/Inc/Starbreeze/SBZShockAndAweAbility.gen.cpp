// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShockAndAweAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShockAndAweAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShockAndAweAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShockAndAweAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTriggeredHurtReactionAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZShockAndAweAbility::StaticRegisterNativesUSBZShockAndAweAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZShockAndAweAbility_NoRegister()
	{
		return USBZShockAndAweAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZShockAndAweAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZShockAndAweAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillTriggeredHurtReactionAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShockAndAweAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZShockAndAweAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShockAndAweAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZShockAndAweAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZShockAndAweAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZShockAndAweAbility_Statics::ClassParams = {
		&USBZShockAndAweAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZShockAndAweAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShockAndAweAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZShockAndAweAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZShockAndAweAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZShockAndAweAbility, 546065088);
	template<> STARBREEZE_API UClass* StaticClass<USBZShockAndAweAbility>()
	{
		return USBZShockAndAweAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZShockAndAweAbility(Z_Construct_UClass_USBZShockAndAweAbility, &USBZShockAndAweAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZShockAndAweAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZShockAndAweAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
