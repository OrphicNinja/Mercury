// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillTacticianDiscombobulate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillTacticianDiscombobulate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTacticianDiscombobulate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTacticianDiscombobulate();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTacticianDiscombobulateEffect_NoRegister();
// End Cross Module References
	void USBZSkillTacticianDiscombobulate::StaticRegisterNativesUSBZSkillTacticianDiscombobulate()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillTacticianDiscombobulate_NoRegister()
	{
		return USBZSkillTacticianDiscombobulate::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostSmokeFlashEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PostSmokeFlashEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillTacticianDiscombobulate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillTacticianDiscombobulate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::NewProp_PostSmokeFlashEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillTacticianDiscombobulate" },
		{ "ModuleRelativePath", "Public/SBZSkillTacticianDiscombobulate.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::NewProp_PostSmokeFlashEffect = { "PostSmokeFlashEffect", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillTacticianDiscombobulate, PostSmokeFlashEffect), Z_Construct_UClass_USBZTacticianDiscombobulateEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::NewProp_PostSmokeFlashEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::NewProp_PostSmokeFlashEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::NewProp_PostSmokeFlashEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillTacticianDiscombobulate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::ClassParams = {
		&USBZSkillTacticianDiscombobulate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillTacticianDiscombobulate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillTacticianDiscombobulate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillTacticianDiscombobulate, 3776397794);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillTacticianDiscombobulate>()
	{
		return USBZSkillTacticianDiscombobulate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillTacticianDiscombobulate(Z_Construct_UClass_USBZSkillTacticianDiscombobulate, &USBZSkillTacticianDiscombobulate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillTacticianDiscombobulate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillTacticianDiscombobulate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
