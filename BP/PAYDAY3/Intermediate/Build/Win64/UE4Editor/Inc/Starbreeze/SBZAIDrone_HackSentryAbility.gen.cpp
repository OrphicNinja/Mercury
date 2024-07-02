// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDrone_HackSentryAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDrone_HackSentryAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDrone_HackSentryAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDrone_HackSentryAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSentryGun_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIDrone_NoRegister();
// End Cross Module References
	void USBZAIDrone_HackSentryAbility::StaticRegisterNativesUSBZAIDrone_HackSentryAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIDrone_HackSentryAbility_NoRegister()
	{
		return USBZAIDrone_HackSentryAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneSentryHackEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DroneSentryHackEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSentry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSentry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroneOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIDrone_HackSentryAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone_HackSentryAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneSentryHackEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone_HackSentryAbility" },
		{ "ModuleRelativePath", "Public/SBZAIDrone_HackSentryAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneSentryHackEffect = { "DroneSentryHackEffect", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDrone_HackSentryAbility, DroneSentryHackEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneSentryHackEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneSentryHackEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_TargetSentry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone_HackSentryAbility" },
		{ "ModuleRelativePath", "Public/SBZAIDrone_HackSentryAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_TargetSentry = { "TargetSentry", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDrone_HackSentryAbility, TargetSentry), Z_Construct_UClass_ASBZSentryGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_TargetSentry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_TargetSentry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone_HackSentryAbility" },
		{ "ModuleRelativePath", "Public/SBZAIDrone_HackSentryAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneOwner = { "DroneOwner", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDrone_HackSentryAbility, DroneOwner), Z_Construct_UClass_ASBZAIDrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneSentryHackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_TargetSentry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::NewProp_DroneOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIDrone_HackSentryAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::ClassParams = {
		&USBZAIDrone_HackSentryAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIDrone_HackSentryAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIDrone_HackSentryAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIDrone_HackSentryAbility, 1929100947);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIDrone_HackSentryAbility>()
	{
		return USBZAIDrone_HackSentryAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIDrone_HackSentryAbility(Z_Construct_UClass_USBZAIDrone_HackSentryAbility, &USBZAIDrone_HackSentryAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIDrone_HackSentryAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIDrone_HackSentryAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
