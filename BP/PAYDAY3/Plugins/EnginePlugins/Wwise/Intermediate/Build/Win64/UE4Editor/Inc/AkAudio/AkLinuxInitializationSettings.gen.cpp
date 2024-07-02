// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkLinuxInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLinuxInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkLinuxInitializationSettings::execMigrateMultiCoreRendering)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UAkLinuxInitializationSettings::StaticRegisterNativesUAkLinuxInitializationSettings()
	{
		UClass* Class = UAkLinuxInitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkLinuxInitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms
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
	void Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkLinuxInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkLinuxInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, sizeof(AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms), Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkLinuxInitializationSettings_NoRegister()
	{
		return UAkLinuxInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkLinuxInitializationSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 4268266776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkLinuxInitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkLinuxInitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLinuxInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkLinuxInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLinuxInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommonSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLinuxInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkLinuxInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLinuxInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLinuxInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkLinuxInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLinuxInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, METADATA_PARAMS(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommonSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkLinuxInitializationSettings, IAkPlatformInitialisationSettingsBase), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::ClassParams = {
		&UAkLinuxInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLinuxInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkLinuxInitializationSettings, 3296097141);
	template<> AKAUDIO_API UClass* StaticClass<UAkLinuxInitializationSettings>()
	{
		return UAkLinuxInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLinuxInitializationSettings(Z_Construct_UClass_UAkLinuxInitializationSettings, &UAkLinuxInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkLinuxInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLinuxInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
