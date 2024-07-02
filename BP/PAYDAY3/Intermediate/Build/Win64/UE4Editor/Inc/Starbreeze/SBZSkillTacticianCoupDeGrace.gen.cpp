// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillTacticianCoupDeGrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillTacticianCoupDeGrace() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTacticianCoupDeGrace();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillTacticianCoupDeGrace::StaticRegisterNativesUSBZSkillTacticianCoupDeGrace()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_NoRegister()
	{
		return USBZSkillTacticianCoupDeGrace::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillTacticianCoupDeGrace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillTacticianCoupDeGrace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillTacticianCoupDeGrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics::ClassParams = {
		&USBZSkillTacticianCoupDeGrace::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillTacticianCoupDeGrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillTacticianCoupDeGrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillTacticianCoupDeGrace, 1648321586);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillTacticianCoupDeGrace>()
	{
		return USBZSkillTacticianCoupDeGrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillTacticianCoupDeGrace(Z_Construct_UClass_USBZSkillTacticianCoupDeGrace, &USBZSkillTacticianCoupDeGrace::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillTacticianCoupDeGrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillTacticianCoupDeGrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
