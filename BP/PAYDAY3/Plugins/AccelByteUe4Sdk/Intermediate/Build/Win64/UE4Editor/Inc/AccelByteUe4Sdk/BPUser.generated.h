// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelBytePlatformType : uint8;
#ifdef ACCELBYTEUE4SDK_BPUser_generated_h
#error "BPUser.generated.h already included, missing '#pragma once' in BPUser.h"
#endif
#define ACCELBYTEUE4SDK_BPUser_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForgetAllCredentials); \
	DECLARE_FUNCTION(execGetPlatformLinks); \
	DECLARE_FUNCTION(execGetUserEligibleToPlay); \
	DECLARE_FUNCTION(execLinkOtherPlatform); \
	DECLARE_FUNCTION(execLoginWithDeviceId); \
	DECLARE_FUNCTION(execLoginWithOtherPlatform); \
	DECLARE_FUNCTION(execLoginWithUsername); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execRegister); \
	DECLARE_FUNCTION(execResetPassword); \
	DECLARE_FUNCTION(execSendResetPasswordCode); \
	DECLARE_FUNCTION(execSendUpgradeVerificationCode); \
	DECLARE_FUNCTION(execSendVerificationCode); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformWithCustomErrorHandler); \
	DECLARE_FUNCTION(execUpgrade); \
	DECLARE_FUNCTION(execUpgradeAndVerify); \
	DECLARE_FUNCTION(execVerify);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForgetAllCredentials); \
	DECLARE_FUNCTION(execGetPlatformLinks); \
	DECLARE_FUNCTION(execGetUserEligibleToPlay); \
	DECLARE_FUNCTION(execLinkOtherPlatform); \
	DECLARE_FUNCTION(execLoginWithDeviceId); \
	DECLARE_FUNCTION(execLoginWithOtherPlatform); \
	DECLARE_FUNCTION(execLoginWithUsername); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execRegister); \
	DECLARE_FUNCTION(execResetPassword); \
	DECLARE_FUNCTION(execSendResetPasswordCode); \
	DECLARE_FUNCTION(execSendUpgradeVerificationCode); \
	DECLARE_FUNCTION(execSendVerificationCode); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkAllOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatform); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformId); \
	DECLARE_FUNCTION(execUnlinkOtherPlatformWithCustomErrorHandler); \
	DECLARE_FUNCTION(execUpgrade); \
	DECLARE_FUNCTION(execUpgradeAndVerify); \
	DECLARE_FUNCTION(execVerify);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPUser(); \
	friend struct Z_Construct_UClass_UBPUser_Statics; \
public: \
	DECLARE_CLASS(UBPUser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UBPUser)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBPUser(); \
	friend struct Z_Construct_UClass_UBPUser_Statics; \
public: \
	DECLARE_CLASS(UBPUser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UBPUser)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPUser(UBPUser&&); \
	NO_API UBPUser(const UBPUser&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPUser(UBPUser&&); \
	NO_API UBPUser(const UBPUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBPUser)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_14_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UBPUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_BPUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
