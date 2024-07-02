// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillAssassinDuckAndWeave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillAssassinDuckAndWeave() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAssassinDuckAndWeave();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillAssassinDuckAndWeave::StaticRegisterNativesUSBZSkillAssassinDuckAndWeave()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_NoRegister()
	{
		return USBZSkillAssassinDuckAndWeave::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillAssassinDuckAndWeave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillAssassinDuckAndWeave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillAssassinDuckAndWeave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics::ClassParams = {
		&USBZSkillAssassinDuckAndWeave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillAssassinDuckAndWeave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillAssassinDuckAndWeave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillAssassinDuckAndWeave, 828788787);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillAssassinDuckAndWeave>()
	{
		return USBZSkillAssassinDuckAndWeave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillAssassinDuckAndWeave(Z_Construct_UClass_USBZSkillAssassinDuckAndWeave, &USBZSkillAssassinDuckAndWeave::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillAssassinDuckAndWeave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillAssassinDuckAndWeave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
