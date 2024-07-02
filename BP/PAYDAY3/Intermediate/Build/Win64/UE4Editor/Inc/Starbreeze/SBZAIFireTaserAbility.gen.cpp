// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIFireTaserAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIFireTaserAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIFireTaserAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIFireTaserAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIFireRangedWeaponAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
// End Cross Module References
	void USBZAIFireTaserAbility::StaticRegisterNativesUSBZAIFireTaserAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIFireTaserAbility_NoRegister()
	{
		return USBZAIFireTaserAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIFireTaserAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TasedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaserDamageContextHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaserDamageContextHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIFireTaserAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIFireRangedWeaponAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIFireTaserAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIFireTaserAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIFireTaserAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TasedCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFireTaserAbility" },
		{ "ModuleRelativePath", "Public/SBZAIFireTaserAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TasedCharacter = { "TasedCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIFireTaserAbility, TasedCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TasedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TasedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_RegisteredPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFireTaserAbility" },
		{ "ModuleRelativePath", "Public/SBZAIFireTaserAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_RegisteredPlayerState = { "RegisteredPlayerState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIFireTaserAbility, RegisteredPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_RegisteredPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_RegisteredPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TaserDamageContextHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFireTaserAbility" },
		{ "ModuleRelativePath", "Public/SBZAIFireTaserAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TaserDamageContextHandle = { "TaserDamageContextHandle", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIFireTaserAbility, TaserDamageContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TaserDamageContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TaserDamageContextHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIFireTaserAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TasedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_RegisteredPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIFireTaserAbility_Statics::NewProp_TaserDamageContextHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIFireTaserAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIFireTaserAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIFireTaserAbility_Statics::ClassParams = {
		&USBZAIFireTaserAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIFireTaserAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIFireTaserAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIFireTaserAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIFireTaserAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIFireTaserAbility, 2849056202);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIFireTaserAbility>()
	{
		return USBZAIFireTaserAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIFireTaserAbility(Z_Construct_UClass_USBZAIFireTaserAbility, &USBZAIFireTaserAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIFireTaserAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIFireTaserAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
