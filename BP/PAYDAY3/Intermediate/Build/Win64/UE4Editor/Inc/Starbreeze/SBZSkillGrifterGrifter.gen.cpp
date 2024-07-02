// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillGrifterGrifter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillGrifterGrifter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGrifterGrifter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGrifterGrifter();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillGrifterGrifter::StaticRegisterNativesUSBZSkillGrifterGrifter()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillGrifterGrifter_NoRegister()
	{
		return USBZSkillGrifterGrifter::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillGrifterGrifter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillGrifterGrifter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillGrifterGrifter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillGrifterGrifter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillGrifterGrifter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillGrifterGrifter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillGrifterGrifter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillGrifterGrifter_Statics::ClassParams = {
		&USBZSkillGrifterGrifter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillGrifterGrifter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillGrifterGrifter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillGrifterGrifter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillGrifterGrifter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillGrifterGrifter, 2613930979);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillGrifterGrifter>()
	{
		return USBZSkillGrifterGrifter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillGrifterGrifter(Z_Construct_UClass_USBZSkillGrifterGrifter, &USBZSkillGrifterGrifter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillGrifterGrifter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillGrifterGrifter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
