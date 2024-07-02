// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPS5PlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPS5PlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5PlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5PlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkPS5PlatformInfo::StaticRegisterNativesUAkPS5PlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkPS5PlatformInfo_NoRegister()
	{
		return UAkPS5PlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkPS5PlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPS5PlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5PlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkPS5PlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkPS5PlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPS5PlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPS5PlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkPS5PlatformInfo_Statics::ClassParams = {
		&UAkPS5PlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkPS5PlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5PlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPS5PlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkPS5PlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkPS5PlatformInfo, 287788689);
	template<> AKAUDIO_API UClass* StaticClass<UAkPS5PlatformInfo>()
	{
		return UAkPS5PlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkPS5PlatformInfo(Z_Construct_UClass_UAkPS5PlatformInfo, &UAkPS5PlatformInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkPS5PlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPS5PlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
