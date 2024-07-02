// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/Oauth2TokenPermission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOauth2TokenPermission() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2TokenPermission();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FOauth2TokenPermission::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FOauth2TokenPermission_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOauth2TokenPermission, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("Oauth2TokenPermission"), sizeof(FOauth2TokenPermission), Get_Z_Construct_UScriptStruct_FOauth2TokenPermission_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FOauth2TokenPermission>()
{
	return FOauth2TokenPermission::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOauth2TokenPermission(FOauth2TokenPermission::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("Oauth2TokenPermission"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2TokenPermission
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2TokenPermission()
	{
		UScriptStruct::DeferCppStructOps<FOauth2TokenPermission>(FName(TEXT("Oauth2TokenPermission")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2TokenPermission;
	struct Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Resource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Oauth2TokenPermission.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOauth2TokenPermission>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Resource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2TokenPermission" },
		{ "ModuleRelativePath", "Public/Oauth2TokenPermission.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2TokenPermission, Resource), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Resource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2TokenPermission" },
		{ "ModuleRelativePath", "Public/Oauth2TokenPermission.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2TokenPermission, Action), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Resource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::NewProp_Action,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"Oauth2TokenPermission",
		sizeof(FOauth2TokenPermission),
		alignof(FOauth2TokenPermission),
		Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOauth2TokenPermission()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOauth2TokenPermission_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Oauth2TokenPermission"), sizeof(FOauth2TokenPermission), Get_Z_Construct_UScriptStruct_FOauth2TokenPermission_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOauth2TokenPermission_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOauth2TokenPermission_Hash() { return 88771882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
