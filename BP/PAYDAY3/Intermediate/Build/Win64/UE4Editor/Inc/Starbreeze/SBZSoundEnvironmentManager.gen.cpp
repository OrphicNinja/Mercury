// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSoundEnvironmentManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSoundEnvironmentManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSoundEnvironmentManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSoundEnvironmentManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSoundEnvironment_NoRegister();
// End Cross Module References
	void USBZSoundEnvironmentManager::StaticRegisterNativesUSBZSoundEnvironmentManager()
	{
	}
	UClass* Z_Construct_UClass_USBZSoundEnvironmentManager_NoRegister()
	{
		return USBZSoundEnvironmentManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSoundEnvironmentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastActiveSoundEnvironments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastActiveSoundEnvironments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastActiveSoundEnvironments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlyActiveSoundEnvironments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyActiveSoundEnvironments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentlyActiveSoundEnvironments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSoundEnvironmentManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_LastActiveSoundEnvironments_Inner = { "LastActiveSoundEnvironments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSoundEnvironment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_LastActiveSoundEnvironments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironmentManager" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_LastActiveSoundEnvironments = { "LastActiveSoundEnvironments", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSoundEnvironmentManager, LastActiveSoundEnvironments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_LastActiveSoundEnvironments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_LastActiveSoundEnvironments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_CurrentlyActiveSoundEnvironments_Inner = { "CurrentlyActiveSoundEnvironments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSoundEnvironment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_CurrentlyActiveSoundEnvironments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironmentManager" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_CurrentlyActiveSoundEnvironments = { "CurrentlyActiveSoundEnvironments", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSoundEnvironmentManager, CurrentlyActiveSoundEnvironments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_CurrentlyActiveSoundEnvironments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_CurrentlyActiveSoundEnvironments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_LastActiveSoundEnvironments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_LastActiveSoundEnvironments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_CurrentlyActiveSoundEnvironments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::NewProp_CurrentlyActiveSoundEnvironments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSoundEnvironmentManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::ClassParams = {
		&USBZSoundEnvironmentManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSoundEnvironmentManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSoundEnvironmentManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSoundEnvironmentManager, 1001320238);
	template<> STARBREEZE_API UClass* StaticClass<USBZSoundEnvironmentManager>()
	{
		return USBZSoundEnvironmentManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSoundEnvironmentManager(Z_Construct_UClass_USBZSoundEnvironmentManager, &USBZSoundEnvironmentManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSoundEnvironmentManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSoundEnvironmentManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
