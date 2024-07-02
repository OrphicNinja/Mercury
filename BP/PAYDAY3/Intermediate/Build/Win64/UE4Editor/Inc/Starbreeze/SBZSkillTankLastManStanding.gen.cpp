// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillTankLastManStanding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillTankLastManStanding() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTankLastManStanding_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTankLastManStanding();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillTankLastManStanding::StaticRegisterNativesUSBZSkillTankLastManStanding()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillTankLastManStanding_NoRegister()
	{
		return USBZSkillTankLastManStanding::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillTankLastManStanding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillTankLastManStanding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillTankLastManStanding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillTankLastManStanding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillTankLastManStanding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillTankLastManStanding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillTankLastManStanding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillTankLastManStanding_Statics::ClassParams = {
		&USBZSkillTankLastManStanding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillTankLastManStanding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTankLastManStanding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillTankLastManStanding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillTankLastManStanding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillTankLastManStanding, 3047666625);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillTankLastManStanding>()
	{
		return USBZSkillTankLastManStanding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillTankLastManStanding(Z_Construct_UClass_USBZSkillTankLastManStanding, &USBZSkillTankLastManStanding::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillTankLastManStanding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillTankLastManStanding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
