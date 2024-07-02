// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerControllerBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeNotifPayload();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionIdHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageInstigatorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerController::execApplyCameraFeedback)
	{
		P_GET_STRUCT_REF(FSBZLocalPlayerFeedbackParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ApplyCameraFeedback(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClient_CheckIfPartyLeaderResponse)
	{
		P_GET_UBOOL(Z_Param_bIsPartyLeader);
		P_GET_PROPERTY(FStrProperty,Z_Param_PartyCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_CheckIfPartyLeaderResponse_Implementation(Z_Param_bIsPartyLeader,Z_Param_PartyCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClient_RestartAccepted)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RestartAccepted_Implementation(Z_Param_PlayerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClient_RestartInitiate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondsRemaining);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RestartInitiate_Implementation(Z_Param_SecondsRemaining);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClient_RestartTimeExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RestartTimeExpired_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClient_SetViewTargetCollection)
	{
		P_GET_OBJECT(UObject,Z_Param_InViewTargetCollectionObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_InViewTargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SetViewTargetCollection_Implementation(Z_Param_InViewTargetCollectionObject,Z_Param_InViewTargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClient_SkipCreateMergeParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SkipCreateMergeParty_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClient_UnsetViewTargetCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_UnsetViewTargetCollection_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execClientReceiveReward)
	{
		P_GET_STRUCT(FChallengeNotifPayload,Z_Param_ChallengeReward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReceiveReward_Implementation(Z_Param_ChallengeReward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execFadeOutCameraFeedback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CameraFeedbackID);
		P_GET_UBOOL(Z_Param_bIsAutoRemoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FadeOutCameraFeedback(Z_Param_CameraFeedbackID,Z_Param_bIsAutoRemoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execGetViewTargetCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<ISBZViewTargetCollectionInterface>*)Z_Param__Result=P_THIS->GetViewTargetCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execOnPlayerCameraManagerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerCameraManagerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execRemoveCameraFeedback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CameraFeedbackID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCameraFeedback(Z_Param_CameraFeedbackID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_CheckIfPartyLeader)
	{
		P_GET_UBOOL(Z_Param_bMergePartySelected);
		P_GET_UBOOL(Z_Param_bIsPartyLeader);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPartyMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CheckIfPartyLeader_Implementation(Z_Param_bMergePartySelected,Z_Param_bIsPartyLeader,Z_Param_NumberOfPartyMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_DebugPlayMontage)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_DebugPlayMontage_Implementation(Z_Param_Actor,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_DebugTeleportTo)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_DebugTeleportTo_Implementation(Z_Param_Location,Z_Param_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_RequestMergeParty)
	{
		P_GET_UBOOL(Z_Param_bIsSelected);
		P_GET_TARRAY(FString,Z_Param_PartyMemberPlayerIdArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_RequestMergeParty_Implementation(Z_Param_bIsSelected,Z_Param_PartyMemberPlayerIdArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_RestartLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_RestartLevel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_RestartRequested)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RestartRequested_Validate(Z_Param_PlayerID))
		{
			RPC_ValidateFailed(TEXT("Server_RestartRequested_Validate"));
			return;
		}
		P_THIS->Server_RestartRequested_Implementation(Z_Param_PlayerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_SetCurrentSpectateTargetPlayerID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetCurrentSpectateTargetPlayerID_Implementation(Z_Param_InID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_SetCurrentViewTargetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InViewTargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetCurrentViewTargetIndex_Implementation(Z_Param_InViewTargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_SetPartyCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PartyCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetPartyCode_Implementation(Z_Param_PartyCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_SetViewTargetCollection)
	{
		P_GET_OBJECT(UObject,Z_Param_InViewTargetCollectionObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_InViewTargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetViewTargetCollection_Implementation(Z_Param_InViewTargetCollectionObject,Z_Param_InViewTargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execServer_UnsetViewTargetCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_UnsetViewTargetCollection_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execSetCameraFeedbackIntensity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CameraFeedbackID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCameraFeedbackIntensity(Z_Param_CameraFeedbackID,Z_Param_Intensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerController::execSetViewTargetCollection)
	{
		P_GET_TINTERFACE_REF(ISBZViewTargetCollectionInterface,Z_Param_Out_InViewTargetCollection);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewTargetCollection(Z_Param_Out_InViewTargetCollection,Z_Param_Offset);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPlayerController_Client_CheckIfPartyLeaderResponse = FName(TEXT("Client_CheckIfPartyLeaderResponse"));
	void ASBZPlayerController::Client_CheckIfPartyLeaderResponse(bool bIsPartyLeader, const FString& PartyCode)
	{
		SBZPlayerController_eventClient_CheckIfPartyLeaderResponse_Parms Parms;
		Parms.bIsPartyLeader=bIsPartyLeader ? true : false;
		Parms.PartyCode=PartyCode;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Client_CheckIfPartyLeaderResponse),&Parms);
	}
	static FName NAME_ASBZPlayerController_Client_RestartAccepted = FName(TEXT("Client_RestartAccepted"));
	void ASBZPlayerController::Client_RestartAccepted(FUniqueNetIdRepl const& PlayerID)
	{
		SBZPlayerController_eventClient_RestartAccepted_Parms Parms;
		Parms.PlayerID=PlayerID;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Client_RestartAccepted),&Parms);
	}
	static FName NAME_ASBZPlayerController_Client_RestartInitiate = FName(TEXT("Client_RestartInitiate"));
	void ASBZPlayerController::Client_RestartInitiate(float SecondsRemaining)
	{
		SBZPlayerController_eventClient_RestartInitiate_Parms Parms;
		Parms.SecondsRemaining=SecondsRemaining;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Client_RestartInitiate),&Parms);
	}
	static FName NAME_ASBZPlayerController_Client_RestartTimeExpired = FName(TEXT("Client_RestartTimeExpired"));
	void ASBZPlayerController::Client_RestartTimeExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Client_RestartTimeExpired),NULL);
	}
	static FName NAME_ASBZPlayerController_Client_SetViewTargetCollection = FName(TEXT("Client_SetViewTargetCollection"));
	void ASBZPlayerController::Client_SetViewTargetCollection(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex)
	{
		SBZPlayerController_eventClient_SetViewTargetCollection_Parms Parms;
		Parms.InViewTargetCollectionObject=InViewTargetCollectionObject;
		Parms.InViewTargetIndex=InViewTargetIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Client_SetViewTargetCollection),&Parms);
	}
	static FName NAME_ASBZPlayerController_Client_SkipCreateMergeParty = FName(TEXT("Client_SkipCreateMergeParty"));
	void ASBZPlayerController::Client_SkipCreateMergeParty()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Client_SkipCreateMergeParty),NULL);
	}
	static FName NAME_ASBZPlayerController_Client_UnsetViewTargetCollection = FName(TEXT("Client_UnsetViewTargetCollection"));
	void ASBZPlayerController::Client_UnsetViewTargetCollection()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Client_UnsetViewTargetCollection),NULL);
	}
	static FName NAME_ASBZPlayerController_ClientReceiveReward = FName(TEXT("ClientReceiveReward"));
	void ASBZPlayerController::ClientReceiveReward(FChallengeNotifPayload const& ChallengeReward)
	{
		SBZPlayerController_eventClientReceiveReward_Parms Parms;
		Parms.ChallengeReward=ChallengeReward;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_ClientReceiveReward),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_CheckIfPartyLeader = FName(TEXT("Server_CheckIfPartyLeader"));
	void ASBZPlayerController::Server_CheckIfPartyLeader(bool bMergePartySelected, bool bIsPartyLeader, const int32 NumberOfPartyMembers)
	{
		SBZPlayerController_eventServer_CheckIfPartyLeader_Parms Parms;
		Parms.bMergePartySelected=bMergePartySelected ? true : false;
		Parms.bIsPartyLeader=bIsPartyLeader ? true : false;
		Parms.NumberOfPartyMembers=NumberOfPartyMembers;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_CheckIfPartyLeader),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_DebugPlayMontage = FName(TEXT("Server_DebugPlayMontage"));
	void ASBZPlayerController::Server_DebugPlayMontage(AActor* Actor, UAnimMontage* Montage)
	{
		SBZPlayerController_eventServer_DebugPlayMontage_Parms Parms;
		Parms.Actor=Actor;
		Parms.Montage=Montage;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_DebugPlayMontage),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_DebugTeleportTo = FName(TEXT("Server_DebugTeleportTo"));
	void ASBZPlayerController::Server_DebugTeleportTo(FVector const& Location, const float Yaw)
	{
		SBZPlayerController_eventServer_DebugTeleportTo_Parms Parms;
		Parms.Location=Location;
		Parms.Yaw=Yaw;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_DebugTeleportTo),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_RequestMergeParty = FName(TEXT("Server_RequestMergeParty"));
	void ASBZPlayerController::Server_RequestMergeParty(bool bIsSelected, TArray<FString> const& PartyMemberPlayerIdArray)
	{
		SBZPlayerController_eventServer_RequestMergeParty_Parms Parms;
		Parms.bIsSelected=bIsSelected ? true : false;
		Parms.PartyMemberPlayerIdArray=PartyMemberPlayerIdArray;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_RequestMergeParty),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_RestartLevel = FName(TEXT("Server_RestartLevel"));
	void ASBZPlayerController::Server_RestartLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_RestartLevel),NULL);
	}
	static FName NAME_ASBZPlayerController_Server_RestartRequested = FName(TEXT("Server_RestartRequested"));
	void ASBZPlayerController::Server_RestartRequested(FUniqueNetIdRepl PlayerID)
	{
		SBZPlayerController_eventServer_RestartRequested_Parms Parms;
		Parms.PlayerID=PlayerID;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_RestartRequested),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID = FName(TEXT("Server_SetCurrentSpectateTargetPlayerID"));
	void ASBZPlayerController::Server_SetCurrentSpectateTargetPlayerID(int32 InID)
	{
		SBZPlayerController_eventServer_SetCurrentSpectateTargetPlayerID_Parms Parms;
		Parms.InID=InID;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_SetCurrentViewTargetIndex = FName(TEXT("Server_SetCurrentViewTargetIndex"));
	void ASBZPlayerController::Server_SetCurrentViewTargetIndex(int32 InViewTargetIndex)
	{
		SBZPlayerController_eventServer_SetCurrentViewTargetIndex_Parms Parms;
		Parms.InViewTargetIndex=InViewTargetIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_SetCurrentViewTargetIndex),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_SetPartyCode = FName(TEXT("Server_SetPartyCode"));
	void ASBZPlayerController::Server_SetPartyCode(const FString& PartyCode)
	{
		SBZPlayerController_eventServer_SetPartyCode_Parms Parms;
		Parms.PartyCode=PartyCode;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_SetPartyCode),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_SetViewTargetCollection = FName(TEXT("Server_SetViewTargetCollection"));
	void ASBZPlayerController::Server_SetViewTargetCollection(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex)
	{
		SBZPlayerController_eventServer_SetViewTargetCollection_Parms Parms;
		Parms.InViewTargetCollectionObject=InViewTargetCollectionObject;
		Parms.InViewTargetIndex=InViewTargetIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_SetViewTargetCollection),&Parms);
	}
	static FName NAME_ASBZPlayerController_Server_UnsetViewTargetCollection = FName(TEXT("Server_UnsetViewTargetCollection"));
	void ASBZPlayerController::Server_UnsetViewTargetCollection()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerController_Server_UnsetViewTargetCollection),NULL);
	}
	void ASBZPlayerController::StaticRegisterNativesASBZPlayerController()
	{
		UClass* Class = ASBZPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCameraFeedback", &ASBZPlayerController::execApplyCameraFeedback },
			{ "Client_CheckIfPartyLeaderResponse", &ASBZPlayerController::execClient_CheckIfPartyLeaderResponse },
			{ "Client_RestartAccepted", &ASBZPlayerController::execClient_RestartAccepted },
			{ "Client_RestartInitiate", &ASBZPlayerController::execClient_RestartInitiate },
			{ "Client_RestartTimeExpired", &ASBZPlayerController::execClient_RestartTimeExpired },
			{ "Client_SetViewTargetCollection", &ASBZPlayerController::execClient_SetViewTargetCollection },
			{ "Client_SkipCreateMergeParty", &ASBZPlayerController::execClient_SkipCreateMergeParty },
			{ "Client_UnsetViewTargetCollection", &ASBZPlayerController::execClient_UnsetViewTargetCollection },
			{ "ClientReceiveReward", &ASBZPlayerController::execClientReceiveReward },
			{ "FadeOutCameraFeedback", &ASBZPlayerController::execFadeOutCameraFeedback },
			{ "GetViewTargetCollection", &ASBZPlayerController::execGetViewTargetCollection },
			{ "OnPlayerCameraManagerEndPlay", &ASBZPlayerController::execOnPlayerCameraManagerEndPlay },
			{ "RemoveCameraFeedback", &ASBZPlayerController::execRemoveCameraFeedback },
			{ "Server_CheckIfPartyLeader", &ASBZPlayerController::execServer_CheckIfPartyLeader },
			{ "Server_DebugPlayMontage", &ASBZPlayerController::execServer_DebugPlayMontage },
			{ "Server_DebugTeleportTo", &ASBZPlayerController::execServer_DebugTeleportTo },
			{ "Server_RequestMergeParty", &ASBZPlayerController::execServer_RequestMergeParty },
			{ "Server_RestartLevel", &ASBZPlayerController::execServer_RestartLevel },
			{ "Server_RestartRequested", &ASBZPlayerController::execServer_RestartRequested },
			{ "Server_SetCurrentSpectateTargetPlayerID", &ASBZPlayerController::execServer_SetCurrentSpectateTargetPlayerID },
			{ "Server_SetCurrentViewTargetIndex", &ASBZPlayerController::execServer_SetCurrentViewTargetIndex },
			{ "Server_SetPartyCode", &ASBZPlayerController::execServer_SetPartyCode },
			{ "Server_SetViewTargetCollection", &ASBZPlayerController::execServer_SetViewTargetCollection },
			{ "Server_UnsetViewTargetCollection", &ASBZPlayerController::execServer_UnsetViewTargetCollection },
			{ "SetCameraFeedbackIntensity", &ASBZPlayerController::execSetCameraFeedbackIntensity },
			{ "SetViewTargetCollection", &ASBZPlayerController::execSetViewTargetCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics
	{
		struct SBZPlayerController_eventApplyCameraFeedback_Parms
		{
			FSBZLocalPlayerFeedbackParameters Parameters;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventApplyCameraFeedback_Parms, Parameters), Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventApplyCameraFeedback_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "ApplyCameraFeedback", nullptr, nullptr, sizeof(SBZPlayerController_eventApplyCameraFeedback_Parms), Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics
	{
		static void NewProp_bIsPartyLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartyLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_bIsPartyLeader_SetBit(void* Obj)
	{
		((SBZPlayerController_eventClient_CheckIfPartyLeaderResponse_Parms*)Obj)->bIsPartyLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_bIsPartyLeader = { "bIsPartyLeader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventClient_CheckIfPartyLeaderResponse_Parms), &Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_bIsPartyLeader_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_PartyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventClient_CheckIfPartyLeaderResponse_Parms, PartyCode), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_PartyCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_bIsPartyLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::NewProp_PartyCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Client_CheckIfPartyLeaderResponse", nullptr, nullptr, sizeof(SBZPlayerController_eventClient_CheckIfPartyLeaderResponse_Parms), Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::NewProp_PlayerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventClient_RestartAccepted_Parms, PlayerID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::NewProp_PlayerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::NewProp_PlayerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Client_RestartAccepted", nullptr, nullptr, sizeof(SBZPlayerController_eventClient_RestartAccepted_Parms), Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::NewProp_SecondsRemaining = { "SecondsRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventClient_RestartInitiate_Parms, SecondsRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::NewProp_SecondsRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Client_RestartInitiate", nullptr, nullptr, sizeof(SBZPlayerController_eventClient_RestartInitiate_Parms), Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Client_RestartTimeExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InViewTargetCollectionObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InViewTargetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::NewProp_InViewTargetCollectionObject = { "InViewTargetCollectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventClient_SetViewTargetCollection_Parms, InViewTargetCollectionObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::NewProp_InViewTargetIndex = { "InViewTargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventClient_SetViewTargetCollection_Parms, InViewTargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::NewProp_InViewTargetCollectionObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::NewProp_InViewTargetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Client_SetViewTargetCollection", nullptr, nullptr, sizeof(SBZPlayerController_eventClient_SetViewTargetCollection_Parms), Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Client_SkipCreateMergeParty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Client_UnsetViewTargetCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::NewProp_ChallengeReward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::NewProp_ChallengeReward = { "ChallengeReward", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventClientReceiveReward_Parms, ChallengeReward), Z_Construct_UScriptStruct_FChallengeNotifPayload, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::NewProp_ChallengeReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::NewProp_ChallengeReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::NewProp_ChallengeReward,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "ClientReceiveReward", nullptr, nullptr, sizeof(SBZPlayerController_eventClientReceiveReward_Parms), Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics
	{
		struct SBZPlayerController_eventFadeOutCameraFeedback_Parms
		{
			int32 CameraFeedbackID;
			bool bIsAutoRemoved;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraFeedbackID;
		static void NewProp_bIsAutoRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoRemoved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_CameraFeedbackID = { "CameraFeedbackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventFadeOutCameraFeedback_Parms, CameraFeedbackID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_bIsAutoRemoved_SetBit(void* Obj)
	{
		((SBZPlayerController_eventFadeOutCameraFeedback_Parms*)Obj)->bIsAutoRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_bIsAutoRemoved = { "bIsAutoRemoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventFadeOutCameraFeedback_Parms), &Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_bIsAutoRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerController_eventFadeOutCameraFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventFadeOutCameraFeedback_Parms), &Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_CameraFeedbackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_bIsAutoRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "FadeOutCameraFeedback", nullptr, nullptr, sizeof(SBZPlayerController_eventFadeOutCameraFeedback_Parms), Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics
	{
		struct SBZPlayerController_eventGetViewTargetCollection_Parms
		{
			TScriptInterface<ISBZViewTargetCollectionInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventGetViewTargetCollection_Parms, ReturnValue), Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "GetViewTargetCollection", nullptr, nullptr, sizeof(SBZPlayerController_eventGetViewTargetCollection_Parms), Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics
	{
		struct SBZPlayerController_eventOnPlayerCameraManagerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventOnPlayerCameraManagerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventOnPlayerCameraManagerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "OnPlayerCameraManagerEndPlay", nullptr, nullptr, sizeof(SBZPlayerController_eventOnPlayerCameraManagerEndPlay_Parms), Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics
	{
		struct SBZPlayerController_eventRemoveCameraFeedback_Parms
		{
			int32 CameraFeedbackID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraFeedbackID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::NewProp_CameraFeedbackID = { "CameraFeedbackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventRemoveCameraFeedback_Parms, CameraFeedbackID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerController_eventRemoveCameraFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventRemoveCameraFeedback_Parms), &Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::NewProp_CameraFeedbackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "RemoveCameraFeedback", nullptr, nullptr, sizeof(SBZPlayerController_eventRemoveCameraFeedback_Parms), Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergePartySelected_MetaData[];
#endif
		static void NewProp_bMergePartySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergePartySelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPartyLeader_MetaData[];
#endif
		static void NewProp_bIsPartyLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartyLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPartyMembers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bMergePartySelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bMergePartySelected_SetBit(void* Obj)
	{
		((SBZPlayerController_eventServer_CheckIfPartyLeader_Parms*)Obj)->bMergePartySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bMergePartySelected = { "bMergePartySelected", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventServer_CheckIfPartyLeader_Parms), &Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bMergePartySelected_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bMergePartySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bMergePartySelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bIsPartyLeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bIsPartyLeader_SetBit(void* Obj)
	{
		((SBZPlayerController_eventServer_CheckIfPartyLeader_Parms*)Obj)->bIsPartyLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bIsPartyLeader = { "bIsPartyLeader", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventServer_CheckIfPartyLeader_Parms), &Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bIsPartyLeader_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bIsPartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bIsPartyLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_NumberOfPartyMembers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_NumberOfPartyMembers = { "NumberOfPartyMembers", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_CheckIfPartyLeader_Parms, NumberOfPartyMembers), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_NumberOfPartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_NumberOfPartyMembers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bMergePartySelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_bIsPartyLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::NewProp_NumberOfPartyMembers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_CheckIfPartyLeader", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_CheckIfPartyLeader_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_DebugPlayMontage_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_DebugPlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_DebugPlayMontage", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_DebugPlayMontage_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_DebugTeleportTo_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Yaw_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_DebugTeleportTo_Parms, Yaw), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Yaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_DebugTeleportTo", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_DebugTeleportTo_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics
	{
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyMemberPlayerIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMemberPlayerIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyMemberPlayerIdArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((SBZPlayerController_eventServer_RequestMergeParty_Parms*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventServer_RequestMergeParty_Parms), &Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_PartyMemberPlayerIdArray_Inner = { "PartyMemberPlayerIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_PartyMemberPlayerIdArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_PartyMemberPlayerIdArray = { "PartyMemberPlayerIdArray", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_RequestMergeParty_Parms, PartyMemberPlayerIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_PartyMemberPlayerIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_PartyMemberPlayerIdArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_PartyMemberPlayerIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::NewProp_PartyMemberPlayerIdArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_RequestMergeParty", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_RequestMergeParty_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_RestartLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_RestartRequested_Parms, PlayerID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::NewProp_PlayerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_RestartRequested", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_RestartRequested_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_SetCurrentSpectateTargetPlayerID_Parms, InID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::NewProp_InID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_SetCurrentSpectateTargetPlayerID", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_SetCurrentSpectateTargetPlayerID_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InViewTargetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::NewProp_InViewTargetIndex = { "InViewTargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_SetCurrentViewTargetIndex_Parms, InViewTargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::NewProp_InViewTargetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_SetCurrentViewTargetIndex", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_SetCurrentViewTargetIndex_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::NewProp_PartyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_SetPartyCode_Parms, PartyCode), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::NewProp_PartyCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::NewProp_PartyCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_SetPartyCode", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_SetPartyCode_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InViewTargetCollectionObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InViewTargetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::NewProp_InViewTargetCollectionObject = { "InViewTargetCollectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_SetViewTargetCollection_Parms, InViewTargetCollectionObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::NewProp_InViewTargetIndex = { "InViewTargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventServer_SetViewTargetCollection_Parms, InViewTargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::NewProp_InViewTargetCollectionObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::NewProp_InViewTargetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_SetViewTargetCollection", nullptr, nullptr, sizeof(SBZPlayerController_eventServer_SetViewTargetCollection_Parms), Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "Server_UnsetViewTargetCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics
	{
		struct SBZPlayerController_eventSetCameraFeedbackIntensity_Parms
		{
			int32 CameraFeedbackID;
			float Intensity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraFeedbackID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_CameraFeedbackID = { "CameraFeedbackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventSetCameraFeedbackIntensity_Parms, CameraFeedbackID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventSetCameraFeedbackIntensity_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerController_eventSetCameraFeedbackIntensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerController_eventSetCameraFeedbackIntensity_Parms), &Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_CameraFeedbackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "SetCameraFeedbackIntensity", nullptr, nullptr, sizeof(SBZPlayerController_eventSetCameraFeedbackIntensity_Parms), Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics
	{
		struct SBZPlayerController_eventSetViewTargetCollection_Parms
		{
			TScriptInterface<ISBZViewTargetCollectionInterface> InViewTargetCollection;
			int32 Offset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InViewTargetCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InViewTargetCollection;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::NewProp_InViewTargetCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::NewProp_InViewTargetCollection = { "InViewTargetCollection", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventSetViewTargetCollection_Parms, InViewTargetCollection), Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::NewProp_InViewTargetCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::NewProp_InViewTargetCollection_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerController_eventSetViewTargetCollection_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::NewProp_InViewTargetCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerController, nullptr, "SetViewTargetCollection", nullptr, nullptr, sizeof(SBZPlayerController_eventSetViewTargetCollection_Parms), Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister()
	{
		return ASBZPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatCameraFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefeatCameraFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDefeatCameraFeedbackIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDefeatCameraFeedbackIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedCameraFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TasedCameraFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubduedCameraFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubduedCameraFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthDamageCameraFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthDamageCameraFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthDamageCameraFeedbackThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDamageCameraFeedbackThreshold;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TagFeedbackClassMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagFeedbackClassMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagFeedbackClassMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TagFeedbackClassMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TagFeedbackIDMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagFeedbackIDMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagFeedbackIDMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TagFeedbackIDMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FadedOutTagFeedbackIDMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadedOutTagFeedbackIDMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadedOutTagFeedbackIDMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FadedOutTagFeedbackIDMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetCameraFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ViewTargetCameraFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedViewTargetCameraFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DestroyedViewTargetCameraFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedViewTargetCameraFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChangedViewTargetCameraFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ViewTargetCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpectateTargetPlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSpectateTargetPlayerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionLockCameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionLockCameraData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppliedDefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedDefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppliedDefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlayerControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerController_ApplyCameraFeedback, "ApplyCameraFeedback" }, // 2238192576
		{ &Z_Construct_UFunction_ASBZPlayerController_Client_CheckIfPartyLeaderResponse, "Client_CheckIfPartyLeaderResponse" }, // 2372266971
		{ &Z_Construct_UFunction_ASBZPlayerController_Client_RestartAccepted, "Client_RestartAccepted" }, // 2510891797
		{ &Z_Construct_UFunction_ASBZPlayerController_Client_RestartInitiate, "Client_RestartInitiate" }, // 1382899127
		{ &Z_Construct_UFunction_ASBZPlayerController_Client_RestartTimeExpired, "Client_RestartTimeExpired" }, // 3926081531
		{ &Z_Construct_UFunction_ASBZPlayerController_Client_SetViewTargetCollection, "Client_SetViewTargetCollection" }, // 4177260985
		{ &Z_Construct_UFunction_ASBZPlayerController_Client_SkipCreateMergeParty, "Client_SkipCreateMergeParty" }, // 2500160769
		{ &Z_Construct_UFunction_ASBZPlayerController_Client_UnsetViewTargetCollection, "Client_UnsetViewTargetCollection" }, // 1430562205
		{ &Z_Construct_UFunction_ASBZPlayerController_ClientReceiveReward, "ClientReceiveReward" }, // 2135446732
		{ &Z_Construct_UFunction_ASBZPlayerController_FadeOutCameraFeedback, "FadeOutCameraFeedback" }, // 1609351626
		{ &Z_Construct_UFunction_ASBZPlayerController_GetViewTargetCollection, "GetViewTargetCollection" }, // 3959798138
		{ &Z_Construct_UFunction_ASBZPlayerController_OnPlayerCameraManagerEndPlay, "OnPlayerCameraManagerEndPlay" }, // 3230754812
		{ &Z_Construct_UFunction_ASBZPlayerController_RemoveCameraFeedback, "RemoveCameraFeedback" }, // 1914679289
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_CheckIfPartyLeader, "Server_CheckIfPartyLeader" }, // 1030874503
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_DebugPlayMontage, "Server_DebugPlayMontage" }, // 3272882365
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_DebugTeleportTo, "Server_DebugTeleportTo" }, // 3829091254
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_RequestMergeParty, "Server_RequestMergeParty" }, // 3026436787
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_RestartLevel, "Server_RestartLevel" }, // 2388488618
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_RestartRequested, "Server_RestartRequested" }, // 2919494524
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentSpectateTargetPlayerID, "Server_SetCurrentSpectateTargetPlayerID" }, // 3939179691
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_SetCurrentViewTargetIndex, "Server_SetCurrentViewTargetIndex" }, // 1605985013
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_SetPartyCode, "Server_SetPartyCode" }, // 4113324337
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_SetViewTargetCollection, "Server_SetViewTargetCollection" }, // 2446393938
		{ &Z_Construct_UFunction_ASBZPlayerController_Server_UnsetViewTargetCollection, "Server_UnsetViewTargetCollection" }, // 1248958319
		{ &Z_Construct_UFunction_ASBZPlayerController_SetCameraFeedbackIntensity, "SetCameraFeedbackIntensity" }, // 2101205445
		{ &Z_Construct_UFunction_ASBZPlayerController_SetViewTargetCollection, "SetViewTargetCollection" }, // 3857523068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_Faction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, Faction), Z_Construct_UScriptStruct_FSBZFactionIdHelper, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_Faction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DefeatCameraFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DefeatCameraFeedbackClass = { "DefeatCameraFeedbackClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, DefeatCameraFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DefeatCameraFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DefeatCameraFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_MinDefeatCameraFeedbackIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_MinDefeatCameraFeedbackIntensity = { "MinDefeatCameraFeedbackIntensity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, MinDefeatCameraFeedbackIntensity), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_MinDefeatCameraFeedbackIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_MinDefeatCameraFeedbackIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TasedCameraFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TasedCameraFeedbackClass = { "TasedCameraFeedbackClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, TasedCameraFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TasedCameraFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TasedCameraFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_SubduedCameraFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_SubduedCameraFeedbackClass = { "SubduedCameraFeedbackClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, SubduedCameraFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_SubduedCameraFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_SubduedCameraFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackClass = { "HealthDamageCameraFeedbackClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, HealthDamageCameraFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackThreshold = { "HealthDamageCameraFeedbackThreshold", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, HealthDamageCameraFeedbackThreshold), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackThreshold_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap_ValueProp = { "TagFeedbackClassMap", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap_Key_KeyProp = { "TagFeedbackClassMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap = { "TagFeedbackClassMap", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, TagFeedbackClassMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap_ValueProp = { "TagFeedbackIDMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap_Key_KeyProp = { "TagFeedbackIDMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap = { "TagFeedbackIDMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, TagFeedbackIDMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap_ValueProp = { "FadedOutTagFeedbackIDMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap_Key_KeyProp = { "FadedOutTagFeedbackIDMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap = { "FadedOutTagFeedbackIDMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, FadedOutTagFeedbackIDMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCameraFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCameraFeedbackClass = { "ViewTargetCameraFeedbackClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, ViewTargetCameraFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCameraFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCameraFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DestroyedViewTargetCameraFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DestroyedViewTargetCameraFeedbackClass = { "DestroyedViewTargetCameraFeedbackClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, DestroyedViewTargetCameraFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DestroyedViewTargetCameraFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DestroyedViewTargetCameraFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ChangedViewTargetCameraFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ChangedViewTargetCameraFeedbackClass = { "ChangedViewTargetCameraFeedbackClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, ChangedViewTargetCameraFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ChangedViewTargetCameraFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ChangedViewTargetCameraFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCollection = { "ViewTargetCollection", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, ViewTargetCollection), Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_CurrentSpectateTargetPlayerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_CurrentSpectateTargetPlayerID = { "CurrentSpectateTargetPlayerID", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, CurrentSpectateTargetPlayerID), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_CurrentSpectateTargetPlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_CurrentSpectateTargetPlayerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_InteractionLockCameraData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_InteractionLockCameraData = { "InteractionLockCameraData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, InteractionLockCameraData), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_InteractionLockCameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_InteractionLockCameraData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_AppliedDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_AppliedDefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerController" },
		{ "ModuleRelativePath", "Public/SBZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_AppliedDefeatState = { "AppliedDefeatState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerController, AppliedDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_AppliedDefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_AppliedDefeatState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_Faction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DefeatCameraFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_MinDefeatCameraFeedbackIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TasedCameraFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_SubduedCameraFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_HealthDamageCameraFeedbackThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackClassMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_TagFeedbackIDMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_FadedOutTagFeedbackIDMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCameraFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_DestroyedViewTargetCameraFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ChangedViewTargetCameraFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_ViewTargetCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_CurrentSpectateTargetPlayerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_InteractionLockCameraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_AppliedDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerController_Statics::NewProp_AppliedDefeatState,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZPlayerController, IGenericTeamAgentInterface), false },
			{ Z_Construct_UClass_USBZDamageInstigatorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZPlayerController, ISBZDamageInstigatorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerController_Statics::ClassParams = {
		&ASBZPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerController, 4087293594);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerController>()
	{
		return ASBZPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerController(Z_Construct_UClass_ASBZPlayerController, &ASBZPlayerController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
