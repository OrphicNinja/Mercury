// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAssetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetBase() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
// End Cross Module References
	void UAkAssetBase::StaticRegisterNativesUAkAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetBase_NoRegister()
	{
		return UAkAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAssetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAssetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetBase" },
		{ "ModuleRelativePath", "Public/AkAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData = { "PlatformAssetData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetBase, PlatformAssetData), Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetBase_Statics::ClassParams = {
		&UAkAssetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetBase, 650383516);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetBase>()
	{
		return UAkAssetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetBase(Z_Construct_UClass_UAkAssetBase, &UAkAssetBase::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
