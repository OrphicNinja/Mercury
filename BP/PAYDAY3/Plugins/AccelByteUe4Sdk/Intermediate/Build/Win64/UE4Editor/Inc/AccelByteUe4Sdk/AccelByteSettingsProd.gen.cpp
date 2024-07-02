// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteSettingsProd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSettingsProd() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettingsProd_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettingsProd();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteSettings();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	void UAccelByteSettingsProd::StaticRegisterNativesUAccelByteSettingsProd()
	{
	}
	UClass* Z_Construct_UClass_UAccelByteSettingsProd_NoRegister()
	{
		return UAccelByteSettingsProd::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteSettingsProd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteSettingsProd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAccelByteSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteSettingsProd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteSettingsProd.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSettingsProd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteSettingsProd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteSettingsProd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteSettingsProd_Statics::ClassParams = {
		&UAccelByteSettingsProd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteSettingsProd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteSettingsProd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteSettingsProd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteSettingsProd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteSettingsProd, 1914266187);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteSettingsProd>()
	{
		return UAccelByteSettingsProd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteSettingsProd(Z_Construct_UClass_UAccelByteSettingsProd, &UAccelByteSettingsProd::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UAccelByteSettingsProd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteSettingsProd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
