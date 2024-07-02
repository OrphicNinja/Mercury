// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FUniqueNetIdRepl;
struct FSBZOnlineSearchResult;
enum class EAccelBytePlatformType : uint8;
enum class ESBZFirstPartyPlatform : uint8;
struct FSBZMissionInfo;
struct FSBZLoginFieldInfo;
enum class ESBZHostingProvider : uint8;
struct FSBZOnlineMatchmakingParams;
enum class ESBZMatchmakingProvider : uint8;
struct FSBZMergePlayerData;
struct FSBZPartyData;
enum class ESBZOnlineJoinType : uint8;
class UTexture2D;
struct FSoftObjectPath;
enum class ESBZPlatform : uint8;
class USBZOnlineSession;
enum class ESBZSecurityCompany : uint8;
enum class ESBZDifficulty : uint8;
enum class EOnlineSessionInfo : uint8;
struct FSBZLobbyCharacterInfoUi;
enum class ESBZUserPrivilegesProxy : uint8;
struct FSBZRegistrationFieldInfo;
#ifdef STARBREEZE_SBZOnlineFunctionLibrary_generated_h
#error "SBZOnlineFunctionLibrary.generated.h already included, missing '#pragma once' in SBZOnlineFunctionLibrary.h"
#endif
#define STARBREEZE_SBZOnlineFunctionLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivatePartyInviteOverlay); \
	DECLARE_FUNCTION(execActivateProfileOverlay); \
	DECLARE_FUNCTION(execActivateSessionInviteOverlay); \
	DECLARE_FUNCTION(execCanVoteForStayInParty); \
	DECLARE_FUNCTION(execDebugGetSessionParameters); \
	DECLARE_FUNCTION(execDebugJoinByInvite); \
	DECLARE_FUNCTION(execGetAccelByteLinkedAccountsUrl); \
	DECLARE_FUNCTION(execGetAccelBytePlatformType); \
	DECLARE_FUNCTION(execGetAccelbytePlatformTypeFromFirstPartyPlatformType); \
	DECLARE_FUNCTION(execGetAllPlayersUniqueNetIds); \
	DECLARE_FUNCTION(execGetBeaconMissionInfo); \
	DECLARE_FUNCTION(execGetConnectionsCount); \
	DECLARE_FUNCTION(execGetDebugLoginAndPassword); \
	DECLARE_FUNCTION(execGetDebugMatchmakingGroup); \
	DECLARE_FUNCTION(execGetDebugRandomSeed); \
	DECLARE_FUNCTION(execGetDifficultyIdxArgument); \
	DECLARE_FUNCTION(execGetFirstPartyPlatform); \
	DECLARE_FUNCTION(execGetFoundPlayersCount); \
	DECLARE_FUNCTION(execGetHostingProvider); \
	DECLARE_FUNCTION(execGetLastMatchID); \
	DECLARE_FUNCTION(execGetMatchmakingParameters); \
	DECLARE_FUNCTION(execGetMatchmakingProvider); \
	DECLARE_FUNCTION(execGetMaxPlayersArgument); \
	DECLARE_FUNCTION(execGetMaxPlayersForSession); \
	DECLARE_FUNCTION(execGetMergePartyInformation); \
	DECLARE_FUNCTION(execGetOverrideAccelbyteGameMode); \
	DECLARE_FUNCTION(execGetOverrideLevelName); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execGetPartyJoinType); \
	DECLARE_FUNCTION(execGetPartyMemberAvatar); \
	DECLARE_FUNCTION(execGetPartyMembersCount); \
	DECLARE_FUNCTION(execGetPathNameFromLevelIdx); \
	DECLARE_FUNCTION(execGetPlatform); \
	DECLARE_FUNCTION(execGetPlatformFromAccelbytePlatformId); \
	DECLARE_FUNCTION(execGetPlayerAvatar); \
	DECLARE_FUNCTION(execGetPlayerAvatarByUniqueId); \
	DECLARE_FUNCTION(execGetPlayerDisplayNameByUniqueId); \
	DECLARE_FUNCTION(execGetPlayersCount); \
	DECLARE_FUNCTION(execGetSBZOnline); \
	DECLARE_FUNCTION(execGetSecurityCompaniesArgument); \
	DECLARE_FUNCTION(execGetSecurityCompanyListForDifficulty); \
	DECLARE_FUNCTION(execGetSessionInfo); \
	DECLARE_FUNCTION(execGetSingleNameToShow); \
	DECLARE_FUNCTION(execGetUiLobbyInfo); \
	DECLARE_FUNCTION(execHasPrivilege); \
	DECLARE_FUNCTION(execHideSessionFromJoin); \
	DECLARE_FUNCTION(execIsAccelByteMatchmakingDisabled); \
	DECLARE_FUNCTION(execIsAccelByteV2SessionsEnabled); \
	DECLARE_FUNCTION(execIsActionPhaseClient); \
	DECLARE_FUNCTION(execIsDebugRandomSeedProvided); \
	DECLARE_FUNCTION(execIsDifficultyArgumentProvided); \
	DECLARE_FUNCTION(execIsEOSActive); \
	DECLARE_FUNCTION(execIsForceLocalProgressionSaveFile); \
	DECLARE_FUNCTION(execIsInParty); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsLobbyClient); \
	DECLARE_FUNCTION(execIsLobbyHost); \
	DECLARE_FUNCTION(execIsLocalClientReady); \
	DECLARE_FUNCTION(execIsLocalPlayerInDropInLobby); \
	DECLARE_FUNCTION(execIsNoChallenges); \
	DECLARE_FUNCTION(execIsNoHud); \
	DECLARE_FUNCTION(execIsNoSteam); \
	DECLARE_FUNCTION(execIsOwnUniqueId); \
	DECLARE_FUNCTION(execIsPartyClient); \
	DECLARE_FUNCTION(execIsPartyOwner); \
	DECLARE_FUNCTION(execIsPlayerInParty); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execIsPlayerPartyOwner); \
	DECLARE_FUNCTION(execIsProductOwned); \
	DECLARE_FUNCTION(execIsRequestInProgress); \
	DECLARE_FUNCTION(execIsSameUniqueId); \
	DECLARE_FUNCTION(execIsSecurityCompaniesProvided); \
	DECLARE_FUNCTION(execIsServerAcceptingSlots); \
	DECLARE_FUNCTION(execIsShippingBuild); \
	DECLARE_FUNCTION(execIsSoloGame); \
	DECLARE_FUNCTION(execIsSoloGameEnabled); \
	DECLARE_FUNCTION(execIsSteamActive); \
	DECLARE_FUNCTION(execIsTitleOnline); \
	DECLARE_FUNCTION(execIsUserOnline); \
	DECLARE_FUNCTION(execIsWinGDKActive); \
	DECLARE_FUNCTION(execLevelIdxToPath); \
	DECLARE_FUNCTION(execMutePlayer); \
	DECLARE_FUNCTION(execRequestCreateAccount); \
	DECLARE_FUNCTION(execRequestDirectJoin); \
	DECLARE_FUNCTION(execRequestLogin); \
	DECLARE_FUNCTION(execRequestLoginWithDeviceID); \
	DECLARE_FUNCTION(execRequestMergeParty); \
	DECLARE_FUNCTION(execRequestRestartLevel); \
	DECLARE_FUNCTION(execRequestSteamLogin); \
	DECLARE_FUNCTION(execRequestVoteKickPlayer); \
	DECLARE_FUNCTION(execRequestVoteRestartLevel); \
	DECLARE_FUNCTION(execSetLocalClientReady); \
	DECLARE_FUNCTION(execSetMatchmakingRegion); \
	DECLARE_FUNCTION(execSetSoloGameDisabled); \
	DECLARE_FUNCTION(execSetSoloGameEnabled); \
	DECLARE_FUNCTION(execUnmutePlayer);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivatePartyInviteOverlay); \
	DECLARE_FUNCTION(execActivateProfileOverlay); \
	DECLARE_FUNCTION(execActivateSessionInviteOverlay); \
	DECLARE_FUNCTION(execCanVoteForStayInParty); \
	DECLARE_FUNCTION(execDebugGetSessionParameters); \
	DECLARE_FUNCTION(execDebugJoinByInvite); \
	DECLARE_FUNCTION(execGetAccelByteLinkedAccountsUrl); \
	DECLARE_FUNCTION(execGetAccelBytePlatformType); \
	DECLARE_FUNCTION(execGetAccelbytePlatformTypeFromFirstPartyPlatformType); \
	DECLARE_FUNCTION(execGetAllPlayersUniqueNetIds); \
	DECLARE_FUNCTION(execGetBeaconMissionInfo); \
	DECLARE_FUNCTION(execGetConnectionsCount); \
	DECLARE_FUNCTION(execGetDebugLoginAndPassword); \
	DECLARE_FUNCTION(execGetDebugMatchmakingGroup); \
	DECLARE_FUNCTION(execGetDebugRandomSeed); \
	DECLARE_FUNCTION(execGetDifficultyIdxArgument); \
	DECLARE_FUNCTION(execGetFirstPartyPlatform); \
	DECLARE_FUNCTION(execGetFoundPlayersCount); \
	DECLARE_FUNCTION(execGetHostingProvider); \
	DECLARE_FUNCTION(execGetLastMatchID); \
	DECLARE_FUNCTION(execGetMatchmakingParameters); \
	DECLARE_FUNCTION(execGetMatchmakingProvider); \
	DECLARE_FUNCTION(execGetMaxPlayersArgument); \
	DECLARE_FUNCTION(execGetMaxPlayersForSession); \
	DECLARE_FUNCTION(execGetMergePartyInformation); \
	DECLARE_FUNCTION(execGetOverrideAccelbyteGameMode); \
	DECLARE_FUNCTION(execGetOverrideLevelName); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execGetPartyJoinType); \
	DECLARE_FUNCTION(execGetPartyMemberAvatar); \
	DECLARE_FUNCTION(execGetPartyMembersCount); \
	DECLARE_FUNCTION(execGetPathNameFromLevelIdx); \
	DECLARE_FUNCTION(execGetPlatform); \
	DECLARE_FUNCTION(execGetPlatformFromAccelbytePlatformId); \
	DECLARE_FUNCTION(execGetPlayerAvatar); \
	DECLARE_FUNCTION(execGetPlayerAvatarByUniqueId); \
	DECLARE_FUNCTION(execGetPlayerDisplayNameByUniqueId); \
	DECLARE_FUNCTION(execGetPlayersCount); \
	DECLARE_FUNCTION(execGetSBZOnline); \
	DECLARE_FUNCTION(execGetSecurityCompaniesArgument); \
	DECLARE_FUNCTION(execGetSecurityCompanyListForDifficulty); \
	DECLARE_FUNCTION(execGetSessionInfo); \
	DECLARE_FUNCTION(execGetSingleNameToShow); \
	DECLARE_FUNCTION(execGetUiLobbyInfo); \
	DECLARE_FUNCTION(execHasPrivilege); \
	DECLARE_FUNCTION(execHideSessionFromJoin); \
	DECLARE_FUNCTION(execIsAccelByteMatchmakingDisabled); \
	DECLARE_FUNCTION(execIsAccelByteV2SessionsEnabled); \
	DECLARE_FUNCTION(execIsActionPhaseClient); \
	DECLARE_FUNCTION(execIsDebugRandomSeedProvided); \
	DECLARE_FUNCTION(execIsDifficultyArgumentProvided); \
	DECLARE_FUNCTION(execIsEOSActive); \
	DECLARE_FUNCTION(execIsForceLocalProgressionSaveFile); \
	DECLARE_FUNCTION(execIsInParty); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsLobbyClient); \
	DECLARE_FUNCTION(execIsLobbyHost); \
	DECLARE_FUNCTION(execIsLocalClientReady); \
	DECLARE_FUNCTION(execIsLocalPlayerInDropInLobby); \
	DECLARE_FUNCTION(execIsNoChallenges); \
	DECLARE_FUNCTION(execIsNoHud); \
	DECLARE_FUNCTION(execIsNoSteam); \
	DECLARE_FUNCTION(execIsOwnUniqueId); \
	DECLARE_FUNCTION(execIsPartyClient); \
	DECLARE_FUNCTION(execIsPartyOwner); \
	DECLARE_FUNCTION(execIsPlayerInParty); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execIsPlayerPartyOwner); \
	DECLARE_FUNCTION(execIsProductOwned); \
	DECLARE_FUNCTION(execIsRequestInProgress); \
	DECLARE_FUNCTION(execIsSameUniqueId); \
	DECLARE_FUNCTION(execIsSecurityCompaniesProvided); \
	DECLARE_FUNCTION(execIsServerAcceptingSlots); \
	DECLARE_FUNCTION(execIsShippingBuild); \
	DECLARE_FUNCTION(execIsSoloGame); \
	DECLARE_FUNCTION(execIsSoloGameEnabled); \
	DECLARE_FUNCTION(execIsSteamActive); \
	DECLARE_FUNCTION(execIsTitleOnline); \
	DECLARE_FUNCTION(execIsUserOnline); \
	DECLARE_FUNCTION(execIsWinGDKActive); \
	DECLARE_FUNCTION(execLevelIdxToPath); \
	DECLARE_FUNCTION(execMutePlayer); \
	DECLARE_FUNCTION(execRequestCreateAccount); \
	DECLARE_FUNCTION(execRequestDirectJoin); \
	DECLARE_FUNCTION(execRequestLogin); \
	DECLARE_FUNCTION(execRequestLoginWithDeviceID); \
	DECLARE_FUNCTION(execRequestMergeParty); \
	DECLARE_FUNCTION(execRequestRestartLevel); \
	DECLARE_FUNCTION(execRequestSteamLogin); \
	DECLARE_FUNCTION(execRequestVoteKickPlayer); \
	DECLARE_FUNCTION(execRequestVoteRestartLevel); \
	DECLARE_FUNCTION(execSetLocalClientReady); \
	DECLARE_FUNCTION(execSetMatchmakingRegion); \
	DECLARE_FUNCTION(execSetSoloGameDisabled); \
	DECLARE_FUNCTION(execSetSoloGameEnabled); \
	DECLARE_FUNCTION(execUnmutePlayer);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineFunctionLibrary(USBZOnlineFunctionLibrary&&); \
	NO_API USBZOnlineFunctionLibrary(const USBZOnlineFunctionLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineFunctionLibrary(USBZOnlineFunctionLibrary&&); \
	NO_API USBZOnlineFunctionLibrary(const USBZOnlineFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_30_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
