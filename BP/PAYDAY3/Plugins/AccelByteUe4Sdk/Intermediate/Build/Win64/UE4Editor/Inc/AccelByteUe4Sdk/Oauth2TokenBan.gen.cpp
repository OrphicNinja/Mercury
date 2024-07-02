// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/Oauth2TokenBan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOauth2TokenBan() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2TokenBan();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FOauth2TokenBan::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FOauth2TokenBan_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOauth2TokenBan, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("Oauth2TokenBan"), sizeof(FOauth2TokenBan), Get_Z_Construct_UScriptStruct_FOauth2TokenBan_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FOauth2TokenBan>()
{
	return FOauth2TokenBan::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOauth2TokenBan(FOauth2TokenBan::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("Oauth2TokenBan"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2TokenBan
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2TokenBan()
	{
		UScriptStruct::DeferCppStructOps<FOauth2TokenBan>(FName(TEXT("Oauth2TokenBan")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2TokenBan;
	struct Z_Construct_UScriptStruct_FOauth2TokenBan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ban_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ban;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetedNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetedNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Oauth2TokenBan.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOauth2TokenBan>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Ban_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2TokenBan" },
		{ "ModuleRelativePath", "Public/Oauth2TokenBan.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Ban = { "Ban", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2TokenBan, Ban), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Ban_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Ban_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_TargetedNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2TokenBan" },
		{ "ModuleRelativePath", "Public/Oauth2TokenBan.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_TargetedNamespace = { "TargetedNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2TokenBan, TargetedNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_TargetedNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_TargetedNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2TokenBan" },
		{ "ModuleRelativePath", "Public/Oauth2TokenBan.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2TokenBan, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Enabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2TokenBan" },
		{ "ModuleRelativePath", "Public/Oauth2TokenBan.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FOauth2TokenBan*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOauth2TokenBan), &Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Ban,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_TargetedNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::NewProp_Enabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"Oauth2TokenBan",
		sizeof(FOauth2TokenBan),
		alignof(FOauth2TokenBan),
		Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOauth2TokenBan()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOauth2TokenBan_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Oauth2TokenBan"), sizeof(FOauth2TokenBan), Get_Z_Construct_UScriptStruct_FOauth2TokenBan_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOauth2TokenBan_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOauth2TokenBan_Hash() { return 1348071251U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
