// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccountLinkedPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccountLinkedPlatform() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkedPlatform();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccountLinkedPlatform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccountLinkedPlatform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccountLinkedPlatform, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccountLinkedPlatform"), sizeof(FAccountLinkedPlatform), Get_Z_Construct_UScriptStruct_FAccountLinkedPlatform_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccountLinkedPlatform>()
{
	return FAccountLinkedPlatform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccountLinkedPlatform(FAccountLinkedPlatform::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccountLinkedPlatform"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkedPlatform
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkedPlatform()
	{
		UScriptStruct::DeferCppStructOps<FAccountLinkedPlatform>(FName(TEXT("AccountLinkedPlatform")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkedPlatform;
	struct Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccountLinkedPlatform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccountLinkedPlatform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkedPlatform" },
		{ "ModuleRelativePath", "Public/AccountLinkedPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkedPlatform, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_PlatformUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkedPlatform" },
		{ "ModuleRelativePath", "Public/AccountLinkedPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkedPlatform, PlatformUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_PlatformUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_PlatformUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::NewProp_PlatformUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccountLinkedPlatform",
		sizeof(FAccountLinkedPlatform),
		alignof(FAccountLinkedPlatform),
		Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkedPlatform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccountLinkedPlatform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccountLinkedPlatform"), sizeof(FAccountLinkedPlatform), Get_Z_Construct_UScriptStruct_FAccountLinkedPlatform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccountLinkedPlatform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccountLinkedPlatform_Hash() { return 2630530391U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
