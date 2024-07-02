// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeToAchievementSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeToAchievementSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeToAchievementSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeToAchievementSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZChallengeToAchievementSettings::execGetAchievementObjectiveStatCodeArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=USBZChallengeToAchievementSettings::GetAchievementObjectiveStatCodeArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeToAchievementSettings::execGetChallengeToAchievementSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FName>*)Z_Param__Result=USBZChallengeToAchievementSettings::GetChallengeToAchievementSettings();
		P_NATIVE_END;
	}
	void USBZChallengeToAchievementSettings::StaticRegisterNativesUSBZChallengeToAchievementSettings()
	{
		UClass* Class = USBZChallengeToAchievementSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAchievementObjectiveStatCodeArray", &USBZChallengeToAchievementSettings::execGetAchievementObjectiveStatCodeArray },
			{ "GetChallengeToAchievementSettings", &USBZChallengeToAchievementSettings::execGetChallengeToAchievementSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics
	{
		struct SBZChallengeToAchievementSettings_eventGetAchievementObjectiveStatCodeArray_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeToAchievementSettings_eventGetAchievementObjectiveStatCodeArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeToAchievementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeToAchievementSettings, nullptr, "GetAchievementObjectiveStatCodeArray", nullptr, nullptr, sizeof(SBZChallengeToAchievementSettings_eventGetAchievementObjectiveStatCodeArray_Parms), Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics
	{
		struct SBZChallengeToAchievementSettings_eventGetChallengeToAchievementSettings_Parms
		{
			TMap<FName,FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeToAchievementSettings_eventGetChallengeToAchievementSettings_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeToAchievementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeToAchievementSettings, nullptr, "GetChallengeToAchievementSettings", nullptr, nullptr, sizeof(SBZChallengeToAchievementSettings_eventGetChallengeToAchievementSettings_Parms), Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZChallengeToAchievementSettings_NoRegister()
	{
		return USBZChallengeToAchievementSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeToAchievementMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeToAchievementMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeToAchievementMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChallengeToAchievementMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementObjectiveStatCodeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementObjectiveStatCodeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AchievementObjectiveStatCodeArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetAchievementObjectiveStatCodeArray, "GetAchievementObjectiveStatCodeArray" }, // 4148909091
		{ &Z_Construct_UFunction_USBZChallengeToAchievementSettings_GetChallengeToAchievementSettings, "GetChallengeToAchievementSettings" }, // 98037285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChallengeToAchievementSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeToAchievementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap_ValueProp = { "ChallengeToAchievementMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap_Key_KeyProp = { "ChallengeToAchievementMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeToAchievementSettings" },
		{ "ModuleRelativePath", "Public/SBZChallengeToAchievementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap = { "ChallengeToAchievementMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeToAchievementSettings, ChallengeToAchievementMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_AchievementObjectiveStatCodeArray_Inner = { "AchievementObjectiveStatCodeArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_AchievementObjectiveStatCodeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeToAchievementSettings" },
		{ "ModuleRelativePath", "Public/SBZChallengeToAchievementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_AchievementObjectiveStatCodeArray = { "AchievementObjectiveStatCodeArray", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeToAchievementSettings, AchievementObjectiveStatCodeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_AchievementObjectiveStatCodeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_AchievementObjectiveStatCodeArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_ChallengeToAchievementMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_AchievementObjectiveStatCodeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::NewProp_AchievementObjectiveStatCodeArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChallengeToAchievementSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::ClassParams = {
		&USBZChallengeToAchievementSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChallengeToAchievementSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChallengeToAchievementSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChallengeToAchievementSettings, 2893922262);
	template<> STARBREEZE_API UClass* StaticClass<USBZChallengeToAchievementSettings>()
	{
		return USBZChallengeToAchievementSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChallengeToAchievementSettings(Z_Construct_UClass_USBZChallengeToAchievementSettings, &USBZChallengeToAchievementSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChallengeToAchievementSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChallengeToAchievementSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
