// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPS4InitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPS4InitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS4InitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS4InitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPS4AdvancedInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkPS4InitializationSettings::execMigrateMultiCoreRendering)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UAkPS4InitializationSettings::StaticRegisterNativesUAkPS4InitializationSettings()
	{
		UClass* Class = UAkPS4InitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkPS4InitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkPS4InitializationSettings_eventMigrateMultiCoreRendering_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkPS4InitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkPS4InitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkPS4InitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkPS4InitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, sizeof(AkPS4InitializationSettings_eventMigrateMultiCoreRendering_Parms), Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkPS4InitializationSettings_NoRegister()
	{
		return UAkPS4InitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkPS4InitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPS4InitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkPS4InitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkPS4InitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 1481908790
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS4InitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkPS4InitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkPS4InitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS4InitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS4InitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkPS4InitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommonSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS4InitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS4InitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkPS4InitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS4InitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS4InitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkPS4InitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkPS4AdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkPS4InitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommonSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS4InitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkPS4InitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkPS4InitializationSettings, IAkPlatformInitialisationSettingsBase), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPS4InitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPS4InitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkPS4InitializationSettings_Statics::ClassParams = {
		&UAkPS4InitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkPS4InitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS4InitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPS4InitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkPS4InitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkPS4InitializationSettings, 3758306344);
	template<> AKAUDIO_API UClass* StaticClass<UAkPS4InitializationSettings>()
	{
		return UAkPS4InitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkPS4InitializationSettings(Z_Construct_UClass_UAkPS4InitializationSettings, &UAkPS4InitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkPS4InitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPS4InitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
