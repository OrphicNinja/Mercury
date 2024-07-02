// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillAssassinAssassinAced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillAssassinAssassinAced() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinAssassinAced_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinAssassinAced();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZSkillAssassinAssassinAced::StaticRegisterNativesUSBZSkillAssassinAssassinAced()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillAssassinAssassinAced_NoRegister()
	{
		return USBZSkillAssassinAssassinAced::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LawEnforcementTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LawEnforcementTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillAssassinAssassinAced.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillAssassinAssassinAced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::NewProp_LawEnforcementTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillAssassinAssassinAced" },
		{ "ModuleRelativePath", "Public/SBZSkillAssassinAssassinAced.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::NewProp_LawEnforcementTags = { "LawEnforcementTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillAssassinAssassinAced, LawEnforcementTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::NewProp_LawEnforcementTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::NewProp_LawEnforcementTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::NewProp_LawEnforcementTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillAssassinAssassinAced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::ClassParams = {
		&USBZSkillAssassinAssassinAced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillAssassinAssassinAced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillAssassinAssassinAced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillAssassinAssassinAced, 2797035333);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillAssassinAssassinAced>()
	{
		return USBZSkillAssassinAssassinAced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillAssassinAssassinAced(Z_Construct_UClass_USBZSkillAssassinAssassinAced, &USBZSkillAssassinAssassinAced::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillAssassinAssassinAced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillAssassinAssassinAced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
