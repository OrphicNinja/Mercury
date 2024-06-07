// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BPUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPUser() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UBPUser_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UBPUser();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPlatformLinksHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserEligiblePlayHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserRegisterHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserDataHandler__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UBPUser::execForgetAllCredentials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::ForgetAllCredentials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execGetPlatformLinks)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::GetPlatformLinks(FDPlatformLinksHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execGetUserEligibleToPlay)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::GetUserEligibleToPlay(FDUserEligiblePlayHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execLinkOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::LinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_Ticket,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execLoginWithDeviceId)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::LoginWithDeviceId(FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execLoginWithOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_UBOOL(Z_Param_bCreateHeadless);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::LoginWithOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_Token,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_bCreateHeadless);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execLoginWithUsername)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::LoginWithUsername(Z_Param_Username,Z_Param_Password,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execLogout)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::Logout(FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execRegister)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Country);
		P_GET_PROPERTY(FStrProperty,Z_Param_DateOfBirth);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::Register(Z_Param_Username,Z_Param_Password,Z_Param_DisplayName,Z_Param_Country,Z_Param_DateOfBirth,FDUserRegisterHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execResetPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPassword);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::ResetPassword(Z_Param_VerificationCode,Z_Param_EmailAddress,Z_Param_NewPassword,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execSendResetPasswordCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::SendResetPasswordCode(Z_Param_EmailAddress,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execSendUpgradeVerificationCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::SendUpgradeVerificationCode(Z_Param_EmailAddress,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execSendVerificationCode)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::SendVerificationCode(FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execUnlinkAllOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::UnlinkAllOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_Out_OnSuccess),FDCustomErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execUnlinkAllOtherPlatformId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::UnlinkAllOtherPlatformId(Z_Param_PlatformId,FDHandler(Z_Param_Out_OnSuccess),FDCustomErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execUnlinkOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::UnlinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execUnlinkOtherPlatformId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::UnlinkOtherPlatformId(Z_Param_PlatformId,FDHandler(Z_Param_Out_OnSuccess),FDCustomErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execUnlinkOtherPlatformWithCustomErrorHandler)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::UnlinkOtherPlatformWithCustomErrorHandler(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_Out_OnSuccess),FDCustomErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execUpgrade)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::Upgrade(Z_Param_Username,Z_Param_Password,FDUserDataHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execUpgradeAndVerify)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::UpgradeAndVerify(Z_Param_Username,Z_Param_Password,Z_Param_VerificationCode,FDUserDataHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPUser::execVerify)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPUser::Verify(Z_Param_VerificationCode,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UBPUser::StaticRegisterNativesUBPUser()
	{
		UClass* Class = UBPUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetAllCredentials", &UBPUser::execForgetAllCredentials },
			{ "GetPlatformLinks", &UBPUser::execGetPlatformLinks },
			{ "GetUserEligibleToPlay", &UBPUser::execGetUserEligibleToPlay },
			{ "LinkOtherPlatform", &UBPUser::execLinkOtherPlatform },
			{ "LoginWithDeviceId", &UBPUser::execLoginWithDeviceId },
			{ "LoginWithOtherPlatform", &UBPUser::execLoginWithOtherPlatform },
			{ "LoginWithUsername", &UBPUser::execLoginWithUsername },
			{ "Logout", &UBPUser::execLogout },
			{ "Register", &UBPUser::execRegister },
			{ "ResetPassword", &UBPUser::execResetPassword },
			{ "SendResetPasswordCode", &UBPUser::execSendResetPasswordCode },
			{ "SendUpgradeVerificationCode", &UBPUser::execSendUpgradeVerificationCode },
			{ "SendVerificationCode", &UBPUser::execSendVerificationCode },
			{ "UnlinkAllOtherPlatform", &UBPUser::execUnlinkAllOtherPlatform },
			{ "UnlinkAllOtherPlatformId", &UBPUser::execUnlinkAllOtherPlatformId },
			{ "UnlinkOtherPlatform", &UBPUser::execUnlinkOtherPlatform },
			{ "UnlinkOtherPlatformId", &UBPUser::execUnlinkOtherPlatformId },
			{ "UnlinkOtherPlatformWithCustomErrorHandler", &UBPUser::execUnlinkOtherPlatformWithCustomErrorHandler },
			{ "Upgrade", &UBPUser::execUpgrade },
			{ "UpgradeAndVerify", &UBPUser::execUpgradeAndVerify },
			{ "Verify", &UBPUser::execVerify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPUser_ForgetAllCredentials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_ForgetAllCredentials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "ForgetAllCredentials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_ForgetAllCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ForgetAllCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_ForgetAllCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_ForgetAllCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics
	{
		struct BPUser_eventGetPlatformLinks_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventGetPlatformLinks_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPlatformLinksHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventGetPlatformLinks_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "GetPlatformLinks", nullptr, nullptr, sizeof(BPUser_eventGetPlatformLinks_Parms), Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_GetPlatformLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_GetPlatformLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics
	{
		struct BPUser_eventGetUserEligibleToPlay_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventGetUserEligibleToPlay_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserEligiblePlayHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventGetUserEligibleToPlay_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "GetUserEligibleToPlay", nullptr, nullptr, sizeof(BPUser_eventGetUserEligibleToPlay_Parms), Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics
	{
		struct BPUser_eventLinkOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FString Ticket;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ticket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_Ticket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLinkOtherPlatform_Parms, Ticket), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_Ticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_Ticket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_Ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "LinkOtherPlatform", nullptr, nullptr, sizeof(BPUser_eventLinkOtherPlatform_Parms), Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_LinkOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_LinkOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics
	{
		struct BPUser_eventLoginWithDeviceId_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithDeviceId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithDeviceId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "LoginWithDeviceId", nullptr, nullptr, sizeof(BPUser_eventLoginWithDeviceId_Parms), Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_LoginWithDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_LoginWithDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics
	{
		struct BPUser_eventLoginWithOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FString Token;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			bool bCreateHeadless;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static void NewProp_bCreateHeadless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateHeadless;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithOtherPlatform_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnError_MetaData)) };
	void Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless_SetBit(void* Obj)
	{
		((BPUser_eventLoginWithOtherPlatform_Parms*)Obj)->bCreateHeadless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless = { "bCreateHeadless", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPUser_eventLoginWithOtherPlatform_Parms), &Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "LoginWithOtherPlatform", nullptr, nullptr, sizeof(BPUser_eventLoginWithOtherPlatform_Parms), Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics
	{
		struct BPUser_eventLoginWithUsername_Parms
		{
			FString Username;
			FString Password;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithUsername_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithUsername_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithUsername_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLoginWithUsername_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "LoginWithUsername", nullptr, nullptr, sizeof(BPUser_eventLoginWithUsername_Parms), Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_LoginWithUsername()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_LoginWithUsername_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_Logout_Statics
	{
		struct BPUser_eventLogout_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLogout_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventLogout_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_Logout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Logout_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Logout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "Logout", nullptr, nullptr, sizeof(BPUser_eventLogout_Parms), Z_Construct_UFunction_UBPUser_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Logout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Logout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_Register_Statics
	{
		struct BPUser_eventRegister_Parms
		{
			FString Username;
			FString Password;
			FString DisplayName;
			FString Country;
			FString DateOfBirth;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateOfBirth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DateOfBirth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventRegister_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventRegister_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventRegister_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Country_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventRegister_Parms, Country), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DateOfBirth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventRegister_Parms, DateOfBirth), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DateOfBirth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DateOfBirth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventRegister_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserRegisterHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventRegister_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_Register_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_DateOfBirth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Register_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Register_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "Register", nullptr, nullptr, sizeof(BPUser_eventRegister_Parms), Z_Construct_UFunction_UBPUser_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Register_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Register_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_Register()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_Register_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_ResetPassword_Statics
	{
		struct BPUser_eventResetPassword_Parms
		{
			FString VerificationCode;
			FString EmailAddress;
			FString NewPassword;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventResetPassword_Parms, VerificationCode), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_VerificationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_VerificationCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventResetPassword_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_NewPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_NewPassword = { "NewPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventResetPassword_Parms, NewPassword), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_NewPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_NewPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventResetPassword_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventResetPassword_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_ResetPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_VerificationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_NewPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_ResetPassword_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_ResetPassword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_ResetPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "ResetPassword", nullptr, nullptr, sizeof(BPUser_eventResetPassword_Parms), Z_Construct_UFunction_UBPUser_ResetPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_ResetPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_ResetPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_ResetPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics
	{
		struct BPUser_eventSendResetPasswordCode_Parms
		{
			FString EmailAddress;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendResetPasswordCode_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendResetPasswordCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendResetPasswordCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "SendResetPasswordCode", nullptr, nullptr, sizeof(BPUser_eventSendResetPasswordCode_Parms), Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_SendResetPasswordCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_SendResetPasswordCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics
	{
		struct BPUser_eventSendUpgradeVerificationCode_Parms
		{
			FString EmailAddress;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendUpgradeVerificationCode_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendUpgradeVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendUpgradeVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "SendUpgradeVerificationCode", nullptr, nullptr, sizeof(BPUser_eventSendUpgradeVerificationCode_Parms), Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics
	{
		struct BPUser_eventSendVerificationCode_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventSendVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "SendVerificationCode", nullptr, nullptr, sizeof(BPUser_eventSendVerificationCode_Parms), Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_SendVerificationCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_SendVerificationCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics
	{
		struct BPUser_eventUnlinkAllOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkAllOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkAllOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkAllOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "UnlinkAllOtherPlatform", nullptr, nullptr, sizeof(BPUser_eventUnlinkAllOtherPlatform_Parms), Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics
	{
		struct BPUser_eventUnlinkAllOtherPlatformId_Parms
		{
			FString PlatformId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkAllOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkAllOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkAllOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "UnlinkAllOtherPlatformId", nullptr, nullptr, sizeof(BPUser_eventUnlinkAllOtherPlatformId_Parms), Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics
	{
		struct BPUser_eventUnlinkOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "UnlinkOtherPlatform", nullptr, nullptr, sizeof(BPUser_eventUnlinkOtherPlatform_Parms), Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics
	{
		struct BPUser_eventUnlinkOtherPlatformId_Parms
		{
			FString PlatformId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "UnlinkOtherPlatformId", nullptr, nullptr, sizeof(BPUser_eventUnlinkOtherPlatformId_Parms), Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics
	{
		struct BPUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms
		{
			EAccelBytePlatformType PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "UnlinkOtherPlatformWithCustomErrorHandler", nullptr, nullptr, sizeof(BPUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms), Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_Upgrade_Statics
	{
		struct BPUser_eventUpgrade_Parms
		{
			FString Username;
			FString Password;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgrade_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgrade_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgrade_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserDataHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgrade_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_Upgrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Upgrade_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Upgrade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_Upgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "Upgrade", nullptr, nullptr, sizeof(BPUser_eventUpgrade_Parms), Z_Construct_UFunction_UBPUser_Upgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Upgrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Upgrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Upgrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_Upgrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_Upgrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics
	{
		struct BPUser_eventUpgradeAndVerify_Parms
		{
			FString Username;
			FString Password;
			FString VerificationCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgradeAndVerify_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgradeAndVerify_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgradeAndVerify_Parms, VerificationCode), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_VerificationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_VerificationCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgradeAndVerify_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserDataHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventUpgradeAndVerify_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_VerificationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "UpgradeAndVerify", nullptr, nullptr, sizeof(BPUser_eventUpgradeAndVerify_Parms), Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_UpgradeAndVerify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_UpgradeAndVerify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPUser_Verify_Statics
	{
		struct BPUser_eventVerify_Parms
		{
			FString VerificationCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventVerify_Parms, VerificationCode), METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_VerificationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_VerificationCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventVerify_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPUser_eventVerify_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPUser_Verify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_VerificationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPUser_Verify_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPUser_Verify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPUser_Verify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPUser, nullptr, "Verify", nullptr, nullptr, sizeof(BPUser_eventVerify_Parms), Z_Construct_UFunction_UBPUser_Verify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Verify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPUser_Verify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPUser_Verify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPUser_Verify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPUser_Verify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPUser_NoRegister()
	{
		return UBPUser::StaticClass();
	}
	struct Z_Construct_UClass_UBPUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPUser_ForgetAllCredentials, "ForgetAllCredentials" }, // 2472323654
		{ &Z_Construct_UFunction_UBPUser_GetPlatformLinks, "GetPlatformLinks" }, // 1043718920
		{ &Z_Construct_UFunction_UBPUser_GetUserEligibleToPlay, "GetUserEligibleToPlay" }, // 1083123069
		{ &Z_Construct_UFunction_UBPUser_LinkOtherPlatform, "LinkOtherPlatform" }, // 1451965532
		{ &Z_Construct_UFunction_UBPUser_LoginWithDeviceId, "LoginWithDeviceId" }, // 3825358664
		{ &Z_Construct_UFunction_UBPUser_LoginWithOtherPlatform, "LoginWithOtherPlatform" }, // 3572876588
		{ &Z_Construct_UFunction_UBPUser_LoginWithUsername, "LoginWithUsername" }, // 2973177346
		{ &Z_Construct_UFunction_UBPUser_Logout, "Logout" }, // 866519598
		{ &Z_Construct_UFunction_UBPUser_Register, "Register" }, // 547030107
		{ &Z_Construct_UFunction_UBPUser_ResetPassword, "ResetPassword" }, // 1642555510
		{ &Z_Construct_UFunction_UBPUser_SendResetPasswordCode, "SendResetPasswordCode" }, // 2689835247
		{ &Z_Construct_UFunction_UBPUser_SendUpgradeVerificationCode, "SendUpgradeVerificationCode" }, // 3183231134
		{ &Z_Construct_UFunction_UBPUser_SendVerificationCode, "SendVerificationCode" }, // 2021434345
		{ &Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatform, "UnlinkAllOtherPlatform" }, // 4266938236
		{ &Z_Construct_UFunction_UBPUser_UnlinkAllOtherPlatformId, "UnlinkAllOtherPlatformId" }, // 2765937036
		{ &Z_Construct_UFunction_UBPUser_UnlinkOtherPlatform, "UnlinkOtherPlatform" }, // 1319037471
		{ &Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformId, "UnlinkOtherPlatformId" }, // 2926532437
		{ &Z_Construct_UFunction_UBPUser_UnlinkOtherPlatformWithCustomErrorHandler, "UnlinkOtherPlatformWithCustomErrorHandler" }, // 68078608
		{ &Z_Construct_UFunction_UBPUser_Upgrade, "Upgrade" }, // 103735942
		{ &Z_Construct_UFunction_UBPUser_UpgradeAndVerify, "UpgradeAndVerify" }, // 3794425369
		{ &Z_Construct_UFunction_UBPUser_Verify, "Verify" }, // 2802986248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BPUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPUser_Statics::ClassParams = {
		&UBPUser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPUser, 386317751);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UBPUser>()
	{
		return UBPUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPUser(Z_Construct_UClass_UBPUser, &UBPUser::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UBPUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
