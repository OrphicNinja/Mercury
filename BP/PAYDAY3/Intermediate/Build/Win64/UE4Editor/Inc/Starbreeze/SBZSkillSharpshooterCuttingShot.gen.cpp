// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillSharpshooterCuttingShot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillSharpshooterCuttingShot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSharpshooterCuttingShot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillSharpshooterCuttingShot::StaticRegisterNativesUSBZSkillSharpshooterCuttingShot()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_NoRegister()
	{
		return USBZSkillSharpshooterCuttingShot::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillSharpshooterCuttingShot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillSharpshooterCuttingShot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillSharpshooterCuttingShot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics::ClassParams = {
		&USBZSkillSharpshooterCuttingShot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillSharpshooterCuttingShot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillSharpshooterCuttingShot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillSharpshooterCuttingShot, 3557507615);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillSharpshooterCuttingShot>()
	{
		return USBZSkillSharpshooterCuttingShot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillSharpshooterCuttingShot(Z_Construct_UClass_USBZSkillSharpshooterCuttingShot, &USBZSkillSharpshooterCuttingShot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillSharpshooterCuttingShot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillSharpshooterCuttingShot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
