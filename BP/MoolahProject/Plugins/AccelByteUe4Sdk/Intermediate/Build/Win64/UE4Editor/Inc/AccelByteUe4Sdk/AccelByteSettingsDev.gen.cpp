// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteSettingsDev.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSettingsDev() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettingsDev_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettingsDev();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettings();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	void UAccelByteSettingsDev::StaticRegisterNativesUAccelByteSettingsDev()
	{
	}
	UClass* Z_Construct_UClass_UAccelByteSettingsDev_NoRegister()
	{
		return UAccelByteSettingsDev::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteSettingsDev_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteSettingsDev_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAccelByteSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteSettingsDev_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteSettingsDev.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSettingsDev.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteSettingsDev_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteSettingsDev>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteSettingsDev_Statics::ClassParams = {
		&UAccelByteSettingsDev::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteSettingsDev_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteSettingsDev_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteSettingsDev()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteSettingsDev_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteSettingsDev, 2763338578);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteSettingsDev>()
	{
		return UAccelByteSettingsDev::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteSettingsDev(Z_Construct_UClass_UAccelByteSettingsDev, &UAccelByteSettingsDev::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UAccelByteSettingsDev"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteSettingsDev);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
