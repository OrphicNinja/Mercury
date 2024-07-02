// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillSharpshooterSharpshooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillSharpshooterSharpshooter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterSharpshooter();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillSharpshooterSharpshooter::StaticRegisterNativesUSBZSkillSharpshooterSharpshooter()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_NoRegister()
	{
		return USBZSkillSharpshooterSharpshooter::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillSharpshooterSharpshooter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillSharpshooterSharpshooter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillSharpshooterSharpshooter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics::ClassParams = {
		&USBZSkillSharpshooterSharpshooter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillSharpshooterSharpshooter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillSharpshooterSharpshooter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillSharpshooterSharpshooter, 1484553330);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillSharpshooterSharpshooter>()
	{
		return USBZSkillSharpshooterSharpshooter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillSharpshooterSharpshooter(Z_Construct_UClass_USBZSkillSharpshooterSharpshooter, &USBZSkillSharpshooterSharpshooter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillSharpshooterSharpshooter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillSharpshooterSharpshooter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
