// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerCredentials.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerCredentials() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerCredentials_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerCredentials();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	DEFINE_FUNCTION(UABServerCredentials::execGetAccessToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken();
		P_NATIVE_END;
	}
	void UABServerCredentials::StaticRegisterNativesUABServerCredentials()
	{
		UClass* Class = UABServerCredentials::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccessToken", &UABServerCredentials::execGetAccessToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics
	{
		struct ABServerCredentials_eventGetAccessToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerCredentials_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCredentials, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(ABServerCredentials_eventGetAccessToken_Parms), Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerCredentials_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerCredentials_NoRegister()
	{
		return UABServerCredentials::StaticClass();
	}
	struct Z_Construct_UClass_UABServerCredentials_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerCredentials_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerCredentials_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerCredentials_GetAccessToken, "GetAccessToken" }, // 631900046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerCredentials_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerCredentials.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerCredentials.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerCredentials_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerCredentials>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerCredentials_Statics::ClassParams = {
		&UABServerCredentials::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABServerCredentials_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerCredentials_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerCredentials()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerCredentials_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerCredentials, 4021265968);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerCredentials>()
	{
		return UABServerCredentials::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerCredentials(Z_Construct_UClass_UABServerCredentials, &UABServerCredentials::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerCredentials"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerCredentials);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
