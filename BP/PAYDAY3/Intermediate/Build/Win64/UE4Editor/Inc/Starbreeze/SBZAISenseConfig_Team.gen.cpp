// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISenseConfig_Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISenseConfig_Team() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISenseConfig_Team_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISenseConfig_Team();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAISenseConfig_Team::StaticRegisterNativesUSBZAISenseConfig_Team()
	{
	}
	UClass* Z_Construct_UClass_USBZAISenseConfig_Team_NoRegister()
	{
		return USBZAISenseConfig_Team::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISenseConfig_Team_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISenseConfig_Team_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISenseConfig_Team_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISenseConfig_Team.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISenseConfig_Team.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISenseConfig_Team_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISenseConfig_Team>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISenseConfig_Team_Statics::ClassParams = {
		&USBZAISenseConfig_Team::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISenseConfig_Team_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISenseConfig_Team_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISenseConfig_Team()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISenseConfig_Team_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISenseConfig_Team, 2026789350);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISenseConfig_Team>()
	{
		return USBZAISenseConfig_Team::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISenseConfig_Team(Z_Construct_UClass_USBZAISenseConfig_Team, &USBZAISenseConfig_Team::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISenseConfig_Team"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISenseConfig_Team);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
