// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAnticipateExplosionAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAnticipateExplosionAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAnticipateExplosionAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAnticipateExplosionAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGrenadeDetectionSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void USBZAIAnticipateExplosionAbility::StaticRegisterNativesUSBZAIAnticipateExplosionAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAnticipateExplosionAbility_NoRegister()
	{
		return USBZAIAnticipateExplosionAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiveRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiveRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedGrenade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObservedGrenade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayedMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAnticipateExplosionAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAnticipateExplosionAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DiveRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAnticipateExplosionAbility" },
		{ "ModuleRelativePath", "Public/SBZAIAnticipateExplosionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DiveRange = { "DiveRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAnticipateExplosionAbility, DiveRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DiveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DiveRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DetectionSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAnticipateExplosionAbility" },
		{ "ModuleRelativePath", "Public/SBZAIAnticipateExplosionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DetectionSettings = { "DetectionSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAnticipateExplosionAbility, DetectionSettings), Z_Construct_UClass_USBZGrenadeDetectionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DetectionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DetectionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_ObservedGrenade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAnticipateExplosionAbility" },
		{ "ModuleRelativePath", "Public/SBZAIAnticipateExplosionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_ObservedGrenade = { "ObservedGrenade", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAnticipateExplosionAbility, ObservedGrenade), Z_Construct_UClass_ASBZGrenade_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_ObservedGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_ObservedGrenade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_PlayedMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAnticipateExplosionAbility" },
		{ "ModuleRelativePath", "Public/SBZAIAnticipateExplosionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_PlayedMontage = { "PlayedMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAnticipateExplosionAbility, PlayedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_PlayedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_PlayedMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DiveRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_DetectionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_ObservedGrenade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::NewProp_PlayedMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAnticipateExplosionAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::ClassParams = {
		&USBZAIAnticipateExplosionAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAnticipateExplosionAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAnticipateExplosionAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAnticipateExplosionAbility, 1267017107);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAnticipateExplosionAbility>()
	{
		return USBZAIAnticipateExplosionAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAnticipateExplosionAbility(Z_Construct_UClass_USBZAIAnticipateExplosionAbility, &USBZAIAnticipateExplosionAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAnticipateExplosionAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAnticipateExplosionAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
