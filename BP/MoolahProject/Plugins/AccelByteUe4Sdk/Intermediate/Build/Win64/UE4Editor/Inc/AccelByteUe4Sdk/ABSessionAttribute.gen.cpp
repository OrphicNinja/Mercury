// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABSessionAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSessionAttribute() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionAttribute_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionAttribute();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllSessionAttributeResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGetSessionAttributeRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetSessionAttributeResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetSessionAttributeRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetSessionAttributeResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABSessionAttribute::execGetAllSessionAttribute)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAllSessionAttribute(FDGetAllSessionAttributeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABSessionAttribute::execGetSessionAttribute)
	{
		P_GET_STRUCT_REF(FGetSessionAttributeRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSessionAttribute(Z_Param_Out_Request,FDGetSessionAttributeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABSessionAttribute::execSetSessionAttribute)
	{
		P_GET_STRUCT_REF(FSetSessionAttributeRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SetSessionAttribute(Z_Param_Out_Request,FDSetSessionAttributeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABSessionAttribute::StaticRegisterNativesUABSessionAttribute()
	{
		UClass* Class = UABSessionAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSessionAttribute", &UABSessionAttribute::execGetAllSessionAttribute },
			{ "GetSessionAttribute", &UABSessionAttribute::execGetSessionAttribute },
			{ "SetSessionAttribute", &UABSessionAttribute::execSetSessionAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics
	{
		struct ABSessionAttribute_eventGetAllSessionAttribute_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetAllSessionAttribute_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllSessionAttributeResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetAllSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetAllSessionAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionAttribute, nullptr, "GetAllSessionAttribute", nullptr, nullptr, sizeof(ABSessionAttribute_eventGetAllSessionAttribute_Parms), Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics
	{
		struct ABSessionAttribute_eventGetSessionAttribute_Parms
		{
			FGetSessionAttributeRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, Request), Z_Construct_UScriptStruct_FGetSessionAttributeRequest, METADATA_PARAMS(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetSessionAttributeResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionAttribute, nullptr, "GetSessionAttribute", nullptr, nullptr, sizeof(ABSessionAttribute_eventGetSessionAttribute_Parms), Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics
	{
		struct ABSessionAttribute_eventSetSessionAttribute_Parms
		{
			FSetSessionAttributeRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, Request), Z_Construct_UScriptStruct_FSetSessionAttributeRequest, METADATA_PARAMS(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetSessionAttributeResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionAttribute, nullptr, "SetSessionAttribute", nullptr, nullptr, sizeof(ABSessionAttribute_eventSetSessionAttribute_Parms), Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABSessionAttribute_NoRegister()
	{
		return UABSessionAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UABSessionAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABSessionAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABSessionAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute, "GetAllSessionAttribute" }, // 3083736835
		{ &Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute, "GetSessionAttribute" }, // 2104820634
		{ &Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute, "SetSessionAttribute" }, // 3964791757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSessionAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABSessionAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABSessionAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSessionAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABSessionAttribute_Statics::ClassParams = {
		&UABSessionAttribute::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABSessionAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABSessionAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABSessionAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABSessionAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABSessionAttribute, 1529987276);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABSessionAttribute>()
	{
		return UABSessionAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABSessionAttribute(Z_Construct_UClass_UABSessionAttribute, &UABSessionAttribute::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABSessionAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABSessionAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
