// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPriceProgressionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPriceProgressionSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPriceProgressionSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPriceProgressionSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZPriceProgressionSettings::execGetWeeklyResetPriceGroupSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USBZPriceProgressionSettings::GetWeeklyResetPriceGroupSettings();
		P_NATIVE_END;
	}
	void USBZPriceProgressionSettings::StaticRegisterNativesUSBZPriceProgressionSettings()
	{
		UClass* Class = USBZPriceProgressionSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeeklyResetPriceGroupSettings", &USBZPriceProgressionSettings::execGetWeeklyResetPriceGroupSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics
	{
		struct SBZPriceProgressionSettings_eventGetWeeklyResetPriceGroupSettings_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPriceProgressionSettings_eventGetWeeklyResetPriceGroupSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPriceProgressionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPriceProgressionSettings, nullptr, "GetWeeklyResetPriceGroupSettings", nullptr, nullptr, sizeof(SBZPriceProgressionSettings_eventGetWeeklyResetPriceGroupSettings_Parms), Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPriceProgressionSettings_NoRegister()
	{
		return USBZPriceProgressionSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZPriceProgressionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeeklyResetPriceGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeeklyResetPriceGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeeklyResetPriceGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPriceProgressionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPriceProgressionSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPriceProgressionSettings_GetWeeklyResetPriceGroupSettings, "GetWeeklyResetPriceGroupSettings" }, // 1060306577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPriceProgressionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPriceProgressionSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPriceProgressionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZPriceProgressionSettings_Statics::NewProp_WeeklyResetPriceGroups_Inner = { "WeeklyResetPriceGroups", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPriceProgressionSettings_Statics::NewProp_WeeklyResetPriceGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPriceProgressionSettings" },
		{ "ModuleRelativePath", "Public/SBZPriceProgressionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPriceProgressionSettings_Statics::NewProp_WeeklyResetPriceGroups = { "WeeklyResetPriceGroups", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPriceProgressionSettings, WeeklyResetPriceGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPriceProgressionSettings_Statics::NewProp_WeeklyResetPriceGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPriceProgressionSettings_Statics::NewProp_WeeklyResetPriceGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPriceProgressionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPriceProgressionSettings_Statics::NewProp_WeeklyResetPriceGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPriceProgressionSettings_Statics::NewProp_WeeklyResetPriceGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPriceProgressionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPriceProgressionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPriceProgressionSettings_Statics::ClassParams = {
		&USBZPriceProgressionSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPriceProgressionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPriceProgressionSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPriceProgressionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPriceProgressionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPriceProgressionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPriceProgressionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPriceProgressionSettings, 1941575658);
	template<> STARBREEZE_API UClass* StaticClass<USBZPriceProgressionSettings>()
	{
		return USBZPriceProgressionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPriceProgressionSettings(Z_Construct_UClass_USBZPriceProgressionSettings, &USBZPriceProgressionSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPriceProgressionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPriceProgressionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
