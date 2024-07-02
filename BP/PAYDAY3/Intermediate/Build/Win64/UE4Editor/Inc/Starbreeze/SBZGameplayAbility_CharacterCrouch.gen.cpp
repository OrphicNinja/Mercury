// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbility_CharacterCrouch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbility_CharacterCrouch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHUDNotificationData();
// End Cross Module References
	void USBZGameplayAbility_CharacterCrouch::StaticRegisterNativesUSBZGameplayAbility_CharacterCrouch()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_NoRegister()
	{
		return USBZGameplayAbility_CharacterCrouch::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncrouchNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbility_CharacterCrouch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterCrouch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::NewProp_UncrouchNotification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility_CharacterCrouch" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterCrouch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::NewProp_UncrouchNotification = { "UncrouchNotification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility_CharacterCrouch, UncrouchNotification), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::NewProp_UncrouchNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::NewProp_UncrouchNotification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::NewProp_UncrouchNotification,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbility_CharacterCrouch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::ClassParams = {
		&USBZGameplayAbility_CharacterCrouch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbility_CharacterCrouch, 802634165);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbility_CharacterCrouch>()
	{
		return USBZGameplayAbility_CharacterCrouch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbility_CharacterCrouch(Z_Construct_UClass_USBZGameplayAbility_CharacterCrouch, &USBZGameplayAbility_CharacterCrouch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbility_CharacterCrouch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbility_CharacterCrouch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
