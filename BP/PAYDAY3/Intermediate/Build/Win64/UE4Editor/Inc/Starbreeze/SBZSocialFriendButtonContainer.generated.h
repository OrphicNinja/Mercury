// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPartyMember;
class USBZMenuButton;
#ifdef STARBREEZE_SBZSocialFriendButtonContainer_generated_h
#error "SBZSocialFriendButtonContainer.generated.h already included, missing '#pragma once' in SBZSocialFriendButtonContainer.h"
#endif
#define STARBREEZE_SBZSocialFriendButtonContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPartyMember); \
	DECLARE_FUNCTION(execBuildPartyMembersList); \
	DECLARE_FUNCTION(execGetPartyMembers); \
	DECLARE_FUNCTION(execGetPartyMembersNum); \
	DECLARE_FUNCTION(execGetPlatformName); \
	DECLARE_FUNCTION(execRefreshFriends); \
	DECLARE_FUNCTION(execRefreshPartyPanel); \
	DECLARE_FUNCTION(execRequestPartyLeave); \
	DECLARE_FUNCTION(execSearchUser); \
	DECLARE_FUNCTION(execStartAutoRefreshFriends); \
	DECLARE_FUNCTION(execStopAutoRefreshFriends); \
	DECLARE_FUNCTION(execUpdateFriendButton); \
	DECLARE_FUNCTION(execUpdateFriendFilterText); \
	DECLARE_FUNCTION(execUpdatePartyMembersList);


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPartyMember); \
	DECLARE_FUNCTION(execBuildPartyMembersList); \
	DECLARE_FUNCTION(execGetPartyMembers); \
	DECLARE_FUNCTION(execGetPartyMembersNum); \
	DECLARE_FUNCTION(execGetPlatformName); \
	DECLARE_FUNCTION(execRefreshFriends); \
	DECLARE_FUNCTION(execRefreshPartyPanel); \
	DECLARE_FUNCTION(execRequestPartyLeave); \
	DECLARE_FUNCTION(execSearchUser); \
	DECLARE_FUNCTION(execStartAutoRefreshFriends); \
	DECLARE_FUNCTION(execStopAutoRefreshFriends); \
	DECLARE_FUNCTION(execUpdateFriendButton); \
	DECLARE_FUNCTION(execUpdateFriendFilterText); \
	DECLARE_FUNCTION(execUpdatePartyMembersList);


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_EVENT_PARMS \
	struct SBZSocialFriendButtonContainer_eventOnFriendButtonFocused_Parms \
	{ \
		USBZMenuButton* MenuButton; \
		bool bIsFocused; \
	}; \
	struct SBZSocialFriendButtonContainer_eventOnPartyButtonFocused_Parms \
	{ \
		USBZMenuButton* MenuButton; \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSocialFriendButtonContainer(); \
	friend struct Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics; \
public: \
	DECLARE_CLASS(USBZSocialFriendButtonContainer, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSocialFriendButtonContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSocialFriendButtonContainer(); \
	friend struct Z_Construct_UClass_USBZSocialFriendButtonContainer_Statics; \
public: \
	DECLARE_CLASS(USBZSocialFriendButtonContainer, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSocialFriendButtonContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSocialFriendButtonContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSocialFriendButtonContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSocialFriendButtonContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSocialFriendButtonContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSocialFriendButtonContainer(USBZSocialFriendButtonContainer&&); \
	NO_API USBZSocialFriendButtonContainer(const USBZSocialFriendButtonContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSocialFriendButtonContainer(USBZSocialFriendButtonContainer&&); \
	NO_API USBZSocialFriendButtonContainer(const USBZSocialFriendButtonContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSocialFriendButtonContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSocialFriendButtonContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSocialFriendButtonContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_FilterFriends() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Button_FilterFriends); } \
	FORCEINLINE static uint32 __PPO__LeavePartyButton() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, LeavePartyButton); } \
	FORCEINLINE static uint32 __PPO__Panel_AccelByteFriendList() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_AccelByteFriendList); } \
	FORCEINLINE static uint32 __PPO__Panel_PlatformFriendList() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_PlatformFriendList); } \
	FORCEINLINE static uint32 __PPO__Panel_IncomingFriendRequests() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_IncomingFriendRequests); } \
	FORCEINLINE static uint32 __PPO__Panel_OutgoingFriendRequests() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_OutgoingFriendRequests); } \
	FORCEINLINE static uint32 __PPO__Panel_UserSearch() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_UserSearch); } \
	FORCEINLINE static uint32 __PPO__Panel_BlockedPlayers() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_BlockedPlayers); } \
	FORCEINLINE static uint32 __PPO__Panel_PartyMembers() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_PartyMembers); } \
	FORCEINLINE static uint32 __PPO__Panel_OfflinePlayers() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, Panel_OfflinePlayers); } \
	FORCEINLINE static uint32 __PPO__FriendButtonWidgetClass() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, FriendButtonWidgetClass); } \
	FORCEINLINE static uint32 __PPO__AccelByteFriendButtonMap() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, AccelByteFriendButtonMap); } \
	FORCEINLINE static uint32 __PPO__PlatformFriendButtonMap() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, PlatformFriendButtonMap); } \
	FORCEINLINE static uint32 __PPO__IncomingFriendButtonMap() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, IncomingFriendButtonMap); } \
	FORCEINLINE static uint32 __PPO__OutgoingFriendButtonMap() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, OutgoingFriendButtonMap); } \
	FORCEINLINE static uint32 __PPO__UserSearchButtonMap() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, UserSearchButtonMap); } \
	FORCEINLINE static uint32 __PPO__BlockedPlayerButtonMap() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, BlockedPlayerButtonMap); } \
	FORCEINLINE static uint32 __PPO__OfflineFriendButtonMap() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, OfflineFriendButtonMap); } \
	FORCEINLINE static uint32 __PPO__PartyMembers() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, PartyMembers); } \
	FORCEINLINE static uint32 __PPO__PartyEmptyButtonPool() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, PartyEmptyButtonPool); } \
	FORCEINLINE static uint32 __PPO__PartyMemberButtonWidgetClass() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, PartyMemberButtonWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentlyFocusedButton() { return STRUCT_OFFSET(USBZSocialFriendButtonContainer, CurrentlyFocusedButton); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSocialFriendButtonContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButtonContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
