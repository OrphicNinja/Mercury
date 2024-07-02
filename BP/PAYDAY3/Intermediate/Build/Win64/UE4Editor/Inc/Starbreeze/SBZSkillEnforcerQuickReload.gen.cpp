// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillEnforcerQuickReload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillEnforcerQuickReload() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEnforcerQuickReload_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEnforcerQuickReload();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillEnforcerQuickReload::StaticRegisterNativesUSBZSkillEnforcerQuickReload()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillEnforcerQuickReload_NoRegister()
	{
		return USBZSkillEnforcerQuickReload::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillEnforcerQuickReload.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillEnforcerQuickReload.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillEnforcerQuickReload>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics::ClassParams = {
		&USBZSkillEnforcerQuickReload::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillEnforcerQuickReload()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillEnforcerQuickReload_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillEnforcerQuickReload, 3399319757);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillEnforcerQuickReload>()
	{
		return USBZSkillEnforcerQuickReload::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillEnforcerQuickReload(Z_Construct_UClass_USBZSkillEnforcerQuickReload, &USBZSkillEnforcerQuickReload::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillEnforcerQuickReload"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillEnforcerQuickReload);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
