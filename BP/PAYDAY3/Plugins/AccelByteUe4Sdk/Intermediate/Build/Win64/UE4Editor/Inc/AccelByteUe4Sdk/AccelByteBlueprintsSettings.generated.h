// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHttpCacheType : uint8;
enum class ESettingsEnvironment : uint8;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsSettings_generated_h
#error "AccelByteBlueprintsSettings.generated.h already included, missing '#pragma once' in AccelByteBlueprintsSettings.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsSettings_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAchievementServerUrl); \
	DECLARE_FUNCTION(execGetAppId); \
	DECLARE_FUNCTION(execGetBasicServerUrl); \
	DECLARE_FUNCTION(execGetChatServerUrl); \
	DECLARE_FUNCTION(execGetClientId); \
	DECLARE_FUNCTION(execGetClientSecret); \
	DECLARE_FUNCTION(execGetCloudSaveServerUrl); \
	DECLARE_FUNCTION(execGetCloudStorageServerUrl); \
	DECLARE_FUNCTION(execGetCustomerName); \
	DECLARE_FUNCTION(execGetGameProfileServerUrl); \
	DECLARE_FUNCTION(execGetGameTelemetryServerUrl); \
	DECLARE_FUNCTION(execGetGDPRServerUrl); \
	DECLARE_FUNCTION(execGetGroupServerUrl); \
	DECLARE_FUNCTION(execGetHeartBeatData); \
	DECLARE_FUNCTION(execGetHttpCacheType); \
	DECLARE_FUNCTION(execGetIamServerUrl); \
	DECLARE_FUNCTION(execGetLeaderboardServerUrl); \
	DECLARE_FUNCTION(execGetLobbyServerUrl); \
	DECLARE_FUNCTION(execGetMatchmakingV2ServerUrl); \
	DECLARE_FUNCTION(execGetNamespace); \
	DECLARE_FUNCTION(execGetPlatformServerUrl); \
	DECLARE_FUNCTION(execGetPublisherNamespace); \
	DECLARE_FUNCTION(execGetQosLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execGetQosManagerServerUrl); \
	DECLARE_FUNCTION(execGetQosPingTimeout); \
	DECLARE_FUNCTION(execGetQosServerLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execGetReportingServerUrl); \
	DECLARE_FUNCTION(execGetSessionBrowserServerUrl); \
	DECLARE_FUNCTION(execGetSessionServerUrl); \
	DECLARE_FUNCTION(execGetStatisticServerUrl); \
	DECLARE_FUNCTION(execGetTurnManagerServerUrl); \
	DECLARE_FUNCTION(execGetUGCServerUrl); \
	DECLARE_FUNCTION(execIsHttpCacheEnabled); \
	DECLARE_FUNCTION(execIsSendPredefinedEvent); \
	DECLARE_FUNCTION(execIsServerUseAMS); \
	DECLARE_FUNCTION(execResetSettings); \
	DECLARE_FUNCTION(execSetAchievementServerUrl); \
	DECLARE_FUNCTION(execSetAppId); \
	DECLARE_FUNCTION(execSetBasicServerUrl); \
	DECLARE_FUNCTION(execSetChatServerUrl); \
	DECLARE_FUNCTION(execSetClientId); \
	DECLARE_FUNCTION(execSetClientSecret); \
	DECLARE_FUNCTION(execSetCloudSaveServerUrl); \
	DECLARE_FUNCTION(execSetCloudStorageServerUrl); \
	DECLARE_FUNCTION(execSetGameProfileServerUrl); \
	DECLARE_FUNCTION(execSetGameTelemetryServerUrl); \
	DECLARE_FUNCTION(execSetGDPRServerUrl); \
	DECLARE_FUNCTION(execSetGroupServerUrl); \
	DECLARE_FUNCTION(execSetHttpCacheType); \
	DECLARE_FUNCTION(execSetIamServerUrl); \
	DECLARE_FUNCTION(execSetLeaderboardServerUrl); \
	DECLARE_FUNCTION(execSetLobbyServerUrl); \
	DECLARE_FUNCTION(execSetMatchmakingV2ServerUrl); \
	DECLARE_FUNCTION(execSetNamespace); \
	DECLARE_FUNCTION(execSetPlatformServerUrl); \
	DECLARE_FUNCTION(execSetPublisherNamespace); \
	DECLARE_FUNCTION(execSetQosLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execSetQosManagerServerUrl); \
	DECLARE_FUNCTION(execSetQosPingTimeout); \
	DECLARE_FUNCTION(execSetReportingServerUrl); \
	DECLARE_FUNCTION(execSetSeasonPassServerUrl); \
	DECLARE_FUNCTION(execSetServerQosLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execSetServerUseAMS); \
	DECLARE_FUNCTION(execSetSessionBrowserServerUrl); \
	DECLARE_FUNCTION(execSetSessionServerUrl); \
	DECLARE_FUNCTION(execSetStatisticServerUrl); \
	DECLARE_FUNCTION(execSetTurnManagerServerUrl); \
	DECLARE_FUNCTION(execSetUGCServerUrl);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAchievementServerUrl); \
	DECLARE_FUNCTION(execGetAppId); \
	DECLARE_FUNCTION(execGetBasicServerUrl); \
	DECLARE_FUNCTION(execGetChatServerUrl); \
	DECLARE_FUNCTION(execGetClientId); \
	DECLARE_FUNCTION(execGetClientSecret); \
	DECLARE_FUNCTION(execGetCloudSaveServerUrl); \
	DECLARE_FUNCTION(execGetCloudStorageServerUrl); \
	DECLARE_FUNCTION(execGetCustomerName); \
	DECLARE_FUNCTION(execGetGameProfileServerUrl); \
	DECLARE_FUNCTION(execGetGameTelemetryServerUrl); \
	DECLARE_FUNCTION(execGetGDPRServerUrl); \
	DECLARE_FUNCTION(execGetGroupServerUrl); \
	DECLARE_FUNCTION(execGetHeartBeatData); \
	DECLARE_FUNCTION(execGetHttpCacheType); \
	DECLARE_FUNCTION(execGetIamServerUrl); \
	DECLARE_FUNCTION(execGetLeaderboardServerUrl); \
	DECLARE_FUNCTION(execGetLobbyServerUrl); \
	DECLARE_FUNCTION(execGetMatchmakingV2ServerUrl); \
	DECLARE_FUNCTION(execGetNamespace); \
	DECLARE_FUNCTION(execGetPlatformServerUrl); \
	DECLARE_FUNCTION(execGetPublisherNamespace); \
	DECLARE_FUNCTION(execGetQosLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execGetQosManagerServerUrl); \
	DECLARE_FUNCTION(execGetQosPingTimeout); \
	DECLARE_FUNCTION(execGetQosServerLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execGetReportingServerUrl); \
	DECLARE_FUNCTION(execGetSessionBrowserServerUrl); \
	DECLARE_FUNCTION(execGetSessionServerUrl); \
	DECLARE_FUNCTION(execGetStatisticServerUrl); \
	DECLARE_FUNCTION(execGetTurnManagerServerUrl); \
	DECLARE_FUNCTION(execGetUGCServerUrl); \
	DECLARE_FUNCTION(execIsHttpCacheEnabled); \
	DECLARE_FUNCTION(execIsSendPredefinedEvent); \
	DECLARE_FUNCTION(execIsServerUseAMS); \
	DECLARE_FUNCTION(execResetSettings); \
	DECLARE_FUNCTION(execSetAchievementServerUrl); \
	DECLARE_FUNCTION(execSetAppId); \
	DECLARE_FUNCTION(execSetBasicServerUrl); \
	DECLARE_FUNCTION(execSetChatServerUrl); \
	DECLARE_FUNCTION(execSetClientId); \
	DECLARE_FUNCTION(execSetClientSecret); \
	DECLARE_FUNCTION(execSetCloudSaveServerUrl); \
	DECLARE_FUNCTION(execSetCloudStorageServerUrl); \
	DECLARE_FUNCTION(execSetGameProfileServerUrl); \
	DECLARE_FUNCTION(execSetGameTelemetryServerUrl); \
	DECLARE_FUNCTION(execSetGDPRServerUrl); \
	DECLARE_FUNCTION(execSetGroupServerUrl); \
	DECLARE_FUNCTION(execSetHttpCacheType); \
	DECLARE_FUNCTION(execSetIamServerUrl); \
	DECLARE_FUNCTION(execSetLeaderboardServerUrl); \
	DECLARE_FUNCTION(execSetLobbyServerUrl); \
	DECLARE_FUNCTION(execSetMatchmakingV2ServerUrl); \
	DECLARE_FUNCTION(execSetNamespace); \
	DECLARE_FUNCTION(execSetPlatformServerUrl); \
	DECLARE_FUNCTION(execSetPublisherNamespace); \
	DECLARE_FUNCTION(execSetQosLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execSetQosManagerServerUrl); \
	DECLARE_FUNCTION(execSetQosPingTimeout); \
	DECLARE_FUNCTION(execSetReportingServerUrl); \
	DECLARE_FUNCTION(execSetSeasonPassServerUrl); \
	DECLARE_FUNCTION(execSetServerQosLatencyPollIntervalSecs); \
	DECLARE_FUNCTION(execSetServerUseAMS); \
	DECLARE_FUNCTION(execSetSessionBrowserServerUrl); \
	DECLARE_FUNCTION(execSetSessionServerUrl); \
	DECLARE_FUNCTION(execSetStatisticServerUrl); \
	DECLARE_FUNCTION(execSetTurnManagerServerUrl); \
	DECLARE_FUNCTION(execSetUGCServerUrl);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsSettings(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsSettings, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsSettings)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsSettings(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsSettings, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsSettings)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsSettings(UAccelByteBlueprintsSettings&&); \
	NO_API UAccelByteBlueprintsSettings(const UAccelByteBlueprintsSettings&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsSettings(UAccelByteBlueprintsSettings&&); \
	NO_API UAccelByteBlueprintsSettings(const UAccelByteBlueprintsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsSettings)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_8_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
