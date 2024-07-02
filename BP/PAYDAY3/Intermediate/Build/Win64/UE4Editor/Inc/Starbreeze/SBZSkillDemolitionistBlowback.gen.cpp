// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillDemolitionistBlowback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillDemolitionistBlowback() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillDemolitionistBlowback_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillDemolitionistBlowback();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZSkillDemolitionistBlowback::StaticRegisterNativesUSBZSkillDemolitionistBlowback()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillDemolitionistBlowback_NoRegister()
	{
		return USBZSkillDemolitionistBlowback::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnTypeContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnTypeContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillDemolitionistBlowback.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillDemolitionistBlowback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::NewProp_PawnTypeContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillDemolitionistBlowback" },
		{ "ModuleRelativePath", "Public/SBZSkillDemolitionistBlowback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::NewProp_PawnTypeContainer = { "PawnTypeContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillDemolitionistBlowback, PawnTypeContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::NewProp_PawnTypeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::NewProp_PawnTypeContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::NewProp_PawnTypeContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillDemolitionistBlowback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::ClassParams = {
		&USBZSkillDemolitionistBlowback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillDemolitionistBlowback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillDemolitionistBlowback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillDemolitionistBlowback, 2755307187);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillDemolitionistBlowback>()
	{
		return USBZSkillDemolitionistBlowback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillDemolitionistBlowback(Z_Construct_UClass_USBZSkillDemolitionistBlowback, &USBZSkillDemolitionistBlowback::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillDemolitionistBlowback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillDemolitionistBlowback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
