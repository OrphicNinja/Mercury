// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABWallet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABWallet() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABWallet_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABWallet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfosResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABWallet::execGetWalletInfoByCurrencyCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyCode);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWalletInfoByCurrencyCode(Z_Param_CurrencyCode,FDAccelByteModelsWalletInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABWallet::execGetWalletInfoByCurrencyCodeV2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyCode);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWalletInfoByCurrencyCodeV2(Z_Param_CurrencyCode,FDAccelByteModelsWalletInfosResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABWallet::StaticRegisterNativesUABWallet()
	{
		UClass* Class = UABWallet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWalletInfoByCurrencyCode", &UABWallet::execGetWalletInfoByCurrencyCode },
			{ "GetWalletInfoByCurrencyCodeV2", &UABWallet::execGetWalletInfoByCurrencyCodeV2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics
	{
		struct ABWallet_eventGetWalletInfoByCurrencyCode_Parms
		{
			FString CurrencyCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCode_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_CurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABWallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABWallet, nullptr, "GetWalletInfoByCurrencyCode", nullptr, nullptr, sizeof(ABWallet_eventGetWalletInfoByCurrencyCode_Parms), Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics
	{
		struct ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms
		{
			FString CurrencyCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_CurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfosResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABWallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABWallet, nullptr, "GetWalletInfoByCurrencyCodeV2", nullptr, nullptr, sizeof(ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms), Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABWallet_NoRegister()
	{
		return UABWallet::StaticClass();
	}
	struct Z_Construct_UClass_UABWallet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABWallet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABWallet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode, "GetWalletInfoByCurrencyCode" }, // 1731545621
		{ &Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2, "GetWalletInfoByCurrencyCodeV2" }, // 3646697316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABWallet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABWallet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABWallet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABWallet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABWallet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABWallet_Statics::ClassParams = {
		&UABWallet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABWallet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABWallet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABWallet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABWallet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABWallet, 4229378809);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABWallet>()
	{
		return UABWallet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABWallet(Z_Construct_UClass_UABWallet, &UABWallet::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABWallet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABWallet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
