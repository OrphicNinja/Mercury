// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKillHumanShieldAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKillHumanShieldAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKillHumanShieldAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKillHumanShieldAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	void USBZKillHumanShieldAbility::StaticRegisterNativesUSBZKillHumanShieldAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZKillHumanShieldAbility_NoRegister()
	{
		return USBZKillHumanShieldAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZKillHumanShieldAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZKillHumanShieldAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZKillHumanShieldAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::NewProp_Controller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKillHumanShieldAbility" },
		{ "ModuleRelativePath", "Public/SBZKillHumanShieldAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKillHumanShieldAbility, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::NewProp_Controller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZKillHumanShieldAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::ClassParams = {
		&USBZKillHumanShieldAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZKillHumanShieldAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZKillHumanShieldAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZKillHumanShieldAbility, 4026965190);
	template<> STARBREEZE_API UClass* StaticClass<USBZKillHumanShieldAbility>()
	{
		return USBZKillHumanShieldAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZKillHumanShieldAbility(Z_Construct_UClass_USBZKillHumanShieldAbility, &USBZKillHumanShieldAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZKillHumanShieldAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZKillHumanShieldAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
