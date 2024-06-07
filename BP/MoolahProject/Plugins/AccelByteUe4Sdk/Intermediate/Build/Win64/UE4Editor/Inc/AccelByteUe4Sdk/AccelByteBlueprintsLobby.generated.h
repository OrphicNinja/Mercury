// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsAcceptFriendsResponse;
struct FAccelByteModelsCancelFriendsResponse;
struct FAccelByteModelsCreatePartyResponse;
struct FAccelByteModelsDsNotice;
struct FAccelByteModelsAcceptFriendsNotif;
struct FAccelByteModelsGetOnlineUsersResponse;
struct FAccelByteModelsGetFriendshipStatusResponse;
struct FAccelByteModelsRequestFriendsNotif;
struct FAccelByteModelsInfoPartyResponse;
struct FAccelByteModelsPartyGetInvitedNotice;
struct FAccelByteModelsInvitationNotice;
struct FAccelByteModelsPartyJoinNotice;
struct FAccelByteModelsPartyJoinResponse;
struct FAccelByteModelsGotKickedFromPartyNotice;
struct FAccelByteModelsKickPartyMemberResponse;
struct FAccelByteModelsPartyInviteResponse;
struct FAccelByteModelsLeavePartyNotice;
struct FAccelByteModelsLeavePartyResponse;
struct FAccelByteModelsListIncomingFriendsResponse;
struct FAccelByteModelsListOutgoingFriendsResponse;
struct FAccelByteModelsLoadFriendListResponse;
struct FAccelByteModelsMatchmakingNotice;
struct FAccelByteModelsMatchmakingResponse;
struct FAccelByteModelsNotificationMessage;
struct FAccelByteModelsPartyMemberConnectionNotice;
struct FAccelByteModelsPartyMessageNotice;
struct FAccelByteModelsPartyMessageResponse;
struct FAccelByteModelsPersonalMessageNotice;
struct FAccelByteModelsPersonalMessageResponse;
struct FAccelByteModelsReadyConsentNotice;
struct FAccelByteModelsReadyConsentRequest;
struct FAccelByteModelsRejectConsentNotice;
struct FAccelByteModelsRejectConsentRequest;
struct FAccelByteModelsRejectFriendsResponse;
struct FAccelByteModelsRematchmakingNotice;
struct FAccelByteModelsRequestFriendsResponse;
struct FAccelByteModelsSetOnlineUsersResponse;
struct FAccelByteModelsUnfriendResponse;
struct FAccelByteModelsUsersPresenceNotice;
enum class EAvailability : uint8;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsLobby_generated_h
#error "AccelByteBlueprintsLobby.generated.h already included, missing '#pragma once' in AccelByteBlueprintsLobby.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsLobby_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_92_DELEGATE \
struct AccelByteBlueprintsLobby_eventAcceptFriendsResponseDelegate_Parms \
{ \
	FAccelByteModelsAcceptFriendsResponse Result; \
}; \
static inline void FAcceptFriendsResponseDelegate_DelegateWrapper(const FScriptDelegate& AcceptFriendsResponseDelegate, FAccelByteModelsAcceptFriendsResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventAcceptFriendsResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	AcceptFriendsResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_91_DELEGATE \
struct AccelByteBlueprintsLobby_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsLobby_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_90_DELEGATE \
struct AccelByteBlueprintsLobby_eventCancelFriendsResponseDelegate_Parms \
{ \
	FAccelByteModelsCancelFriendsResponse Result; \
}; \
static inline void FCancelFriendsResponseDelegate_DelegateWrapper(const FScriptDelegate& CancelFriendsResponseDelegate, FAccelByteModelsCancelFriendsResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventCancelFriendsResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	CancelFriendsResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_89_DELEGATE \
struct AccelByteBlueprintsLobby_eventConnectionClosed_Parms \
{ \
	int32 StatusCode; \
	FString Reason; \
	bool WasClean; \
}; \
static inline void FConnectionClosed_DelegateWrapper(const FScriptDelegate& ConnectionClosed, int32 StatusCode, const FString& Reason, bool WasClean) \
{ \
	AccelByteBlueprintsLobby_eventConnectionClosed_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Reason=Reason; \
	Parms.WasClean=WasClean ? true : false; \
	ConnectionClosed.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_88_DELEGATE \
static inline void FConnectSuccess_DelegateWrapper(const FScriptDelegate& ConnectSuccess) \
{ \
	ConnectSuccess.ProcessDelegate<UObject>(NULL); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_87_DELEGATE \
struct AccelByteBlueprintsLobby_eventCreatePartyResponse_Parms \
{ \
	FAccelByteModelsCreatePartyResponse Result; \
}; \
static inline void FCreatePartyResponse_DelegateWrapper(const FScriptDelegate& CreatePartyResponse, FAccelByteModelsCreatePartyResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventCreatePartyResponse_Parms Parms; \
	Parms.Result=Result; \
	CreatePartyResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_86_DELEGATE \
struct AccelByteBlueprintsLobby_eventDsNotice_Parms \
{ \
	FAccelByteModelsDsNotice Result; \
}; \
static inline void FDsNotice_DelegateWrapper(const FScriptDelegate& DsNotice, FAccelByteModelsDsNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventDsNotice_Parms Parms; \
	Parms.Result=Result; \
	DsNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_85_DELEGATE \
struct AccelByteBlueprintsLobby_eventFriendAcceptFriendRequestNotif_Parms \
{ \
	FAccelByteModelsAcceptFriendsNotif Result; \
}; \
static inline void FFriendAcceptFriendRequestNotif_DelegateWrapper(const FScriptDelegate& FriendAcceptFriendRequestNotif, FAccelByteModelsAcceptFriendsNotif const& Result) \
{ \
	AccelByteBlueprintsLobby_eventFriendAcceptFriendRequestNotif_Parms Parms; \
	Parms.Result=Result; \
	FriendAcceptFriendRequestNotif.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_84_DELEGATE \
struct AccelByteBlueprintsLobby_eventGetAllFriendsStatusResponse_Parms \
{ \
	FAccelByteModelsGetOnlineUsersResponse Result; \
}; \
static inline void FGetAllFriendsStatusResponse_DelegateWrapper(const FScriptDelegate& GetAllFriendsStatusResponse, FAccelByteModelsGetOnlineUsersResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventGetAllFriendsStatusResponse_Parms Parms; \
	Parms.Result=Result; \
	GetAllFriendsStatusResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_83_DELEGATE \
struct AccelByteBlueprintsLobby_eventGetFriendshipStatusResponseDelegate_Parms \
{ \
	FAccelByteModelsGetFriendshipStatusResponse Result; \
}; \
static inline void FGetFriendshipStatusResponseDelegate_DelegateWrapper(const FScriptDelegate& GetFriendshipStatusResponseDelegate, FAccelByteModelsGetFriendshipStatusResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventGetFriendshipStatusResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	GetFriendshipStatusResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_82_DELEGATE \
struct AccelByteBlueprintsLobby_eventIncomingFriendNotif_Parms \
{ \
	FAccelByteModelsRequestFriendsNotif Result; \
}; \
static inline void FIncomingFriendNotif_DelegateWrapper(const FScriptDelegate& IncomingFriendNotif, FAccelByteModelsRequestFriendsNotif const& Result) \
{ \
	AccelByteBlueprintsLobby_eventIncomingFriendNotif_Parms Parms; \
	Parms.Result=Result; \
	IncomingFriendNotif.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_81_DELEGATE \
struct AccelByteBlueprintsLobby_eventInfoPartyResponse_Parms \
{ \
	FAccelByteModelsInfoPartyResponse Result; \
}; \
static inline void FInfoPartyResponse_DelegateWrapper(const FScriptDelegate& InfoPartyResponse, FAccelByteModelsInfoPartyResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInfoPartyResponse_Parms Parms; \
	Parms.Result=Result; \
	InfoPartyResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_80_DELEGATE \
struct AccelByteBlueprintsLobby_eventInvitePartyGetInvitedNotice_Parms \
{ \
	FAccelByteModelsPartyGetInvitedNotice Result; \
}; \
static inline void FInvitePartyGetInvitedNotice_DelegateWrapper(const FScriptDelegate& InvitePartyGetInvitedNotice, FAccelByteModelsPartyGetInvitedNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInvitePartyGetInvitedNotice_Parms Parms; \
	Parms.Result=Result; \
	InvitePartyGetInvitedNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_79_DELEGATE \
struct AccelByteBlueprintsLobby_eventInvitePartyInvitationNotice_Parms \
{ \
	FAccelByteModelsInvitationNotice Result; \
}; \
static inline void FInvitePartyInvitationNotice_DelegateWrapper(const FScriptDelegate& InvitePartyInvitationNotice, FAccelByteModelsInvitationNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInvitePartyInvitationNotice_Parms Parms; \
	Parms.Result=Result; \
	InvitePartyInvitationNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_78_DELEGATE \
struct AccelByteBlueprintsLobby_eventInvitePartyJoinNotice_Parms \
{ \
	FAccelByteModelsPartyJoinNotice Result; \
}; \
static inline void FInvitePartyJoinNotice_DelegateWrapper(const FScriptDelegate& InvitePartyJoinNotice, FAccelByteModelsPartyJoinNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInvitePartyJoinNotice_Parms Parms; \
	Parms.Result=Result; \
	InvitePartyJoinNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_77_DELEGATE \
struct AccelByteBlueprintsLobby_eventInvitePartyJoinResponse_Parms \
{ \
	FAccelByteModelsPartyJoinResponse Result; \
}; \
static inline void FInvitePartyJoinResponse_DelegateWrapper(const FScriptDelegate& InvitePartyJoinResponse, FAccelByteModelsPartyJoinResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInvitePartyJoinResponse_Parms Parms; \
	Parms.Result=Result; \
	InvitePartyJoinResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_76_DELEGATE \
struct AccelByteBlueprintsLobby_eventInvitePartyKickedNotice_Parms \
{ \
	FAccelByteModelsGotKickedFromPartyNotice Result; \
}; \
static inline void FInvitePartyKickedNotice_DelegateWrapper(const FScriptDelegate& InvitePartyKickedNotice, FAccelByteModelsGotKickedFromPartyNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInvitePartyKickedNotice_Parms Parms; \
	Parms.Result=Result; \
	InvitePartyKickedNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_75_DELEGATE \
struct AccelByteBlueprintsLobby_eventInvitePartyKickMemberResponse_Parms \
{ \
	FAccelByteModelsKickPartyMemberResponse Result; \
}; \
static inline void FInvitePartyKickMemberResponse_DelegateWrapper(const FScriptDelegate& InvitePartyKickMemberResponse, FAccelByteModelsKickPartyMemberResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInvitePartyKickMemberResponse_Parms Parms; \
	Parms.Result=Result; \
	InvitePartyKickMemberResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_74_DELEGATE \
struct AccelByteBlueprintsLobby_eventInvitePartyResponse_Parms \
{ \
	FAccelByteModelsPartyInviteResponse Result; \
}; \
static inline void FInvitePartyResponse_DelegateWrapper(const FScriptDelegate& InvitePartyResponse, FAccelByteModelsPartyInviteResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventInvitePartyResponse_Parms Parms; \
	Parms.Result=Result; \
	InvitePartyResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_73_DELEGATE \
struct AccelByteBlueprintsLobby_eventLeavePartyNotice_Parms \
{ \
	FAccelByteModelsLeavePartyNotice Result; \
}; \
static inline void FLeavePartyNotice_DelegateWrapper(const FScriptDelegate& LeavePartyNotice, FAccelByteModelsLeavePartyNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventLeavePartyNotice_Parms Parms; \
	Parms.Result=Result; \
	LeavePartyNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_72_DELEGATE \
struct AccelByteBlueprintsLobby_eventLeavePartyResponse_Parms \
{ \
	FAccelByteModelsLeavePartyResponse Result; \
}; \
static inline void FLeavePartyResponse_DelegateWrapper(const FScriptDelegate& LeavePartyResponse, FAccelByteModelsLeavePartyResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventLeavePartyResponse_Parms Parms; \
	Parms.Result=Result; \
	LeavePartyResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_71_DELEGATE \
struct AccelByteBlueprintsLobby_eventListIncomingFriendsResponseDelegate_Parms \
{ \
	FAccelByteModelsListIncomingFriendsResponse Result; \
}; \
static inline void FListIncomingFriendsResponseDelegate_DelegateWrapper(const FScriptDelegate& ListIncomingFriendsResponseDelegate, FAccelByteModelsListIncomingFriendsResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventListIncomingFriendsResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	ListIncomingFriendsResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_70_DELEGATE \
struct AccelByteBlueprintsLobby_eventListOutgoingFriendsResponseDelegate_Parms \
{ \
	FAccelByteModelsListOutgoingFriendsResponse Result; \
}; \
static inline void FListOutgoingFriendsResponseDelegate_DelegateWrapper(const FScriptDelegate& ListOutgoingFriendsResponseDelegate, FAccelByteModelsListOutgoingFriendsResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventListOutgoingFriendsResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	ListOutgoingFriendsResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_69_DELEGATE \
struct AccelByteBlueprintsLobby_eventLoadFriendListResponseDelegate_Parms \
{ \
	FAccelByteModelsLoadFriendListResponse Result; \
}; \
static inline void FLoadFriendListResponseDelegate_DelegateWrapper(const FScriptDelegate& LoadFriendListResponseDelegate, FAccelByteModelsLoadFriendListResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventLoadFriendListResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	LoadFriendListResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_68_DELEGATE \
struct AccelByteBlueprintsLobby_eventMatchmakingNotice_Parms \
{ \
	FAccelByteModelsMatchmakingNotice Result; \
}; \
static inline void FMatchmakingNotice_DelegateWrapper(const FScriptDelegate& MatchmakingNotice, FAccelByteModelsMatchmakingNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventMatchmakingNotice_Parms Parms; \
	Parms.Result=Result; \
	MatchmakingNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_67_DELEGATE \
struct AccelByteBlueprintsLobby_eventMatchmakingResponse_Parms \
{ \
	FAccelByteModelsMatchmakingResponse Result; \
}; \
static inline void FMatchmakingResponse_DelegateWrapper(const FScriptDelegate& MatchmakingResponse, FAccelByteModelsMatchmakingResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventMatchmakingResponse_Parms Parms; \
	Parms.Result=Result; \
	MatchmakingResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_66_DELEGATE \
struct AccelByteBlueprintsLobby_eventNotificationMessage_Parms \
{ \
	FAccelByteModelsNotificationMessage Result; \
}; \
static inline void FNotificationMessage_DelegateWrapper(const FScriptDelegate& NotificationMessage, FAccelByteModelsNotificationMessage const& Result) \
{ \
	AccelByteBlueprintsLobby_eventNotificationMessage_Parms Parms; \
	Parms.Result=Result; \
	NotificationMessage.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_65_DELEGATE \
struct AccelByteBlueprintsLobby_eventPartyMemberConnectNotice_Parms \
{ \
	FAccelByteModelsPartyMemberConnectionNotice Result; \
}; \
static inline void FPartyMemberConnectNotice_DelegateWrapper(const FScriptDelegate& PartyMemberConnectNotice, FAccelByteModelsPartyMemberConnectionNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventPartyMemberConnectNotice_Parms Parms; \
	Parms.Result=Result; \
	PartyMemberConnectNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_64_DELEGATE \
struct AccelByteBlueprintsLobby_eventPartyMemberDisconnectNotice_Parms \
{ \
	FAccelByteModelsPartyMemberConnectionNotice Result; \
}; \
static inline void FPartyMemberDisconnectNotice_DelegateWrapper(const FScriptDelegate& PartyMemberDisconnectNotice, FAccelByteModelsPartyMemberConnectionNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventPartyMemberDisconnectNotice_Parms Parms; \
	Parms.Result=Result; \
	PartyMemberDisconnectNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_63_DELEGATE \
struct AccelByteBlueprintsLobby_eventPartyMessageNotice_Parms \
{ \
	FAccelByteModelsPartyMessageNotice Result; \
}; \
static inline void FPartyMessageNotice_DelegateWrapper(const FScriptDelegate& PartyMessageNotice, FAccelByteModelsPartyMessageNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventPartyMessageNotice_Parms Parms; \
	Parms.Result=Result; \
	PartyMessageNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_62_DELEGATE \
struct AccelByteBlueprintsLobby_eventPartyMessageResponse_Parms \
{ \
	FAccelByteModelsPartyMessageResponse Result; \
}; \
static inline void FPartyMessageResponse_DelegateWrapper(const FScriptDelegate& PartyMessageResponse, FAccelByteModelsPartyMessageResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventPartyMessageResponse_Parms Parms; \
	Parms.Result=Result; \
	PartyMessageResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_61_DELEGATE \
struct AccelByteBlueprintsLobby_eventPrivateMessageNotice_Parms \
{ \
	FAccelByteModelsPersonalMessageNotice Result; \
}; \
static inline void FPrivateMessageNotice_DelegateWrapper(const FScriptDelegate& PrivateMessageNotice, FAccelByteModelsPersonalMessageNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventPrivateMessageNotice_Parms Parms; \
	Parms.Result=Result; \
	PrivateMessageNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_60_DELEGATE \
struct AccelByteBlueprintsLobby_eventPrivateMessageResponse_Parms \
{ \
	FAccelByteModelsPersonalMessageResponse Result; \
}; \
static inline void FPrivateMessageResponse_DelegateWrapper(const FScriptDelegate& PrivateMessageResponse, FAccelByteModelsPersonalMessageResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventPrivateMessageResponse_Parms Parms; \
	Parms.Result=Result; \
	PrivateMessageResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_59_DELEGATE \
struct AccelByteBlueprintsLobby_eventReadyConsentNotice_Parms \
{ \
	FAccelByteModelsReadyConsentNotice Result; \
}; \
static inline void FReadyConsentNotice_DelegateWrapper(const FScriptDelegate& ReadyConsentNotice, FAccelByteModelsReadyConsentNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventReadyConsentNotice_Parms Parms; \
	Parms.Result=Result; \
	ReadyConsentNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_58_DELEGATE \
struct AccelByteBlueprintsLobby_eventReadyConsentResponse_Parms \
{ \
	FAccelByteModelsReadyConsentRequest Result; \
}; \
static inline void FReadyConsentResponse_DelegateWrapper(const FScriptDelegate& ReadyConsentResponse, FAccelByteModelsReadyConsentRequest const& Result) \
{ \
	AccelByteBlueprintsLobby_eventReadyConsentResponse_Parms Parms; \
	Parms.Result=Result; \
	ReadyConsentResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_57_DELEGATE \
struct AccelByteBlueprintsLobby_eventRejectConsentNotice_Parms \
{ \
	FAccelByteModelsRejectConsentNotice Result; \
}; \
static inline void FRejectConsentNotice_DelegateWrapper(const FScriptDelegate& RejectConsentNotice, FAccelByteModelsRejectConsentNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventRejectConsentNotice_Parms Parms; \
	Parms.Result=Result; \
	RejectConsentNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_56_DELEGATE \
struct AccelByteBlueprintsLobby_eventRejectConsentResponse_Parms \
{ \
	FAccelByteModelsRejectConsentRequest Result; \
}; \
static inline void FRejectConsentResponse_DelegateWrapper(const FScriptDelegate& RejectConsentResponse, FAccelByteModelsRejectConsentRequest const& Result) \
{ \
	AccelByteBlueprintsLobby_eventRejectConsentResponse_Parms Parms; \
	Parms.Result=Result; \
	RejectConsentResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_55_DELEGATE \
struct AccelByteBlueprintsLobby_eventRejectFriendsResponseDelegate_Parms \
{ \
	FAccelByteModelsRejectFriendsResponse Result; \
}; \
static inline void FRejectFriendsResponseDelegate_DelegateWrapper(const FScriptDelegate& RejectFriendsResponseDelegate, FAccelByteModelsRejectFriendsResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventRejectFriendsResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	RejectFriendsResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_54_DELEGATE \
struct AccelByteBlueprintsLobby_eventRematchmakingNotice_Parms \
{ \
	FAccelByteModelsRematchmakingNotice Result; \
}; \
static inline void FRematchmakingNotice_DelegateWrapper(const FScriptDelegate& RematchmakingNotice, FAccelByteModelsRematchmakingNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventRematchmakingNotice_Parms Parms; \
	Parms.Result=Result; \
	RematchmakingNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_53_DELEGATE \
struct AccelByteBlueprintsLobby_eventRequestFriendsResponseDelegate_Parms \
{ \
	FAccelByteModelsRequestFriendsResponse Result; \
}; \
static inline void FRequestFriendsResponseDelegate_DelegateWrapper(const FScriptDelegate& RequestFriendsResponseDelegate, FAccelByteModelsRequestFriendsResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventRequestFriendsResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	RequestFriendsResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_52_DELEGATE \
struct AccelByteBlueprintsLobby_eventSetUserPresenceResponse_Parms \
{ \
	FAccelByteModelsSetOnlineUsersResponse Result; \
}; \
static inline void FSetUserPresenceResponse_DelegateWrapper(const FScriptDelegate& SetUserPresenceResponse, FAccelByteModelsSetOnlineUsersResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventSetUserPresenceResponse_Parms Parms; \
	Parms.Result=Result; \
	SetUserPresenceResponse.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_51_DELEGATE \
struct AccelByteBlueprintsLobby_eventUnfriendResponseDelegate_Parms \
{ \
	FAccelByteModelsUnfriendResponse Result; \
}; \
static inline void FUnfriendResponseDelegate_DelegateWrapper(const FScriptDelegate& UnfriendResponseDelegate, FAccelByteModelsUnfriendResponse const& Result) \
{ \
	AccelByteBlueprintsLobby_eventUnfriendResponseDelegate_Parms Parms; \
	Parms.Result=Result; \
	UnfriendResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_50_DELEGATE \
struct AccelByteBlueprintsLobby_eventUserPresenceNotice_Parms \
{ \
	FAccelByteModelsUsersPresenceNotice Result; \
}; \
static inline void FUserPresenceNotice_DelegateWrapper(const FScriptDelegate& UserPresenceNotice, FAccelByteModelsUsersPresenceNotice const& Result) \
{ \
	AccelByteBlueprintsLobby_eventUserPresenceNotice_Parms Parms; \
	Parms.Result=Result; \
	UserPresenceNotice.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptFriend); \
	DECLARE_FUNCTION(execBindEvent); \
	DECLARE_FUNCTION(execCancelFriendRequest); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execGetAllAsyncNotification); \
	DECLARE_FUNCTION(execGetFriendshipStatus); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execListIncomingFriends); \
	DECLARE_FUNCTION(execListOutgoingFriends); \
	DECLARE_FUNCTION(execLoadFriendsList); \
	DECLARE_FUNCTION(execRejectFriend); \
	DECLARE_FUNCTION(execRequestFriend); \
	DECLARE_FUNCTION(execSendAcceptInvitationRequest); \
	DECLARE_FUNCTION(execSendCancelMatchmaking); \
	DECLARE_FUNCTION(execSendCreatePartyRequest); \
	DECLARE_FUNCTION(execSendGetOnlineUsersRequest); \
	DECLARE_FUNCTION(execSendInfoPartyRequest); \
	DECLARE_FUNCTION(execSendInviteToPartyRequest); \
	DECLARE_FUNCTION(execSendKickPartyMemberRequest); \
	DECLARE_FUNCTION(execSendLeavePartyRequest); \
	DECLARE_FUNCTION(execSendPartyMessage); \
	DECLARE_FUNCTION(execSendPing); \
	DECLARE_FUNCTION(execSendPrivateMessage); \
	DECLARE_FUNCTION(execSendReadyConsentRequest); \
	DECLARE_FUNCTION(execSendRejectConsentRequest); \
	DECLARE_FUNCTION(execSendStartMatchmaking); \
	DECLARE_FUNCTION(execSetAcceptFriendResponseDelegate); \
	DECLARE_FUNCTION(execSetCancelFriendRequestResponseDelegate); \
	DECLARE_FUNCTION(execSetCancelMatchmakingResponseDelegate); \
	DECLARE_FUNCTION(execSetCreatePartyResponseDelegate); \
	DECLARE_FUNCTION(execSetDsNotifDelegate); \
	DECLARE_FUNCTION(execSetGetAllUserPresenceResponseDelegate); \
	DECLARE_FUNCTION(execSetGetFriendshipStatusResponseDelegate); \
	DECLARE_FUNCTION(execSetInfoPartyResponseDelegate); \
	DECLARE_FUNCTION(execSetInvitePartyJoinResponseDelegate); \
	DECLARE_FUNCTION(execSetInvitePartyKickMemberResponseDelegate); \
	DECLARE_FUNCTION(execSetInvitePartyResponseDelegate); \
	DECLARE_FUNCTION(execSetLeavePartyResponseDelegate); \
	DECLARE_FUNCTION(execSetListIncomingFriendsResponseDelegate); \
	DECLARE_FUNCTION(execSetListOutgoingFriendsResponseDelegate); \
	DECLARE_FUNCTION(execSetLoadFriendsListResponseDelegate); \
	DECLARE_FUNCTION(execSetMatchmakingNotifDelegate); \
	DECLARE_FUNCTION(execSetPartyMessageResponseDelegate); \
	DECLARE_FUNCTION(execSetPresenceStatus); \
	DECLARE_FUNCTION(execSetPrivateMessageResponseDelegate); \
	DECLARE_FUNCTION(execSetReadyConsentNotifDelegate); \
	DECLARE_FUNCTION(execSetReadyConsentResponseDelegate); \
	DECLARE_FUNCTION(execSetRejectConsentNotifDelegate); \
	DECLARE_FUNCTION(execSetRejectConsentResponseDelegate); \
	DECLARE_FUNCTION(execSetRejectFriendResponseDelegate); \
	DECLARE_FUNCTION(execSetRematchmakingNotifDelegate); \
	DECLARE_FUNCTION(execSetRequestFriendResponseDelegate); \
	DECLARE_FUNCTION(execSetStartMatchmakingResponseDelegate); \
	DECLARE_FUNCTION(execSetUnfriendResponseDelegate); \
	DECLARE_FUNCTION(execSetUserPresenceResponseDelegate); \
	DECLARE_FUNCTION(execUnbindDelegates); \
	DECLARE_FUNCTION(execUnfriend);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptFriend); \
	DECLARE_FUNCTION(execBindEvent); \
	DECLARE_FUNCTION(execCancelFriendRequest); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execGetAllAsyncNotification); \
	DECLARE_FUNCTION(execGetFriendshipStatus); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execListIncomingFriends); \
	DECLARE_FUNCTION(execListOutgoingFriends); \
	DECLARE_FUNCTION(execLoadFriendsList); \
	DECLARE_FUNCTION(execRejectFriend); \
	DECLARE_FUNCTION(execRequestFriend); \
	DECLARE_FUNCTION(execSendAcceptInvitationRequest); \
	DECLARE_FUNCTION(execSendCancelMatchmaking); \
	DECLARE_FUNCTION(execSendCreatePartyRequest); \
	DECLARE_FUNCTION(execSendGetOnlineUsersRequest); \
	DECLARE_FUNCTION(execSendInfoPartyRequest); \
	DECLARE_FUNCTION(execSendInviteToPartyRequest); \
	DECLARE_FUNCTION(execSendKickPartyMemberRequest); \
	DECLARE_FUNCTION(execSendLeavePartyRequest); \
	DECLARE_FUNCTION(execSendPartyMessage); \
	DECLARE_FUNCTION(execSendPing); \
	DECLARE_FUNCTION(execSendPrivateMessage); \
	DECLARE_FUNCTION(execSendReadyConsentRequest); \
	DECLARE_FUNCTION(execSendRejectConsentRequest); \
	DECLARE_FUNCTION(execSendStartMatchmaking); \
	DECLARE_FUNCTION(execSetAcceptFriendResponseDelegate); \
	DECLARE_FUNCTION(execSetCancelFriendRequestResponseDelegate); \
	DECLARE_FUNCTION(execSetCancelMatchmakingResponseDelegate); \
	DECLARE_FUNCTION(execSetCreatePartyResponseDelegate); \
	DECLARE_FUNCTION(execSetDsNotifDelegate); \
	DECLARE_FUNCTION(execSetGetAllUserPresenceResponseDelegate); \
	DECLARE_FUNCTION(execSetGetFriendshipStatusResponseDelegate); \
	DECLARE_FUNCTION(execSetInfoPartyResponseDelegate); \
	DECLARE_FUNCTION(execSetInvitePartyJoinResponseDelegate); \
	DECLARE_FUNCTION(execSetInvitePartyKickMemberResponseDelegate); \
	DECLARE_FUNCTION(execSetInvitePartyResponseDelegate); \
	DECLARE_FUNCTION(execSetLeavePartyResponseDelegate); \
	DECLARE_FUNCTION(execSetListIncomingFriendsResponseDelegate); \
	DECLARE_FUNCTION(execSetListOutgoingFriendsResponseDelegate); \
	DECLARE_FUNCTION(execSetLoadFriendsListResponseDelegate); \
	DECLARE_FUNCTION(execSetMatchmakingNotifDelegate); \
	DECLARE_FUNCTION(execSetPartyMessageResponseDelegate); \
	DECLARE_FUNCTION(execSetPresenceStatus); \
	DECLARE_FUNCTION(execSetPrivateMessageResponseDelegate); \
	DECLARE_FUNCTION(execSetReadyConsentNotifDelegate); \
	DECLARE_FUNCTION(execSetReadyConsentResponseDelegate); \
	DECLARE_FUNCTION(execSetRejectConsentNotifDelegate); \
	DECLARE_FUNCTION(execSetRejectConsentResponseDelegate); \
	DECLARE_FUNCTION(execSetRejectFriendResponseDelegate); \
	DECLARE_FUNCTION(execSetRematchmakingNotifDelegate); \
	DECLARE_FUNCTION(execSetRequestFriendResponseDelegate); \
	DECLARE_FUNCTION(execSetStartMatchmakingResponseDelegate); \
	DECLARE_FUNCTION(execSetUnfriendResponseDelegate); \
	DECLARE_FUNCTION(execSetUserPresenceResponseDelegate); \
	DECLARE_FUNCTION(execUnbindDelegates); \
	DECLARE_FUNCTION(execUnfriend);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsLobby(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsLobby_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsLobby, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsLobby)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsLobby(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsLobby_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsLobby, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsLobby)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsLobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsLobby(UAccelByteBlueprintsLobby&&); \
	NO_API UAccelByteBlueprintsLobby(const UAccelByteBlueprintsLobby&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsLobby(UAccelByteBlueprintsLobby&&); \
	NO_API UAccelByteBlueprintsLobby(const UAccelByteBlueprintsLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsLobby)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_46_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
