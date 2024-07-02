// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/User2FaMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser2FaMethod() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUser2FaMethod();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FUser2FaMethod::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FUser2FaMethod_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUser2FaMethod, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("User2FaMethod"), sizeof(FUser2FaMethod), Get_Z_Construct_UScriptStruct_FUser2FaMethod_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FUser2FaMethod>()
{
	return FUser2FaMethod::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUser2FaMethod(FUser2FaMethod::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("User2FaMethod"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaMethod
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaMethod()
	{
		UScriptStruct::DeferCppStructOps<FUser2FaMethod>(FName(TEXT("User2FaMethod")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaMethod;
	struct Z_Construct_UScriptStruct_FUser2FaMethod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Enabled_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaMethod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User2FaMethod.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUser2FaMethod>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User2FaMethod" },
		{ "ModuleRelativePath", "Public/User2FaMethod.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUser2FaMethod, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Enabled_Inner = { "Enabled", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Enabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User2FaMethod" },
		{ "ModuleRelativePath", "Public/User2FaMethod.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUser2FaMethod, Enabled), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUser2FaMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Enabled_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaMethod_Statics::NewProp_Enabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUser2FaMethod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"User2FaMethod",
		sizeof(FUser2FaMethod),
		alignof(FUser2FaMethod),
		Z_Construct_UScriptStruct_FUser2FaMethod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaMethod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaMethod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaMethod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUser2FaMethod()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUser2FaMethod_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("User2FaMethod"), sizeof(FUser2FaMethod), Get_Z_Construct_UScriptStruct_FUser2FaMethod_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUser2FaMethod_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUser2FaMethod_Hash() { return 1366656841U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
