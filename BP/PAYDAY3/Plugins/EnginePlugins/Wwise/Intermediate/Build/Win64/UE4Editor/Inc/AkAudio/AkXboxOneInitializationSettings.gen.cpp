// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXboxOneInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXboxOneInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkXboxOneInitializationSettings::execMigrateMultiCoreRendering)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UAkXboxOneInitializationSettings::StaticRegisterNativesUAkXboxOneInitializationSettings()
	{
		UClass* Class = UAkXboxOneInitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkXboxOneInitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms
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
	void Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkXboxOneInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, sizeof(AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms), Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings_NoRegister()
	{
		return UAkXboxOneInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApuHeapSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApuHeapSettings;
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
	UObject* (*const Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 1814265205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkXboxOneInitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkXboxOneInitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXboxOneInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXboxOneInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings = { "ApuHeapSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, ApuHeapSettings), Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXboxOneInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXboxOneInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkXboxOneInitializationSettings, IAkPlatformInitialisationSettingsBase), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkXboxOneInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::ClassParams = {
		&UAkXboxOneInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkXboxOneInitializationSettings, 2546787892);
	template<> AKAUDIO_API UClass* StaticClass<UAkXboxOneInitializationSettings>()
	{
		return UAkXboxOneInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkXboxOneInitializationSettings(Z_Construct_UClass_UAkXboxOneInitializationSettings, &UAkXboxOneInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkXboxOneInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkXboxOneInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
