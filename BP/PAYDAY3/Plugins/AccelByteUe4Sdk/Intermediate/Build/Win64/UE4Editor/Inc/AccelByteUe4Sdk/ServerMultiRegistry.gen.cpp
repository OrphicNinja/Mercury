// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ServerMultiRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerMultiRegistry() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UServerMultiRegistry_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UServerMultiRegistry();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UServerApiClient_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UServerMultiRegistry::execGetServerApiClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UServerApiClient**)Z_Param__Result=UServerMultiRegistry::GetServerApiClient(Z_Param_Key);
		P_NATIVE_END;
	}
	void UServerMultiRegistry::StaticRegisterNativesUServerMultiRegistry()
	{
		UClass* Class = UServerMultiRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetServerApiClient", &UServerMultiRegistry::execGetServerApiClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics
	{
		struct ServerMultiRegistry_eventGetServerApiClient_Parms
		{
			FString Key;
			UServerApiClient* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerMultiRegistry_eventGetServerApiClient_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerMultiRegistry_eventGetServerApiClient_Parms, ReturnValue), Z_Construct_UClass_UServerApiClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ServerMultiRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerMultiRegistry, nullptr, "GetServerApiClient", nullptr, nullptr, sizeof(ServerMultiRegistry_eventGetServerApiClient_Parms), Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerMultiRegistry_NoRegister()
	{
		return UServerMultiRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UServerMultiRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerMultiRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerMultiRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerMultiRegistry_GetServerApiClient, "GetServerApiClient" }, // 3648965718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerMultiRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ServerMultiRegistry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ServerMultiRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerMultiRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerMultiRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerMultiRegistry_Statics::ClassParams = {
		&UServerMultiRegistry::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UServerMultiRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerMultiRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerMultiRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerMultiRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerMultiRegistry, 3796238444);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UServerMultiRegistry>()
	{
		return UServerMultiRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerMultiRegistry(Z_Construct_UClass_UServerMultiRegistry, &UServerMultiRegistry::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UServerMultiRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerMultiRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
