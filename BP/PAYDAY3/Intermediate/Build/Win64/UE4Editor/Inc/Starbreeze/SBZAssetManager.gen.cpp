// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAssetManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetLookupData_NoRegister();
// End Cross Module References
	void USBZAssetManager::StaticRegisterNativesUSBZAssetManager()
	{
	}
	UClass* Z_Construct_UClass_USBZAssetManager_NoRegister()
	{
		return USBZAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetLookupData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetLookupData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAssetManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAssetManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetManager_Statics::NewProp_AssetLookupData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetManager" },
		{ "ModuleRelativePath", "Public/SBZAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetManager_Statics::NewProp_AssetLookupData = { "AssetLookupData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetManager, AssetLookupData), Z_Construct_UClass_USBZAssetLookupData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAssetManager_Statics::NewProp_AssetLookupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetManager_Statics::NewProp_AssetLookupData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAssetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetManager_Statics::NewProp_AssetLookupData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAssetManager_Statics::ClassParams = {
		&USBZAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAssetManager, 2999104760);
	template<> STARBREEZE_API UClass* StaticClass<USBZAssetManager>()
	{
		return USBZAssetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAssetManager(Z_Construct_UClass_USBZAssetManager, &USBZAssetManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
