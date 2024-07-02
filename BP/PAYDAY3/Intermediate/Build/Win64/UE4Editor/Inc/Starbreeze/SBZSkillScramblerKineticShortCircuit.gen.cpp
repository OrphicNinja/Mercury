// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillScramblerKineticShortCircuit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillScramblerKineticShortCircuit() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZSkillScramblerKineticShortCircuit::StaticRegisterNativesUSBZSkillScramblerKineticShortCircuit()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_NoRegister()
	{
		return USBZSkillScramblerKineticShortCircuit::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScramblerTargetEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScramblerTargetEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScramblerDurationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScramblerDurationTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillScramblerKineticShortCircuit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillScramblerKineticShortCircuit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerTargetEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillScramblerKineticShortCircuit" },
		{ "ModuleRelativePath", "Public/SBZSkillScramblerKineticShortCircuit.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerTargetEffectClass = { "ScramblerTargetEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillScramblerKineticShortCircuit, ScramblerTargetEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerTargetEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerTargetEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerDurationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillScramblerKineticShortCircuit" },
		{ "ModuleRelativePath", "Public/SBZSkillScramblerKineticShortCircuit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerDurationTag = { "ScramblerDurationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillScramblerKineticShortCircuit, ScramblerDurationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerDurationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerDurationTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerTargetEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::NewProp_ScramblerDurationTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillScramblerKineticShortCircuit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::ClassParams = {
		&USBZSkillScramblerKineticShortCircuit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillScramblerKineticShortCircuit, 3581880570);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillScramblerKineticShortCircuit>()
	{
		return USBZSkillScramblerKineticShortCircuit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillScramblerKineticShortCircuit(Z_Construct_UClass_USBZSkillScramblerKineticShortCircuit, &USBZSkillScramblerKineticShortCircuit::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillScramblerKineticShortCircuit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillScramblerKineticShortCircuit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
