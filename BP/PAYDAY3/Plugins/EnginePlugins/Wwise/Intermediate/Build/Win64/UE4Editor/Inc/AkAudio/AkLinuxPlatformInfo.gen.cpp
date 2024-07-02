// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkLinuxPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLinuxPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkLinuxPlatformInfo::StaticRegisterNativesUAkLinuxPlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister()
	{
		return UAkLinuxPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkLinuxPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkLinuxPlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkLinuxPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxPlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams = {
		&UAkLinuxPlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLinuxPlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkLinuxPlatformInfo, 1365851569);
	template<> AKAUDIO_API UClass* StaticClass<UAkLinuxPlatformInfo>()
	{
		return UAkLinuxPlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLinuxPlatformInfo(Z_Construct_UClass_UAkLinuxPlatformInfo, &UAkLinuxPlatformInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkLinuxPlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLinuxPlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
