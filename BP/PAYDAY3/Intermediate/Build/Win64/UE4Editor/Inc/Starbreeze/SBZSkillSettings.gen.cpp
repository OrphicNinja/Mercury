// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillSettingData();
// End Cross Module References
	DEFINE_FUNCTION(USBZSkillSettings::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZSkillSettingData*)Z_Param__Result=USBZSkillSettings::Get();
		P_NATIVE_END;
	}
	void USBZSkillSettings::StaticRegisterNativesUSBZSkillSettings()
	{
		UClass* Class = USBZSkillSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZSkillSettings::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSkillSettings_Get_Statics
	{
		struct SBZSkillSettings_eventGet_Parms
		{
			FSBZSkillSettingData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSkillSettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillSettings_eventGet_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZSkillSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillSettings_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillSettings_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillSettings_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillSettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillSettings, nullptr, "Get", nullptr, nullptr, sizeof(SBZSkillSettings_eventGet_Parms), Z_Construct_UFunction_USBZSkillSettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillSettings_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillSettings_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillSettings_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillSettings_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillSettings_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSkillSettings_NoRegister()
	{
		return USBZSkillSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSkillSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSkillSettings_Get, "Get" }, // 2533694841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillSettings" },
		{ "ModuleRelativePath", "Public/SBZSkillSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillSettings, Settings), Z_Construct_UScriptStruct_FSBZSkillSettingData, METADATA_PARAMS(Z_Construct_UClass_USBZSkillSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillSettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillSettings_Statics::ClassParams = {
		&USBZSkillSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSkillSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillSettings, 2797004546);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillSettings>()
	{
		return USBZSkillSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillSettings(Z_Construct_UClass_USBZSkillSettings, &USBZSkillSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
