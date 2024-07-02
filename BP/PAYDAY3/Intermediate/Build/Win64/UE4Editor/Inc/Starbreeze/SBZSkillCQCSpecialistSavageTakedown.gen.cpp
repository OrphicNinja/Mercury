// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillCQCSpecialistSavageTakedown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillCQCSpecialistSavageTakedown() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillCQCSpecialistSavageTakedown::StaticRegisterNativesUSBZSkillCQCSpecialistSavageTakedown()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_NoRegister()
	{
		return USBZSkillCQCSpecialistSavageTakedown::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillCQCSpecialistSavageTakedown.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistSavageTakedown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::NewProp_ActivationDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillCQCSpecialistSavageTakedown" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistSavageTakedown.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::NewProp_ActivationDelay = { "ActivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillCQCSpecialistSavageTakedown, ActivationDelay), METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::NewProp_ActivationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::NewProp_ActivationDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::NewProp_ActivationDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillCQCSpecialistSavageTakedown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::ClassParams = {
		&USBZSkillCQCSpecialistSavageTakedown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillCQCSpecialistSavageTakedown, 1504554624);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillCQCSpecialistSavageTakedown>()
	{
		return USBZSkillCQCSpecialistSavageTakedown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillCQCSpecialistSavageTakedown(Z_Construct_UClass_USBZSkillCQCSpecialistSavageTakedown, &USBZSkillCQCSpecialistSavageTakedown::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillCQCSpecialistSavageTakedown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillCQCSpecialistSavageTakedown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
