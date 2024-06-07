// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/Oauth2Token.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOauth2Token() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2Token();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2TokenPermission();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2TokenBan();
// End Cross Module References
class UScriptStruct* FOauth2Token::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FOauth2Token_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOauth2Token, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("Oauth2Token"), sizeof(FOauth2Token), Get_Z_Construct_UScriptStruct_FOauth2Token_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FOauth2Token>()
{
	return FOauth2Token::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOauth2Token(FOauth2Token::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("Oauth2Token"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2Token
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2Token()
	{
		UScriptStruct::DeferCppStructOps<FOauth2Token>(FName(TEXT("Oauth2Token")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFOauth2Token;
	struct Z_Construct_UScriptStruct_FOauth2Token_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Access_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Access_token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Auth_Trust_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Auth_Trust_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refresh_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Refresh_token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_in_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Expires_in;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refresh_expires_in_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Refresh_expires_in;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Is_comply_MetaData[];
#endif
		static void NewProp_Is_comply_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Is_comply;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Roles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bans_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bans_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Display_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Display_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_user_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform_user_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOauth2Token_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOauth2Token>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Access_token_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Access_token = { "Access_token", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Access_token), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Access_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Access_token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Auth_Trust_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Auth_Trust_Id = { "Auth_Trust_Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Auth_Trust_Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Auth_Trust_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Auth_Trust_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_token_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_token = { "Refresh_token", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Refresh_token), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Token_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Token_type = { "Token_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Token_type), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Token_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Token_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Expires_in_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Expires_in = { "Expires_in", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Expires_in), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Expires_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Expires_in_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_expires_in_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_expires_in = { "Refresh_expires_in", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Refresh_expires_in), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_expires_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_expires_in_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Is_comply_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Is_comply_SetBit(void* Obj)
	{
		((FOauth2Token*)Obj)->Is_comply = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Is_comply = { "Is_comply", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOauth2Token), &Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Is_comply_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Is_comply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Is_comply_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOauth2TokenPermission, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Permissions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Permissions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Roles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Bans_Inner = { "Bans", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOauth2TokenBan, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Bans_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Bans = { "Bans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Bans), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Bans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Bans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_User_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_User_id = { "User_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, User_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_User_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_User_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Display_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Display_name = { "Display_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Display_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Display_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Display_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_id = { "Platform_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Platform_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_user_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oauth2Token" },
		{ "ModuleRelativePath", "Public/Oauth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_user_id = { "Platform_user_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOauth2Token, Platform_user_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_user_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_user_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOauth2Token_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Access_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Auth_Trust_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Token_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Expires_in,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Refresh_expires_in,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Is_comply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Permissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Permissions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Roles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Roles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Bans_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Bans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_User_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Display_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOauth2Token_Statics::NewProp_Platform_user_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOauth2Token_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"Oauth2Token",
		sizeof(FOauth2Token),
		alignof(FOauth2Token),
		Z_Construct_UScriptStruct_FOauth2Token_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOauth2Token_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOauth2Token_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOauth2Token()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOauth2Token_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Oauth2Token"), sizeof(FOauth2Token), Get_Z_Construct_UScriptStruct_FOauth2Token_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOauth2Token_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOauth2Token_Hash() { return 3915376690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
