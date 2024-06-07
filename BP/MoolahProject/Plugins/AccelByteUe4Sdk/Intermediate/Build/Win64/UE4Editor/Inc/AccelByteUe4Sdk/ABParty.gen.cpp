// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABParty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABParty() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABParty_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABParty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyCreateResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGetPartyDataRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetDataResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGetPartyStorageRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetStorageResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDeleteCodeResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGenerateCodeResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetCodeResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DInfoPartyResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyInviteRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyInviteResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyJoinResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyJoinViaCodeResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyKickRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyKickResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLeavePartyResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyPromoteLeaderRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyPromoteLeaderResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyRejectRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyRejectResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataUpdateNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetInvitedNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyInviteNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyJoinNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyKickNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyLeaveNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyMemberConnectNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyMemberDisconnectNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyMemberLeaveNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyRejectNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyUpdateNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FWritePartyStorageRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyWriteDataResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABParty::execCreateParty)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateParty(FDPartyCreateResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execGetPartyData)
	{
		P_GET_STRUCT_REF(FGetPartyDataRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPartyData(Z_Param_Out_Request,FDPartyGetDataResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execGetPartyStorage)
	{
		P_GET_STRUCT_REF(FGetPartyStorageRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPartyStorage(Z_Param_Out_Request,FDPartyGetStorageResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyDeleteCode)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyDeleteCode(FDPartyDeleteCodeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyGenerateCode)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyGenerateCode(FDPartyGenerateCodeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyGetCode)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyGetCode(FDPartyGetCodeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyInfo)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyInfo(FDInfoPartyResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyInvite)
	{
		P_GET_STRUCT(FPartyInviteRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyInvite(Z_Param_Request,FDPartyInviteResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyJoin)
	{
		P_GET_STRUCT_REF(FPartyJoinRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyJoin(Z_Param_Out_Request,FDPartyJoinResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyJoinViaCode)
	{
		P_GET_STRUCT_REF(FPartyJoinViaCodeRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyJoinViaCode(Z_Param_Out_Request,FDPartyJoinViaCodeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyKick)
	{
		P_GET_STRUCT_REF(FPartyKickRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyKick(Z_Param_Out_Request,FDPartyKickResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyLeave)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyLeave(FDLeavePartyResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyPromoteLeader)
	{
		P_GET_STRUCT_REF(FPartyPromoteLeaderRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyPromoteLeader(Z_Param_Out_Request,FDPartyPromoteLeaderResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execPartyReject)
	{
		P_GET_STRUCT(FPartyRejectRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PartyReject(Z_Param_Request,FDPartyRejectResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyDataUpdate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyDataUpdate(FDPartyDataUpdateNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyDataUpdateNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyDataUpdateNotifDelegate(FDPartyDataUpdateNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyGetInvited)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyGetInvited(FDPartyGetInvitedNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyInvite)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyInvite(FDPartyInviteNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyJoin)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyJoin(FDPartyJoinNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyKick)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyKick(FDPartyKickNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyLeave)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyLeave(FDPartyLeaveNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyMemberConnect)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyMemberConnect(FDPartyMemberConnectNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyMemberDisconnect)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyMemberDisconnect(FDPartyMemberDisconnectNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyMemberLeave)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyMemberLeave(FDPartyMemberLeaveNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyReject)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyReject(FDPartyRejectNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetOnPartyUpdate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyUpdate(FDPartyUpdateNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execSetPartySizeLimit)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PartyId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPartySizeLimit(Z_Param_PartyId,Z_Param_Limit,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABParty::execWritePartyStorage)
	{
		P_GET_STRUCT_REF(FWritePartyStorageRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WritePartyStorage(Z_Param_Out_Request,FDPartyWriteDataResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABParty::StaticRegisterNativesUABParty()
	{
		UClass* Class = UABParty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateParty", &UABParty::execCreateParty },
			{ "GetPartyData", &UABParty::execGetPartyData },
			{ "GetPartyStorage", &UABParty::execGetPartyStorage },
			{ "PartyDeleteCode", &UABParty::execPartyDeleteCode },
			{ "PartyGenerateCode", &UABParty::execPartyGenerateCode },
			{ "PartyGetCode", &UABParty::execPartyGetCode },
			{ "PartyInfo", &UABParty::execPartyInfo },
			{ "PartyInvite", &UABParty::execPartyInvite },
			{ "PartyJoin", &UABParty::execPartyJoin },
			{ "PartyJoinViaCode", &UABParty::execPartyJoinViaCode },
			{ "PartyKick", &UABParty::execPartyKick },
			{ "PartyLeave", &UABParty::execPartyLeave },
			{ "PartyPromoteLeader", &UABParty::execPartyPromoteLeader },
			{ "PartyReject", &UABParty::execPartyReject },
			{ "SetOnPartyDataUpdate", &UABParty::execSetOnPartyDataUpdate },
			{ "SetOnPartyDataUpdateNotifDelegate", &UABParty::execSetOnPartyDataUpdateNotifDelegate },
			{ "SetOnPartyGetInvited", &UABParty::execSetOnPartyGetInvited },
			{ "SetOnPartyInvite", &UABParty::execSetOnPartyInvite },
			{ "SetOnPartyJoin", &UABParty::execSetOnPartyJoin },
			{ "SetOnPartyKick", &UABParty::execSetOnPartyKick },
			{ "SetOnPartyLeave", &UABParty::execSetOnPartyLeave },
			{ "SetOnPartyMemberConnect", &UABParty::execSetOnPartyMemberConnect },
			{ "SetOnPartyMemberDisconnect", &UABParty::execSetOnPartyMemberDisconnect },
			{ "SetOnPartyMemberLeave", &UABParty::execSetOnPartyMemberLeave },
			{ "SetOnPartyReject", &UABParty::execSetOnPartyReject },
			{ "SetOnPartyUpdate", &UABParty::execSetOnPartyUpdate },
			{ "SetPartySizeLimit", &UABParty::execSetPartySizeLimit },
			{ "WritePartyStorage", &UABParty::execWritePartyStorage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABParty_CreateParty_Statics
	{
		struct ABParty_eventCreateParty_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_CreateParty_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventCreateParty_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyCreateResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_CreateParty_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventCreateParty_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_CreateParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_CreateParty_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_CreateParty_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_CreateParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_CreateParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "CreateParty", nullptr, nullptr, sizeof(ABParty_eventCreateParty_Parms), Z_Construct_UFunction_UABParty_CreateParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_CreateParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_CreateParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_CreateParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_CreateParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_CreateParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_GetPartyData_Statics
	{
		struct ABParty_eventGetPartyData_Parms
		{
			FGetPartyDataRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventGetPartyData_Parms, Request), Z_Construct_UScriptStruct_FGetPartyDataRequest, METADATA_PARAMS(Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventGetPartyData_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventGetPartyData_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_GetPartyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_GetPartyData_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_GetPartyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_GetPartyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "GetPartyData", nullptr, nullptr, sizeof(ABParty_eventGetPartyData_Parms), Z_Construct_UFunction_UABParty_GetPartyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_GetPartyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_GetPartyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_GetPartyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_GetPartyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_GetPartyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_GetPartyStorage_Statics
	{
		struct ABParty_eventGetPartyStorage_Parms
		{
			FGetPartyStorageRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventGetPartyStorage_Parms, Request), Z_Construct_UScriptStruct_FGetPartyStorageRequest, METADATA_PARAMS(Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventGetPartyStorage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetStorageResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventGetPartyStorage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "GetPartyStorage", nullptr, nullptr, sizeof(ABParty_eventGetPartyStorage_Parms), Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_GetPartyStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_GetPartyStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics
	{
		struct ABParty_eventPartyDeleteCode_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyDeleteCode_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDeleteCodeResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyDeleteCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyDeleteCode", nullptr, nullptr, sizeof(ABParty_eventPartyDeleteCode_Parms), Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyDeleteCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyDeleteCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics
	{
		struct ABParty_eventPartyGenerateCode_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyGenerateCode_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGenerateCodeResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyGenerateCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyGenerateCode", nullptr, nullptr, sizeof(ABParty_eventPartyGenerateCode_Parms), Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyGenerateCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyGenerateCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyGetCode_Statics
	{
		struct ABParty_eventPartyGetCode_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyGetCode_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyGetCode_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetCodeResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyGetCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyGetCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyGetCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyGetCode_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyGetCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyGetCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyGetCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyGetCode", nullptr, nullptr, sizeof(ABParty_eventPartyGetCode_Parms), Z_Construct_UFunction_UABParty_PartyGetCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyGetCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyGetCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyGetCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyGetCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyGetCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyInfo_Statics
	{
		struct ABParty_eventPartyInfo_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyInfo_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyInfo_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DInfoPartyResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyInfo_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyInfo_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyInfo_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyInfo_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyInfo", nullptr, nullptr, sizeof(ABParty_eventPartyInfo_Parms), Z_Construct_UFunction_UABParty_PartyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyInvite_Statics
	{
		struct ABParty_eventPartyInvite_Parms
		{
			FPartyInviteRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_PartyInvite_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyInvite_Parms, Request), Z_Construct_UScriptStruct_FPartyInviteRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyInvite_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyInvite_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyInviteResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyInvite_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyInvite_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyInvite_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyInvite_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyInvite_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyInvite", nullptr, nullptr, sizeof(ABParty_eventPartyInvite_Parms), Z_Construct_UFunction_UABParty_PartyInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyJoin_Statics
	{
		struct ABParty_eventPartyJoin_Parms
		{
			FPartyJoinRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyJoin_Parms, Request), Z_Construct_UScriptStruct_FPartyJoinRequest, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyJoin_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyJoinResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyJoin_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyJoin_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyJoin", nullptr, nullptr, sizeof(ABParty_eventPartyJoin_Parms), Z_Construct_UFunction_UABParty_PartyJoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyJoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics
	{
		struct ABParty_eventPartyJoinViaCode_Parms
		{
			FPartyJoinViaCodeRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyJoinViaCode_Parms, Request), Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyJoinViaCode_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyJoinViaCodeResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyJoinViaCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyJoinViaCode", nullptr, nullptr, sizeof(ABParty_eventPartyJoinViaCode_Parms), Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyJoinViaCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyJoinViaCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyKick_Statics
	{
		struct ABParty_eventPartyKick_Parms
		{
			FPartyKickRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyKick_Parms, Request), Z_Construct_UScriptStruct_FPartyKickRequest, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyKick_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyKickResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyKick_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyKick_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyKick", nullptr, nullptr, sizeof(ABParty_eventPartyKick_Parms), Z_Construct_UFunction_UABParty_PartyKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyLeave_Statics
	{
		struct ABParty_eventPartyLeave_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyLeave_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyLeave_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLeavePartyResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyLeave_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyLeave_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyLeave_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyLeave_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyLeave", nullptr, nullptr, sizeof(ABParty_eventPartyLeave_Parms), Z_Construct_UFunction_UABParty_PartyLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics
	{
		struct ABParty_eventPartyPromoteLeader_Parms
		{
			FPartyPromoteLeaderRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyPromoteLeader_Parms, Request), Z_Construct_UScriptStruct_FPartyPromoteLeaderRequest, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyPromoteLeader_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyPromoteLeaderResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyPromoteLeader_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyPromoteLeader", nullptr, nullptr, sizeof(ABParty_eventPartyPromoteLeader_Parms), Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyPromoteLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyPromoteLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_PartyReject_Statics
	{
		struct ABParty_eventPartyReject_Parms
		{
			FPartyRejectRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_PartyReject_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyReject_Parms, Request), Z_Construct_UScriptStruct_FPartyRejectRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyReject_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyReject_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyRejectResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_PartyReject_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventPartyReject_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_PartyReject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyReject_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyReject_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_PartyReject_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_PartyReject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_PartyReject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "PartyReject", nullptr, nullptr, sizeof(ABParty_eventPartyReject_Parms), Z_Construct_UFunction_UABParty_PartyReject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyReject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_PartyReject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_PartyReject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_PartyReject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_PartyReject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics
	{
		struct ABParty_eventSetOnPartyDataUpdate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyDataUpdate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataUpdateNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyDataUpdate", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyDataUpdate_Parms), Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics
	{
		struct ABParty_eventSetOnPartyDataUpdateNotifDelegate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyDataUpdateNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataUpdateNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyDataUpdateNotifDelegate", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyDataUpdateNotifDelegate_Parms), Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics
	{
		struct ABParty_eventSetOnPartyGetInvited_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyGetInvited_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyGetInvitedNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyGetInvited", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyGetInvited_Parms), Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyGetInvited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyGetInvited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics
	{
		struct ABParty_eventSetOnPartyInvite_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyInvite_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyInviteNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyInvite", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyInvite_Parms), Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics
	{
		struct ABParty_eventSetOnPartyJoin_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyJoin_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyJoinNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyJoin", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyJoin_Parms), Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics
	{
		struct ABParty_eventSetOnPartyKick_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyKick_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyKickNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyKick", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyKick_Parms), Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics
	{
		struct ABParty_eventSetOnPartyLeave_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyLeave_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyLeaveNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyLeave", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyLeave_Parms), Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics
	{
		struct ABParty_eventSetOnPartyMemberConnect_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyMemberConnect_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyMemberConnectNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyMemberConnect", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyMemberConnect_Parms), Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics
	{
		struct ABParty_eventSetOnPartyMemberDisconnect_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyMemberDisconnect_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyMemberDisconnectNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyMemberDisconnect", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyMemberDisconnect_Parms), Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics
	{
		struct ABParty_eventSetOnPartyMemberLeave_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyMemberLeave_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyMemberLeaveNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyMemberLeave", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyMemberLeave_Parms), Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics
	{
		struct ABParty_eventSetOnPartyReject_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyReject_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyRejectNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyReject", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyReject_Parms), Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyReject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyReject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics
	{
		struct ABParty_eventSetOnPartyUpdate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetOnPartyUpdate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyUpdateNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetOnPartyUpdate", nullptr, nullptr, sizeof(ABParty_eventSetOnPartyUpdate_Parms), Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetOnPartyUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetOnPartyUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics
	{
		struct ABParty_eventSetPartySizeLimit_Parms
		{
			FString PartyId;
			int32 Limit;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_PartyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetPartySizeLimit_Parms, PartyId), METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_PartyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetPartySizeLimit_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_Limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetPartySizeLimit_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventSetPartySizeLimit_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_PartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "SetPartySizeLimit", nullptr, nullptr, sizeof(ABParty_eventSetPartySizeLimit_Parms), Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_SetPartySizeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_SetPartySizeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABParty_WritePartyStorage_Statics
	{
		struct ABParty_eventWritePartyStorage_Parms
		{
			FWritePartyStorageRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventWritePartyStorage_Parms, Request), Z_Construct_UScriptStruct_FWritePartyStorageRequest, METADATA_PARAMS(Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventWritePartyStorage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyWriteDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABParty_eventWritePartyStorage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABParty, nullptr, "WritePartyStorage", nullptr, nullptr, sizeof(ABParty_eventWritePartyStorage_Parms), Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABParty_WritePartyStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABParty_WritePartyStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABParty_NoRegister()
	{
		return UABParty::StaticClass();
	}
	struct Z_Construct_UClass_UABParty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABParty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABParty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABParty_CreateParty, "CreateParty" }, // 1439820314
		{ &Z_Construct_UFunction_UABParty_GetPartyData, "GetPartyData" }, // 1178025540
		{ &Z_Construct_UFunction_UABParty_GetPartyStorage, "GetPartyStorage" }, // 3396342541
		{ &Z_Construct_UFunction_UABParty_PartyDeleteCode, "PartyDeleteCode" }, // 4284537802
		{ &Z_Construct_UFunction_UABParty_PartyGenerateCode, "PartyGenerateCode" }, // 717475625
		{ &Z_Construct_UFunction_UABParty_PartyGetCode, "PartyGetCode" }, // 2783799290
		{ &Z_Construct_UFunction_UABParty_PartyInfo, "PartyInfo" }, // 1036260756
		{ &Z_Construct_UFunction_UABParty_PartyInvite, "PartyInvite" }, // 3878794659
		{ &Z_Construct_UFunction_UABParty_PartyJoin, "PartyJoin" }, // 435091288
		{ &Z_Construct_UFunction_UABParty_PartyJoinViaCode, "PartyJoinViaCode" }, // 1152911313
		{ &Z_Construct_UFunction_UABParty_PartyKick, "PartyKick" }, // 2208720990
		{ &Z_Construct_UFunction_UABParty_PartyLeave, "PartyLeave" }, // 3870651311
		{ &Z_Construct_UFunction_UABParty_PartyPromoteLeader, "PartyPromoteLeader" }, // 1747985994
		{ &Z_Construct_UFunction_UABParty_PartyReject, "PartyReject" }, // 1812750759
		{ &Z_Construct_UFunction_UABParty_SetOnPartyDataUpdate, "SetOnPartyDataUpdate" }, // 2636209142
		{ &Z_Construct_UFunction_UABParty_SetOnPartyDataUpdateNotifDelegate, "SetOnPartyDataUpdateNotifDelegate" }, // 482974654
		{ &Z_Construct_UFunction_UABParty_SetOnPartyGetInvited, "SetOnPartyGetInvited" }, // 1740391056
		{ &Z_Construct_UFunction_UABParty_SetOnPartyInvite, "SetOnPartyInvite" }, // 2425307214
		{ &Z_Construct_UFunction_UABParty_SetOnPartyJoin, "SetOnPartyJoin" }, // 3055786253
		{ &Z_Construct_UFunction_UABParty_SetOnPartyKick, "SetOnPartyKick" }, // 1987734233
		{ &Z_Construct_UFunction_UABParty_SetOnPartyLeave, "SetOnPartyLeave" }, // 933667827
		{ &Z_Construct_UFunction_UABParty_SetOnPartyMemberConnect, "SetOnPartyMemberConnect" }, // 2688886945
		{ &Z_Construct_UFunction_UABParty_SetOnPartyMemberDisconnect, "SetOnPartyMemberDisconnect" }, // 63485459
		{ &Z_Construct_UFunction_UABParty_SetOnPartyMemberLeave, "SetOnPartyMemberLeave" }, // 710382296
		{ &Z_Construct_UFunction_UABParty_SetOnPartyReject, "SetOnPartyReject" }, // 1904888315
		{ &Z_Construct_UFunction_UABParty_SetOnPartyUpdate, "SetOnPartyUpdate" }, // 1945478930
		{ &Z_Construct_UFunction_UABParty_SetPartySizeLimit, "SetPartySizeLimit" }, // 896974509
		{ &Z_Construct_UFunction_UABParty_WritePartyStorage, "WritePartyStorage" }, // 2177594602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABParty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABParty.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABParty.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABParty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABParty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABParty_Statics::ClassParams = {
		&UABParty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABParty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABParty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABParty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABParty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABParty, 2368637591);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABParty>()
	{
		return UABParty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABParty(Z_Construct_UClass_UABParty, &UABParty::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABParty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABParty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
