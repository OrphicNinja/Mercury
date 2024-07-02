// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleSpawner() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficManager_NoRegister();
// End Cross Module References
	void ADEPRECATED_SBZVehicleSpawner::StaticRegisterNativesADEPRECATED_SBZVehicleSpawner()
	{
	}
	UClass* Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_NoRegister()
	{
		return ADEPRECATED_SBZVehicleSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSpline,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVehicleSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::NewProp_TrafficManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawner" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::NewProp_TrafficManager = { "TrafficManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADEPRECATED_SBZVehicleSpawner, TrafficManager), Z_Construct_UClass_USBZTrafficManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::NewProp_TrafficManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::NewProp_TrafficManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::NewProp_TrafficManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADEPRECATED_SBZVehicleSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::ClassParams = {
		&ADEPRECATED_SBZVehicleSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::PropPointers),
		0,
		0x028002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADEPRECATED_SBZVehicleSpawner, 1778288354);
	template<> STARBREEZE_API UClass* StaticClass<ADEPRECATED_SBZVehicleSpawner>()
	{
		return ADEPRECATED_SBZVehicleSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADEPRECATED_SBZVehicleSpawner(Z_Construct_UClass_ADEPRECATED_SBZVehicleSpawner, &ADEPRECATED_SBZVehicleSpawner::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ADEPRECATED_SBZVehicleSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADEPRECATED_SBZVehicleSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
