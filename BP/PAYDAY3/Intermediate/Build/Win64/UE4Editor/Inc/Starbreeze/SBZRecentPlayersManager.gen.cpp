// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRecentPlayersManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRecentPlayersManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecentPlayersManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecentPlayersManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZRecentPlayersManager::StaticRegisterNativesUSBZRecentPlayersManager()
	{
	}
	UClass* Z_Construct_UClass_USBZRecentPlayersManager_NoRegister()
	{
		return USBZRecentPlayersManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZRecentPlayersManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRecentPlayersManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecentPlayersManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRecentPlayersManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRecentPlayersManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRecentPlayersManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRecentPlayersManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRecentPlayersManager_Statics::ClassParams = {
		&USBZRecentPlayersManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZRecentPlayersManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecentPlayersManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRecentPlayersManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRecentPlayersManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRecentPlayersManager, 234346529);
	template<> STARBREEZE_API UClass* StaticClass<USBZRecentPlayersManager>()
	{
		return USBZRecentPlayersManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRecentPlayersManager(Z_Construct_UClass_USBZRecentPlayersManager, &USBZRecentPlayersManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRecentPlayersManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRecentPlayersManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
