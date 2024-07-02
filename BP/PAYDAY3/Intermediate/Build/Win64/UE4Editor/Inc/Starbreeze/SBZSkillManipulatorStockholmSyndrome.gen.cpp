// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillManipulatorStockholmSyndrome.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillManipulatorStockholmSyndrome() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillManipulatorStockholmSyndrome::StaticRegisterNativesUSBZSkillManipulatorStockholmSyndrome()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_NoRegister()
	{
		return USBZSkillManipulatorStockholmSyndrome::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillManipulatorStockholmSyndrome.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillManipulatorStockholmSyndrome.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillManipulatorStockholmSyndrome>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics::ClassParams = {
		&USBZSkillManipulatorStockholmSyndrome::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillManipulatorStockholmSyndrome, 501585506);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillManipulatorStockholmSyndrome>()
	{
		return USBZSkillManipulatorStockholmSyndrome::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillManipulatorStockholmSyndrome(Z_Construct_UClass_USBZSkillManipulatorStockholmSyndrome, &USBZSkillManipulatorStockholmSyndrome::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillManipulatorStockholmSyndrome"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillManipulatorStockholmSyndrome);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
