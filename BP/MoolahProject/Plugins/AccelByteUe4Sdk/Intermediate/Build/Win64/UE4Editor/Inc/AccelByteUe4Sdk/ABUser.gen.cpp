// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUser() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUser_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkPlatformUserIdResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBulkUserInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountLinkConflictErrorJsonResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCountryInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPlatformLinksResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSimpleUserDataResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBooleanResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRegisterRequestv3();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSearchType();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateEmailRequest();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUserUpdateRequest();
// End Cross Module References
	DEFINE_FUNCTION(UABUser::execBulkGetUserByOtherPlatformUserIds)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OtherPlatformUserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetUserByOtherPlatformUserIds(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_Out_OtherPlatformUserId,FDBulkPlatformUserIdResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execBulkGetUserInfo)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetUserInfo(Z_Param_Out_UserIds,FDListBulkUserInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execForcedLinkOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformUserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForcedLinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_PlatformUserId,FDHandler(Z_Param_OnSuccess),FDAccountLinkConflictErrorJsonResponse(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execForgetAllCredentials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAllCredentials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execGetCountryFromIP)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCountryFromIP(FDCountryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execGetData)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetData(FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execGetPlatformLinks)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlatformLinks(FDPagedPlatformLinksResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execGetUserByOtherPlatformUserId)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FStrProperty,Z_Param_OtherPlatformUserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserByOtherPlatformUserId(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_OtherPlatformUserId,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execGetUserByUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserByUserId(Z_Param_UserId,FDSimpleUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execGetUserEligibleToPlay)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserEligibleToPlay(FDBooleanResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLinkOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_Ticket,FDHandler(Z_Param_OnSuccess),FDAccountLinkConflictErrorJsonResponse(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLoginByExchangeCodeForToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginByExchangeCodeForToken(Z_Param_Code,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLoginWithDeviceId)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithDeviceId(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLoginWithLauncher)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithLauncher(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLoginWithOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_GET_UBOOL(Z_Param_bCreateHeadless);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_PlatformToken,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_bCreateHeadless);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLoginWithOtherPlatformId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_GET_UBOOL(Z_Param_bCreateHeadless);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithOtherPlatformId(Z_Param_PlatformId,Z_Param_PlatformToken,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_bCreateHeadless);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLoginWithRefreshToken)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithRefreshToken(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLoginWithUsername)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithUsername(Z_Param_Username,Z_Param_Password,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execLogout)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Logout(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execRegister)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Country);
		P_GET_PROPERTY(FStrProperty,Z_Param_DateOfBirth);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Register(Z_Param_Username,Z_Param_Password,Z_Param_DisplayName,Z_Param_Country,Z_Param_DateOfBirth,FDRegisterResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execRegisterv2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Country);
		P_GET_PROPERTY(FStrProperty,Z_Param_DateOfBirth);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Registerv2(Z_Param_EmailAddress,Z_Param_Username,Z_Param_Password,Z_Param_DisplayName,Z_Param_Country,Z_Param_DateOfBirth,FDRegisterResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execRegisterv3)
	{
		P_GET_STRUCT_REF(FRegisterRequestv3,Z_Param_Out_RegisterRequest);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Registerv3(Z_Param_Out_RegisterRequest,FDRegisterResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execResetPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPassword);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPassword(Z_Param_VerificationCode,Z_Param_EmailAddress,Z_Param_NewPassword,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execSearchUsers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchUsers(Z_Param_Query,FDPagedPublicUsersInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execSearchUsersByType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_ENUM(EAccelByteSearchType,Z_Param_By);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchUsersByType(Z_Param_Query,EAccelByteSearchType(Z_Param_By),FDPagedPublicUsersInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execSendResetPasswordCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendResetPasswordCode(Z_Param_EmailAddress,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execSendUpdateEmailVerificationCode)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendUpdateEmailVerificationCode(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execSendUpgradeVerificationCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendUpgradeVerificationCode(Z_Param_EmailAddress,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execSendVerificationCode)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendVerificationCode(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execTryRelogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformUserID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryRelogin(Z_Param_PlatformUserID,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUnlinkAllOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkAllOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUnlinkAllOtherPlatformId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkAllOtherPlatformId(Z_Param_PlatformId,FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUnlinkOtherPlatform)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUnlinkOtherPlatformId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkOtherPlatformId(Z_Param_PlatformId,FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUnlinkOtherPlatformWithCustomErrorHandler)
	{
		P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkOtherPlatformWithCustomErrorHandler(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUpdateEmail)
	{
		P_GET_STRUCT(FUpdateEmailRequest,Z_Param_UpdateEmailRequest);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEmail(Z_Param_UpdateEmailRequest,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUpdateUser)
	{
		P_GET_STRUCT(FUserUpdateRequest,Z_Param_UpdateRequest);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateUser(Z_Param_UpdateRequest,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUpgrade)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Upgrade(Z_Param_Username,Z_Param_Password,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUpgradeAndVerify)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeAndVerify(Z_Param_Username,Z_Param_Password,Z_Param_VerificationCode,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execUpgradev2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Upgradev2(Z_Param_EmailAddress,Z_Param_Username,Z_Param_Password,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUser::execVerify)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Verify(Z_Param_VerificationCode,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABUser::StaticRegisterNativesUABUser()
	{
		UClass* Class = UABUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulkGetUserByOtherPlatformUserIds", &UABUser::execBulkGetUserByOtherPlatformUserIds },
			{ "BulkGetUserInfo", &UABUser::execBulkGetUserInfo },
			{ "ForcedLinkOtherPlatform", &UABUser::execForcedLinkOtherPlatform },
			{ "ForgetAllCredentials", &UABUser::execForgetAllCredentials },
			{ "GetCountryFromIP", &UABUser::execGetCountryFromIP },
			{ "GetData", &UABUser::execGetData },
			{ "GetPlatformLinks", &UABUser::execGetPlatformLinks },
			{ "GetUserByOtherPlatformUserId", &UABUser::execGetUserByOtherPlatformUserId },
			{ "GetUserByUserId", &UABUser::execGetUserByUserId },
			{ "GetUserEligibleToPlay", &UABUser::execGetUserEligibleToPlay },
			{ "LinkOtherPlatform", &UABUser::execLinkOtherPlatform },
			{ "LoginByExchangeCodeForToken", &UABUser::execLoginByExchangeCodeForToken },
			{ "LoginWithDeviceId", &UABUser::execLoginWithDeviceId },
			{ "LoginWithLauncher", &UABUser::execLoginWithLauncher },
			{ "LoginWithOtherPlatform", &UABUser::execLoginWithOtherPlatform },
			{ "LoginWithOtherPlatformId", &UABUser::execLoginWithOtherPlatformId },
			{ "LoginWithRefreshToken", &UABUser::execLoginWithRefreshToken },
			{ "LoginWithUsername", &UABUser::execLoginWithUsername },
			{ "Logout", &UABUser::execLogout },
			{ "Register", &UABUser::execRegister },
			{ "Registerv2", &UABUser::execRegisterv2 },
			{ "Registerv3", &UABUser::execRegisterv3 },
			{ "ResetPassword", &UABUser::execResetPassword },
			{ "SearchUsers", &UABUser::execSearchUsers },
			{ "SearchUsersByType", &UABUser::execSearchUsersByType },
			{ "SendResetPasswordCode", &UABUser::execSendResetPasswordCode },
			{ "SendUpdateEmailVerificationCode", &UABUser::execSendUpdateEmailVerificationCode },
			{ "SendUpgradeVerificationCode", &UABUser::execSendUpgradeVerificationCode },
			{ "SendVerificationCode", &UABUser::execSendVerificationCode },
			{ "TryRelogin", &UABUser::execTryRelogin },
			{ "UnlinkAllOtherPlatform", &UABUser::execUnlinkAllOtherPlatform },
			{ "UnlinkAllOtherPlatformId", &UABUser::execUnlinkAllOtherPlatformId },
			{ "UnlinkOtherPlatform", &UABUser::execUnlinkOtherPlatform },
			{ "UnlinkOtherPlatformId", &UABUser::execUnlinkOtherPlatformId },
			{ "UnlinkOtherPlatformWithCustomErrorHandler", &UABUser::execUnlinkOtherPlatformWithCustomErrorHandler },
			{ "UpdateEmail", &UABUser::execUpdateEmail },
			{ "UpdateUser", &UABUser::execUpdateUser },
			{ "Upgrade", &UABUser::execUpgrade },
			{ "UpgradeAndVerify", &UABUser::execUpgradeAndVerify },
			{ "Upgradev2", &UABUser::execUpgradev2 },
			{ "Verify", &UABUser::execVerify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics
	{
		struct ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms
		{
			EAccelBytePlatformType PlatformType;
			TArray<FString> OtherPlatformUserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtherPlatformUserId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherPlatformUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OtherPlatformUserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId_Inner = { "OtherPlatformUserId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId = { "OtherPlatformUserId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, OtherPlatformUserId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkPlatformUserIdResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "BulkGetUserByOtherPlatformUserIds", nullptr, nullptr, sizeof(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms), Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics
	{
		struct ABUser_eventBulkGetUserInfo_Parms
		{
			TArray<FString> UserIds;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserInfo_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_UserIds_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserInfo_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBulkUserInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserInfo_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_UserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "BulkGetUserInfo", nullptr, nullptr, sizeof(ABUser_eventBulkGetUserInfo_Parms), Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_BulkGetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_BulkGetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics
	{
		struct ABUser_eventForcedLinkOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FString PlatformUserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, PlatformUserId), METADATA_PARAMS(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformUserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountLinkConflictErrorJsonResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "ForcedLinkOtherPlatform", nullptr, nullptr, sizeof(ABUser_eventForcedLinkOtherPlatform_Parms), Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "ForgetAllCredentials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_ForgetAllCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics
	{
		struct ABUser_eventGetCountryFromIP_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetCountryFromIP_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCountryInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetCountryFromIP_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetCountryFromIP", nullptr, nullptr, sizeof(ABUser_eventGetCountryFromIP_Parms), Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_GetCountryFromIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_GetData_Statics
	{
		struct ABUser_eventGetData_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetData_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetData_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetData", nullptr, nullptr, sizeof(ABUser_eventGetData_Parms), Z_Construct_UFunction_UABUser_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics
	{
		struct ABUser_eventGetPlatformLinks_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetPlatformLinks_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPlatformLinksResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetPlatformLinks_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetPlatformLinks", nullptr, nullptr, sizeof(ABUser_eventGetPlatformLinks_Parms), Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_GetPlatformLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics
	{
		struct ABUser_eventGetUserByOtherPlatformUserId_Parms
		{
			EAccelBytePlatformType PlatformType;
			FString OtherPlatformUserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherPlatformUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtherPlatformUserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserByOtherPlatformUserId_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OtherPlatformUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OtherPlatformUserId = { "OtherPlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserByOtherPlatformUserId_Parms, OtherPlatformUserId), METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OtherPlatformUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OtherPlatformUserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserByOtherPlatformUserId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserByOtherPlatformUserId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OtherPlatformUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetUserByOtherPlatformUserId", nullptr, nullptr, sizeof(ABUser_eventGetUserByOtherPlatformUserId_Parms), Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_GetUserByUserId_Statics
	{
		struct ABUser_eventGetUserByUserId_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserByUserId_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserByUserId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSimpleUserDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserByUserId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetUserByUserId", nullptr, nullptr, sizeof(ABUser_eventGetUserByUserId_Parms), Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_GetUserByUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics
	{
		struct ABUser_eventGetUserEligibleToPlay_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserEligibleToPlay_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBooleanResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventGetUserEligibleToPlay_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetUserEligibleToPlay", nullptr, nullptr, sizeof(ABUser_eventGetUserEligibleToPlay_Parms), Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_GetUserEligibleToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics
	{
		struct ABUser_eventLinkOtherPlatform_Parms
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
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_Ticket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, Ticket), METADATA_PARAMS(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_Ticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_Ticket_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountLinkConflictErrorJsonResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_Ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LinkOtherPlatform", nullptr, nullptr, sizeof(ABUser_eventLinkOtherPlatform_Parms), Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LinkOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics
	{
		struct ABUser_eventLoginByExchangeCodeForToken_Parms
		{
			FString Code;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForToken_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForToken_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForToken_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginByExchangeCodeForToken", nullptr, nullptr, sizeof(ABUser_eventLoginByExchangeCodeForToken_Parms), Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics
	{
		struct ABUser_eventLoginWithDeviceId_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithDeviceId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithDeviceId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithDeviceId", nullptr, nullptr, sizeof(ABUser_eventLoginWithDeviceId_Parms), Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LoginWithDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics
	{
		struct ABUser_eventLoginWithLauncher_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithLauncher_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithLauncher_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithLauncher", nullptr, nullptr, sizeof(ABUser_eventLoginWithLauncher_Parms), Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LoginWithLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics
	{
		struct ABUser_eventLoginWithOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FString PlatformToken;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			bool bCreateHeadless;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformToken;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static void NewProp_bCreateHeadless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateHeadless;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformToken = { "PlatformToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, PlatformToken), METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformToken_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless_SetBit(void* Obj)
	{
		((ABUser_eventLoginWithOtherPlatform_Parms*)Obj)->bCreateHeadless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless = { "bCreateHeadless", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUser_eventLoginWithOtherPlatform_Parms), &Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithOtherPlatform", nullptr, nullptr, sizeof(ABUser_eventLoginWithOtherPlatform_Parms), Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LoginWithOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics
	{
		struct ABUser_eventLoginWithOtherPlatformId_Parms
		{
			FString PlatformId;
			FString PlatformToken;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			bool bCreateHeadless;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformToken;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static void NewProp_bCreateHeadless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateHeadless;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformToken = { "PlatformToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, PlatformToken), METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformToken_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless_SetBit(void* Obj)
	{
		((ABUser_eventLoginWithOtherPlatformId_Parms*)Obj)->bCreateHeadless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless = { "bCreateHeadless", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUser_eventLoginWithOtherPlatformId_Parms), &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithOtherPlatformId", nullptr, nullptr, sizeof(ABUser_eventLoginWithOtherPlatformId_Parms), Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics
	{
		struct ABUser_eventLoginWithRefreshToken_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithRefreshToken_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithRefreshToken_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithRefreshToken", nullptr, nullptr, sizeof(ABUser_eventLoginWithRefreshToken_Parms), Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LoginWithRefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_LoginWithUsername_Statics
	{
		struct ABUser_eventLoginWithUsername_Parms
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
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithUsername", nullptr, nullptr, sizeof(ABUser_eventLoginWithUsername_Parms), Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_LoginWithUsername()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_Logout_Statics
	{
		struct ABUser_eventLogout_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLogout_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventLogout_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Logout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Logout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Logout", nullptr, nullptr, sizeof(ABUser_eventLogout_Parms), Z_Construct_UFunction_UABUser_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Logout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Logout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_Register_Statics
	{
		struct ABUser_eventRegister_Parms
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
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Country_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, Country), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DateOfBirth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, DateOfBirth), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DateOfBirth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DateOfBirth_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Register_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DateOfBirth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Register_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Register", nullptr, nullptr, sizeof(ABUser_eventRegister_Parms), Z_Construct_UFunction_UABUser_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Register_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_Register()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_Register_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_Registerv2_Statics
	{
		struct ABUser_eventRegisterv2_Parms
		{
			FString EmailAddress;
			FString Username;
			FString Password;
			FString DisplayName;
			FString Country;
			FString DateOfBirth;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
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
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Country_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, Country), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DateOfBirth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, DateOfBirth), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DateOfBirth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DateOfBirth_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Registerv2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DateOfBirth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Registerv2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Registerv2", nullptr, nullptr, sizeof(ABUser_eventRegisterv2_Parms), Z_Construct_UFunction_UABUser_Registerv2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_Registerv2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_Registerv2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_Registerv3_Statics
	{
		struct ABUser_eventRegisterv3_Parms
		{
			FRegisterRequestv3 RegisterRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisterRequest;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_RegisterRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_RegisterRequest = { "RegisterRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv3_Parms, RegisterRequest), Z_Construct_UScriptStruct_FRegisterRequestv3, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_RegisterRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_RegisterRequest_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventRegisterv3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Registerv3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_RegisterRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Registerv3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Registerv3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Registerv3", nullptr, nullptr, sizeof(ABUser_eventRegisterv3_Parms), Z_Construct_UFunction_UABUser_Registerv3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Registerv3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_Registerv3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_Registerv3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_ResetPassword_Statics
	{
		struct ABUser_eventResetPassword_Parms
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
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, VerificationCode), METADATA_PARAMS(Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_VerificationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_VerificationCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_NewPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_NewPassword = { "NewPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, NewPassword), METADATA_PARAMS(Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_NewPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_NewPassword_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_ResetPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_VerificationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_NewPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_ResetPassword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "ResetPassword", nullptr, nullptr, sizeof(ABUser_eventResetPassword_Parms), Z_Construct_UFunction_UABUser_ResetPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_ResetPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_ResetPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_ResetPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_SearchUsers_Statics
	{
		struct ABUser_eventSearchUsers_Parms
		{
			FString Query;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSearchUsers_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSearchUsers_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSearchUsers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SearchUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SearchUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SearchUsers", nullptr, nullptr, sizeof(ABUser_eventSearchUsers_Parms), Z_Construct_UFunction_UABUser_SearchUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_SearchUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_SearchUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_SearchUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_SearchUsersByType_Statics
	{
		struct ABUser_eventSearchUsersByType_Parms
		{
			FString Query;
			EAccelByteSearchType By;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_By_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_By;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By = { "By", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, By), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSearchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SearchUsersByType", nullptr, nullptr, sizeof(ABUser_eventSearchUsersByType_Parms), Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_SearchUsersByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics
	{
		struct ABUser_eventSendResetPasswordCode_Parms
		{
			FString EmailAddress;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendResetPasswordCode_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_EmailAddress_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendResetPasswordCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendResetPasswordCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendResetPasswordCode", nullptr, nullptr, sizeof(ABUser_eventSendResetPasswordCode_Parms), Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_SendResetPasswordCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics
	{
		struct ABUser_eventSendUpdateEmailVerificationCode_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendUpdateEmailVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendUpdateEmailVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendUpdateEmailVerificationCode", nullptr, nullptr, sizeof(ABUser_eventSendUpdateEmailVerificationCode_Parms), Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics
	{
		struct ABUser_eventSendUpgradeVerificationCode_Parms
		{
			FString EmailAddress;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendUpgradeVerificationCode_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendUpgradeVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendUpgradeVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendUpgradeVerificationCode", nullptr, nullptr, sizeof(ABUser_eventSendUpgradeVerificationCode_Parms), Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_SendVerificationCode_Statics
	{
		struct ABUser_eventSendVerificationCode_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventSendVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendVerificationCode", nullptr, nullptr, sizeof(ABUser_eventSendVerificationCode_Parms), Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_SendVerificationCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_TryRelogin_Statics
	{
		struct ABUser_eventTryRelogin_Parms
		{
			FString PlatformUserID;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_PlatformUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_PlatformUserID = { "PlatformUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventTryRelogin_Parms, PlatformUserID), METADATA_PARAMS(Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_PlatformUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_PlatformUserID_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventTryRelogin_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventTryRelogin_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_TryRelogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_PlatformUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_TryRelogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "TryRelogin", nullptr, nullptr, sizeof(ABUser_eventTryRelogin_Parms), Z_Construct_UFunction_UABUser_TryRelogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryRelogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_TryRelogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryRelogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_TryRelogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_TryRelogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics
	{
		struct ABUser_eventUnlinkAllOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkAllOtherPlatform", nullptr, nullptr, sizeof(ABUser_eventUnlinkAllOtherPlatform_Parms), Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics
	{
		struct ABUser_eventUnlinkAllOtherPlatformId_Parms
		{
			FString PlatformId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkAllOtherPlatformId", nullptr, nullptr, sizeof(ABUser_eventUnlinkAllOtherPlatformId_Parms), Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics
	{
		struct ABUser_eventUnlinkOtherPlatform_Parms
		{
			EAccelBytePlatformType PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkOtherPlatform", nullptr, nullptr, sizeof(ABUser_eventUnlinkOtherPlatform_Parms), Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UnlinkOtherPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics
	{
		struct ABUser_eventUnlinkOtherPlatformId_Parms
		{
			FString PlatformId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkOtherPlatformId", nullptr, nullptr, sizeof(ABUser_eventUnlinkOtherPlatformId_Parms), Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics
	{
		struct ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms
		{
			EAccelBytePlatformType PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkOtherPlatformWithCustomErrorHandler", nullptr, nullptr, sizeof(ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms), Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UpdateEmail_Statics
	{
		struct ABUser_eventUpdateEmail_Parms
		{
			FUpdateEmailRequest UpdateEmailRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateEmailRequest;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_UpdateEmailRequest = { "UpdateEmailRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpdateEmail_Parms, UpdateEmailRequest), Z_Construct_UScriptStruct_FUpdateEmailRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpdateEmail_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpdateEmail_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UpdateEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_UpdateEmailRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UpdateEmail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UpdateEmail", nullptr, nullptr, sizeof(ABUser_eventUpdateEmail_Parms), Z_Construct_UFunction_UABUser_UpdateEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UpdateEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UpdateEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UpdateUser_Statics
	{
		struct ABUser_eventUpdateUser_Parms
		{
			FUserUpdateRequest UpdateRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateRequest;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_UpdateRequest = { "UpdateRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpdateUser_Parms, UpdateRequest), Z_Construct_UScriptStruct_FUserUpdateRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpdateUser_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpdateUser_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UpdateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_UpdateRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UpdateUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UpdateUser", nullptr, nullptr, sizeof(ABUser_eventUpdateUser_Parms), Z_Construct_UFunction_UABUser_UpdateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UpdateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UpdateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UpdateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_Upgrade_Statics
	{
		struct ABUser_eventUpgrade_Parms
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
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Upgrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Upgrade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Upgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Upgrade", nullptr, nullptr, sizeof(ABUser_eventUpgrade_Parms), Z_Construct_UFunction_UABUser_Upgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Upgrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_Upgrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_Upgrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics
	{
		struct ABUser_eventUpgradeAndVerify_Parms
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
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, VerificationCode), METADATA_PARAMS(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_VerificationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_VerificationCode_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_VerificationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UpgradeAndVerify", nullptr, nullptr, sizeof(ABUser_eventUpgradeAndVerify_Parms), Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_UpgradeAndVerify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_Upgradev2_Statics
	{
		struct ABUser_eventUpgradev2_Parms
		{
			FString EmailAddress;
			FString Username;
			FString Password;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Upgradev2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Upgradev2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Upgradev2", nullptr, nullptr, sizeof(ABUser_eventUpgradev2_Parms), Z_Construct_UFunction_UABUser_Upgradev2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Upgradev2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_Upgradev2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_Upgradev2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUser_Verify_Statics
	{
		struct ABUser_eventVerify_Parms
		{
			FString VerificationCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventVerify_Parms, VerificationCode), METADATA_PARAMS(Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_VerificationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_VerificationCode_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventVerify_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUser_eventVerify_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Verify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_VerificationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUser_Verify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Verify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Verify", nullptr, nullptr, sizeof(ABUser_eventVerify_Parms), Z_Construct_UFunction_UABUser_Verify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Verify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUser_Verify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Verify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUser_Verify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUser_Verify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABUser_NoRegister()
	{
		return UABUser::StaticClass();
	}
	struct Z_Construct_UClass_UABUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds, "BulkGetUserByOtherPlatformUserIds" }, // 1140208539
		{ &Z_Construct_UFunction_UABUser_BulkGetUserInfo, "BulkGetUserInfo" }, // 520273279
		{ &Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform, "ForcedLinkOtherPlatform" }, // 3747067243
		{ &Z_Construct_UFunction_UABUser_ForgetAllCredentials, "ForgetAllCredentials" }, // 224455763
		{ &Z_Construct_UFunction_UABUser_GetCountryFromIP, "GetCountryFromIP" }, // 3464893546
		{ &Z_Construct_UFunction_UABUser_GetData, "GetData" }, // 1545128465
		{ &Z_Construct_UFunction_UABUser_GetPlatformLinks, "GetPlatformLinks" }, // 931749715
		{ &Z_Construct_UFunction_UABUser_GetUserByOtherPlatformUserId, "GetUserByOtherPlatformUserId" }, // 1174108566
		{ &Z_Construct_UFunction_UABUser_GetUserByUserId, "GetUserByUserId" }, // 1605654021
		{ &Z_Construct_UFunction_UABUser_GetUserEligibleToPlay, "GetUserEligibleToPlay" }, // 1581491063
		{ &Z_Construct_UFunction_UABUser_LinkOtherPlatform, "LinkOtherPlatform" }, // 797311480
		{ &Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken, "LoginByExchangeCodeForToken" }, // 2751675853
		{ &Z_Construct_UFunction_UABUser_LoginWithDeviceId, "LoginWithDeviceId" }, // 2610599494
		{ &Z_Construct_UFunction_UABUser_LoginWithLauncher, "LoginWithLauncher" }, // 2299369716
		{ &Z_Construct_UFunction_UABUser_LoginWithOtherPlatform, "LoginWithOtherPlatform" }, // 1645764446
		{ &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId, "LoginWithOtherPlatformId" }, // 1035144233
		{ &Z_Construct_UFunction_UABUser_LoginWithRefreshToken, "LoginWithRefreshToken" }, // 1675513463
		{ &Z_Construct_UFunction_UABUser_LoginWithUsername, "LoginWithUsername" }, // 1569790253
		{ &Z_Construct_UFunction_UABUser_Logout, "Logout" }, // 1802268601
		{ &Z_Construct_UFunction_UABUser_Register, "Register" }, // 171126146
		{ &Z_Construct_UFunction_UABUser_Registerv2, "Registerv2" }, // 4172489929
		{ &Z_Construct_UFunction_UABUser_Registerv3, "Registerv3" }, // 2607892707
		{ &Z_Construct_UFunction_UABUser_ResetPassword, "ResetPassword" }, // 514472699
		{ &Z_Construct_UFunction_UABUser_SearchUsers, "SearchUsers" }, // 4114517260
		{ &Z_Construct_UFunction_UABUser_SearchUsersByType, "SearchUsersByType" }, // 283212782
		{ &Z_Construct_UFunction_UABUser_SendResetPasswordCode, "SendResetPasswordCode" }, // 3317354011
		{ &Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode, "SendUpdateEmailVerificationCode" }, // 757672187
		{ &Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode, "SendUpgradeVerificationCode" }, // 335067956
		{ &Z_Construct_UFunction_UABUser_SendVerificationCode, "SendVerificationCode" }, // 446188792
		{ &Z_Construct_UFunction_UABUser_TryRelogin, "TryRelogin" }, // 341942540
		{ &Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform, "UnlinkAllOtherPlatform" }, // 1205517338
		{ &Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId, "UnlinkAllOtherPlatformId" }, // 3445504630
		{ &Z_Construct_UFunction_UABUser_UnlinkOtherPlatform, "UnlinkOtherPlatform" }, // 1168279624
		{ &Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId, "UnlinkOtherPlatformId" }, // 531211160
		{ &Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler, "UnlinkOtherPlatformWithCustomErrorHandler" }, // 586536812
		{ &Z_Construct_UFunction_UABUser_UpdateEmail, "UpdateEmail" }, // 384030235
		{ &Z_Construct_UFunction_UABUser_UpdateUser, "UpdateUser" }, // 1853682528
		{ &Z_Construct_UFunction_UABUser_Upgrade, "Upgrade" }, // 2046804461
		{ &Z_Construct_UFunction_UABUser_UpgradeAndVerify, "UpgradeAndVerify" }, // 2989461906
		{ &Z_Construct_UFunction_UABUser_Upgradev2, "Upgradev2" }, // 2289551055
		{ &Z_Construct_UFunction_UABUser_Verify, "Verify" }, // 4279029469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABUser_Statics::ClassParams = {
		&UABUser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABUser, 566291665);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABUser>()
	{
		return UABUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABUser(Z_Construct_UClass_UABUser, &UABUser::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
