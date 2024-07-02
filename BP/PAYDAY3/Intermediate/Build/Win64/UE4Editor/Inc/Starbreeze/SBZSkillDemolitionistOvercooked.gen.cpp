// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillDemolitionistOvercooked.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillDemolitionistOvercooked() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillDemolitionistOvercooked_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillDemolitionistOvercooked();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillDemolitionistOvercooked::StaticRegisterNativesUSBZSkillDemolitionistOvercooked()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillDemolitionistOvercooked_NoRegister()
	{
		return USBZSkillDemolitionistOvercooked::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillDemolitionistOvercooked.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillDemolitionistOvercooked.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillDemolitionistOvercooked>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics::ClassParams = {
		&USBZSkillDemolitionistOvercooked::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillDemolitionistOvercooked()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillDemolitionistOvercooked_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillDemolitionistOvercooked, 2081087695);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillDemolitionistOvercooked>()
	{
		return USBZSkillDemolitionistOvercooked::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillDemolitionistOvercooked(Z_Construct_UClass_USBZSkillDemolitionistOvercooked, &USBZSkillDemolitionistOvercooked::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillDemolitionistOvercooked"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillDemolitionistOvercooked);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
