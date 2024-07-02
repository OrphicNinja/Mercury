// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateHostMigration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateHostMigration() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateHostMigration_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateHostMigration();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZStateMachineStateHostMigration::StaticRegisterNativesUSBZStateMachineStateHostMigration()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateHostMigration_NoRegister()
	{
		return USBZStateMachineStateHostMigration::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateHostMigration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateHostMigration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateHostMigration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics::ClassParams = {
		&USBZStateMachineStateHostMigration::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateHostMigration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateHostMigration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateHostMigration, 1347064521);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateHostMigration>()
	{
		return USBZStateMachineStateHostMigration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateHostMigration(Z_Construct_UClass_USBZStateMachineStateHostMigration, &USBZStateMachineStateHostMigration::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateHostMigration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateHostMigration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
