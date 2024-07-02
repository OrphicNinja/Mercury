// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIChatBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIChatBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIChatBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIChatBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChatMessage();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_ChatDisabledSettingChangedEvent__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameUserSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZUIChatBaseWidget::execCreateTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CreateTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIChatBaseWidget::execGetUserDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIChatBaseWidget::execGetUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIChatBaseWidget::execOnNewMessageReceived)
	{
		P_GET_STRUCT_REF(FSBZChatMessage,Z_Param_Out_InChatMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewMessageReceived(Z_Param_Out_InChatMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIChatBaseWidget::execSendMessage)
	{
		P_GET_STRUCT_REF(FSBZChatMessage,Z_Param_Out_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMessage(Z_Param_Out_InMessage);
		P_NATIVE_END;
	}
	static FName NAME_USBZUIChatBaseWidget_OnMessageReceivedEvent = FName(TEXT("OnMessageReceivedEvent"));
	void USBZUIChatBaseWidget::OnMessageReceivedEvent(FSBZChatMessage const& ChatMessage)
	{
		SBZUIChatBaseWidget_eventOnMessageReceivedEvent_Parms Parms;
		Parms.ChatMessage=ChatMessage;
		ProcessEvent(FindFunctionChecked(NAME_USBZUIChatBaseWidget_OnMessageReceivedEvent),&Parms);
	}
	void USBZUIChatBaseWidget::StaticRegisterNativesUSBZUIChatBaseWidget()
	{
		UClass* Class = USBZUIChatBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTimestamp", &USBZUIChatBaseWidget::execCreateTimestamp },
			{ "GetUserDisplayName", &USBZUIChatBaseWidget::execGetUserDisplayName },
			{ "GetUserId", &USBZUIChatBaseWidget::execGetUserId },
			{ "OnNewMessageReceived", &USBZUIChatBaseWidget::execOnNewMessageReceived },
			{ "SendMessage", &USBZUIChatBaseWidget::execSendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics
	{
		struct SBZUIChatBaseWidget_eventCreateTimestamp_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIChatBaseWidget_eventCreateTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIChatBaseWidget, nullptr, "CreateTimestamp", nullptr, nullptr, sizeof(SBZUIChatBaseWidget_eventCreateTimestamp_Parms), Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics
	{
		struct SBZUIChatBaseWidget_eventGetUserDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIChatBaseWidget_eventGetUserDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIChatBaseWidget, nullptr, "GetUserDisplayName", nullptr, nullptr, sizeof(SBZUIChatBaseWidget_eventGetUserDisplayName_Parms), Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics
	{
		struct SBZUIChatBaseWidget_eventGetUserId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIChatBaseWidget_eventGetUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIChatBaseWidget, nullptr, "GetUserId", nullptr, nullptr, sizeof(SBZUIChatBaseWidget_eventGetUserId_Parms), Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::NewProp_ChatMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::NewProp_ChatMessage = { "ChatMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIChatBaseWidget_eventOnMessageReceivedEvent_Parms, ChatMessage), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::NewProp_ChatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::NewProp_ChatMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::NewProp_ChatMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIChatBaseWidget, nullptr, "OnMessageReceivedEvent", nullptr, nullptr, sizeof(SBZUIChatBaseWidget_eventOnMessageReceivedEvent_Parms), Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics
	{
		struct SBZUIChatBaseWidget_eventOnNewMessageReceived_Parms
		{
			FSBZChatMessage InChatMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChatMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::NewProp_InChatMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::NewProp_InChatMessage = { "InChatMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIChatBaseWidget_eventOnNewMessageReceived_Parms, InChatMessage), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::NewProp_InChatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::NewProp_InChatMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::NewProp_InChatMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIChatBaseWidget, nullptr, "OnNewMessageReceived", nullptr, nullptr, sizeof(SBZUIChatBaseWidget_eventOnNewMessageReceived_Parms), Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics
	{
		struct SBZUIChatBaseWidget_eventSendMessage_Parms
		{
			FSBZChatMessage InMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIChatBaseWidget_eventSendMessage_Parms, InMessage), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::NewProp_InMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIChatBaseWidget, nullptr, "SendMessage", nullptr, nullptr, sizeof(SBZUIChatBaseWidget_eventSendMessage_Parms), Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUIChatBaseWidget_NoRegister()
	{
		return USBZUIChatBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZUIChatBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChatDisableSettingChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatDisableSettingChangedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLobbyChat_MetaData[];
#endif
		static void NewProp_bEnableLobbyChat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLobbyChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChatDisabled_MetaData[];
#endif
		static void NewProp_bIsChatDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChatDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnWindows_MetaData[];
#endif
		static void NewProp_bIsOnWindows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnWindows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameUserSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameUserSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUIChatBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUIChatBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUIChatBaseWidget_CreateTimestamp, "CreateTimestamp" }, // 2559818335
		{ &Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserDisplayName, "GetUserDisplayName" }, // 1334552930
		{ &Z_Construct_UFunction_USBZUIChatBaseWidget_GetUserId, "GetUserId" }, // 2806196757
		{ &Z_Construct_UFunction_USBZUIChatBaseWidget_OnMessageReceivedEvent, "OnMessageReceivedEvent" }, // 762672499
		{ &Z_Construct_UFunction_USBZUIChatBaseWidget_OnNewMessageReceived, "OnNewMessageReceived" }, // 3016971607
		{ &Z_Construct_UFunction_USBZUIChatBaseWidget_SendMessage, "SendMessage" }, // 431825267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUIChatBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_OnChatDisableSettingChangedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_OnChatDisableSettingChangedEvent = { "OnChatDisableSettingChangedEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIChatBaseWidget, OnChatDisableSettingChangedEvent), Z_Construct_UDelegateFunction_Starbreeze_ChatDisabledSettingChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_OnChatDisableSettingChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_OnChatDisableSettingChangedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bEnableLobbyChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bEnableLobbyChat_SetBit(void* Obj)
	{
		((USBZUIChatBaseWidget*)Obj)->bEnableLobbyChat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bEnableLobbyChat = { "bEnableLobbyChat", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZUIChatBaseWidget), &Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bEnableLobbyChat_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bEnableLobbyChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bEnableLobbyChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsChatDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsChatDisabled_SetBit(void* Obj)
	{
		((USBZUIChatBaseWidget*)Obj)->bIsChatDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsChatDisabled = { "bIsChatDisabled", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZUIChatBaseWidget), &Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsChatDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsChatDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsChatDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsOnWindows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsOnWindows_SetBit(void* Obj)
	{
		((USBZUIChatBaseWidget*)Obj)->bIsOnWindows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsOnWindows = { "bIsOnWindows", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZUIChatBaseWidget), &Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsOnWindows_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsOnWindows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsOnWindows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserDisplayName = { "UserDisplayName", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIChatBaseWidget, UserDisplayName), METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIChatBaseWidget, UserId), METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_GameUserSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_GameUserSettings = { "GameUserSettings", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIChatBaseWidget, GameUserSettings), Z_Construct_UClass_USBZGameUserSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_GameUserSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_GameUserSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_Chat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIChatBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZUIChatBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_Chat = { "Chat", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIChatBaseWidget, Chat), Z_Construct_UClass_USBZChat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_Chat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_Chat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUIChatBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_OnChatDisableSettingChangedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bEnableLobbyChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsChatDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_bIsOnWindows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_GameUserSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIChatBaseWidget_Statics::NewProp_Chat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUIChatBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUIChatBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUIChatBaseWidget_Statics::ClassParams = {
		&USBZUIChatBaseWidget::StaticClass,
		"StarbreezeUI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZUIChatBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::PropPointers),
		0,
		0x00B010A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIChatBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUIChatBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUIChatBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUIChatBaseWidget, 4177843643);
	template<> STARBREEZE_API UClass* StaticClass<USBZUIChatBaseWidget>()
	{
		return USBZUIChatBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUIChatBaseWidget(Z_Construct_UClass_USBZUIChatBaseWidget, &USBZUIChatBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUIChatBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUIChatBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
