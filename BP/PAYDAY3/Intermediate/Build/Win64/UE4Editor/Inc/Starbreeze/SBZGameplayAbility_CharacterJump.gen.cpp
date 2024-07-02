// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbility_CharacterJump.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbility_CharacterJump() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterJump_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterJump();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGameplayAbility_CharacterJump::StaticRegisterNativesUSBZGameplayAbility_CharacterJump()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterJump_NoRegister()
	{
		return USBZGameplayAbility_CharacterJump::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbility_CharacterJump.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterJump.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbility_CharacterJump>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics::ClassParams = {
		&USBZGameplayAbility_CharacterJump::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterJump()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbility_CharacterJump_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbility_CharacterJump, 640751090);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbility_CharacterJump>()
	{
		return USBZGameplayAbility_CharacterJump::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbility_CharacterJump(Z_Construct_UClass_USBZGameplayAbility_CharacterJump, &USBZGameplayAbility_CharacterJump::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbility_CharacterJump"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbility_CharacterJump);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
