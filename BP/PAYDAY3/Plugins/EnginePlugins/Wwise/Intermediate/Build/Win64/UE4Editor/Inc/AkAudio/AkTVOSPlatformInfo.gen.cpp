// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkTVOSPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkTVOSPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSPlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkTVOSPlatformInfo::StaticRegisterNativesUAkTVOSPlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkTVOSPlatformInfo_NoRegister()
	{
		return UAkTVOSPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkTVOSPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkTVOSPlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkTVOSPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTVOSPlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::ClassParams = {
		&UAkTVOSPlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkTVOSPlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkTVOSPlatformInfo, 1431317206);
	template<> AKAUDIO_API UClass* StaticClass<UAkTVOSPlatformInfo>()
	{
		return UAkTVOSPlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkTVOSPlatformInfo(Z_Construct_UClass_UAkTVOSPlatformInfo, &UAkTVOSPlatformInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkTVOSPlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkTVOSPlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
