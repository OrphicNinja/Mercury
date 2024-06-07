// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABMultiRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABMultiRegistry() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMultiRegistry_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMultiRegistry();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABApiClient_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UABMultiRegistry::execGetApiClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UABApiClient**)Z_Param__Result=UABMultiRegistry::GetApiClient(Z_Param_Key);
		P_NATIVE_END;
	}
	void UABMultiRegistry::StaticRegisterNativesUABMultiRegistry()
	{
		UClass* Class = UABMultiRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetApiClient", &UABMultiRegistry::execGetApiClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics
	{
		struct ABMultiRegistry_eventGetApiClient_Parms
		{
			FString Key;
			UABApiClient* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMultiRegistry_eventGetApiClient_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMultiRegistry_eventGetApiClient_Parms, ReturnValue), Z_Construct_UClass_UABApiClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMultiRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMultiRegistry, nullptr, "GetApiClient", nullptr, nullptr, sizeof(ABMultiRegistry_eventGetApiClient_Parms), Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMultiRegistry_GetApiClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMultiRegistry_GetApiClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABMultiRegistry_NoRegister()
	{
		return UABMultiRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UABMultiRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABMultiRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABMultiRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABMultiRegistry_GetApiClient, "GetApiClient" }, // 3713570262
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABMultiRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABMultiRegistry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABMultiRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABMultiRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABMultiRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABMultiRegistry_Statics::ClassParams = {
		&UABMultiRegistry::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABMultiRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABMultiRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABMultiRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABMultiRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABMultiRegistry, 3007293239);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABMultiRegistry>()
	{
		return UABMultiRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABMultiRegistry(Z_Construct_UClass_UABMultiRegistry, &UABMultiRegistry::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABMultiRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABMultiRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
