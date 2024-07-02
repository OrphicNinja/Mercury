// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsAttributes;
enum class EAccelByteEntitlementClass : uint8;
enum class EAccelByteAppType : uint8;
struct FAccelByteModelsPlatformSyncMobileApple;
struct FAccelByteModelsPlatformSyncMobileGoogle;
enum class EAccelBytePlatformSync : uint8;
struct FAccelByteModelsEntitlementSyncBase;
struct FAccelByteModelsTwitchDropEntitlement;
#ifdef ACCELBYTEUE4SDK_ABEntitlement_generated_h
#error "ABEntitlement.generated.h already included, missing '#pragma once' in ABEntitlement.h"
#endif
#define ACCELBYTEUE4SDK_ABEntitlement_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConsumeUserEntitlement); \
	DECLARE_FUNCTION(execCreateDistributionReceiver); \
	DECLARE_FUNCTION(execDeleteDistributionReceiver); \
	DECLARE_FUNCTION(execGetDistributionReceiver); \
	DECLARE_FUNCTION(execGetUserEntitlementById); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipAny); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipByAppId); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipByItemId); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipBySku); \
	DECLARE_FUNCTION(execQueryUserEntitlements); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseApple); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseGoogle); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseGooglePlay); \
	DECLARE_FUNCTION(execSyncPlatformPurchase); \
	DECLARE_FUNCTION(execSyncPlatformPurchaseSingleItem); \
	DECLARE_FUNCTION(execSyncTwitchDropEntitlement); \
	DECLARE_FUNCTION(execUpdateDistributionReceiver); \
	DECLARE_FUNCTION(execValidateUserItemPurchaseCondition);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConsumeUserEntitlement); \
	DECLARE_FUNCTION(execCreateDistributionReceiver); \
	DECLARE_FUNCTION(execDeleteDistributionReceiver); \
	DECLARE_FUNCTION(execGetDistributionReceiver); \
	DECLARE_FUNCTION(execGetUserEntitlementById); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipAny); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipByAppId); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipByItemId); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipBySku); \
	DECLARE_FUNCTION(execQueryUserEntitlements); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseApple); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseGoogle); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseGooglePlay); \
	DECLARE_FUNCTION(execSyncPlatformPurchase); \
	DECLARE_FUNCTION(execSyncPlatformPurchaseSingleItem); \
	DECLARE_FUNCTION(execSyncTwitchDropEntitlement); \
	DECLARE_FUNCTION(execUpdateDistributionReceiver); \
	DECLARE_FUNCTION(execValidateUserItemPurchaseCondition);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABEntitlement(); \
	friend struct Z_Construct_UClass_UABEntitlement_Statics; \
public: \
	DECLARE_CLASS(UABEntitlement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABEntitlement)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUABEntitlement(); \
	friend struct Z_Construct_UClass_UABEntitlement_Statics; \
public: \
	DECLARE_CLASS(UABEntitlement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABEntitlement)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABEntitlement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABEntitlement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABEntitlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABEntitlement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABEntitlement(UABEntitlement&&); \
	NO_API UABEntitlement(const UABEntitlement&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABEntitlement(UABEntitlement&&); \
	NO_API UABEntitlement(const UABEntitlement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABEntitlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABEntitlement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABEntitlement)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_22_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABEntitlement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
