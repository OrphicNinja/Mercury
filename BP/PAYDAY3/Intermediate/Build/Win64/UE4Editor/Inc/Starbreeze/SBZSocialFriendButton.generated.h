// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZPartyRequestFeedbackType : uint8;
enum class ESBZRequestFeedbackType : uint8;
struct FSBZReportPlayerInfo;
struct FSBZFriendListEntry;
#ifdef STARBREEZE_SBZSocialFriendButton_generated_h
#error "SBZSocialFriendButton.generated.h already included, missing '#pragma once' in SBZSocialFriendButton.h"
#endif
#define STARBREEZE_SBZSocialFriendButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptFriendRequest); \
	DECLARE_FUNCTION(execBlockPlayerAction); \
	DECLARE_FUNCTION(execCanBlockPlayer); \
	DECLARE_FUNCTION(execCancelFriendRequest); \
	DECLARE_FUNCTION(execCanInvitePlayer); \
	DECLARE_FUNCTION(execCanJoinLobby); \
	DECLARE_FUNCTION(execCanJoinParty); \
	DECLARE_FUNCTION(execCanRequestFriend); \
	DECLARE_FUNCTION(execCanShowFriendProfile); \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execFriendProfileAction); \
	DECLARE_FUNCTION(execJoinLobby); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execOnConfirmationPopupClosed); \
	DECLARE_FUNCTION(execOnPartyRequestFeedback); \
	DECLARE_FUNCTION(execOnRequestFeedback); \
	DECLARE_FUNCTION(execOnRequestStatusPopupClosed); \
	DECLARE_FUNCTION(execQuaternaryAction); \
	DECLARE_FUNCTION(execRejectFriendRequest); \
	DECLARE_FUNCTION(execRemoveFriend); \
	DECLARE_FUNCTION(execReportPlayer); \
	DECLARE_FUNCTION(execRequestFriend); \
	DECLARE_FUNCTION(execSecondaryAction); \
	DECLARE_FUNCTION(execTertiaryAction); \
	DECLARE_FUNCTION(execUnblockPlayerAction);


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptFriendRequest); \
	DECLARE_FUNCTION(execBlockPlayerAction); \
	DECLARE_FUNCTION(execCanBlockPlayer); \
	DECLARE_FUNCTION(execCancelFriendRequest); \
	DECLARE_FUNCTION(execCanInvitePlayer); \
	DECLARE_FUNCTION(execCanJoinLobby); \
	DECLARE_FUNCTION(execCanJoinParty); \
	DECLARE_FUNCTION(execCanRequestFriend); \
	DECLARE_FUNCTION(execCanShowFriendProfile); \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execFriendProfileAction); \
	DECLARE_FUNCTION(execJoinLobby); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execOnConfirmationPopupClosed); \
	DECLARE_FUNCTION(execOnPartyRequestFeedback); \
	DECLARE_FUNCTION(execOnRequestFeedback); \
	DECLARE_FUNCTION(execOnRequestStatusPopupClosed); \
	DECLARE_FUNCTION(execQuaternaryAction); \
	DECLARE_FUNCTION(execRejectFriendRequest); \
	DECLARE_FUNCTION(execRemoveFriend); \
	DECLARE_FUNCTION(execReportPlayer); \
	DECLARE_FUNCTION(execRequestFriend); \
	DECLARE_FUNCTION(execSecondaryAction); \
	DECLARE_FUNCTION(execTertiaryAction); \
	DECLARE_FUNCTION(execUnblockPlayerAction);


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_EVENT_PARMS \
	struct SBZSocialFriendButton_eventOnPlayerDataInitialized_Parms \
	{ \
		FSBZFriendListEntry InFriendListEntry; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSocialFriendButton(); \
	friend struct Z_Construct_UClass_USBZSocialFriendButton_Statics; \
public: \
	DECLARE_CLASS(USBZSocialFriendButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSocialFriendButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSocialFriendButton(); \
	friend struct Z_Construct_UClass_USBZSocialFriendButton_Statics; \
public: \
	DECLARE_CLASS(USBZSocialFriendButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSocialFriendButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSocialFriendButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSocialFriendButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSocialFriendButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSocialFriendButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSocialFriendButton(USBZSocialFriendButton&&); \
	NO_API USBZSocialFriendButton(const USBZSocialFriendButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSocialFriendButton(USBZSocialFriendButton&&); \
	NO_API USBZSocialFriendButton(const USBZSocialFriendButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSocialFriendButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSocialFriendButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSocialFriendButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FriendListEntry() { return STRUCT_OFFSET(USBZSocialFriendButton, FriendListEntry); } \
	FORCEINLINE static uint32 __PPO__FriendButtonType() { return STRUCT_OFFSET(USBZSocialFriendButton, FriendButtonType); } \
	FORCEINLINE static uint32 __PPO__SocialFriendButtonContainer() { return STRUCT_OFFSET(USBZSocialFriendButton, SocialFriendButtonContainer); } \
	FORCEINLINE static uint32 __PPO__CurrentFeedbackType() { return STRUCT_OFFSET(USBZSocialFriendButton, CurrentFeedbackType); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSocialFriendButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSocialFriendButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
