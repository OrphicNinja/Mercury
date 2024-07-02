// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillHackerSignalCatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillHackerSignalCatch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillHackerSignalCatch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillHackerSignalCatch();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillHackerSignalCatch::StaticRegisterNativesUSBZSkillHackerSignalCatch()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillHackerSignalCatch_NoRegister()
	{
		return USBZSkillHackerSignalCatch::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillHackerSignalCatch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillHackerSignalCatch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillHackerSignalCatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics::ClassParams = {
		&USBZSkillHackerSignalCatch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillHackerSignalCatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillHackerSignalCatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillHackerSignalCatch, 1788997474);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillHackerSignalCatch>()
	{
		return USBZSkillHackerSignalCatch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillHackerSignalCatch(Z_Construct_UClass_USBZSkillHackerSignalCatch, &USBZSkillHackerSignalCatch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillHackerSignalCatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillHackerSignalCatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
