// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSocialPartyMemberButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSocialPartyMemberButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialPartyMemberButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyMemberButtonType();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execAcceptInvite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptInvite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execCanShowFriendProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShowFriendProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execExecuteAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execFriendProfileAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FriendProfileAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execKickPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KickPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execPromotePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PromotePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execRejectInvite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RejectInvite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialPartyMemberButton::execRevokeInvite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RevokeInvite();
		P_NATIVE_END;
	}
	static FName NAME_USBZSocialPartyMemberButton_OnReadyToDisplayMember = FName(TEXT("OnReadyToDisplayMember"));
	void USBZSocialPartyMemberButton::OnReadyToDisplayMember()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialPartyMemberButton_OnReadyToDisplayMember),NULL);
	}
	void USBZSocialPartyMemberButton::StaticRegisterNativesUSBZSocialPartyMemberButton()
	{
		UClass* Class = USBZSocialPartyMemberButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptInvite", &USBZSocialPartyMemberButton::execAcceptInvite },
			{ "CanShowFriendProfile", &USBZSocialPartyMemberButton::execCanShowFriendProfile },
			{ "ExecuteAction", &USBZSocialPartyMemberButton::execExecuteAction },
			{ "FriendProfileAction", &USBZSocialPartyMemberButton::execFriendProfileAction },
			{ "KickPlayer", &USBZSocialPartyMemberButton::execKickPlayer },
			{ "PromotePlayer", &USBZSocialPartyMemberButton::execPromotePlayer },
			{ "RejectInvite", &USBZSocialPartyMemberButton::execRejectInvite },
			{ "RevokeInvite", &USBZSocialPartyMemberButton::execRevokeInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "AcceptInvite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics
	{
		struct SBZSocialPartyMemberButton_eventCanShowFriendProfile_Parms
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
	void Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSocialPartyMemberButton_eventCanShowFriendProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSocialPartyMemberButton_eventCanShowFriendProfile_Parms), &Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "CanShowFriendProfile", nullptr, nullptr, sizeof(SBZSocialPartyMemberButton_eventCanShowFriendProfile_Parms), Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics
	{
		struct SBZSocialPartyMemberButton_eventExecuteAction_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialPartyMemberButton_eventExecuteAction_Parms, Action), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "ExecuteAction", nullptr, nullptr, sizeof(SBZSocialPartyMemberButton_eventExecuteAction_Parms), Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "FriendProfileAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "KickPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "OnReadyToDisplayMember", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "PromotePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "RejectInvite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialPartyMemberButton, nullptr, "RevokeInvite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSocialPartyMemberButton_NoRegister()
	{
		return USBZSocialPartyMemberButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZSocialPartyMemberButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUsername_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUsername;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NebulaUsername_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NebulaUsername;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPartyLeader_MetaData[];
#endif
		static void NewProp_bIsPartyLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartyLeader;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InvitationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NebulaIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NebulaIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_AcceptInvite, "AcceptInvite" }, // 216596217
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_CanShowFriendProfile, "CanShowFriendProfile" }, // 3826190753
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_ExecuteAction, "ExecuteAction" }, // 283483143
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_FriendProfileAction, "FriendProfileAction" }, // 4068154434
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_KickPlayer, "KickPlayer" }, // 1646989910
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_OnReadyToDisplayMember, "OnReadyToDisplayMember" }, // 1633553927
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_PromotePlayer, "PromotePlayer" }, // 1168362393
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_RejectInvite, "RejectInvite" }, // 2912066178
		{ &Z_Construct_UFunction_USBZSocialPartyMemberButton_RevokeInvite, "RevokeInvite" }, // 559556729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSocialPartyMemberButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformUsername_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformUsername = { "PlatformUsername", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, PlatformUsername), METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformUsername_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformUsername_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaUsername_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaUsername = { "NebulaUsername", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, NebulaUsername), METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaUsername_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaUsername_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, PlayerId), METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_bIsPartyLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_bIsPartyLeader_SetBit(void* Obj)
	{
		((USBZSocialPartyMemberButton*)Obj)->bIsPartyLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_bIsPartyLeader = { "bIsPartyLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSocialPartyMemberButton), &Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_bIsPartyLeader_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_bIsPartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_bIsPartyLeader_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, Type), Z_Construct_UEnum_Starbreeze_ESBZPartyMemberButtonType, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PartyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, PartyId), METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PartyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_InvitationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_InvitationId = { "InvitationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, InvitationId), METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_InvitationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_InvitationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformIcon = { "PlatformIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, PlatformIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialPartyMemberButton" },
		{ "ModuleRelativePath", "Public/SBZSocialPartyMemberButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaIcon = { "NebulaIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialPartyMemberButton, NebulaIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformUsername,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaUsername,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_bIsPartyLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_InvitationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_PlatformIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::NewProp_NebulaIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSocialPartyMemberButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::ClassParams = {
		&USBZSocialPartyMemberButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSocialPartyMemberButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSocialPartyMemberButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSocialPartyMemberButton, 4128651751);
	template<> STARBREEZE_API UClass* StaticClass<USBZSocialPartyMemberButton>()
	{
		return USBZSocialPartyMemberButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSocialPartyMemberButton(Z_Construct_UClass_USBZSocialPartyMemberButton, &USBZSocialPartyMemberButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSocialPartyMemberButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSocialPartyMemberButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
