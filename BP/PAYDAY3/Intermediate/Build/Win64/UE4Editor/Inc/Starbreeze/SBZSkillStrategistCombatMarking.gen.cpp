// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillStrategistCombatMarking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillStrategistCombatMarking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillStrategistCombatMarking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillStrategistCombatMarking();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillStrategistCombatMarking::StaticRegisterNativesUSBZSkillStrategistCombatMarking()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillStrategistCombatMarking_NoRegister()
	{
		return USBZSkillStrategistCombatMarking::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillStrategistCombatMarking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillStrategistCombatMarking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillStrategistCombatMarking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics::ClassParams = {
		&USBZSkillStrategistCombatMarking::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillStrategistCombatMarking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillStrategistCombatMarking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillStrategistCombatMarking, 1158470502);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillStrategistCombatMarking>()
	{
		return USBZSkillStrategistCombatMarking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillStrategistCombatMarking(Z_Construct_UClass_USBZSkillStrategistCombatMarking, &USBZSkillStrategistCombatMarking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillStrategistCombatMarking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillStrategistCombatMarking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
