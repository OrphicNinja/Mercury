// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbility_Equip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbility_Equip() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_Equip_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_Equip();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void USBZGameplayAbility_Equip::StaticRegisterNativesUSBZGameplayAbility_Equip()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayAbility_Equip_NoRegister()
	{
		return USBZGameplayAbility_Equip::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbility_Equip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbility_Equip.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_Equip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::NewProp_PlayingMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility_Equip" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_Equip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::NewProp_PlayingMontage = { "PlayingMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility_Equip, PlayingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::NewProp_PlayingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::NewProp_PlayingMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::NewProp_PlayingMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbility_Equip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::ClassParams = {
		&USBZGameplayAbility_Equip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbility_Equip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbility_Equip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbility_Equip, 509465478);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbility_Equip>()
	{
		return USBZGameplayAbility_Equip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbility_Equip(Z_Construct_UClass_USBZGameplayAbility_Equip, &USBZGameplayAbility_Equip::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbility_Equip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbility_Equip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
