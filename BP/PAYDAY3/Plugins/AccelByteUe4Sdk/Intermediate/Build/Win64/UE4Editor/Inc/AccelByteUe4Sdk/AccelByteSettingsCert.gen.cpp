// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteSettingsCert.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSettingsCert() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettingsCert_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettingsCert();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettings();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	void UAccelByteSettingsCert::StaticRegisterNativesUAccelByteSettingsCert()
	{
	}
	UClass* Z_Construct_UClass_UAccelByteSettingsCert_NoRegister()
	{
		return UAccelByteSettingsCert::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteSettingsCert_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteSettingsCert_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAccelByteSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteSettingsCert_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteSettingsCert.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSettingsCert.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteSettingsCert_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteSettingsCert>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteSettingsCert_Statics::ClassParams = {
		&UAccelByteSettingsCert::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteSettingsCert_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteSettingsCert_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteSettingsCert()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteSettingsCert_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteSettingsCert, 962197004);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteSettingsCert>()
	{
		return UAccelByteSettingsCert::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteSettingsCert(Z_Construct_UClass_UAccelByteSettingsCert, &UAccelByteSettingsCert::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UAccelByteSettingsCert"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteSettingsCert);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
