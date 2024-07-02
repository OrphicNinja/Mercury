// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelBytePlatformType : uint8;
struct FRegisterRequestv3;
enum class EAccelByteSearchType : uint8;
struct FUpdateEmailRequest;
struct FUserUpdateRequest;
#ifdef ACCELBYTEUE4SDK_ABUser_generated_h
#error "ABUser.generated.h already included, missing '#pragma once' in ABUser.h"
#endif
#define ACCELBYTEUE4SDK_ABUser_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBulkGetUserByOtherPlatformUserIds); \
	DECLARE_FUNCTION(execBulkGetUserInfo); \
	DECLARE_FUNCTION(execForcedLinkOtherPlatform); \
	DECLARE_FUNCTION(execForgetAllCredentials); \
	DECLARE_FUNCTION(execGetCountryFromIP); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetPlatformLinks); \
	DECLARE_FUNCTION(execGetUserByOtherPlatformUserId); \
	DECLARE_FUNCTION(execGetUserByUserId); \
	DECLARE_FUNCTION(execGetUserEligibleToPlay); \
	DECLARE_FUNCTION(execLinkOtherPlatform); \
	DECLARE_FUNCTION(execLoginByExchangeCodeForToken); \
	DECLARE_FUNCTION(execLoginWithDeviceId); \
	DECLARE_FUNCTION(execLoginWithLauncher); \
	DECLARE_FUNCTION(execLoginWithOtherPlatform); \
	DECLARE_FUNCTION(execLoginWithOtherPlatformId); \
	DECLARE_FUNCTION(execLoginWithRefreshToken); \
	DECLARE_FUNCTION(execLoginWithUsername); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execRegister); \
	DECLARE_FUNCTION(execRegisterv2); \
	DECLARE_FUNCTION(execRegisterv3); \
	DECLARE_FUNCTION(execResetPassword); \
	DECLARE_FUNCTION(execSearchUsers); \
	DECLARE_FUNCTION(execSearchUsersByType); \
	DECLARE_FUNCTION(execSendResetPasswordCode); \
	DECLARE_FUNCTION(execSendUpdateEmailVerificationCode); \
	DECLARE_FUNCTION(execSendUpgradeVerificationCode); \
	DECLARE_FUNCTION(execSendVerificationCode); \
	DECLARE_FUNCTION(execTryRelogin); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformWithCustomErrorHandler); \
	DECLARE_FUNCTION(execUpdateEmail); \
	DECLARE_FUNCTION(execUpdateUser); \
	DECLARE_FUNCTION(execUpgrade); \
	DECLARE_FUNCTION(execUpgradeAndVerify); \
	DECLARE_FUNCTION(execUpgradev2); \
	DECLARE_FUNCTION(execVerify);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBulkGetUserByOtherPlatformUserIds); \
	DECLARE_FUNCTION(execBulkGetUserInfo); \
	DECLARE_FUNCTION(execForcedLinkOtherPlatform); \
	DECLARE_FUNCTION(execForgetAllCredentials); \
	DECLARE_FUNCTION(execGetCountryFromIP); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetPlatformLinks); \
	DECLARE_FUNCTION(execGetUserByOtherPlatformUserId); \
	DECLARE_FUNCTION(execGetUserByUserId); \
	DECLARE_FUNCTION(execGetUserEligibleToPlay); \
	DECLARE_FUNCTION(execLinkOtherPlatform); \
	DECLARE_FUNCTION(execLoginByExchangeCodeForToken); \
	DECLARE_FUNCTION(execLoginWithDeviceId); \
	DECLARE_FUNCTION(execLoginWithLauncher); \
	DECLARE_FUNCTION(execLoginWithOtherPlatform); \
	DECLARE_FUNCTION(execLoginWithOtherPlatformId); \
	DECLARE_FUNCTION(execLoginWithRefreshToken); \
	DECLARE_FUNCTION(execLoginWithUsername); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execRegister); \
	DECLARE_FUNCTION(execRegisterv2); \
	DECLARE_FUNCTION(execRegisterv3); \
	DECLARE_FUNCTION(execResetPassword); \
	DECLARE_FUNCTION(execSearchUsers); \
	DECLARE_FUNCTION(execSearchUsersByType); \
	DECLARE_FUNCTION(execSendResetPasswordCode); \
	DECLARE_FUNCTION(execSendUpdateEmailVerificationCode); \
	DECLARE_FUNCTION(execSendUpgradeVerificationCode); \
	DECLARE_FUNCTION(execSendVerificationCode); \
	DECLARE_FUNCTION(execTryRelogin); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformWithCustomErrorHandler); \
	DECLARE_FUNCTION(execUpdateEmail); \
	DECLARE_FUNCTION(execUpdateUser); \
	DECLARE_FUNCTION(execUpgrade); \
	DECLARE_FUNCTION(execUpgradeAndVerify); \
	DECLARE_FUNCTION(execUpgradev2); \
	DECLARE_FUNCTION(execVerify);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABUser(); \
	friend struct Z_Construct_UClass_UABUser_Statics; \
public: \
	DECLARE_CLASS(UABUser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABUser)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUABUser(); \
	friend struct Z_Construct_UClass_UABUser_Statics; \
public: \
	DECLARE_CLASS(UABUser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABUser)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABUser(UABUser&&); \
	NO_API UABUser(const UABUser&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABUser(UABUser&&); \
	NO_API UABUser(const UABUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABUser)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_24_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
