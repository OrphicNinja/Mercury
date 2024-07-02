// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryGenerator_WorldRuntimeActors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryGenerator_WorldRuntimeActors() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryGenerator_WorldRuntimeActors::StaticRegisterNativesUSBZEnvQueryGenerator_WorldRuntimeActors()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_NoRegister()
	{
		return USBZEnvQueryGenerator_WorldRuntimeActors::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActorSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryGenerator_WorldRuntimeActors.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_WorldRuntimeActors.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::NewProp_ActorSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_WorldRuntimeActors" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_WorldRuntimeActors.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::NewProp_ActorSetting = { "ActorSetting", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_WorldRuntimeActors, ActorSetting), METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::NewProp_ActorSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::NewProp_ActorSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::NewProp_ActorSetting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryGenerator_WorldRuntimeActors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::ClassParams = {
		&USBZEnvQueryGenerator_WorldRuntimeActors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryGenerator_WorldRuntimeActors, 2175700338);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryGenerator_WorldRuntimeActors>()
	{
		return USBZEnvQueryGenerator_WorldRuntimeActors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryGenerator_WorldRuntimeActors(Z_Construct_UClass_USBZEnvQueryGenerator_WorldRuntimeActors, &USBZEnvQueryGenerator_WorldRuntimeActors::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryGenerator_WorldRuntimeActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryGenerator_WorldRuntimeActors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
