// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChatSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChatSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChatSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChatSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChatGameSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZChatSettings::execGetChatSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZChatGameSettings**)Z_Param__Result=USBZChatSettings::GetChatSettings();
		P_NATIVE_END;
	}
	void USBZChatSettings::StaticRegisterNativesUSBZChatSettings()
	{
		UClass* Class = USBZChatSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChatSettings", &USBZChatSettings::execGetChatSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics
	{
		struct SBZChatSettings_eventGetChatSettings_Parms
		{
			USBZChatGameSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatSettings_eventGetChatSettings_Parms, ReturnValue), Z_Construct_UClass_USBZChatGameSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChatSettings, nullptr, "GetChatSettings", nullptr, nullptr, sizeof(SBZChatSettings_eventGetChatSettings_Parms), Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChatSettings_GetChatSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChatSettings_GetChatSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZChatSettings_NoRegister()
	{
		return USBZChatSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZChatSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Schematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSchematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedSchematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChatSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZChatSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZChatSettings_GetChatSettings, "GetChatSettings" }, // 2917131368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChatSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChatSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatSettings_Statics::NewProp_Schematic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatSettings" },
		{ "ModuleRelativePath", "Public/SBZChatSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZChatSettings_Statics::NewProp_Schematic = { "Schematic", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatSettings, Schematic), Z_Construct_UClass_USBZChatGameSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZChatSettings_Statics::NewProp_Schematic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatSettings_Statics::NewProp_Schematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatSettings_Statics::NewProp_CachedSchematic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatSettings" },
		{ "ModuleRelativePath", "Public/SBZChatSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZChatSettings_Statics::NewProp_CachedSchematic = { "CachedSchematic", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatSettings, CachedSchematic), Z_Construct_UClass_USBZChatGameSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZChatSettings_Statics::NewProp_CachedSchematic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatSettings_Statics::NewProp_CachedSchematic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZChatSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatSettings_Statics::NewProp_Schematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatSettings_Statics::NewProp_CachedSchematic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChatSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChatSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChatSettings_Statics::ClassParams = {
		&USBZChatSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZChatSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChatSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChatSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChatSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChatSettings, 584113874);
	template<> STARBREEZE_API UClass* StaticClass<USBZChatSettings>()
	{
		return USBZChatSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChatSettings(Z_Construct_UClass_USBZChatSettings, &USBZChatSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChatSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChatSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
