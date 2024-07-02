// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillSharpshooterSpeedAim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillSharpshooterSpeedAim() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterSpeedAim();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillSharpshooterSpeedAim::StaticRegisterNativesUSBZSkillSharpshooterSpeedAim()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_NoRegister()
	{
		return USBZSkillSharpshooterSpeedAim::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillSharpshooterSpeedAim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillSharpshooterSpeedAim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillSharpshooterSpeedAim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics::ClassParams = {
		&USBZSkillSharpshooterSpeedAim::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillSharpshooterSpeedAim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillSharpshooterSpeedAim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillSharpshooterSpeedAim, 2372590061);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillSharpshooterSpeedAim>()
	{
		return USBZSkillSharpshooterSpeedAim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillSharpshooterSpeedAim(Z_Construct_UClass_USBZSkillSharpshooterSpeedAim, &USBZSkillSharpshooterSpeedAim::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillSharpshooterSpeedAim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillSharpshooterSpeedAim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
