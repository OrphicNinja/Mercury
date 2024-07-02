// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3ModeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3ModeGameMode() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_APD3ModeGameMode_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3ModeGameMode();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveManager_NoRegister();
// End Cross Module References
	void APD3ModeGameMode::StaticRegisterNativesAPD3ModeGameMode()
	{
	}
	UClass* Z_Construct_UClass_APD3ModeGameMode_NoRegister()
	{
		return APD3ModeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APD3ModeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnWaveManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnWaveManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APD3ModeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APD3HeistGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3ModeGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PD3ModeGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3ModeGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3ModeGameMode_Statics::NewProp_SpawnWaveManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ModeGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3ModeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3ModeGameMode_Statics::NewProp_SpawnWaveManager = { "SpawnWaveManager", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3ModeGameMode, SpawnWaveManager), Z_Construct_UClass_USBZSpawnWaveManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3ModeGameMode_Statics::NewProp_SpawnWaveManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3ModeGameMode_Statics::NewProp_SpawnWaveManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APD3ModeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3ModeGameMode_Statics::NewProp_SpawnWaveManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APD3ModeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APD3ModeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APD3ModeGameMode_Statics::ClassParams = {
		&APD3ModeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APD3ModeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APD3ModeGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APD3ModeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APD3ModeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APD3ModeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APD3ModeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APD3ModeGameMode, 3962643309);
	template<> STARBREEZE_API UClass* StaticClass<APD3ModeGameMode>()
	{
		return APD3ModeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APD3ModeGameMode(Z_Construct_UClass_APD3ModeGameMode, &APD3ModeGameMode::StaticClass, TEXT("/Script/Starbreeze"), TEXT("APD3ModeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APD3ModeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
