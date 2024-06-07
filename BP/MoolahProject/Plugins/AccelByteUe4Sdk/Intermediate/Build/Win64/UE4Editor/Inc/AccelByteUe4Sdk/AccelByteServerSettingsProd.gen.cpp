// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteServerSettingsProd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteServerSettingsProd() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteServerSettingsProd_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteServerSettingsProd();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteServerSettings();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	void UAccelByteServerSettingsProd::StaticRegisterNativesUAccelByteServerSettingsProd()
	{
	}
	UClass* Z_Construct_UClass_UAccelByteServerSettingsProd_NoRegister()
	{
		return UAccelByteServerSettingsProd::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteServerSettingsProd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteServerSettingsProd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAccelByteServerSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteServerSettingsProd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteServerSettingsProd.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteServerSettingsProd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteServerSettingsProd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteServerSettingsProd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteServerSettingsProd_Statics::ClassParams = {
		&UAccelByteServerSettingsProd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteServerSettingsProd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteServerSettingsProd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteServerSettingsProd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteServerSettingsProd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteServerSettingsProd, 842419783);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteServerSettingsProd>()
	{
		return UAccelByteServerSettingsProd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteServerSettingsProd(Z_Construct_UClass_UAccelByteServerSettingsProd, &UAccelByteServerSettingsProd::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UAccelByteServerSettingsProd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteServerSettingsProd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
