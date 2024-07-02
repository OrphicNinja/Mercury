// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillHackerSecureLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillHackerSecureLoop() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillHackerSecureLoop_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillHackerSecureLoop();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillHackerSecureLoop::StaticRegisterNativesUSBZSkillHackerSecureLoop()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillHackerSecureLoop_NoRegister()
	{
		return USBZSkillHackerSecureLoop::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillHackerSecureLoop.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillHackerSecureLoop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillHackerSecureLoop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics::ClassParams = {
		&USBZSkillHackerSecureLoop::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillHackerSecureLoop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillHackerSecureLoop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillHackerSecureLoop, 1988465612);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillHackerSecureLoop>()
	{
		return USBZSkillHackerSecureLoop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillHackerSecureLoop(Z_Construct_UClass_USBZSkillHackerSecureLoop, &USBZSkillHackerSecureLoop::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillHackerSecureLoop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillHackerSecureLoop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
