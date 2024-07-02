// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMember();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_ChatChannelJoinDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PrivateMessageSendStatusDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PrivateMessageReceivedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PublicMessageSendStatusDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PublicMessageReceivedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyMessageSendStatusDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyMessageReceivedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyInvitationReceivedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyPlayerJoinDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyPlayerLeaveDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyPlayerKickDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyInfoUpdateDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PartyInvitesUpdateDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyInvitation();
// End Cross Module References
	DEFINE_FUNCTION(USBZPartyManager::execGetLobbyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZOnlineJoinType*)Z_Param__Result=P_THIS->GetLobbyType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execGetPartyLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPartyMember*)Z_Param__Result=P_THIS->GetPartyLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execGetPartyManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPartyManager**)Z_Param__Result=USBZPartyManager::GetPartyManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execGetPartyPlayersNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPartyPlayersNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execIsMatchmakingRequestedByPartyLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchmakingRequestedByPartyLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execSendJoinPublicChatChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SendJoinPublicChatChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execSendPartyMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPartyMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execSendPrivateMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPrivateMessage(Z_Param_PlayerId,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execSendPublicMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SendPublicMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManager::execSetLobbyType)
	{
		P_GET_ENUM(ESBZOnlineJoinType,Z_Param_InLobbyType);
		P_GET_UBOOL(Z_Param_bIsSaved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLobbyType(ESBZOnlineJoinType(Z_Param_InLobbyType),Z_Param_bIsSaved);
		P_NATIVE_END;
	}
	void USBZPartyManager::StaticRegisterNativesUSBZPartyManager()
	{
		UClass* Class = USBZPartyManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLobbyType", &USBZPartyManager::execGetLobbyType },
			{ "GetPartyLeader", &USBZPartyManager::execGetPartyLeader },
			{ "GetPartyManager", &USBZPartyManager::execGetPartyManager },
			{ "GetPartyPlayersNumber", &USBZPartyManager::execGetPartyPlayersNumber },
			{ "IsMatchmakingRequestedByPartyLeader", &USBZPartyManager::execIsMatchmakingRequestedByPartyLeader },
			{ "SendJoinPublicChatChannel", &USBZPartyManager::execSendJoinPublicChatChannel },
			{ "SendPartyMessage", &USBZPartyManager::execSendPartyMessage },
			{ "SendPrivateMessage", &USBZPartyManager::execSendPrivateMessage },
			{ "SendPublicMessage", &USBZPartyManager::execSendPublicMessage },
			{ "SetLobbyType", &USBZPartyManager::execSetLobbyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics
	{
		struct SBZPartyManager_eventGetLobbyType_Parms
		{
			ESBZOnlineJoinType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventGetLobbyType_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "GetLobbyType", nullptr, nullptr, sizeof(SBZPartyManager_eventGetLobbyType_Parms), Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_GetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_GetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics
	{
		struct SBZPartyManager_eventGetPartyLeader_Parms
		{
			FSBZPartyMember ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventGetPartyLeader_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPartyMember, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "GetPartyLeader", nullptr, nullptr, sizeof(SBZPartyManager_eventGetPartyLeader_Parms), Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_GetPartyLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_GetPartyLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics
	{
		struct SBZPartyManager_eventGetPartyManager_Parms
		{
			const UObject* WorldContextObject;
			USBZPartyManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventGetPartyManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventGetPartyManager_Parms, ReturnValue), Z_Construct_UClass_USBZPartyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "GetPartyManager", nullptr, nullptr, sizeof(SBZPartyManager_eventGetPartyManager_Parms), Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_GetPartyManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_GetPartyManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics
	{
		struct SBZPartyManager_eventGetPartyPlayersNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventGetPartyPlayersNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "GetPartyPlayersNumber", nullptr, nullptr, sizeof(SBZPartyManager_eventGetPartyPlayersNumber_Parms), Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics
	{
		struct SBZPartyManager_eventIsMatchmakingRequestedByPartyLeader_Parms
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
	void Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPartyManager_eventIsMatchmakingRequestedByPartyLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPartyManager_eventIsMatchmakingRequestedByPartyLeader_Parms), &Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "IsMatchmakingRequestedByPartyLeader", nullptr, nullptr, sizeof(SBZPartyManager_eventIsMatchmakingRequestedByPartyLeader_Parms), Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics
	{
		struct SBZPartyManager_eventSendJoinPublicChatChannel_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventSendJoinPublicChatChannel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "SendJoinPublicChatChannel", nullptr, nullptr, sizeof(SBZPartyManager_eventSendJoinPublicChatChannel_Parms), Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics
	{
		struct SBZPartyManager_eventSendPartyMessage_Parms
		{
			FString Message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventSendPartyMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPartyManager_eventSendPartyMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPartyManager_eventSendPartyMessage_Parms), &Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "SendPartyMessage", nullptr, nullptr, sizeof(SBZPartyManager_eventSendPartyMessage_Parms), Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_SendPartyMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_SendPartyMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics
	{
		struct SBZPartyManager_eventSendPrivateMessage_Parms
		{
			FString PlayerId;
			FString Message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventSendPrivateMessage_Parms, PlayerId), METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventSendPrivateMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPartyManager_eventSendPrivateMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPartyManager_eventSendPrivateMessage_Parms), &Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "SendPrivateMessage", nullptr, nullptr, sizeof(SBZPartyManager_eventSendPrivateMessage_Parms), Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics
	{
		struct SBZPartyManager_eventSendPublicMessage_Parms
		{
			FString Message;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventSendPublicMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventSendPublicMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "SendPublicMessage", nullptr, nullptr, sizeof(SBZPartyManager_eventSendPublicMessage_Parms), Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_SendPublicMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_SendPublicMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics
	{
		struct SBZPartyManager_eventSetLobbyType_Parms
		{
			ESBZOnlineJoinType InLobbyType;
			bool bIsSaved;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLobbyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InLobbyType;
		static void NewProp_bIsSaved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSaved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_InLobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_InLobbyType = { "InLobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManager_eventSetLobbyType_Parms, InLobbyType), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_bIsSaved_SetBit(void* Obj)
	{
		((SBZPartyManager_eventSetLobbyType_Parms*)Obj)->bIsSaved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_bIsSaved = { "bIsSaved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPartyManager_eventSetLobbyType_Parms), &Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_bIsSaved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_InLobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_InLobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::NewProp_bIsSaved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManager, nullptr, "SetLobbyType", nullptr, nullptr, sizeof(SBZPartyManager_eventSetLobbyType_Parms), Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManager_SetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManager_SetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPartyManager_NoRegister()
	{
		return USBZPartyManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZPartyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChatChannelJoinEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatChannelJoinEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrivateMessageSentStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrivateMessageSentStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrivateMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrivateMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPublicMessageSentStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPublicMessageSentStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPublicMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPublicMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPartyMessageSentStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyMessageSentStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPartyMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPartyInvitiationReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyInvitiationReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPlayerJoinEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PartyPlayerJoinEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPlayerLeaveEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PartyPlayerLeaveEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPlayerKickEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PartyPlayerKickEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyInfoUpdateEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PartyInfoUpdateEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyInvitesUpdateEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PartyInvitesUpdateEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvitesReceived_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitesReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvitesReceived;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvitesSent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitesSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvitesSent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPartyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPartyManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPartyManager_GetLobbyType, "GetLobbyType" }, // 2101572568
		{ &Z_Construct_UFunction_USBZPartyManager_GetPartyLeader, "GetPartyLeader" }, // 490966178
		{ &Z_Construct_UFunction_USBZPartyManager_GetPartyManager, "GetPartyManager" }, // 4059599031
		{ &Z_Construct_UFunction_USBZPartyManager_GetPartyPlayersNumber, "GetPartyPlayersNumber" }, // 4293735711
		{ &Z_Construct_UFunction_USBZPartyManager_IsMatchmakingRequestedByPartyLeader, "IsMatchmakingRequestedByPartyLeader" }, // 533423461
		{ &Z_Construct_UFunction_USBZPartyManager_SendJoinPublicChatChannel, "SendJoinPublicChatChannel" }, // 3350398162
		{ &Z_Construct_UFunction_USBZPartyManager_SendPartyMessage, "SendPartyMessage" }, // 2106638064
		{ &Z_Construct_UFunction_USBZPartyManager_SendPrivateMessage, "SendPrivateMessage" }, // 2081226679
		{ &Z_Construct_UFunction_USBZPartyManager_SendPublicMessage, "SendPublicMessage" }, // 1419500820
		{ &Z_Construct_UFunction_USBZPartyManager_SetLobbyType, "SetLobbyType" }, // 1473487976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPartyManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyMembers_Inner = { "PartyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPartyMember, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnChatChannelJoinEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnChatChannelJoinEvent = { "OnChatChannelJoinEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnChatChannelJoinEvent), Z_Construct_UDelegateFunction_Starbreeze_ChatChannelJoinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnChatChannelJoinEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnChatChannelJoinEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageSentStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageSentStatus = { "OnPrivateMessageSentStatus", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnPrivateMessageSentStatus), Z_Construct_UDelegateFunction_Starbreeze_PrivateMessageSendStatusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageSentStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageSentStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageReceived = { "OnPrivateMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnPrivateMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_PrivateMessageReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageSentStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageSentStatus = { "OnPublicMessageSentStatus", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnPublicMessageSentStatus), Z_Construct_UDelegateFunction_Starbreeze_PublicMessageSendStatusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageSentStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageSentStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageReceived = { "OnPublicMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnPublicMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_PublicMessageReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageSentStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageSentStatus = { "OnPartyMessageSentStatus", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnPartyMessageSentStatus), Z_Construct_UDelegateFunction_Starbreeze_PartyMessageSendStatusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageSentStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageSentStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageReceived = { "OnPartyMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnPartyMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_PartyMessageReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyInvitiationReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyInvitiationReceived = { "OnPartyInvitiationReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, OnPartyInvitiationReceived), Z_Construct_UDelegateFunction_Starbreeze_PartyInvitationReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyInvitiationReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyInvitiationReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerJoinEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerJoinEvent = { "PartyPlayerJoinEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyPlayerJoinEvent), Z_Construct_UDelegateFunction_Starbreeze_PartyPlayerJoinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerJoinEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerJoinEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerLeaveEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerLeaveEvent = { "PartyPlayerLeaveEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyPlayerLeaveEvent), Z_Construct_UDelegateFunction_Starbreeze_PartyPlayerLeaveDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerLeaveEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerLeaveEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerKickEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerKickEvent = { "PartyPlayerKickEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyPlayerKickEvent), Z_Construct_UDelegateFunction_Starbreeze_PartyPlayerKickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerKickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerKickEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInfoUpdateEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInfoUpdateEvent = { "PartyInfoUpdateEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyInfoUpdateEvent), Z_Construct_UDelegateFunction_Starbreeze_PartyInfoUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInfoUpdateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInfoUpdateEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInvitesUpdateEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInvitesUpdateEvent = { "PartyInvitesUpdateEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyInvitesUpdateEvent), Z_Construct_UDelegateFunction_Starbreeze_PartyInvitesUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInvitesUpdateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInvitesUpdateEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyId), METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, PartyCode), METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyCode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesReceived_Inner = { "InvitesReceived", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPartyInvitation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesReceived = { "InvitesReceived", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, InvitesReceived), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesReceived_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesSent_Inner = { "InvitesSent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPartyInvitation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesSent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyManager" },
		{ "ModuleRelativePath", "Public/SBZPartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesSent = { "InvitesSent", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPartyManager, InvitesSent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesSent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPartyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnChatChannelJoinEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageSentStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPrivateMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageSentStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPublicMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageSentStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_OnPartyInvitiationReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerJoinEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerLeaveEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyPlayerKickEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInfoUpdateEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyInvitesUpdateEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_PartyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesReceived_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesSent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPartyManager_Statics::NewProp_InvitesSent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPartyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPartyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPartyManager_Statics::ClassParams = {
		&USBZPartyManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPartyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPartyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPartyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPartyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPartyManager, 4009716611);
	template<> STARBREEZE_API UClass* StaticClass<USBZPartyManager>()
	{
		return USBZPartyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPartyManager(Z_Construct_UClass_USBZPartyManager, &USBZPartyManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPartyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPartyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
