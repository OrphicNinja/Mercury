// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillSharpshooterLongShot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillSharpshooterLongShot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterLongShot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterLongShot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillSharpshooterLongShot::StaticRegisterNativesUSBZSkillSharpshooterLongShot()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillSharpshooterLongShot_NoRegister()
	{
		return USBZSkillSharpshooterLongShot::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillSharpshooterLongShot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillSharpshooterLongShot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillSharpshooterLongShot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics::ClassParams = {
		&USBZSkillSharpshooterLongShot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillSharpshooterLongShot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillSharpshooterLongShot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillSharpshooterLongShot, 1442124222);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillSharpshooterLongShot>()
	{
		return USBZSkillSharpshooterLongShot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillSharpshooterLongShot(Z_Construct_UClass_USBZSkillSharpshooterLongShot, &USBZSkillSharpshooterLongShot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillSharpshooterLongShot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillSharpshooterLongShot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
