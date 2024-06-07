// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABCredentials.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCredentials() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCredentials_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCredentials();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountUserData();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2Token();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FErrorOAuthInfo();
// End Cross Module References
	DEFINE_FUNCTION(UABCredentials::execForgetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetAccessToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetAccountUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAccountUserData*)Z_Param__Result=P_THIS->GetAccountUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetAuthToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOauth2Token*)Z_Param__Result=P_THIS->GetAuthToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetLinkingToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLinkingToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetNamespace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNamespace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetPlatformUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlatformUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetRefreshToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRefreshToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetUserDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetUserEmailAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserEmailAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execGetUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execIsComply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsComply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execIsSessionValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSessionValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execPollRefreshToken)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollRefreshToken(Z_Param_CurrentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execScheduleRefreshToken)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NextRefreshTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScheduleRefreshToken(Z_Param_NextRefreshTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execSetAccountUserData)
	{
		P_GET_STRUCT(FAccountUserData,Z_Param_InAccountUserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccountUserData(Z_Param_InAccountUserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execSetAuthToken)
	{
		P_GET_STRUCT(FOauth2Token,Z_Param_NewAuthToken);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAuthToken(Z_Param_NewAuthToken,Z_Param_CurrentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execSetClientCredentials)
	{
		P_GET_ENUM(ESettingsEnvironment,Z_Param_Environment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClientCredentials(ESettingsEnvironment(Z_Param_Environment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execSetErrorOAuth)
	{
		P_GET_STRUCT(FErrorOAuthInfo,Z_Param_ErrorOAuthInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetErrorOAuth(Z_Param_ErrorOAuthInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCredentials::execSetUserEmailAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserEmailAddress(Z_Param_EmailAddress);
		P_NATIVE_END;
	}
	void UABCredentials::StaticRegisterNativesUABCredentials()
	{
		UClass* Class = UABCredentials::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetAll", &UABCredentials::execForgetAll },
			{ "GetAccessToken", &UABCredentials::execGetAccessToken },
			{ "GetAccountUserData", &UABCredentials::execGetAccountUserData },
			{ "GetAuthToken", &UABCredentials::execGetAuthToken },
			{ "GetLinkingToken", &UABCredentials::execGetLinkingToken },
			{ "GetNamespace", &UABCredentials::execGetNamespace },
			{ "GetPlatformUserId", &UABCredentials::execGetPlatformUserId },
			{ "GetRefreshToken", &UABCredentials::execGetRefreshToken },
			{ "GetUserDisplayName", &UABCredentials::execGetUserDisplayName },
			{ "GetUserEmailAddress", &UABCredentials::execGetUserEmailAddress },
			{ "GetUserId", &UABCredentials::execGetUserId },
			{ "IsComply", &UABCredentials::execIsComply },
			{ "IsSessionValid", &UABCredentials::execIsSessionValid },
			{ "PollRefreshToken", &UABCredentials::execPollRefreshToken },
			{ "ScheduleRefreshToken", &UABCredentials::execScheduleRefreshToken },
			{ "SetAccountUserData", &UABCredentials::execSetAccountUserData },
			{ "SetAuthToken", &UABCredentials::execSetAuthToken },
			{ "SetClientCredentials", &UABCredentials::execSetClientCredentials },
			{ "SetErrorOAuth", &UABCredentials::execSetErrorOAuth },
			{ "SetUserEmailAddress", &UABCredentials::execSetUserEmailAddress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABCredentials_ForgetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "ForgetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_ForgetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics
	{
		struct ABCredentials_eventGetAccessToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(ABCredentials_eventGetAccessToken_Parms), Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics
	{
		struct ABCredentials_eventGetAccountUserData_Parms
		{
			FAccountUserData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetAccountUserData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAccountUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetAccountUserData", nullptr, nullptr, sizeof(ABCredentials_eventGetAccountUserData_Parms), Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetAccountUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics
	{
		struct ABCredentials_eventGetAuthToken_Parms
		{
			FOauth2Token ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetAuthToken_Parms, ReturnValue), Z_Construct_UScriptStruct_FOauth2Token, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetAuthToken", nullptr, nullptr, sizeof(ABCredentials_eventGetAuthToken_Parms), Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics
	{
		struct ABCredentials_eventGetLinkingToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetLinkingToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetLinkingToken", nullptr, nullptr, sizeof(ABCredentials_eventGetLinkingToken_Parms), Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetLinkingToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetNamespace_Statics
	{
		struct ABCredentials_eventGetNamespace_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetNamespace", nullptr, nullptr, sizeof(ABCredentials_eventGetNamespace_Parms), Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics
	{
		struct ABCredentials_eventGetPlatformUserId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetPlatformUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetPlatformUserId", nullptr, nullptr, sizeof(ABCredentials_eventGetPlatformUserId_Parms), Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetPlatformUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics
	{
		struct ABCredentials_eventGetRefreshToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetRefreshToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetRefreshToken", nullptr, nullptr, sizeof(ABCredentials_eventGetRefreshToken_Parms), Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetRefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics
	{
		struct ABCredentials_eventGetUserDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetUserDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetUserDisplayName", nullptr, nullptr, sizeof(ABCredentials_eventGetUserDisplayName_Parms), Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetUserDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics
	{
		struct ABCredentials_eventGetUserEmailAddress_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetUserEmailAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetUserEmailAddress", nullptr, nullptr, sizeof(ABCredentials_eventGetUserEmailAddress_Parms), Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetUserEmailAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_GetUserId_Statics
	{
		struct ABCredentials_eventGetUserId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventGetUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_GetUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetUserId", nullptr, nullptr, sizeof(ABCredentials_eventGetUserId_Parms), Z_Construct_UFunction_UABCredentials_GetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_GetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_GetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_IsComply_Statics
	{
		struct ABCredentials_eventIsComply_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABCredentials_eventIsComply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABCredentials_eventIsComply_Parms), &Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_IsComply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_IsComply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_IsComply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "IsComply", nullptr, nullptr, sizeof(ABCredentials_eventIsComply_Parms), Z_Construct_UFunction_UABCredentials_IsComply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsComply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_IsComply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsComply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_IsComply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_IsComply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics
	{
		struct ABCredentials_eventIsSessionValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABCredentials_eventIsSessionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABCredentials_eventIsSessionValid_Parms), &Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "IsSessionValid", nullptr, nullptr, sizeof(ABCredentials_eventIsSessionValid_Parms), Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_IsSessionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics
	{
		struct ABCredentials_eventPollRefreshToken_Parms
		{
			float CurrentTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventPollRefreshToken_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::NewProp_CurrentTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "PollRefreshToken", nullptr, nullptr, sizeof(ABCredentials_eventPollRefreshToken_Parms), Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_PollRefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics
	{
		struct ABCredentials_eventScheduleRefreshToken_Parms
		{
			float NextRefreshTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NextRefreshTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::NewProp_NextRefreshTime = { "NextRefreshTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventScheduleRefreshToken_Parms, NextRefreshTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::NewProp_NextRefreshTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "ScheduleRefreshToken", nullptr, nullptr, sizeof(ABCredentials_eventScheduleRefreshToken_Parms), Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics
	{
		struct ABCredentials_eventSetAccountUserData_Parms
		{
			FAccountUserData InAccountUserData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccountUserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::NewProp_InAccountUserData = { "InAccountUserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventSetAccountUserData_Parms, InAccountUserData), Z_Construct_UScriptStruct_FAccountUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::NewProp_InAccountUserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetAccountUserData", nullptr, nullptr, sizeof(ABCredentials_eventSetAccountUserData_Parms), Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_SetAccountUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics
	{
		struct ABCredentials_eventSetAuthToken_Parms
		{
			FOauth2Token NewAuthToken;
			float CurrentTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAuthToken;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_NewAuthToken = { "NewAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventSetAuthToken_Parms, NewAuthToken), Z_Construct_UScriptStruct_FOauth2Token, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventSetAuthToken_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_NewAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_CurrentTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetAuthToken", nullptr, nullptr, sizeof(ABCredentials_eventSetAuthToken_Parms), Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_SetAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics
	{
		struct ABCredentials_eventSetClientCredentials_Parms
		{
			ESettingsEnvironment Environment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Environment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Environment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment = { "Environment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventSetClientCredentials_Parms, Environment), Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetClientCredentials", nullptr, nullptr, sizeof(ABCredentials_eventSetClientCredentials_Parms), Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_SetClientCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics
	{
		struct ABCredentials_eventSetErrorOAuth_Parms
		{
			FErrorOAuthInfo ErrorOAuthInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorOAuthInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::NewProp_ErrorOAuthInfo = { "ErrorOAuthInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventSetErrorOAuth_Parms, ErrorOAuthInfo), Z_Construct_UScriptStruct_FErrorOAuthInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::NewProp_ErrorOAuthInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetErrorOAuth", nullptr, nullptr, sizeof(ABCredentials_eventSetErrorOAuth_Parms), Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_SetErrorOAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics
	{
		struct ABCredentials_eventSetUserEmailAddress_Parms
		{
			FString EmailAddress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCredentials_eventSetUserEmailAddress_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::NewProp_EmailAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::NewProp_EmailAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetUserEmailAddress", nullptr, nullptr, sizeof(ABCredentials_eventSetUserEmailAddress_Parms), Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCredentials_SetUserEmailAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABCredentials_NoRegister()
	{
		return UABCredentials::StaticClass();
	}
	struct Z_Construct_UClass_UABCredentials_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCredentials_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABCredentials_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCredentials_ForgetAll, "ForgetAll" }, // 1897559320
		{ &Z_Construct_UFunction_UABCredentials_GetAccessToken, "GetAccessToken" }, // 1084258888
		{ &Z_Construct_UFunction_UABCredentials_GetAccountUserData, "GetAccountUserData" }, // 1110638651
		{ &Z_Construct_UFunction_UABCredentials_GetAuthToken, "GetAuthToken" }, // 192499599
		{ &Z_Construct_UFunction_UABCredentials_GetLinkingToken, "GetLinkingToken" }, // 2310577957
		{ &Z_Construct_UFunction_UABCredentials_GetNamespace, "GetNamespace" }, // 3844676112
		{ &Z_Construct_UFunction_UABCredentials_GetPlatformUserId, "GetPlatformUserId" }, // 3058116447
		{ &Z_Construct_UFunction_UABCredentials_GetRefreshToken, "GetRefreshToken" }, // 3085637315
		{ &Z_Construct_UFunction_UABCredentials_GetUserDisplayName, "GetUserDisplayName" }, // 1860997507
		{ &Z_Construct_UFunction_UABCredentials_GetUserEmailAddress, "GetUserEmailAddress" }, // 2294577938
		{ &Z_Construct_UFunction_UABCredentials_GetUserId, "GetUserId" }, // 1012947104
		{ &Z_Construct_UFunction_UABCredentials_IsComply, "IsComply" }, // 210785991
		{ &Z_Construct_UFunction_UABCredentials_IsSessionValid, "IsSessionValid" }, // 3803308564
		{ &Z_Construct_UFunction_UABCredentials_PollRefreshToken, "PollRefreshToken" }, // 3299628869
		{ &Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken, "ScheduleRefreshToken" }, // 2527510579
		{ &Z_Construct_UFunction_UABCredentials_SetAccountUserData, "SetAccountUserData" }, // 4040989403
		{ &Z_Construct_UFunction_UABCredentials_SetAuthToken, "SetAuthToken" }, // 456754101
		{ &Z_Construct_UFunction_UABCredentials_SetClientCredentials, "SetClientCredentials" }, // 2281899804
		{ &Z_Construct_UFunction_UABCredentials_SetErrorOAuth, "SetErrorOAuth" }, // 3704677090
		{ &Z_Construct_UFunction_UABCredentials_SetUserEmailAddress, "SetUserEmailAddress" }, // 2462376370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCredentials_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABCredentials.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCredentials_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCredentials>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABCredentials_Statics::ClassParams = {
		&UABCredentials::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABCredentials_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCredentials_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCredentials()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABCredentials_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCredentials, 2010192073);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABCredentials>()
	{
		return UABCredentials::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCredentials(Z_Construct_UClass_UABCredentials, &UABCredentials::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABCredentials"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCredentials);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
