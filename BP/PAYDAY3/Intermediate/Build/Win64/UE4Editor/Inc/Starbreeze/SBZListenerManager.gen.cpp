// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZListenerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZListenerManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZListenerManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZListenerManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZListenerManager::StaticRegisterNativesUSBZListenerManager()
	{
	}
	UClass* Z_Construct_UClass_USBZListenerManager_NoRegister()
	{
		return USBZListenerManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZListenerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZListenerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZListenerManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZListenerManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZListenerManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZListenerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZListenerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZListenerManager_Statics::ClassParams = {
		&USBZListenerManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZListenerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZListenerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZListenerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZListenerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZListenerManager, 3708834783);
	template<> STARBREEZE_API UClass* StaticClass<USBZListenerManager>()
	{
		return USBZListenerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZListenerManager(Z_Construct_UClass_USBZListenerManager, &USBZListenerManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZListenerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZListenerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
