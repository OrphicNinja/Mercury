// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSocialFriendButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSocialFriendButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialFriendButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialFriendButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyRequestFeedbackType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFriendListEntry();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReportPlayerInfo();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESocialFriendButtonType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialFriendButtonContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSocialFriendButton::execAcceptFriendRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptFriendRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execBlockPlayerAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockPlayerAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execCanBlockPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBlockPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execCancelFriendRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelFriendRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execCanInvitePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInvitePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execCanJoinLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanJoinLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execCanJoinParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanJoinParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execCanRequestFriend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRequestFriend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execCanShowFriendProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShowFriendProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execExecuteAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execFriendProfileAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FriendProfileAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execJoinLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execJoinParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execOnConfirmationPopupClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmationPopupClosed(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execOnPartyRequestFeedback)
	{
		P_GET_ENUM(ESBZPartyRequestFeedbackType,Z_Param_FeedbackType);
		P_GET_UBOOL(Z_Param_bResult);
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyRequestFeedback(ESBZPartyRequestFeedbackType(Z_Param_FeedbackType),Z_Param_bResult,Z_Param_ErrorCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execOnRequestFeedback)
	{
		P_GET_ENUM(ESBZRequestFeedbackType,Z_Param_FeedbackType);
		P_GET_UBOOL(Z_Param_bResult);
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRequestFeedback(ESBZRequestFeedbackType(Z_Param_FeedbackType),Z_Param_bResult,Z_Param_ErrorCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execOnRequestStatusPopupClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRequestStatusPopupClosed(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execQuaternaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuaternaryAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execRejectFriendRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RejectFriendRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execRemoveFriend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFriend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execReportPlayer)
	{
		P_GET_STRUCT_REF(FSBZReportPlayerInfo,Z_Param_Out_ReportPlayerInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportPlayer(Z_Param_Out_ReportPlayerInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execRequestFriend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestFriend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execSecondaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecondaryAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execTertiaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TertiaryAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialFriendButton::execUnblockPlayerAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnblockPlayerAction();
		P_NATIVE_END;
	}
	static FName NAME_USBZSocialFriendButton_OnPlayerDataInitialized = FName(TEXT("OnPlayerDataInitialized"));
	void USBZSocialFriendButton::OnPlayerDataInitialized(FSBZFriendListEntry const& InFriendListEntry)
	{
		SBZSocialFriendButton_eventOnPlayerDataInitialized_Parms Parms;
		Parms.InFriendListEntry=InFriendListEntry;
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialFriendButton_OnPlayerDataInitialized),&Parms);
	}
	static FName NAME_USBZSocialFriendButton_ReportPlayerAction = FName(TEXT("ReportPlayerAction"));
	void USBZSocialFriendButton::ReportPlayerAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialFriendButton_ReportPlayerAction),NULL);
	}
	void USBZSocialFriendButton::StaticRegisterNativesUSBZSocialFriendButton()
	{
		UClass* Class = USBZSocialFriendButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptFriendRequest", &USBZSocialFriendButton::execAcceptFriendRequest },
			{ "BlockPlayerAction", &USBZSocialFriendButton::execBlockPlayerAction },
			{ "CanBlockPlayer", &USBZSocialFriendButton::execCanBlockPlayer },
			{ "CancelFriendRequest", &USBZSocialFriendButton::execCancelFriendRequest },
			{ "CanInvitePlayer", &USBZSocialFriendButton::execCanInvitePlayer },
			{ "CanJoinLobby", &USBZSocialFriendButton::execCanJoinLobby },
			{ "CanJoinParty", &USBZSocialFriendButton::execCanJoinParty },
			{ "CanRequestFriend", &USBZSocialFriendButton::execCanRequestFriend },
			{ "CanShowFriendProfile", &USBZSocialFriendButton::execCanShowFriendProfile },
			{ "ExecuteAction", &USBZSocialFriendButton::execExecuteAction },
			{ "FriendProfileAction", &USBZSocialFriendButton::execFriendProfileAction },
			{ "JoinLobby", &USBZSocialFriendButton::execJoinLobby },
			{ "JoinParty", &USBZSocialFriendButton::execJoinParty },
			{ "OnConfirmationPopupClosed", &USBZSocialFriendButton::execOnConfirmationPopupClosed },
			{ "OnPartyRequestFeedback", &USBZSocialFriendButton::execOnPartyRequestFeedback },
			{ "OnRequestFeedback", &USBZSocialFriendButton::execOnRequestFeedback },
			{ "OnRequestStatusPopupClosed", &USBZSocialFriendButton::execOnRequestStatusPopupClosed },
			{ "QuaternaryAction", &USBZSocialFriendButton::execQuaternaryAction },
			{ "RejectFriendRequest", &USBZSocialFriendButton::execRejectFriendRequest },
			{ "RemoveFriend", &USBZSocialFriendButton::execRemoveFriend },
			{ "ReportPlayer", &USBZSocialFriendButton::execReportPlayer },
			{ "RequestFriend", &USBZSocialFriendButton::execRequestFriend },
			{ "SecondaryAction", &USBZSocialFriendButton::execSecondaryAction },
			{ "TertiaryAction", &USBZSocialFriendButton::execTertiaryAction },
			{ "UnblockPlayerAction", &USBZSocialFriendButton::execUnblockPlayerAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "AcceptFriendRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "BlockPlayerAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics
	{
		struct SBZSocialFriendButton_eventCanBlockPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventCanBlockPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventCanBlockPlayer_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "CanBlockPlayer", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventCanBlockPlayer_Parms), Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "CancelFriendRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics
	{
		struct SBZSocialFriendButton_eventCanInvitePlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventCanInvitePlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventCanInvitePlayer_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "CanInvitePlayer", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventCanInvitePlayer_Parms), Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics
	{
		struct SBZSocialFriendButton_eventCanJoinLobby_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventCanJoinLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventCanJoinLobby_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "CanJoinLobby", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventCanJoinLobby_Parms), Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics
	{
		struct SBZSocialFriendButton_eventCanJoinParty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventCanJoinParty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventCanJoinParty_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "CanJoinParty", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventCanJoinParty_Parms), Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics
	{
		struct SBZSocialFriendButton_eventCanRequestFriend_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventCanRequestFriend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventCanRequestFriend_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "CanRequestFriend", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventCanRequestFriend_Parms), Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics
	{
		struct SBZSocialFriendButton_eventCanShowFriendProfile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventCanShowFriendProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventCanShowFriendProfile_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "CanShowFriendProfile", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventCanShowFriendProfile_Parms), Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics
	{
		struct SBZSocialFriendButton_eventExecuteAction_Parms
		{
			FName Action;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventExecuteAction_Parms, Action), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "ExecuteAction", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventExecuteAction_Parms), Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "FriendProfileAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "JoinLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_JoinParty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_JoinParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_JoinParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "JoinParty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_JoinParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_JoinParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_JoinParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_JoinParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics
	{
		struct SBZSocialFriendButton_eventOnConfirmationPopupClosed_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventOnConfirmationPopupClosed_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "OnConfirmationPopupClosed", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventOnConfirmationPopupClosed_Parms), Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics
	{
		struct SBZSocialFriendButton_eventOnPartyRequestFeedback_Parms
		{
			ESBZPartyRequestFeedbackType FeedbackType;
			bool bResult;
			FString ErrorCode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FeedbackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FeedbackType;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_FeedbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_FeedbackType = { "FeedbackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventOnPartyRequestFeedback_Parms, FeedbackType), Z_Construct_UEnum_Starbreeze_ESBZPartyRequestFeedbackType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventOnPartyRequestFeedback_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventOnPartyRequestFeedback_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventOnPartyRequestFeedback_Parms, ErrorCode), METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_ErrorCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_FeedbackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_FeedbackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "OnPartyRequestFeedback", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventOnPartyRequestFeedback_Parms), Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFriendListEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFriendListEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::NewProp_InFriendListEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::NewProp_InFriendListEntry = { "InFriendListEntry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventOnPlayerDataInitialized_Parms, InFriendListEntry), Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::NewProp_InFriendListEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::NewProp_InFriendListEntry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::NewProp_InFriendListEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "OnPlayerDataInitialized", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventOnPlayerDataInitialized_Parms), Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics
	{
		struct SBZSocialFriendButton_eventOnRequestFeedback_Parms
		{
			ESBZRequestFeedbackType FeedbackType;
			bool bResult;
			FString ErrorCode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FeedbackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FeedbackType;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_FeedbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_FeedbackType = { "FeedbackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventOnRequestFeedback_Parms, FeedbackType), Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SBZSocialFriendButton_eventOnRequestFeedback_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialFriendButton_eventOnRequestFeedback_Parms), &Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventOnRequestFeedback_Parms, ErrorCode), METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_ErrorCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_FeedbackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_FeedbackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "OnRequestFeedback", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventOnRequestFeedback_Parms), Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics
	{
		struct SBZSocialFriendButton_eventOnRequestStatusPopupClosed_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventOnRequestStatusPopupClosed_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "OnRequestStatusPopupClosed", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventOnRequestStatusPopupClosed_Parms), Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "QuaternaryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "RejectFriendRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "RemoveFriend", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics
	{
		struct SBZSocialFriendButton_eventReportPlayer_Parms
		{
			FSBZReportPlayerInfo ReportPlayerInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportPlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReportPlayerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::NewProp_ReportPlayerInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::NewProp_ReportPlayerInfo = { "ReportPlayerInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialFriendButton_eventReportPlayer_Parms, ReportPlayerInfo), Z_Construct_UScriptStruct_FSBZReportPlayerInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::NewProp_ReportPlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::NewProp_ReportPlayerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::NewProp_ReportPlayerInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "ReportPlayer", nullptr, nullptr, sizeof(SBZSocialFriendButton_eventReportPlayer_Parms), Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "ReportPlayerAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "RequestFriend", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "SecondaryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "TertiaryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialFriendButton, nullptr, "UnblockPlayerAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSocialFriendButton_NoRegister()
	{
		return USBZSocialFriendButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZSocialFriendButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendListEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendListEntry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FriendButtonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendButtonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FriendButtonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialFriendButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocialFriendButtonContainer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentFeedbackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFeedbackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentFeedbackType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSocialFriendButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSocialFriendButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSocialFriendButton_AcceptFriendRequest, "AcceptFriendRequest" }, // 4086048097
		{ &Z_Construct_UFunction_USBZSocialFriendButton_BlockPlayerAction, "BlockPlayerAction" }, // 1279217771
		{ &Z_Construct_UFunction_USBZSocialFriendButton_CanBlockPlayer, "CanBlockPlayer" }, // 2884345204
		{ &Z_Construct_UFunction_USBZSocialFriendButton_CancelFriendRequest, "CancelFriendRequest" }, // 2499937858
		{ &Z_Construct_UFunction_USBZSocialFriendButton_CanInvitePlayer, "CanInvitePlayer" }, // 1900875503
		{ &Z_Construct_UFunction_USBZSocialFriendButton_CanJoinLobby, "CanJoinLobby" }, // 2786431198
		{ &Z_Construct_UFunction_USBZSocialFriendButton_CanJoinParty, "CanJoinParty" }, // 2723377116
		{ &Z_Construct_UFunction_USBZSocialFriendButton_CanRequestFriend, "CanRequestFriend" }, // 3532802167
		{ &Z_Construct_UFunction_USBZSocialFriendButton_CanShowFriendProfile, "CanShowFriendProfile" }, // 4183559999
		{ &Z_Construct_UFunction_USBZSocialFriendButton_ExecuteAction, "ExecuteAction" }, // 2576359264
		{ &Z_Construct_UFunction_USBZSocialFriendButton_FriendProfileAction, "FriendProfileAction" }, // 3505444276
		{ &Z_Construct_UFunction_USBZSocialFriendButton_JoinLobby, "JoinLobby" }, // 4069278320
		{ &Z_Construct_UFunction_USBZSocialFriendButton_JoinParty, "JoinParty" }, // 382520531
		{ &Z_Construct_UFunction_USBZSocialFriendButton_OnConfirmationPopupClosed, "OnConfirmationPopupClosed" }, // 129360620
		{ &Z_Construct_UFunction_USBZSocialFriendButton_OnPartyRequestFeedback, "OnPartyRequestFeedback" }, // 413402892
		{ &Z_Construct_UFunction_USBZSocialFriendButton_OnPlayerDataInitialized, "OnPlayerDataInitialized" }, // 52566670
		{ &Z_Construct_UFunction_USBZSocialFriendButton_OnRequestFeedback, "OnRequestFeedback" }, // 2006318937
		{ &Z_Construct_UFunction_USBZSocialFriendButton_OnRequestStatusPopupClosed, "OnRequestStatusPopupClosed" }, // 32842413
		{ &Z_Construct_UFunction_USBZSocialFriendButton_QuaternaryAction, "QuaternaryAction" }, // 54865442
		{ &Z_Construct_UFunction_USBZSocialFriendButton_RejectFriendRequest, "RejectFriendRequest" }, // 2714466730
		{ &Z_Construct_UFunction_USBZSocialFriendButton_RemoveFriend, "RemoveFriend" }, // 2316021520
		{ &Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayer, "ReportPlayer" }, // 3591657728
		{ &Z_Construct_UFunction_USBZSocialFriendButton_ReportPlayerAction, "ReportPlayerAction" }, // 1190445274
		{ &Z_Construct_UFunction_USBZSocialFriendButton_RequestFriend, "RequestFriend" }, // 2001205387
		{ &Z_Construct_UFunction_USBZSocialFriendButton_SecondaryAction, "SecondaryAction" }, // 1490586092
		{ &Z_Construct_UFunction_USBZSocialFriendButton_TertiaryAction, "TertiaryAction" }, // 2594992796
		{ &Z_Construct_UFunction_USBZSocialFriendButton_UnblockPlayerAction, "UnblockPlayerAction" }, // 2727206449
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSocialFriendButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendListEntry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButton" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendListEntry = { "FriendListEntry", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButton, FriendListEntry), Z_Construct_UScriptStruct_FSBZFriendListEntry, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendListEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendListEntry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendButtonType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButton" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendButtonType = { "FriendButtonType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButton, FriendButtonType), Z_Construct_UEnum_Starbreeze_ESocialFriendButtonType, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendButtonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendButtonType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_SocialFriendButtonContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_SocialFriendButtonContainer = { "SocialFriendButtonContainer", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButton, SocialFriendButtonContainer), Z_Construct_UClass_USBZSocialFriendButtonContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_SocialFriendButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_SocialFriendButtonContainer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_CurrentFeedbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_CurrentFeedbackType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialFriendButton" },
		{ "ModuleRelativePath", "Public/SBZSocialFriendButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_CurrentFeedbackType = { "CurrentFeedbackType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialFriendButton, CurrentFeedbackType), Z_Construct_UEnum_Starbreeze_ESBZRequestFeedbackType, METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_CurrentFeedbackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_CurrentFeedbackType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSocialFriendButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendListEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_FriendButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_SocialFriendButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_CurrentFeedbackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialFriendButton_Statics::NewProp_CurrentFeedbackType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSocialFriendButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSocialFriendButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSocialFriendButton_Statics::ClassParams = {
		&USBZSocialFriendButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSocialFriendButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSocialFriendButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialFriendButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSocialFriendButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSocialFriendButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSocialFriendButton, 3993621720);
	template<> STARBREEZE_API UClass* StaticClass<USBZSocialFriendButton>()
	{
		return USBZSocialFriendButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSocialFriendButton(Z_Construct_UClass_USBZSocialFriendButton, &USBZSocialFriendButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSocialFriendButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSocialFriendButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
