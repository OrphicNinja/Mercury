// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBTutorialCharacterSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTutorialCharacterSetting() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBTutorialCharacterSetting_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBTutorialCharacterSetting();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(USBTutorialCharacterSetting::execGetTutorialPlayerGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=USBTutorialCharacterSetting::GetTutorialPlayerGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBTutorialCharacterSetting::execGetTutorialPlayerSku)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBTutorialCharacterSetting::GetTutorialPlayerSku();
		P_NATIVE_END;
	}
	void USBTutorialCharacterSetting::StaticRegisterNativesUSBTutorialCharacterSetting()
	{
		UClass* Class = USBTutorialCharacterSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTutorialPlayerGuid", &USBTutorialCharacterSetting::execGetTutorialPlayerGuid },
			{ "GetTutorialPlayerSku", &USBTutorialCharacterSetting::execGetTutorialPlayerSku },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics
	{
		struct SBTutorialCharacterSetting_eventGetTutorialPlayerGuid_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBTutorialCharacterSetting_eventGetTutorialPlayerGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBTutorialCharacterSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBTutorialCharacterSetting, nullptr, "GetTutorialPlayerGuid", nullptr, nullptr, sizeof(SBTutorialCharacterSetting_eventGetTutorialPlayerGuid_Parms), Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics
	{
		struct SBTutorialCharacterSetting_eventGetTutorialPlayerSku_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBTutorialCharacterSetting_eventGetTutorialPlayerSku_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBTutorialCharacterSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBTutorialCharacterSetting, nullptr, "GetTutorialPlayerSku", nullptr, nullptr, sizeof(SBTutorialCharacterSetting_eventGetTutorialPlayerSku_Parms), Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBTutorialCharacterSetting_NoRegister()
	{
		return USBTutorialCharacterSetting::StaticClass();
	}
	struct Z_Construct_UClass_USBTutorialCharacterSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBTutorialCharacterSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBTutorialCharacterSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerGuid, "GetTutorialPlayerGuid" }, // 3951477279
		{ &Z_Construct_UFunction_USBTutorialCharacterSetting_GetTutorialPlayerSku, "GetTutorialPlayerSku" }, // 1636863547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTutorialCharacterSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBTutorialCharacterSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBTutorialCharacterSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterGuid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBTutorialCharacterSetting" },
		{ "ModuleRelativePath", "Public/SBTutorialCharacterSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterGuid = { "CharacterGuid", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBTutorialCharacterSetting, CharacterGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBTutorialCharacterSetting" },
		{ "ModuleRelativePath", "Public/SBTutorialCharacterSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterSku = { "CharacterSku", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBTutorialCharacterSetting, CharacterSku), METADATA_PARAMS(Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBTutorialCharacterSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTutorialCharacterSetting_Statics::NewProp_CharacterSku,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBTutorialCharacterSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTutorialCharacterSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBTutorialCharacterSetting_Statics::ClassParams = {
		&USBTutorialCharacterSetting::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBTutorialCharacterSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBTutorialCharacterSetting_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBTutorialCharacterSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBTutorialCharacterSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBTutorialCharacterSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBTutorialCharacterSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBTutorialCharacterSetting, 3753287749);
	template<> STARBREEZE_API UClass* StaticClass<USBTutorialCharacterSetting>()
	{
		return USBTutorialCharacterSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBTutorialCharacterSetting(Z_Construct_UClass_USBTutorialCharacterSetting, &USBTutorialCharacterSetting::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBTutorialCharacterSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBTutorialCharacterSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
