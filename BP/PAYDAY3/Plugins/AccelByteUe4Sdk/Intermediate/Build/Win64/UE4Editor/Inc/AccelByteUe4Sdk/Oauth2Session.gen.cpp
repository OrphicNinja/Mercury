// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/Oauth2Session.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOauth2Session() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2Session();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FOauth2Session::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FOauth2Session_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOauth2Session, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("Oauth2Session"), sizeof(FOauth2Session), Get_Z_Construct_UScriptStruct_FOauth2Session_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FOauth2Session>()
{
	return FOauth2Session::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOauth2Session(FOauth2Session::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("Oauth2Session"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2Session
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2Session()
	{
		UScriptStruct::DeferCppStructOps<FOauth2Session>(FName(TEXT("Oauth2Session")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2Session;
	struct Z_Construct_UScriptStruct_FOauth2Session_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Session_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_in_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Expires_in;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refresh_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Refresh_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Session_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Oauth2Session.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOauth2Session_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOauth2Session>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Session_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Session" },
		{ "ModuleRelativePath", "Public/Oauth2Session.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Session_id = { "Session_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Session, Session_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Session_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Session_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Expires_in_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Session" },
		{ "ModuleRelativePath", "Public/Oauth2Session.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Expires_in = { "Expires_in", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Session, Expires_in), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Expires_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Expires_in_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Refresh_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Session" },
		{ "ModuleRelativePath", "Public/Oauth2Session.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Refresh_id = { "Refresh_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Session, Refresh_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Refresh_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Refresh_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOauth2Session_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Session_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Expires_in,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Session_Statics::NewProp_Refresh_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOauth2Session_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"Oauth2Session",
		sizeof(FOauth2Session),
		alignof(FOauth2Session),
		Z_Construct_UScriptStruct_FOauth2Session_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Session_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Session_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Session_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOauth2Session()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOauth2Session_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Oauth2Session"), sizeof(FOauth2Session), Get_Z_Construct_UScriptStruct_FOauth2Session_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOauth2Session_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOauth2Session_Hash() { return 905553126U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
