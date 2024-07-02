// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSwitchPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSwitchPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchPlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkSwitchPlatformInfo::StaticRegisterNativesUAkSwitchPlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkSwitchPlatformInfo_NoRegister()
	{
		return UAkSwitchPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkSwitchPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSwitchPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSwitchPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkSwitchPlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSwitchPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSwitchPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSwitchPlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSwitchPlatformInfo_Statics::ClassParams = {
		&UAkSwitchPlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkSwitchPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSwitchPlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSwitchPlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSwitchPlatformInfo, 2398589078);
	template<> AKAUDIO_API UClass* StaticClass<UAkSwitchPlatformInfo>()
	{
		return UAkSwitchPlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSwitchPlatformInfo(Z_Construct_UClass_UAkSwitchPlatformInfo, &UAkSwitchPlatformInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSwitchPlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSwitchPlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
