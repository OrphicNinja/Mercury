// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillAssassinKillerKinesthetics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillAssassinKillerKinesthetics() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillAssassinKillerKinesthetics::StaticRegisterNativesUSBZSkillAssassinKillerKinesthetics()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_NoRegister()
	{
		return USBZSkillAssassinKillerKinesthetics::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillAssassinKillerKinesthetics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillAssassinKillerKinesthetics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillAssassinKillerKinesthetics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics::ClassParams = {
		&USBZSkillAssassinKillerKinesthetics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillAssassinKillerKinesthetics, 814059103);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillAssassinKillerKinesthetics>()
	{
		return USBZSkillAssassinKillerKinesthetics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillAssassinKillerKinesthetics(Z_Construct_UClass_USBZSkillAssassinKillerKinesthetics, &USBZSkillAssassinKillerKinesthetics::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillAssassinKillerKinesthetics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillAssassinKillerKinesthetics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
