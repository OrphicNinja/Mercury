// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/AccelByteBlueprintsCustomizationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteBlueprintsCustomizationSettings() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_NoRegister();
	ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
	DEFINE_FUNCTION(UAccelByteBlueprintsCustomizationSettings::execGetChallengeServerUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCustomizationSettings::GetChallengeServerUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCustomizationSettings::execSetChallengeServerUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ChallengeServerUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAccelByteBlueprintsCustomizationSettings::SetChallengeServerUrl(Z_Param_ChallengeServerUrl);
		P_NATIVE_END;
	}
	void UAccelByteBlueprintsCustomizationSettings::StaticRegisterNativesUAccelByteBlueprintsCustomizationSettings()
	{
		UClass* Class = UAccelByteBlueprintsCustomizationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChallengeServerUrl", &UAccelByteBlueprintsCustomizationSettings::execGetChallengeServerUrl },
			{ "SetChallengeServerUrl", &UAccelByteBlueprintsCustomizationSettings::execSetChallengeServerUrl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics
	{
		struct AccelByteBlueprintsCustomizationSettings_eventGetChallengeServerUrl_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCustomizationSettings_eventGetChallengeServerUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCustomizationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings, nullptr, "GetChallengeServerUrl", nullptr, nullptr, sizeof(AccelByteBlueprintsCustomizationSettings_eventGetChallengeServerUrl_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics
	{
		struct AccelByteBlueprintsCustomizationSettings_eventSetChallengeServerUrl_Parms
		{
			FString ChallengeServerUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeServerUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChallengeServerUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::NewProp_ChallengeServerUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::NewProp_ChallengeServerUrl = { "ChallengeServerUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCustomizationSettings_eventSetChallengeServerUrl_Parms, ChallengeServerUrl), METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::NewProp_ChallengeServerUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::NewProp_ChallengeServerUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::NewProp_ChallengeServerUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCustomizationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings, nullptr, "SetChallengeServerUrl", nullptr, nullptr, sizeof(AccelByteBlueprintsCustomizationSettings_eventSetChallengeServerUrl_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_NoRegister()
	{
		return UAccelByteBlueprintsCustomizationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl, "GetChallengeServerUrl" }, // 1072660812
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl, "SetChallengeServerUrl" }, // 1810472996
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteBlueprintsCustomizationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCustomizationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteBlueprintsCustomizationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::ClassParams = {
		&UAccelByteBlueprintsCustomizationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteBlueprintsCustomizationSettings, 1195411647);
	template<> ACCELBYTECUSTOMIZATION_API UClass* StaticClass<UAccelByteBlueprintsCustomizationSettings>()
	{
		return UAccelByteBlueprintsCustomizationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteBlueprintsCustomizationSettings(Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings, &UAccelByteBlueprintsCustomizationSettings::StaticClass, TEXT("/Script/AccelByteCustomization"), TEXT("UAccelByteBlueprintsCustomizationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteBlueprintsCustomizationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
