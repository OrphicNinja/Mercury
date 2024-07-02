// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkFolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkFolder() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkFolder::StaticRegisterNativesUAkFolder()
	{
	}
	UClass* Z_Construct_UClass_UAkFolder_NoRegister()
	{
		return UAkFolder::StaticClass();
	}
	struct Z_Construct_UClass_UAkFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnrealFolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WwiseFolderPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkFolder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkFolder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkFolder" },
		{ "ModuleRelativePath", "Public/AkFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath = { "UnrealFolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkFolder, UnrealFolderPath), METADATA_PARAMS(Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkFolder" },
		{ "ModuleRelativePath", "Public/AkFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath = { "WwiseFolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkFolder, WwiseFolderPath), METADATA_PARAMS(Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkFolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkFolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkFolder_Statics::ClassParams = {
		&UAkFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkFolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkFolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkFolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkFolder, 553007133);
	template<> AKAUDIO_API UClass* StaticClass<UAkFolder>()
	{
		return UAkFolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkFolder(Z_Construct_UClass_UAkFolder, &UAkFolder::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkFolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkFolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
