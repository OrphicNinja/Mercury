// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnPreviewActorConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnPreviewActorConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void USBZPawnSpawnPreviewActorConfig::StaticRegisterNativesUSBZPawnSpawnPreviewActorConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_NoRegister()
	{
		return USBZPawnSpawnPreviewActorConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewActorClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewActorClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPawnSpawnPreviewActorConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPreviewActorConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::NewProp_PreviewActorClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPreviewActorConfig" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPreviewActorConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::NewProp_PreviewActorClassName = { "PreviewActorClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnSpawnPreviewActorConfig, PreviewActorClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::NewProp_PreviewActorClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::NewProp_PreviewActorClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::NewProp_PreviewActorClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPawnSpawnPreviewActorConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::ClassParams = {
		&USBZPawnSpawnPreviewActorConfig::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPawnSpawnPreviewActorConfig, 3032504896);
	template<> STARBREEZE_API UClass* StaticClass<USBZPawnSpawnPreviewActorConfig>()
	{
		return USBZPawnSpawnPreviewActorConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPawnSpawnPreviewActorConfig(Z_Construct_UClass_USBZPawnSpawnPreviewActorConfig, &USBZPawnSpawnPreviewActorConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPawnSpawnPreviewActorConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPawnSpawnPreviewActorConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
