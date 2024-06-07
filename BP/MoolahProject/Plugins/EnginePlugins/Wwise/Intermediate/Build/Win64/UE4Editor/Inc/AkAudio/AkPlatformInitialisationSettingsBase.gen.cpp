// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPlatformInitialisationSettingsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPlatformInitialisationSettingsBase() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkPlatformInitialisationSettingsBase::StaticRegisterNativesUAkPlatformInitialisationSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister()
	{
		return UAkPlatformInitialisationSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkPlatformInitialisationSettingsBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAkPlatformInitialisationSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::ClassParams = {
		&UAkPlatformInitialisationSettingsBase::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkPlatformInitialisationSettingsBase, 1031347767);
	template<> AKAUDIO_API UClass* StaticClass<UAkPlatformInitialisationSettingsBase>()
	{
		return UAkPlatformInitialisationSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkPlatformInitialisationSettingsBase(Z_Construct_UClass_UAkPlatformInitialisationSettingsBase, &UAkPlatformInitialisationSettingsBase::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkPlatformInitialisationSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPlatformInitialisationSettingsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
