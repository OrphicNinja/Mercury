// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDChatWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDChatWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDChatWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDChatWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCallEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewChatEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerChatEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerPingEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSystemChatEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVotingChatEvent();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDelegateHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHUDChatWidget::execOnMessageReceived)
	{
		P_GET_STRUCT_REF(FSBZPlayerChatEvent,Z_Param_Out_ChatEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMessageReceived(Z_Param_Out_ChatEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHUDChatWidget::execOnPlayerDefeatStateChangedInternal)
	{
		P_GET_STRUCT_REF(FSBZPlayerDefeatStateChangedData,Z_Param_Out_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDefeatStateChangedInternal(Z_Param_Out_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHUDChatWidget::execOnTextCommited)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextCommited(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHUDChatWidget::execSetChatActive)
	{
		P_GET_UBOOL(Z_Param_bSetActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChatActive(Z_Param_bSetActive);
		P_NATIVE_END;
	}
	static FName NAME_USBZHUDChatWidget_CallReceived = FName(TEXT("CallReceived"));
	void USBZHUDChatWidget::CallReceived(FSBZPlayerCallEvent const& CallEventData)
	{
		SBZHUDChatWidget_eventCallReceived_Parms Parms;
		Parms.CallEventData=CallEventData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_CallReceived),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_CrewAIMessageReceived = FName(TEXT("CrewAIMessageReceived"));
	void USBZHUDChatWidget::CrewAIMessageReceived(FSBZAICrewChatEvent const& ChatEventData)
	{
		SBZHUDChatWidget_eventCrewAIMessageReceived_Parms Parms;
		Parms.ChatEventData=ChatEventData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_CrewAIMessageReceived),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_KeyItemCountChanged = FName(TEXT("KeyItemCountChanged"));
	void USBZHUDChatWidget::KeyItemCountChanged(FSBZKeyItemCountChangedEvent const& KeyItemCountChangedEventData)
	{
		SBZHUDChatWidget_eventKeyItemCountChanged_Parms Parms;
		Parms.KeyItemCountChangedEventData=KeyItemCountChangedEventData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_KeyItemCountChanged),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_OnAICrewDefeatStateChanged = FName(TEXT("OnAICrewDefeatStateChanged"));
	void USBZHUDChatWidget::OnAICrewDefeatStateChanged(FSBZAICrewDefeatStateChangedData const& InData)
	{
		SBZHUDChatWidget_eventOnAICrewDefeatStateChanged_Parms Parms;
		Parms.InData=InData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_OnAICrewDefeatStateChanged),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_OnChatDisabledChanged = FName(TEXT("OnChatDisabledChanged"));
	void USBZHUDChatWidget::OnChatDisabledChanged(bool bIsDisabled)
	{
		SBZHUDChatWidget_eventOnChatDisabledChanged_Parms Parms;
		Parms.bIsDisabled=bIsDisabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_OnChatDisabledChanged),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_OnChatFocusChanged = FName(TEXT("OnChatFocusChanged"));
	void USBZHUDChatWidget::OnChatFocusChanged(bool bHasFocus)
	{
		SBZHUDChatWidget_eventOnChatFocusChanged_Parms Parms;
		Parms.bHasFocus=bHasFocus ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_OnChatFocusChanged),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_OnPlayerDefeatStateChanged = FName(TEXT("OnPlayerDefeatStateChanged"));
	void USBZHUDChatWidget::OnPlayerDefeatStateChanged(FSBZPlayerDefeatStateChangedData const& InData)
	{
		SBZHUDChatWidget_eventOnPlayerDefeatStateChanged_Parms Parms;
		Parms.InData=InData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_OnPlayerDefeatStateChanged),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_OnPlayerJoinedTheHeist = FName(TEXT("OnPlayerJoinedTheHeist"));
	void USBZHUDChatWidget::OnPlayerJoinedTheHeist(FText const& JoinedPlayerName)
	{
		SBZHUDChatWidget_eventOnPlayerJoinedTheHeist_Parms Parms;
		Parms.JoinedPlayerName=JoinedPlayerName;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_OnPlayerJoinedTheHeist),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_OnPlayerStateRemoved = FName(TEXT("OnPlayerStateRemoved"));
	void USBZHUDChatWidget::OnPlayerStateRemoved(FSBZPlayerStateRemovedEvent const& PlayerStateRemovedData)
	{
		SBZHUDChatWidget_eventOnPlayerStateRemoved_Parms Parms;
		Parms.PlayerStateRemovedData=PlayerStateRemovedData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_OnPlayerStateRemoved),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_PingReceived = FName(TEXT("PingReceived"));
	void USBZHUDChatWidget::PingReceived(FSBZPlayerPingEvent const& PingEventData)
	{
		SBZHUDChatWidget_eventPingReceived_Parms Parms;
		Parms.PingEventData=PingEventData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_PingReceived),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_PlayerMessageReceived = FName(TEXT("PlayerMessageReceived"));
	void USBZHUDChatWidget::PlayerMessageReceived(FSBZPlayerChatEvent const& ChatEventData)
	{
		SBZHUDChatWidget_eventPlayerMessageReceived_Parms Parms;
		Parms.ChatEventData=ChatEventData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_PlayerMessageReceived),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_SystemMessageReceived = FName(TEXT("SystemMessageReceived"));
	void USBZHUDChatWidget::SystemMessageReceived(FSBZSystemChatEvent const& ChatEventData)
	{
		SBZHUDChatWidget_eventSystemMessageReceived_Parms Parms;
		Parms.ChatEventData=ChatEventData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_SystemMessageReceived),&Parms);
	}
	static FName NAME_USBZHUDChatWidget_VotingMessageReceived = FName(TEXT("VotingMessageReceived"));
	void USBZHUDChatWidget::VotingMessageReceived(FSBZVotingChatEvent const& ChatEventData)
	{
		SBZHUDChatWidget_eventVotingMessageReceived_Parms Parms;
		Parms.ChatEventData=ChatEventData;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDChatWidget_VotingMessageReceived),&Parms);
	}
	void USBZHUDChatWidget::StaticRegisterNativesUSBZHUDChatWidget()
	{
		UClass* Class = USBZHUDChatWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMessageReceived", &USBZHUDChatWidget::execOnMessageReceived },
			{ "OnPlayerDefeatStateChangedInternal", &USBZHUDChatWidget::execOnPlayerDefeatStateChangedInternal },
			{ "OnTextCommited", &USBZHUDChatWidget::execOnTextCommited },
			{ "SetChatActive", &USBZHUDChatWidget::execSetChatActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::NewProp_CallEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::NewProp_CallEventData = { "CallEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventCallReceived_Parms, CallEventData), Z_Construct_UScriptStruct_FSBZPlayerCallEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::NewProp_CallEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::NewProp_CallEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::NewProp_CallEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "CallReceived", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventCallReceived_Parms), Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_CallReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_CallReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventCrewAIMessageReceived_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZAICrewChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "CrewAIMessageReceived", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventCrewAIMessageReceived_Parms), Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemCountChangedEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyItemCountChangedEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData = { "KeyItemCountChangedEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventKeyItemCountChanged_Parms, KeyItemCountChangedEventData), Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "KeyItemCountChanged", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventKeyItemCountChanged_Parms), Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnAICrewDefeatStateChanged_Parms, InData), Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::NewProp_InData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnAICrewDefeatStateChanged", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnAICrewDefeatStateChanged_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics
	{
		static void NewProp_bIsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::NewProp_bIsDisabled_SetBit(void* Obj)
	{
		((SBZHUDChatWidget_eventOnChatDisabledChanged_Parms*)Obj)->bIsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::NewProp_bIsDisabled = { "bIsDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHUDChatWidget_eventOnChatDisabledChanged_Parms), &Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::NewProp_bIsDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::NewProp_bIsDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnChatDisabledChanged", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnChatDisabledChanged_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics
	{
		static void NewProp_bHasFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::NewProp_bHasFocus_SetBit(void* Obj)
	{
		((SBZHUDChatWidget_eventOnChatFocusChanged_Parms*)Obj)->bHasFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::NewProp_bHasFocus = { "bHasFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHUDChatWidget_eventOnChatFocusChanged_Parms), &Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::NewProp_bHasFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::NewProp_bHasFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnChatFocusChanged", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnChatFocusChanged_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics
	{
		struct SBZHUDChatWidget_eventOnMessageReceived_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnMessageReceived_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZPlayerChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnMessageReceived", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnMessageReceived_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnPlayerDefeatStateChanged_Parms, InData), Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::NewProp_InData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnPlayerDefeatStateChanged", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnPlayerDefeatStateChanged_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics
	{
		struct SBZHUDChatWidget_eventOnPlayerDefeatStateChangedInternal_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnPlayerDefeatStateChangedInternal_Parms, InData), Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::NewProp_InData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnPlayerDefeatStateChangedInternal", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnPlayerDefeatStateChangedInternal_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinedPlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_JoinedPlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::NewProp_JoinedPlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::NewProp_JoinedPlayerName = { "JoinedPlayerName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnPlayerJoinedTheHeist_Parms, JoinedPlayerName), METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::NewProp_JoinedPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::NewProp_JoinedPlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::NewProp_JoinedPlayerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnPlayerJoinedTheHeist", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnPlayerJoinedTheHeist_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateRemovedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStateRemovedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::NewProp_PlayerStateRemovedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::NewProp_PlayerStateRemovedData = { "PlayerStateRemovedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnPlayerStateRemoved_Parms, PlayerStateRemovedData), Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::NewProp_PlayerStateRemovedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::NewProp_PlayerStateRemovedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::NewProp_PlayerStateRemovedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnPlayerStateRemoved", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnPlayerStateRemoved_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics
	{
		struct SBZHUDChatWidget_eventOnTextCommited_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnTextCommited_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventOnTextCommited_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "OnTextCommited", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventOnTextCommited_Parms), Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PingEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::NewProp_PingEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::NewProp_PingEventData = { "PingEventData", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventPingReceived_Parms, PingEventData), Z_Construct_UScriptStruct_FSBZPlayerPingEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::NewProp_PingEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::NewProp_PingEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::NewProp_PingEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "PingReceived", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventPingReceived_Parms), Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_PingReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_PingReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventPlayerMessageReceived_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZPlayerChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "PlayerMessageReceived", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventPlayerMessageReceived_Parms), Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics
	{
		struct SBZHUDChatWidget_eventSetChatActive_Parms
		{
			bool bSetActive;
		};
		static void NewProp_bSetActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::NewProp_bSetActive_SetBit(void* Obj)
	{
		((SBZHUDChatWidget_eventSetChatActive_Parms*)Obj)->bSetActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::NewProp_bSetActive = { "bSetActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHUDChatWidget_eventSetChatActive_Parms), &Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::NewProp_bSetActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::NewProp_bSetActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "SetChatActive", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventSetChatActive_Parms), Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventSystemMessageReceived_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZSystemChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "SystemMessageReceived", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventSystemMessageReceived_Parms), Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::NewProp_ChatEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::NewProp_ChatEventData = { "ChatEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDChatWidget_eventVotingMessageReceived_Parms, ChatEventData), Z_Construct_UScriptStruct_FSBZVotingChatEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::NewProp_ChatEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::NewProp_ChatEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::NewProp_ChatEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDChatWidget, nullptr, "VotingMessageReceived", nullptr, nullptr, sizeof(SBZHUDChatWidget_eventVotingMessageReceived_Parms), Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHUDChatWidget_NoRegister()
	{
		return USBZHUDChatWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZHUDChatWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatStackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChatStackValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenChatActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OpenChatActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_InputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_InputText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChatInputActive_MetaData[];
#endif
		static void NewProp_bIsChatInputActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChatInputActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChatDisabled_MetaData[];
#endif
		static void NewProp_bIsChatDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChatDisabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueuedPlayerDefeatStateChangedDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedPlayerDefeatStateChangedDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueuedPlayerDefeatStateChangedDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerNameChangedHandleMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerNameChangedHandleMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNameChangedHandleMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayerNameChangedHandleMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHUDChatWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHUDWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHUDChatWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHUDChatWidget_CallReceived, "CallReceived" }, // 2963707452
		{ &Z_Construct_UFunction_USBZHUDChatWidget_CrewAIMessageReceived, "CrewAIMessageReceived" }, // 4052608834
		{ &Z_Construct_UFunction_USBZHUDChatWidget_KeyItemCountChanged, "KeyItemCountChanged" }, // 1513238836
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnAICrewDefeatStateChanged, "OnAICrewDefeatStateChanged" }, // 3378638787
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnChatDisabledChanged, "OnChatDisabledChanged" }, // 3284671868
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnChatFocusChanged, "OnChatFocusChanged" }, // 2804578783
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnMessageReceived, "OnMessageReceived" }, // 2663911843
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChanged, "OnPlayerDefeatStateChanged" }, // 2810449272
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerDefeatStateChangedInternal, "OnPlayerDefeatStateChangedInternal" }, // 1455278189
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerJoinedTheHeist, "OnPlayerJoinedTheHeist" }, // 3657030656
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnPlayerStateRemoved, "OnPlayerStateRemoved" }, // 1330610042
		{ &Z_Construct_UFunction_USBZHUDChatWidget_OnTextCommited, "OnTextCommited" }, // 2465230686
		{ &Z_Construct_UFunction_USBZHUDChatWidget_PingReceived, "PingReceived" }, // 3372194084
		{ &Z_Construct_UFunction_USBZHUDChatWidget_PlayerMessageReceived, "PlayerMessageReceived" }, // 1802946249
		{ &Z_Construct_UFunction_USBZHUDChatWidget_SetChatActive, "SetChatActive" }, // 3270448953
		{ &Z_Construct_UFunction_USBZHUDChatWidget_SystemMessageReceived, "SystemMessageReceived" }, // 272794117
		{ &Z_Construct_UFunction_USBZHUDChatWidget_VotingMessageReceived, "VotingMessageReceived" }, // 2325755383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHUDChatWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_ChatStackValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDChatWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_ChatStackValue = { "ChatStackValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDChatWidget, ChatStackValue), METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_ChatStackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_ChatStackValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_OpenChatActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDChatWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_OpenChatActionName = { "OpenChatActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDChatWidget, OpenChatActionName), METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_OpenChatActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_OpenChatActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_Text_InputText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDChatWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_Text_InputText = { "Text_InputText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDChatWidget, Text_InputText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_Text_InputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_Text_InputText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatInputActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDChatWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatInputActive_SetBit(void* Obj)
	{
		((USBZHUDChatWidget*)Obj)->bIsChatInputActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatInputActive = { "bIsChatInputActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHUDChatWidget), &Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatInputActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatInputActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatInputActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDChatWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatDisabled_SetBit(void* Obj)
	{
		((USBZHUDChatWidget*)Obj)->bIsChatDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatDisabled = { "bIsChatDisabled", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHUDChatWidget), &Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatDisabled_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_QueuedPlayerDefeatStateChangedDataArray_Inner = { "QueuedPlayerDefeatStateChangedDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_QueuedPlayerDefeatStateChangedDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDChatWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_QueuedPlayerDefeatStateChangedDataArray = { "QueuedPlayerDefeatStateChangedDataArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDChatWidget, QueuedPlayerDefeatStateChangedDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_QueuedPlayerDefeatStateChangedDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_QueuedPlayerDefeatStateChangedDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap_ValueProp = { "PlayerNameChangedHandleMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZDelegateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap_Key_KeyProp = { "PlayerNameChangedHandleMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDChatWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDChatWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap = { "PlayerNameChangedHandleMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDChatWidget, PlayerNameChangedHandleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHUDChatWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_ChatStackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_OpenChatActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_Text_InputText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatInputActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_bIsChatDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_QueuedPlayerDefeatStateChangedDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_QueuedPlayerDefeatStateChangedDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDChatWidget_Statics::NewProp_PlayerNameChangedHandleMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHUDChatWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHUDChatWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHUDChatWidget_Statics::ClassParams = {
		&USBZHUDChatWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHUDChatWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHUDChatWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDChatWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHUDChatWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHUDChatWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHUDChatWidget, 845579925);
	template<> STARBREEZE_API UClass* StaticClass<USBZHUDChatWidget>()
	{
		return USBZHUDChatWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHUDChatWidget(Z_Construct_UClass_USBZHUDChatWidget, &USBZHUDChatWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHUDChatWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHUDChatWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
