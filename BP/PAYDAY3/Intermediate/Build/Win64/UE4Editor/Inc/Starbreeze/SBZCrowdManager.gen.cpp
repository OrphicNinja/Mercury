// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCrowdManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCrowdManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrowdManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrowdManager();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCrowdManager::StaticRegisterNativesUSBZCrowdManager()
	{
	}
	UClass* Z_Construct_UClass_USBZCrowdManager_NoRegister()
	{
		return USBZCrowdManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZCrowdManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCrowdManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCrowdManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCrowdManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCrowdManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCrowdManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCrowdManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCrowdManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCrowdManager_Statics::ClassParams = {
		&USBZCrowdManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZCrowdManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrowdManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCrowdManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCrowdManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCrowdManager, 2001569886);
	template<> STARBREEZE_API UClass* StaticClass<USBZCrowdManager>()
	{
		return USBZCrowdManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCrowdManager(Z_Construct_UClass_USBZCrowdManager, &USBZCrowdManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCrowdManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCrowdManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
