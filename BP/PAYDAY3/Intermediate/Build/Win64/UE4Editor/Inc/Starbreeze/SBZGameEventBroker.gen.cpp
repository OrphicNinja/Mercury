// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameEventBroker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameEventBroker() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameEventBroker_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameEventBroker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewChatEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerChatEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSystemChatEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCallEvent();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPrivilegeQueried__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnGameStateReceived__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_CharacterTakenDamage__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_CharacterRevived__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPlayerStartTravel__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPlayerStateAdded__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPlayerStateRemoved__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerInEscapeChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerChatMessageEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAICrewChatMessageEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSystemChatMessageEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZVotingChatMessageEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerCallMessageEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerPinged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnKeyItemCountChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSharedKeyItemTagChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerBeginPlayState__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZGameEventSignature__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerDefeatStateChangedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAICrewDefeatStateChangedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZGameDifficultyChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPreMatchAsyncLoadingProgress__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnMatchmakingStartedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPreMatchAsyncLoadingDone__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPreMatchAsyncLoadingCancel__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnFBIActivation__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPowerUpPickedUp__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameEventBroker::execPostOnAICrewDefeatStateChanged)
	{
		P_GET_STRUCT_REF(FSBZAICrewDefeatStateChangedData,Z_Param_Out_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostOnAICrewDefeatStateChanged(Z_Param_Out_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameEventBroker::execPostOnCrewAIChatMessageReceived)
	{
		P_GET_STRUCT_REF(FSBZAICrewChatEvent,Z_Param_Out_ChatEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostOnCrewAIChatMessageReceived(Z_Param_Out_ChatEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameEventBroker::execPostOnPlayerChatMessageRecieved)
	{
		P_GET_STRUCT_REF(FSBZPlayerChatEvent,Z_Param_Out_ChatEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostOnPlayerChatMessageRecieved(Z_Param_Out_ChatEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameEventBroker::execPostOnPlayerDefeatStateChanged)
	{
		P_GET_STRUCT_REF(FSBZPlayerDefeatStateChangedData,Z_Param_Out_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostOnPlayerDefeatStateChanged(Z_Param_Out_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameEventBroker::execPostOnSystemChatMessageReceived)
	{
		P_GET_STRUCT_REF(FSBZSystemChatEvent,Z_Param_Out_ChatEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostOnSystemChatMessageReceived(Z_Param_Out_ChatEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameEventBroker::execSendCallMessage)
	{
		P_GET_STRUCT_REF(FSBZPlayerCallEvent,Z_Param_Out_CallEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCallMessage(Z_Param_Out_CallEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameEventBroker::execSendChatMessage)
	{
		P_GET_STRUCT_REF(FSBZPlayerChatEvent,Z_Param_Out_ChatEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendChatMessage(Z_Param_Out_ChatEventData);
		P_NATIVE_END;
	}
	void USBZGameEventBroker::StaticRegisterNativesUSBZGameEventBroker()
	{
		UClass* Class = USBZGameEventBroker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostOnAICrewDefeatStateChanged", &USBZGameEventBroker::execPostOnAICrewDefeatStateChanged },
			{ "PostOnCrewAIChatMessageReceived", &USBZGameEventBroker::execPostOnCrewAIChatMessageReceived },
			{ "PostOnPlayerChatMessageRecieved", &USBZGameEventBroker::execPostOnPlayerChatMessageRecieved },
			{ "PostOnPlayerDefeatStateChanged", &USBZGameEventBroker::execPostOnPlayerDefeatStateChanged },
			{ "PostOnSystemChatMessageReceived", &USBZGameEventBroker::execPostOnSystemChatMessageReceived },
			{ "SendCallMessage", &USBZGameEventBroker::execSendCallMessage },
			{ "SendChatMessage", &USBZGameEventBroker::execSendChatMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics
	{
		struct SBZGameEventBroker_eventPostOnAICrewDefeatStateChanged_Parms
		{
			FSBZAICrewDefeatStateChangedData InData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEventBroker_eventPostOnAICrewDefeatStateChanged_Parms, InData), Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::NewProp_InData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEventBroker, nullptr, "PostOnAICrewDefeatStateChanged", nullptr, nullptr, sizeof(SBZGameEventBroker_eventPostOnAICrewDefeatStateChanged_Parms), Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics
	{
		struct SBZGameEventBroker_eventPostOnCrewAIChatMessageReceived_Parms
		{
			FSBZAICrewChatEvent ChatEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEventBroker_eventPostOnCrewAIChatMessageReceived_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZAICrewChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEventBroker, nullptr, "PostOnCrewAIChatMessageReceived", nullptr, nullptr, sizeof(SBZGameEventBroker_eventPostOnCrewAIChatMessageReceived_Parms), Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics
	{
		struct SBZGameEventBroker_eventPostOnPlayerChatMessageRecieved_Parms
		{
			FSBZPlayerChatEvent ChatEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEventBroker_eventPostOnPlayerChatMessageRecieved_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZPlayerChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEventBroker, nullptr, "PostOnPlayerChatMessageRecieved", nullptr, nullptr, sizeof(SBZGameEventBroker_eventPostOnPlayerChatMessageRecieved_Parms), Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics
	{
		struct SBZGameEventBroker_eventPostOnPlayerDefeatStateChanged_Parms
		{
			FSBZPlayerDefeatStateChangedData InData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEventBroker_eventPostOnPlayerDefeatStateChanged_Parms, InData), Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::NewProp_InData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEventBroker, nullptr, "PostOnPlayerDefeatStateChanged", nullptr, nullptr, sizeof(SBZGameEventBroker_eventPostOnPlayerDefeatStateChanged_Parms), Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics
	{
		struct SBZGameEventBroker_eventPostOnSystemChatMessageReceived_Parms
		{
			FSBZSystemChatEvent ChatEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEventBroker_eventPostOnSystemChatMessageReceived_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZSystemChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEventBroker, nullptr, "PostOnSystemChatMessageReceived", nullptr, nullptr, sizeof(SBZGameEventBroker_eventPostOnSystemChatMessageReceived_Parms), Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics
	{
		struct SBZGameEventBroker_eventSendCallMessage_Parms
		{
			FSBZPlayerCallEvent CallEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CallEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::NewProp_CallEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::NewProp_CallEventData = { "CallEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEventBroker_eventSendCallMessage_Parms, CallEventData), Z_Construct_UScriptStruct_FSBZPlayerCallEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::NewProp_CallEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::NewProp_CallEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::NewProp_CallEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEventBroker, nullptr, "SendCallMessage", nullptr, nullptr, sizeof(SBZGameEventBroker_eventSendCallMessage_Parms), Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics
	{
		struct SBZGameEventBroker_eventSendChatMessage_Parms
		{
			FSBZPlayerChatEvent ChatEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEventBroker_eventSendChatMessage_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZPlayerChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEventBroker, nullptr, "SendChatMessage", nullptr, nullptr, sizeof(SBZGameEventBroker_eventSendChatMessage_Parms), Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameEventBroker_NoRegister()
	{
		return USBZGameEventBroker::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameEventBroker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrivilegeQueried_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrivilegeQueried;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameStateReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStateReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTakenDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakenDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRevive_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRevive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStartTravel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStartTravel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerInEscapeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerInEscapeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerChatMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerChatMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCrewAIChatMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCrewAIChatMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSystemChatMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSystemChatMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVotingChatMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVotingChatMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerPingedReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerPingedReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyItemCountChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyItemCountChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSharedKeyItemTagChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSharedKeyItemTagChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerBeginPlayState_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerBeginPlayState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHeistGoneLoud_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeistGoneLoud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChatMessageSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatMessageSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallMessageSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallMessageSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDefeatStateChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDefeatStateChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAICrewDefeatStateChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAICrewDefeatStateChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWaitActionPhaseEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitActionPhaseEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActionPhaseEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPhaseEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameStartPhaseEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStartPhaseEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWaitMainMenuPhaseEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitMainMenuPhaseEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotLoggedInEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotLoggedInEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameDifficultyChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameDifficultyChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreMatchAsyncLoadingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreMatchAsyncLoadingProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchmakingStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchmakingStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreMatchAsyncLoadingDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreMatchAsyncLoadingDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreMatchAsyncLoadingCancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreMatchAsyncLoadingCancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFBIActivation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFBIActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPowerUpPickedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPowerUpPickedUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameEventBroker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameEventBroker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameEventBroker_PostOnAICrewDefeatStateChanged, "PostOnAICrewDefeatStateChanged" }, // 3338824868
		{ &Z_Construct_UFunction_USBZGameEventBroker_PostOnCrewAIChatMessageReceived, "PostOnCrewAIChatMessageReceived" }, // 3247327966
		{ &Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerChatMessageRecieved, "PostOnPlayerChatMessageRecieved" }, // 887660643
		{ &Z_Construct_UFunction_USBZGameEventBroker_PostOnPlayerDefeatStateChanged, "PostOnPlayerDefeatStateChanged" }, // 2491763197
		{ &Z_Construct_UFunction_USBZGameEventBroker_PostOnSystemChatMessageReceived, "PostOnSystemChatMessageReceived" }, // 1531439324
		{ &Z_Construct_UFunction_USBZGameEventBroker_SendCallMessage, "SendCallMessage" }, // 3208927461
		{ &Z_Construct_UFunction_USBZGameEventBroker_SendChatMessage, "SendChatMessage" }, // 3800982540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameEventBroker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPrivilegeQueried_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPrivilegeQueried = { "OnPrivilegeQueried", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPrivilegeQueried), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPrivilegeQueried__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPrivilegeQueried_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPrivilegeQueried_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStateReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStateReceived = { "OnGameStateReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnGameStateReceived), Z_Construct_UDelegateFunction_Starbreeze_OnGameStateReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStateReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStateReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnTakenDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnTakenDamage = { "OnTakenDamage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnTakenDamage), Z_Construct_UDelegateFunction_Starbreeze_CharacterTakenDamage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnTakenDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnTakenDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnRevive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnRevive = { "OnRevive", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnRevive), Z_Construct_UDelegateFunction_Starbreeze_CharacterRevived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnRevive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnRevive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStartTravel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStartTravel = { "OnPlayerStartTravel", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerStartTravel), Z_Construct_UDelegateFunction_Starbreeze_OnPlayerStartTravel__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStartTravel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStartTravel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateAdded = { "OnPlayerStateAdded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerStateAdded), Z_Construct_UDelegateFunction_Starbreeze_OnPlayerStateAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateRemoved = { "OnPlayerStateRemoved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerStateRemoved), Z_Construct_UDelegateFunction_Starbreeze_OnPlayerStateRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerInEscapeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerInEscapeChanged = { "OnPlayerInEscapeChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerInEscapeChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerInEscapeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerInEscapeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerInEscapeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerChatMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerChatMessageReceived = { "OnPlayerChatMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerChatMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerChatMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerChatMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerChatMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCrewAIChatMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCrewAIChatMessageReceived = { "OnCrewAIChatMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnCrewAIChatMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZAICrewChatMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCrewAIChatMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCrewAIChatMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSystemChatMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSystemChatMessageReceived = { "OnSystemChatMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnSystemChatMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZSystemChatMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSystemChatMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSystemChatMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnVotingChatMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnVotingChatMessageReceived = { "OnVotingChatMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnVotingChatMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZVotingChatMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnVotingChatMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnVotingChatMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageReceived = { "OnCallMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnCallMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerCallMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerPingedReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerPingedReceived = { "OnPlayerPingedReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerPingedReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerPinged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerPingedReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerPingedReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnKeyItemCountChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnKeyItemCountChanged = { "OnKeyItemCountChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnKeyItemCountChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnKeyItemCountChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnKeyItemCountChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnKeyItemCountChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSharedKeyItemTagChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSharedKeyItemTagChanged = { "OnSharedKeyItemTagChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnSharedKeyItemTagChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSharedKeyItemTagChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSharedKeyItemTagChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSharedKeyItemTagChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerBeginPlayState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerBeginPlayState = { "OnPlayerBeginPlayState", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerBeginPlayState), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerBeginPlayState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerBeginPlayState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerBeginPlayState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnHeistGoneLoud_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnHeistGoneLoud = { "OnHeistGoneLoud", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnHeistGoneLoud), Z_Construct_UDelegateFunction_Starbreeze_SBZGameEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnHeistGoneLoud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnHeistGoneLoud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnChatMessageSent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnChatMessageSent = { "OnChatMessageSent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnChatMessageSent), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerChatMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnChatMessageSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnChatMessageSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageSent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageSent = { "OnCallMessageSent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnCallMessageSent), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerCallMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerDefeatStateChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerDefeatStateChangedDelegate = { "OnPlayerDefeatStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPlayerDefeatStateChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerDefeatStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerDefeatStateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerDefeatStateChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnAICrewDefeatStateChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnAICrewDefeatStateChangedDelegate = { "OnAICrewDefeatStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnAICrewDefeatStateChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZAICrewDefeatStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnAICrewDefeatStateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnAICrewDefeatStateChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitActionPhaseEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitActionPhaseEntered = { "OnWaitActionPhaseEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnWaitActionPhaseEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZGameEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitActionPhaseEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitActionPhaseEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnActionPhaseEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnActionPhaseEntered = { "OnActionPhaseEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnActionPhaseEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZGameEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnActionPhaseEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnActionPhaseEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStartPhaseEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStartPhaseEntered = { "OnGameStartPhaseEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnGameStartPhaseEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZGameEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStartPhaseEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStartPhaseEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitMainMenuPhaseEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitMainMenuPhaseEntered = { "OnWaitMainMenuPhaseEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnWaitMainMenuPhaseEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZGameEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitMainMenuPhaseEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitMainMenuPhaseEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnNotLoggedInEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnNotLoggedInEntered = { "OnNotLoggedInEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnNotLoggedInEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZGameEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnNotLoggedInEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnNotLoggedInEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameDifficultyChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameDifficultyChanged = { "OnGameDifficultyChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnGameDifficultyChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZGameDifficultyChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameDifficultyChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameDifficultyChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingProgress = { "OnPreMatchAsyncLoadingProgress", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPreMatchAsyncLoadingProgress), Z_Construct_UDelegateFunction_Starbreeze_SBZPreMatchAsyncLoadingProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnMatchmakingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnMatchmakingStarted = { "OnMatchmakingStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnMatchmakingStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZOnMatchmakingStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnMatchmakingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnMatchmakingStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingDone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingDone = { "OnPreMatchAsyncLoadingDone", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPreMatchAsyncLoadingDone), Z_Construct_UDelegateFunction_Starbreeze_SBZPreMatchAsyncLoadingDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingCancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingCancel = { "OnPreMatchAsyncLoadingCancel", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPreMatchAsyncLoadingCancel), Z_Construct_UDelegateFunction_Starbreeze_SBZPreMatchAsyncLoadingCancel__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingCancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnFBIActivation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnFBIActivation = { "OnFBIActivation", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnFBIActivation), Z_Construct_UDelegateFunction_Starbreeze_SBZOnFBIActivation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnFBIActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnFBIActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPowerUpPickedUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameEventBroker" },
		{ "ModuleRelativePath", "Public/SBZGameEventBroker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPowerUpPickedUp = { "OnPowerUpPickedUp", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameEventBroker, OnPowerUpPickedUp), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPowerUpPickedUp__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPowerUpPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPowerUpPickedUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameEventBroker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPrivilegeQueried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStateReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnTakenDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnRevive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStartTravel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerStateRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerInEscapeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerChatMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCrewAIChatMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSystemChatMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnVotingChatMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerPingedReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnKeyItemCountChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnSharedKeyItemTagChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerBeginPlayState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnHeistGoneLoud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnChatMessageSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnCallMessageSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPlayerDefeatStateChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnAICrewDefeatStateChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitActionPhaseEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnActionPhaseEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameStartPhaseEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnWaitMainMenuPhaseEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnNotLoggedInEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnGameDifficultyChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnMatchmakingStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPreMatchAsyncLoadingCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnFBIActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameEventBroker_Statics::NewProp_OnPowerUpPickedUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameEventBroker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameEventBroker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameEventBroker_Statics::ClassParams = {
		&USBZGameEventBroker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameEventBroker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameEventBroker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEventBroker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameEventBroker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameEventBroker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameEventBroker, 3281491191);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameEventBroker>()
	{
		return USBZGameEventBroker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameEventBroker(Z_Construct_UClass_USBZGameEventBroker, &USBZGameEventBroker::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameEventBroker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameEventBroker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
