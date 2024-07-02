// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillAssassinDropCloth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillAssassinDropCloth() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinDropCloth_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinDropCloth();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillAssassinDropCloth::StaticRegisterNativesUSBZSkillAssassinDropCloth()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillAssassinDropCloth_NoRegister()
	{
		return USBZSkillAssassinDropCloth::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillAssassinDropCloth.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillAssassinDropCloth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillAssassinDropCloth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics::ClassParams = {
		&USBZSkillAssassinDropCloth::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillAssassinDropCloth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillAssassinDropCloth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillAssassinDropCloth, 3127742620);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillAssassinDropCloth>()
	{
		return USBZSkillAssassinDropCloth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillAssassinDropCloth(Z_Construct_UClass_USBZSkillAssassinDropCloth, &USBZSkillAssassinDropCloth::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillAssassinDropCloth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillAssassinDropCloth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
