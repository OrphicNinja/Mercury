// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteServerSettingsDev.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteServerSettingsDev() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteServerSettingsDev_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteServerSettingsDev();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteServerSettings();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	void UAccelByteServerSettingsDev::StaticRegisterNativesUAccelByteServerSettingsDev()
	{
	}
	UClass* Z_Construct_UClass_UAccelByteServerSettingsDev_NoRegister()
	{
		return UAccelByteServerSettingsDev::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteServerSettingsDev_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteServerSettingsDev_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAccelByteServerSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteServerSettingsDev_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteServerSettingsDev.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteServerSettingsDev.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteServerSettingsDev_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteServerSettingsDev>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteServerSettingsDev_Statics::ClassParams = {
		&UAccelByteServerSettingsDev::StaticClass,
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
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteServerSettingsDev_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteServerSettingsDev_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteServerSettingsDev()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteServerSettingsDev_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteServerSettingsDev, 932403239);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteServerSettingsDev>()
	{
		return UAccelByteServerSettingsDev::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteServerSettingsDev(Z_Construct_UClass_UAccelByteServerSettingsDev, &UAccelByteServerSettingsDev::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UAccelByteServerSettingsDev"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteServerSettingsDev);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
