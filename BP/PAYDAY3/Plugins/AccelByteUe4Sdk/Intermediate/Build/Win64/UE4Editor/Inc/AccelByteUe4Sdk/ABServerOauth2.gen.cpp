// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerOauth2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerOauth2() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerOauth2_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerOauth2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJwkSetDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABServerOauth2::execForgetAllCredentials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAllCredentials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerOauth2::execGetJwks)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetJwks(FDJwkSetDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerOauth2::execLoginWithClientCredentials)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithClientCredentials(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABServerOauth2::StaticRegisterNativesUABServerOauth2()
	{
		UClass* Class = UABServerOauth2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetAllCredentials", &UABServerOauth2::execForgetAllCredentials },
			{ "GetJwks", &UABServerOauth2::execGetJwks },
			{ "LoginWithClientCredentials", &UABServerOauth2::execLoginWithClientCredentials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerOauth2, nullptr, "ForgetAllCredentials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics
	{
		struct ABServerOauth2_eventGetJwks_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerOauth2_eventGetJwks_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJwkSetDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerOauth2_eventGetJwks_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerOauth2, nullptr, "GetJwks", nullptr, nullptr, sizeof(ABServerOauth2_eventGetJwks_Parms), Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerOauth2_GetJwks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics
	{
		struct ABServerOauth2_eventLoginWithClientCredentials_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerOauth2_eventLoginWithClientCredentials_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerOauth2_eventLoginWithClientCredentials_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerOauth2, nullptr, "LoginWithClientCredentials", nullptr, nullptr, sizeof(ABServerOauth2_eventLoginWithClientCredentials_Parms), Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerOauth2_NoRegister()
	{
		return UABServerOauth2::StaticClass();
	}
	struct Z_Construct_UClass_UABServerOauth2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerOauth2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerOauth2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials, "ForgetAllCredentials" }, // 1677497799
		{ &Z_Construct_UFunction_UABServerOauth2_GetJwks, "GetJwks" }, // 2832551075
		{ &Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials, "LoginWithClientCredentials" }, // 2292739807
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerOauth2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerOauth2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerOauth2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerOauth2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerOauth2_Statics::ClassParams = {
		&UABServerOauth2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABServerOauth2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerOauth2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerOauth2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerOauth2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerOauth2, 3162639117);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerOauth2>()
	{
		return UABServerOauth2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerOauth2(Z_Construct_UClass_UABServerOauth2, &UABServerOauth2::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerOauth2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerOauth2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
