// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABCurrency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCurrency() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCurrency_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCurrency();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCurrencyListResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCurrencyType();
// End Cross Module References
	DEFINE_FUNCTION(UABCurrency::execGetCurrencyList)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_GET_ENUM(EAccelByteCurrencyType,Z_Param_CurrencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrencyList(FDArrayModelsCurrencyListResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),EAccelByteCurrencyType(Z_Param_CurrencyType));
		P_NATIVE_END;
	}
	void UABCurrency::StaticRegisterNativesUABCurrency()
	{
		UClass* Class = UABCurrency::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrencyList", &UABCurrency::execGetCurrencyList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics
	{
		struct ABCurrency_eventGetCurrencyList_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			EAccelByteCurrencyType CurrencyType;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCurrency_eventGetCurrencyList_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCurrencyListResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCurrency_eventGetCurrencyList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCurrency_eventGetCurrencyList_Parms, CurrencyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCurrency.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCurrency, nullptr, "GetCurrencyList", nullptr, nullptr, sizeof(ABCurrency_eventGetCurrencyList_Parms), Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCurrency_GetCurrencyList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABCurrency_NoRegister()
	{
		return UABCurrency::StaticClass();
	}
	struct Z_Construct_UClass_UABCurrency_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCurrency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABCurrency_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCurrency_GetCurrencyList, "GetCurrencyList" }, // 4045517410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCurrency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABCurrency.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABCurrency.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCurrency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCurrency>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABCurrency_Statics::ClassParams = {
		&UABCurrency::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABCurrency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCurrency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCurrency()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABCurrency_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCurrency, 2077516833);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABCurrency>()
	{
		return UABCurrency::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCurrency(Z_Construct_UClass_UABCurrency, &UABCurrency::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABCurrency"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCurrency);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
