// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABFulfillment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABFulfillment() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFulfillment_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFulfillment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsFulfillmentResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABFulfillment::execRedeemCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RedeemCode(Z_Param_Code,Z_Param_Region,Z_Param_Language,FDAccelByteModelsFulfillmentResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABFulfillment::StaticRegisterNativesUABFulfillment()
	{
		UClass* Class = UABFulfillment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RedeemCode", &UABFulfillment::execRedeemCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics
	{
		struct ABFulfillment_eventRedeemCode_Parms
		{
			FString Code;
			FString Region;
			FString Language;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsFulfillmentResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFulfillment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFulfillment, nullptr, "RedeemCode", nullptr, nullptr, sizeof(ABFulfillment_eventRedeemCode_Parms), Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFulfillment_RedeemCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABFulfillment_NoRegister()
	{
		return UABFulfillment::StaticClass();
	}
	struct Z_Construct_UClass_UABFulfillment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABFulfillment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABFulfillment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABFulfillment_RedeemCode, "RedeemCode" }, // 2784564707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABFulfillment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABFulfillment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABFulfillment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABFulfillment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABFulfillment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABFulfillment_Statics::ClassParams = {
		&UABFulfillment::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABFulfillment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABFulfillment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABFulfillment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABFulfillment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABFulfillment, 4000942141);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABFulfillment>()
	{
		return UABFulfillment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABFulfillment(Z_Construct_UClass_UABFulfillment, &UABFulfillment::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABFulfillment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABFulfillment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
