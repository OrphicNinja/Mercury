// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkPlatformInfo::StaticRegisterNativesUAkPlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkPlatformInfo_NoRegister()
	{
		return UAkPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkPlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkPlatformInfo_Statics::ClassParams = {
		&UAkPlatformInfo::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkPlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkPlatformInfo, 3533545110);
	template<> AKAUDIO_API UClass* StaticClass<UAkPlatformInfo>()
	{
		return UAkPlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkPlatformInfo(Z_Construct_UClass_UAkPlatformInfo, &UAkPlatformInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkPlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
