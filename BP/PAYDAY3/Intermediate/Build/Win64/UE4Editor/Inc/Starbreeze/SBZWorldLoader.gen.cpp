// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWorldLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldLoader() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldLoader_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
// End Cross Module References
	void USBZWorldLoader::StaticRegisterNativesUSBZWorldLoader()
	{
	}
	UClass* Z_Construct_UClass_USBZWorldLoader_NoRegister()
	{
		return USBZWorldLoader::StaticClass();
	}
	struct Z_Construct_UClass_USBZWorldLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedWorlds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedWorlds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadedWorlds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Observers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeParamClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameModeParamClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameStateClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWorldLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWorldLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_LoadedWorlds_Inner = { "LoadedWorlds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_LoadedWorlds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldLoader" },
		{ "ModuleRelativePath", "Public/SBZWorldLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_LoadedWorlds = { "LoadedWorlds", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldLoader, LoadedWorlds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_LoadedWorlds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_LoadedWorlds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_Observers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldLoader" },
		{ "ModuleRelativePath", "Public/SBZWorldLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldLoader, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_Observers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_Observers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameModeParamClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldLoader" },
		{ "ModuleRelativePath", "Public/SBZWorldLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameModeParamClass = { "GameModeParamClass", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldLoader, GameModeParamClass), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameModeParamClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameModeParamClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameStateClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldLoader" },
		{ "ModuleRelativePath", "Public/SBZWorldLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameStateClass = { "GameStateClass", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldLoader, GameStateClass), Z_Construct_UClass_AGameStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameStateClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWorldLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_LoadedWorlds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_LoadedWorlds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_Observers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_Observers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameModeParamClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldLoader_Statics::NewProp_GameStateClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWorldLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWorldLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWorldLoader_Statics::ClassParams = {
		&USBZWorldLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWorldLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldLoader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWorldLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWorldLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWorldLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWorldLoader, 2493093208);
	template<> STARBREEZE_API UClass* StaticClass<USBZWorldLoader>()
	{
		return USBZWorldLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWorldLoader(Z_Construct_UClass_USBZWorldLoader, &USBZWorldLoader::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWorldLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWorldLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
