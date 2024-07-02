// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerSlideTackleAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerSlideTackleAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSlideTackleAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSlideTackleAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTriggeredHurtReactionAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerSlideTackleAbility::StaticRegisterNativesUSBZPlayerSlideTackleAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerSlideTackleAbility_NoRegister()
	{
		return USBZPlayerSlideTackleAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillTriggeredHurtReactionAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerSlideTackleAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerSlideTackleAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerSlideTackleAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics::ClassParams = {
		&USBZPlayerSlideTackleAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerSlideTackleAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerSlideTackleAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerSlideTackleAbility, 1171605773);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerSlideTackleAbility>()
	{
		return USBZPlayerSlideTackleAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerSlideTackleAbility(Z_Construct_UClass_USBZPlayerSlideTackleAbility, &USBZPlayerSlideTackleAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerSlideTackleAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerSlideTackleAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
