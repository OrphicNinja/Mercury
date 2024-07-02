// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteBlueprintsCredentials.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteBlueprintsCredentials() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteBlueprintsCredentials_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteBlueprintsCredentials();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetOAuthClientId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetOAuthClientId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetOAuthClientSecret)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetOAuthClientSecret();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetUserDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetUserDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetUserEmailAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetUserEmailAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetUserName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetUserName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetUserNamespace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetUserNamespace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsCredentials::execGetUserSessionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsCredentials::GetUserSessionId();
		P_NATIVE_END;
	}
	void UAccelByteBlueprintsCredentials::StaticRegisterNativesUAccelByteBlueprintsCredentials()
	{
		UClass* Class = UAccelByteBlueprintsCredentials::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOAuthClientId", &UAccelByteBlueprintsCredentials::execGetOAuthClientId },
			{ "GetOAuthClientSecret", &UAccelByteBlueprintsCredentials::execGetOAuthClientSecret },
			{ "GetUserDisplayName", &UAccelByteBlueprintsCredentials::execGetUserDisplayName },
			{ "GetUserEmailAddress", &UAccelByteBlueprintsCredentials::execGetUserEmailAddress },
			{ "GetUserId", &UAccelByteBlueprintsCredentials::execGetUserId },
			{ "GetUserName", &UAccelByteBlueprintsCredentials::execGetUserName },
			{ "GetUserNamespace", &UAccelByteBlueprintsCredentials::execGetUserNamespace },
			{ "GetUserSessionId", &UAccelByteBlueprintsCredentials::execGetUserSessionId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetOAuthClientId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetOAuthClientId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetOAuthClientId", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetOAuthClientId_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetOAuthClientSecret_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetOAuthClientSecret_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetOAuthClientSecret", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetOAuthClientSecret_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetUserDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetUserDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetUserDisplayName", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetUserDisplayName_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetUserEmailAddress_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetUserEmailAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetUserEmailAddress", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetUserEmailAddress_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetUserId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetUserId", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetUserId_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetUserName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetUserName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetUserName", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetUserName_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetUserNamespace_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetUserNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetUserNamespace", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetUserNamespace_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics
	{
		struct AccelByteBlueprintsCredentials_eventGetUserSessionId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsCredentials_eventGetUserSessionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCredentials, nullptr, "GetUserSessionId", nullptr, nullptr, sizeof(AccelByteBlueprintsCredentials_eventGetUserSessionId_Parms), Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAccelByteBlueprintsCredentials_NoRegister()
	{
		return UAccelByteBlueprintsCredentials::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientId, "GetOAuthClientId" }, // 1854228209
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetOAuthClientSecret, "GetOAuthClientSecret" }, // 1528901643
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserDisplayName, "GetUserDisplayName" }, // 3552573161
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserEmailAddress, "GetUserEmailAddress" }, // 1944629638
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserId, "GetUserId" }, // 4034964005
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserName, "GetUserName" }, // 2330667819
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserNamespace, "GetUserNamespace" }, // 3318669902
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCredentials_GetUserSessionId, "GetUserSessionId" }, // 2442451973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteBlueprintsCredentials.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCredentials.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteBlueprintsCredentials>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::ClassParams = {
		&UAccelByteBlueprintsCredentials::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteBlueprintsCredentials()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteBlueprintsCredentials_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteBlueprintsCredentials, 2844968424);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteBlueprintsCredentials>()
	{
		return UAccelByteBlueprintsCredentials::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteBlueprintsCredentials(Z_Construct_UClass_UAccelByteBlueprintsCredentials, &UAccelByteBlueprintsCredentials::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UAccelByteBlueprintsCredentials"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteBlueprintsCredentials);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
